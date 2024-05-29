## vscode连接服务器
### vscode安装remote ssh插件
* 配置.ssh/config文件
    * vscode remote ssh插件页面框右上，齿轮按钮，选择config配置，写入以下内容。
    * 本地找到.ssh目录，然后在config文件添加以下内容。
其中[]是你的信息

```shell
Host [all you need]
  HostName [ip]
  User [username]
  port [0-65535]
```

### 本地生成rsa密钥
  
```shell
# []信息一般是使用邮箱
ssh-keygen -t rsa -C ["xxx@gmail.com"]
```

shell执行上述命令之后
* 第一次确认可以自定义生成密钥文件的名字
* 第二次确认，是可以选择输入密码，不选择也无所谓，因为我们使用的是生成的密钥字符串。

### 拷贝公开密钥到服务器

复制本地生成的pub文件内容，粘贴到服务器的.ssh文件夹的authorized_keys文件中

# 就可以免密登录服务器，开始为所欲为了！！！