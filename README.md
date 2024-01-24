# notes

## 克隆仓库至本地

git clone *************************

## 查看当前分支

git branch 

## 创建分支

git branch dev1

## 切换到新分支

git switch dev1

## 上传文件

git status

git add ./

git commit -m "description"

git push origin dev1

## 切换主分支

git switch master

## 查看日志

git log

## 删除a分支

git branch -d a

## 在a分支下创建b分支

git switch a

git checkout -b b

## 将a分支合并到master

git checkout master

git merge a

（合并之前保证没有冲突）

## 为分支a打标签，通过切换标签来切换分支

git tag v1.0

git checkout v1.0

## push 和 pull

push是上传代码时用的

pull是更新代码







------------------------------------------------------------------------------------------------------------------------------------
将一个项目第一次上传到 GitHub 是一个简单的过程，但需要一些基本步骤来正确设置和推送你的代码。以下是你需要遵循的步骤：

2. 创建一个新的仓库（Repository）
在 GitHub 上，进入你的账户，点击右上角的 “+” 图标，选择 “New repository”。填写仓库名称，可以选择添加描述，选择是否要让仓库公开或私有，然后点击 “Create repository”。

3. 初始化本地项目为 Git 仓库
在你的项目根目录中打开终端或命令行工具，并运行以下命令来初始化 Git 仓库：
git init

4. 添加文件到仓库
添加项目文件到 Git 仓库中。可以选择添加所有文件，或者选择性添加特定文件。

添加所有文件：
git add .
添加特定文件：
git add <文件名>

git config --global user.email "you@example.com"
git config --global user.name "Your Name"

5. 提交更改
提交你的更改到本地仓库。这个步骤将记录你的更改。
git commit -m "Initial commit"
这里的 "Initial commit" 是提交信息，可以根据你的更改自定义。

6. 添加远程仓库地址
将你的本地仓库与 GitHub 上的仓库连接起来。你需要使用在第2步中创建的 GitHub 仓库的 URL。
git remote add origin <仓库URL>

7. 推送更改到 GitHub
最后一步是将你的代码推送到 GitHub。
git push -u origin master
这里假设你正在推送到 master 分支，这通常是默认分支。如果你的分支有其他名称，请相应更改。

-------------------------------------------------------------------------------------------------------------------------------
工程修改后再上传到github
git status                  # 检查未提交的更改
git add .                   # 添加所有更改
git commit -m "更新了一些功能"  # 提交更改
git push origin <master>      # 推送到 GitHub

-------------------------------------------------------------------------------------------------------------------------------
切换分支

检查当前分支
首先，使用 git branch 命令检查你当前所在的分支：
git branch
这将列出所有的本地分支，并用星号标记当前分支。

确认或切换分支
如果你在错误的分支上（比如应该在 master 而不是 main），切换到正确的分支：
git checkout master
如果 main 是正确的分支，但它在本地不存在，你可以创建并切换到这个分支：
git checkout -b main
推送到 GitHub
一旦你在正确的分支上，再次尝试推送：
git push -u origin main
如果你在 master 分支上工作，应该相应地更改命令为：
git push -u origin master
确保你正在使用的分支名称与你在 GitHub 仓库中想要推送的分支名称匹配。
如果你的 GitHub 仓库是全新的，通常默认分支名是 main。如果仓库是较老的，可能默认分支名是 master。
-----------------------------------------------------------------------------------------------------------------------------------------

使用 git pull 命令将远程更改合并到你的本地仓库。这将自动合并远程分支的更改（如果没有冲突）。
git pull origin main

--------------------------------------------------------------------------------------------------------------------------------------------

解决分支分歧
要解决分支分歧，你可以选择以下方法之一：

1. 合并（Merge）
这是最常用的方法，它会将远程分支的更改合并到你的本地分支中。
git pull origin main --no-rebase
2. 变基（Rebase）
这种方法会将你本地的更改应用到远程分支的顶部。
git pull origin main --rebase
3. 快进（Fast-forward）
如果可能，这种方法只更新本地分支以匹配远程分支。
git pull origin main --ff-only
选择其中一种方法执行 git pull。一般情况下，合并是最安全的选择，尤其是在多人合作的项目中。

---------------------------------------------------------------------------------------------------------------------------------------
