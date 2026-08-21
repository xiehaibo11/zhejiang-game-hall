.class public Lcom/ymnsdk/replugin/event/installplugin/InstallPluginRequestEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "InstallPluginRequestEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 20
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 21
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginRequestEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 22
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginRequestEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF002"

    .line 23
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginRequestEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 24
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginRequestEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u8bf7\u6c42\u5b89\u88c5\u63d2\u4ef6"

    .line 25
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginRequestEvent;->setLabel(Ljava/lang/String;)V

    const-string v0, "1042"

    .line 26
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginRequestEvent;->setEid(Ljava/lang/String;)V

    .line 27
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 28
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 29
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginRequestEvent;->setCust(Ljava/lang/String;)V

    .line 31
    invoke-static {}, Lcom/ymnsdk/replugin/util/LogUtils;->isLogOpen()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 33
    invoke-static {}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->getInstance()Lcom/qihoo360/replugin/utils/RepluginLogUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->clearLog()V

    .line 34
    invoke-static {}, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->getInstance()Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;

    move-result-object p1

    const-string p2, "true"

    invoke-virtual {p1, p2}, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->setPluginLog(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
