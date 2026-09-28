# 0.96 寸 7 管脚显示屏

**目标配置：0.96 寸、7 管脚；原始文件夹标注白色、焊好针**

[返回总导航](https://github.com/dyh1010/shovelsource/tree/main) · [完整资料下载](https://github.com/dyh1010/shovelsource/releases/tag/source-snapshot-2026-09-28) · [来源与许可](docs/THIRD_PARTY_NOTICES.md)

## 阅读顺序

先读 0.96寸OLED使用文档新手必看V2.0-.pdf，结合 7PIN 原理图，再看程序源码与取模教程。

[浏览本模块资料](sources/)

## 适配与验证边界

驱动芯片、供电与接口时序以资料和实物为准，不根据屏幕尺寸或针脚数推定。

此分支是开发参考资料，尚未编译、烧录或通电验证。厂家目录名、文档和源文件内容保持不变；安装包、视频、压缩例程、超过 10 MiB 的文件和构建产物见 Release。RT1064 分支完整下载需要模块包及 rt1064-common 包。

## 获取与开发

~~~bash
git clone --single-branch --branch codex/oled-096-7pin https://github.com/dyh1010/shovelsource.git
cd shovelsource
git switch -c dev/oled-096-7pin-bringup
~~~

先核对实物版本、电源和接口，再使用对应的厂家工程。参见 [维护约定](docs/CONTRIBUTING.md) 与 [原始文件清单](docs/source-manifest.csv)。