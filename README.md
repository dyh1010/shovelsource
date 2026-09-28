# OpenART 视觉图传

**目标配置：OpenART mini 视觉与图传方向的开发资料**

[返回总导航](https://github.com/dyh1010/shovelsource/tree/main) · [完整资料下载](https://github.com/dyh1010/shovelsource/releases/tag/source-snapshot-2026-09-28) · [来源与许可](docs/THIRD_PARTY_NOTICES.md)

## 阅读顺序

先读 OpenART mini说明书.pdf，再核对固件版本；示例含二维码、矩形角点和激光跟踪。V3/V4 示例包与 IDE 安装程序可从 Release 获取。

[浏览本模块资料](sources/)

## 适配与验证边界

“视觉图传”是用户的硬件用途分类；本次仅归档已有资料，没有确认实时图传链路或示例在目标固件上的兼容性。

此分支是开发参考资料，尚未编译、烧录或通电验证。厂家目录名、文档和源文件内容保持不变；安装包、视频、压缩例程、超过 10 MiB 的文件和构建产物见 Release。RT1064 分支完整下载需要模块包及 rt1064-common 包。

## 获取与开发

`ash
git clone --single-branch --branch codex/openart-vision https://github.com/dyh1010/shovelsource.git
cd shovelsource
git switch -c dev/openart-vision-bringup
`

先核对实物版本、电源和接口，再使用对应的厂家工程。参见 [维护约定](docs/CONTRIBUTING.md) 与 [原始文件清单](docs/source-manifest.csv)。