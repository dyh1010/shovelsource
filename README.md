# Shovel · 硬件开发资料库

集中管理电机、驱动、控制板、显示与视觉模块的厂家资料、参考源码和开发工具。按六类硬件独立维护分支，`main` 提供统一导航与完整清单。

## 硬件分支

| 模块 | 分支 | 目标硬件 / 配置 |
| --- | --- | --- |
| [MC520 电机](https://github.com/dyh1010/shovelsource/tree/dyh/mc520) | `dyh/mc520` | 13 线霍尔编码器，减速比 30 |
| [TB6612 双路电机驱动模块（稳压）](https://github.com/dyh1010/shovelsource/tree/dyh/tb6612) | `dyh/tb6612` | 带稳压的双路电机驱动模块 |
| [RT1064 最小系统板](https://github.com/dyh1010/shovelsource/tree/dyh/rt1064-coreboard) | `dyh/rt1064-coreboard` | RT1064 核心板 / 最小系统板 |
| [RT1064 主板](https://github.com/dyh1010/shovelsource/tree/dyh/rt1064-motherboard) | `dyh/rt1064-motherboard` | RT1064 扩展主板 V3.0 |
| [0.96 寸 7 管脚显示屏](https://github.com/dyh1010/shovelsource/tree/dyh/oled-096-7pin) | `dyh/oled-096-7pin` | 0.96 寸、7 管脚 |
| [OpenART 视觉图传](https://github.com/dyh1010/shovelsource/tree/dyh/openart-vision) | `dyh/openart-vision` | OpenART mini 视觉与图传 |

[完整资料下载](https://github.com/dyh1010/shovelsource/releases/tag/source-snapshot-2026-09-28) · [文件索引](https://github.com/dyh1010/shovelsource/releases/download/source-snapshot-2026-09-28/source-manifest.csv) · [SHA-256 校验清单](https://github.com/dyh1010/shovelsource/releases/download/source-snapshot-2026-09-28/SHA256SUMS.txt)

RT1064 完整资料需同时下载对应板卡包与 `rt1064-common` 包。
