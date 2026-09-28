# RT1064 最小系统板

**目标配置：RT1064 核心板 / 最小系统板**

[返回总导航](https://github.com/dyh1010/shovelsource/tree/main) · [完整资料下载](https://github.com/dyh1010/shovelsource/releases/tag/source-snapshot-2026-09-28) · [来源与许可](docs/THIRD_PARTY_NOTICES.md)

## 阅读顺序

从核心板文档、核心板原理图和 Example/Coreboard_Demo 入手；基础工程位于 SeekFree_RT1064_Opensource_Library/project。

[浏览本模块资料](sources/)

## 适配与验证边界

资料同时包含 RT1064 Lite 与其他核心板手册。原厂 README 声明该库依赖外置 SDRAM；是否匹配实物最小系统板尚未验证。

此分支是开发参考资料，尚未编译、烧录或通电验证。厂家目录名、文档和源文件内容保持不变；安装包、视频、压缩例程、超过 10 MiB 的文件和构建产物见 Release。RT1064 分支完整下载需要模块包及 rt1064-common 包。

## 获取与开发

~~~bash
git clone --single-branch --branch codex/rt1064-coreboard https://github.com/dyh1010/shovelsource.git
cd shovelsource
git switch -c dev/rt1064-coreboard-bringup
~~~

先核对实物版本、电源和接口，再使用对应的厂家工程。参见 [维护约定](docs/CONTRIBUTING.md) 与 [原始文件清单](docs/source-manifest.csv)。