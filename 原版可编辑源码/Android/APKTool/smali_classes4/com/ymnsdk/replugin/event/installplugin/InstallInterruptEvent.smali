.class public Lcom/ymnsdk/replugin/event/installplugin/InstallInterruptEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "InstallInterruptEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 12
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallInterruptEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallInterruptEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF002"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallInterruptEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallInterruptEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u5b89\u88c5\u4e2d\u65ad"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallInterruptEvent;->setLabel(Ljava/lang/String;)V

    .line 17
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 18
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 19
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/InstallInterruptEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
