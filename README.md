# MC520 电机

**目标配置：13 线霍尔编码器，减速比 30（用户指定的目标配置）**

[返回总导航](https://github.com/dyh1010/shovelsource/tree/main) · [完整资料下载](https://github.com/dyh1010/shovelsource/releases/tag/source-snapshot-2026-09-28) · [来源与许可](docs/THIRD_PARTY_NOTICES.md)

## 阅读顺序

先读 1 MC520电机开发手册，再看 2 STM32电机PID教程与 3 Arduino开发资料。运动学教程、底盘例程和安装工具是厂家通用配套资料。

[浏览本模块资料](sources/)

## 适配与验证边界

13 线是用户给出的编码器规格描述；尚未从资料确认其 PPR/CPR 定义、计数边沿和计数轴位置。不能直接据此认定每输出轴转一圈的计数。减速比 30 也需按实际型号核对。

此分支是开发参考资料，尚未编译、烧录或通电验证。厂家目录名、文档和源文件内容保持不变；安装包、视频、压缩例程、超过 10 MiB 的文件和构建产物见 Release。RT1064 分支完整下载需要模块包及 rt1064-common 包。

## 获取与开发

`ash
git clone --single-branch --branch codex/mc520 https://github.com/dyh1010/shovelsource.git
cd shovelsource
git switch -c dev/mc520-bringup
`

先核对实物版本、电源和接口，再使用对应的厂家工程。参见 [维护约定](docs/CONTRIBUTING.md) 与 [原始文件清单](docs/source-manifest.csv)。