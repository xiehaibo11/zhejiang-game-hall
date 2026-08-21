.class public Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginRequestEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "IsInstallPluginRequestEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 12
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginRequestEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginRequestEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF002"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginRequestEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginRequestEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u8bf7\u6c42\u5224\u65ad\u63d2\u4ef6\u5b89\u88c5\u60c5\u51b5"

    .line 17
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginRequestEvent;->setLabel(Ljava/lang/String;)V

    const-string v0, "1042"

    .line 18
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginRequestEvent;->setEid(Ljava/lang/String;)V

    .line 19
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 20
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 21
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginRequestEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
