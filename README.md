# RT1064 主板

**目标配置：RT1064 扩展主板；现有资料标注 V3.0**

[返回总导航](https://github.com/dyh1010/shovelsource/tree/main) · [完整资料下载](https://github.com/dyh1010/shovelsource/releases/tag/source-snapshot-2026-09-28) · [来源与许可](docs/THIRD_PARTY_NOTICES.md)

## 阅读顺序

先读主板硬件说明和例程说明，再看 Example/Motherboard_Demo 下 E1 至 E8 的主板、编码器、电机、IMU、显示、无线、测距与摄像头示例。

[浏览本模块资料](sources/)

## 适配与验证边界

主板分支保留共用基础库与工具索引；引脚分配和接口能力以对应主板版本资料为准。

此分支是开发参考资料，尚未编译、烧录或通电验证。厂家目录名、文档和源文件内容保持不变；安装包、视频、压缩例程、超过 10 MiB 的文件和构建产物见 Release。RT1064 分支完整下载需要模块包及 rt1064-common 包。

## 获取与开发

~~~bash
git clone --single-branch --branch codex/rt1064-motherboard https://github.com/dyh1010/shovelsource.git
cd shovelsource
git switch -c dev/rt1064-motherboard-bringup
~~~

先核对实物版本、电源和接口，再使用对应的厂家工程。参见 [维护约定](docs/CONTRIBUTING.md) 与 [原始文件清单](docs/source-manifest.csv)。