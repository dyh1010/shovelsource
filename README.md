# TB6612 双路电机驱动模块（稳压）

**目标配置：带稳压的双路电机驱动模块（用户指定）**

[返回总导航](https://github.com/dyh1010/shovelsource/tree/main) · [完整资料下载](https://github.com/dyh1010/shovelsource/releases/tag/source-snapshot-2026-09-28) · [来源与许可](docs/THIRD_PARTY_NOTICES.md)

## 阅读顺序

按 1.用户手册 → 2.硬件原理图 → 3.芯片手册 阅读，再选择 STM32 或 Arduino 例程。

[浏览本模块资料](sources/)

## 适配与验证边界

模块稳压输出、电机电源、逻辑电平及允许电流应以对应版本手册和实物为准；本次没有完成接线或通电验证。

此分支是开发参考资料，尚未编译、烧录或通电验证。厂家目录名、文档和源文件内容保持不变；安装包、视频、压缩例程、超过 10 MiB 的文件和构建产物见 Release。RT1064 分支完整下载需要模块包及 rt1064-common 包。

## 获取与开发

~~~bash
git clone --single-branch --branch codex/tb6612 https://github.com/dyh1010/shovelsource.git
cd shovelsource
git switch -c dev/tb6612-bringup
~~~

先核对实物版本、电源和接口，再使用对应的厂家工程。参见 [维护约定](docs/CONTRIBUTING.md) 与 [原始文件清单](docs/source-manifest.csv)。