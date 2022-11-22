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