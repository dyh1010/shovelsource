# Shovel · 硬件开发资料库

集中管理电机、驱动、控制板、显示与视觉模块的厂家资料、参考源码和开发工具。按六类硬件独立维护分支，`main` 提供统一导航与完整性清单。

> 这是开发参考资料归档，不是已完成联调的整机固件。硬件配置来自用户，厂家资料可能覆盖多个版本；未开展编译、烧录、电气或功能验证。

## 硬件分支

| 模块 | 分支 | 目标硬件 / 配置 |
| --- | --- | --- |
| [MC520 电机](https://github.com/dyh1010/shovelsource/tree/codex/mc520) | `codex/mc520` | 13 线霍尔编码器，减速比 30（用户指定的目标配置） |
| [TB6612 双路电机驱动模块（稳压）](https://github.com/dyh1010/shovelsource/tree/codex/tb6612) | `codex/tb6612` | 带稳压的双路电机驱动模块（用户指定） |
| [RT1064 最小系统板](https://github.com/dyh1010/shovelsource/tree/codex/rt1064-coreboard) | `codex/rt1064-coreboard` | RT1064 核心板 / 最小系统板 |
| [RT1064 主板](https://github.com/dyh1010/shovelsource/tree/codex/rt1064-motherboard) | `codex/rt1064-motherboard` | RT1064 扩展主板；现有资料标注 V3.0 |
| [0.96 寸 7 管脚显示屏](https://github.com/dyh1010/shovelsource/tree/codex/oled-096-7pin) | `codex/oled-096-7pin` | 0.96 寸、7 管脚；原始文件夹标注白色、焊好针 |
| [OpenART 视觉图传](https://github.com/dyh1010/shovelsource/tree/codex/openart-vision) | `codex/openart-vision` | OpenART mini 视觉与图传方向的开发资料 |

分支是并列的硬件资料入口。每个分支的 `sources/` 保留原始目录名称，README 提供阅读顺序；开发时基于对应硬件分支另建功能分支，资料分支不互相整包合并。

## 获取资料

~~~bash
git clone --single-branch --branch codex/mc520 https://github.com/dyh1010/shovelsource.git
cd shovelsource
~~~

将分支名替换为上表对应项。私有仓库需先通过 GitHub 账号授权。

- **直接浏览源码与文档**：打开对应分支的 `sources/`。
- **完整原始资料（含安装包、视频、压缩例程、构建产物）**：前往 [原始资料 Release](https://github.com/dyh1010/shovelsource/releases/tag/source-snapshot-2026-09-28)。分包 ZIP 均可独立解压，解压到同一目录即可合并目录树。
- **RT1064 完整模块资料**：同时下载对应 `rt1064-coreboard` 或 `rt1064-motherboard` 包，以及 `rt1064-common` 包；下载全部分包可还原全部原始资料。
- **查找与核验**：[原始文件清单](docs/source-manifest.csv) 提供路径、大小、SHA-256、归档包及 Git 分支归属；[归档校验值](docs/SHA256SUMS.txt) 用于校验下载包。

Git 分支不收录安装程序、视频、压缩包、大于 10 MiB 的文件及被忽略的 IDE / 构建文件；这些文件全部保存在完整 Release 归档中。没有改写原厂源码，也没有解开压缩例程后重新声称为独立工程。

## 开发起点

1. 根据实物型号选择硬件分支，先看手册、原理图与对应版本说明。
2. RT1064 原厂 README 推荐 IAR 9.40.1 或 MDK 5.38a 及以上，并要求外置 SDRAM；具体适配尚未实测。
3. 选择对应 MCU / IDE 的原始工程；OpenART 示例需与固件版本匹配。
4. 在独立功能分支记录接线、工具链、参数、测试条件和实测结果，详见 [维护约定](docs/CONTRIBUTING.md)。

## 来源与验证边界

- [第三方来源与许可](docs/THIRD_PARTY_NOTICES.md)
- [归档与验证说明](docs/ARCHIVE.md)
- 本次归档日期：2026-09-28；原始文件 7910 个，共 2900752516 字节。
- 未将其他 MAV 机构或 CAD 工作的结论作为本资料库的验证结果。