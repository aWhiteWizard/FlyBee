# FlyBee
## Git样式确定

### Commit Message 格式

```
<type>(<scope>): <subject>
<空行>
<body>
<空行>
```

### Type

- feat：新功能（feature）
- fix：修补bug

- docs：文档（documentation）

- style： 格式（不影响代码运行的变动）

- refactor：重构（即不是新增功能，也不是修改bug的代码变动）

- test：增加测试

- chore：构建过程或辅助工具的变动


### Scope

用来说明本次Commit影响的范围，即简要说明修改会涉及的部分。这个本来是选填项，但从AngularJS实际项目中可以看出基本上也成了必填项了。

### Subject

用来简要描述本次改动，概述就好了，因为后面还会在Body里给出具体信息。并且最好遵循下面三条:

- 以动词开头，使用第一人称现在时，比如change，而不是changed或changes

- 首字母不要大写

- 结尾不用句号(.)


### Body

body里的内容是对上面subject里内容的展开，在此做更加详尽的描述，内容里应该包含修改动机和修改前后的对比。

### Footer

footer里的主要放置不兼容变更和Issue关闭的信息

