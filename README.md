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


## 生成SSH KEY
我们要想生成SSH key，首先就得先安装 SSH，对于 Linux 和 Mac 系统，其默认是安装 SSH 的，而对于 Windows 系统，其默认是不安装 SSH 的，不过由于我们安装了 Git Bash，其也应该自带了 SSH. 可以通过在 Git Bash 中输入ssh命令，查看本机是否安装 SSH

接下来，输入ssh-keygen -t rsa命令，表示我们指定 RSA 算法生成密钥，然后敲三次回车键，期间不需要输入密码，之后就就会生成两个文件，分别为id_rsa和id_rsa.pub，即密钥id_rsa和公钥id_rsa.pub. 对于这两个文件，其都为隐藏文件，默认生成在以下目录：

Linux 系统：~/.ssh

Mac 系统：~/.ssh

Windows 系统：C:\Documents and Settings\username\\.ssh

Windows 10 ThinkPad：C:\Users\think\.ssh

密钥和公钥生成之后，我们要做的事情就是把公钥id_rsa.pub的内容添加到 GitHub，这样我们本地的密钥id_rsa和 GitHub 上的公钥id_rsa.pub才可以进行匹配，授权成功后，就可以向 GitHub 提交代码啦！

## 添加SSH KEY
进入我们的 GitHub 主页，先点击右上角所示的倒三角▽图标，然后再点击Settins，进行设置页面；点击我们的头像亦可直接进入设置页面：
进入Settings页面后，再点击SSH and GPG Keys进入此子界面，然后点击New SSH key按钮：
我们只需要将公钥id_rsa.pub的内容粘贴到Key处的位置（Titles的内容不填写也没事），然后点击Add SSH key 即可。