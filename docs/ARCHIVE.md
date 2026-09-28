# 归档与验证说明

原始目录只读，Git 仓库与 ZIP 在隔离工作目录生成。ZIP 保留全部原始文件，文件路径相对原始资料根目录；每个分包独立，不需要分卷合并命令。

发布前对每个源文件计算 SHA-256，创建 ZIP 后重新读取每个条目并逐一核对长度与 SHA-256。归档包另附整体 SHA-256。文件内容与目录路径在核验范围内；不保证保留 NTFS 权限、备用数据流或空目录。

source-manifest.csv 中 git_branches 为空表示该文件仅位于 Release；不代表遗漏。其他值列出包含该文件的硬件分支。sources/ 下原始文件按字节保留，未自动进行换行符转换。

PowerShell 下载核验示例：

```powershell
Get-FileHash -Algorithm SHA256 -LiteralPath '.\mc520-part01.zip'
```

将输出与 SHA256SUMS.txt 对应行比较。全部解压后，可按 source-manifest.csv 逐文件比较路径、大小与 SHA-256。

本次不验证压缩包内嵌资料的独立内容、可执行文件运行行为、IDE 编译、硬件兼容性或电机/图传性能。外部链接是原始资料的引用，不表示已抓取或验证其当前内容。