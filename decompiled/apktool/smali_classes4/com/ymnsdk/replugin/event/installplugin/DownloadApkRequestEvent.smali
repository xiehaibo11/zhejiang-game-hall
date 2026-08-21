.class public Lcom/ymnsdk/replugin/event/installplugin/DownloadApkRequestEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "DownloadApkRequestEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 1

    .line 12
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkRequestEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkRequestEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF002"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkRequestEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkRequestEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u4e0b\u8f7d\u6574\u5305\u5f00\u59cb"

    .line 17
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkRequestEvent;->setLabel(Ljava/lang/String;)V

    const-string v0, "1047"

    .line 18
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkRequestEvent;->setEid(Ljava/lang/String;)V

    .line 19
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 20
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    if-nez p4, :cond_0

    .line 21
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "\u8001\u5305\u4e0d\u5b58\u5728"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    .line 22
    :cond_0
    invoke-virtual {v0, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 23
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkRequestEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
