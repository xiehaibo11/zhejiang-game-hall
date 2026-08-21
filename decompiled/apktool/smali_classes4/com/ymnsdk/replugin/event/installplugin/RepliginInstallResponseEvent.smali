.class public Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "RepliginInstallResponseEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;ILjava/lang/String;)V
    .locals 2

    .line 13
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF002"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 17
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u8c03\u7528\u6846\u67b6\u5b89\u88c5\u63a5\u53e3\u8fd4\u56de"

    .line 18
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;->setLabel(Ljava/lang/String;)V

    .line 19
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;->setEid(Ljava/lang/String;)V

    .line 20
    new-instance p2, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p2, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 21
    invoke-virtual {p2, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 22
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/RepliginInstallResponseEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
