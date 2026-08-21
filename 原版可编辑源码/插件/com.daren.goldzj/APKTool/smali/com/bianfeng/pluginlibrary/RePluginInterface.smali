.class public Lcom/bianfeng/pluginlibrary/RePluginInterface;
.super Ljava/lang/Object;
.source "RePluginInterface.java"


# instance fields
.field private activity:Landroid/app/Activity;

.field iHostAidlInterface:Lcom/ymnsdk/replugin/service/IHostAidlInterface;

.field private isconnected:I

.field private serviceConnection:Landroid/content/ServiceConnection;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    .line 21
    iput v0, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->isconnected:I

    return-void
.end method


# virtual methods
.method protected closePlugin(Ljava/lang/String;Z)V
    .locals 4

    .line 45
    iget-object v0, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 46
    invoke-virtual {v0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v1

    const-string v2, "hostActivity"

    invoke-virtual {v1, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 47
    invoke-virtual {v0}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    const-string v2, "hostPackageName"

    invoke-virtual {v0, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 49
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    .line 50
    iget-object v3, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {v3}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 51
    iget-object v3, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {v3}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 53
    :cond_0
    iget-object v3, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {v3}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 54
    iget-object v3, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {v3}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v3

    .line 55
    invoke-virtual {v2, v3}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    :cond_1
    const/high16 v3, 0x20000

    .line 57
    invoke-virtual {v2, v3}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v3, "data"

    .line 58
    invoke-virtual {v2, v3, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 59
    iget-object p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {p1}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object p1

    const-string v3, "pluginId"

    invoke-virtual {p1, v3}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 60
    iget-object p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {p1}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object p1

    invoke-virtual {p1, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, v3, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 62
    :cond_2
    invoke-virtual {v2, v0, v1}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 63
    iget-object p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {p1, v2}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    if-nez p2, :cond_3

    .line 66
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result p1

    invoke-static {p1}, Landroid/os/Process;->killProcess(I)V

    const/4 p1, 0x0

    .line 67
    invoke-static {p1}, Ljava/lang/System;->exit(I)V

    :cond_3
    return-void
.end method

.method public get_framework_version()Ljava/lang/String;
    .locals 1

    const-string v0, "2.0.0"

    return-object v0
.end method

.method protected invokeFuncNameandParameters(Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    .line 78
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 79
    new-instance v1, Landroid/content/ComponentName;

    new-instance v2, Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    .line 80
    invoke-virtual {v3}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v3

    const-string v4, "hostPackageName"

    invoke-virtual {v3, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/lang/String;-><init>(Ljava/lang/String;)V

    new-instance v3, Ljava/lang/String;

    iget-object v4, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    .line 81
    invoke-virtual {v4}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v4

    const-string v5, "hostProcessActivity"

    invoke-virtual {v4, v5}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/lang/String;-><init>(Ljava/lang/String;)V

    invoke-direct {v1, v2, v3}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 79
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    const-string v1, "payForProduct"

    .line 82
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "funName"

    if-eqz v1, :cond_0

    const-string p1, "pay"

    .line 83
    invoke-virtual {v0, v2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_0

    .line 85
    :cond_0
    invoke-virtual {v0, v2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    :goto_0
    const-string p1, "funParams"

    .line 87
    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 88
    iget-object p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    const p2, 0x1b669

    invoke-virtual {p1, v0, p2}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V

    .line 89
    iget-object p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    const/4 p2, 0x0

    invoke-virtual {p1, p2, p2}, Landroid/app/Activity;->overridePendingTransition(II)V

    return-void
.end method

.method public mBindService(Ljava/lang/String;)V
    .locals 3

    .line 93
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "com.bianfeng.replugin.HostService"

    .line 94
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 95
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 96
    iget-object p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    iget-object v1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->serviceConnection:Landroid/content/ServiceConnection;

    const/4 v2, 0x1

    invoke-virtual {p1, v0, v1, v2}, Landroid/app/Activity;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    const/4 p1, 0x0

    .line 97
    iput p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->isconnected:I

    return-void
.end method

.method public mUnBindService()V
    .locals 3

    .line 100
    iget v0, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->isconnected:I

    const/4 v1, -0x1

    if-eq v1, v0, :cond_0

    .line 101
    iget-object v0, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    iget-object v2, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->serviceConnection:Landroid/content/ServiceConnection;

    invoke-virtual {v0, v2}, Landroid/app/Activity;->unbindService(Landroid/content/ServiceConnection;)V

    .line 102
    iput v1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->isconnected:I

    :cond_0
    return-void
.end method

.method protected onCreate(Landroid/content/Context;)V
    .locals 0

    .line 25
    check-cast p1, Landroid/app/Activity;

    iput-object p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->activity:Landroid/app/Activity;

    .line 26
    new-instance p1, Lcom/bianfeng/pluginlibrary/RePluginInterface$1;

    invoke-direct {p1, p0}, Lcom/bianfeng/pluginlibrary/RePluginInterface$1;-><init>(Lcom/bianfeng/pluginlibrary/RePluginInterface;)V

    iput-object p1, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->serviceConnection:Landroid/content/ServiceConnection;

    return-void
.end method

.method public postToSepperllita(Ljava/lang/String;)V
    .locals 1

    .line 109
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/pluginlibrary/RePluginInterface;->iHostAidlInterface:Lcom/ymnsdk/replugin/service/IHostAidlInterface;

    invoke-interface {v0, p1}, Lcom/ymnsdk/replugin/service/IHostAidlInterface;->postToSepperllita(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 111
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
