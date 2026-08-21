.class public Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "UnInstallPluginResponseEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V
    .locals 2

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 12
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF004"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u5378\u8f7d"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u8bf7\u6c42\u5378\u8f7d\u63d2\u4ef6\u54cd\u5e94"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;->setLabel(Ljava/lang/String;)V

    .line 17
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p6, p7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;->setDur(Ljava/lang/String;)V

    .line 18
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;->setEid(Ljava/lang/String;)V

    .line 19
    new-instance p2, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p2, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 20
    invoke-virtual {p2, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 21
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_code(Ljava/lang/String;)V

    .line 22
    invoke-virtual {p2, p5}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 23
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p6, p7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_duration(Ljava/lang/String;)V

    .line 24
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
