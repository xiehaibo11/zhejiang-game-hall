.class public Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "ApkStartSilentDownloadEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Z)V
    .locals 1

    .line 12
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF008"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u9009\u62e9\u63d2\u4ef6\u9759\u9ed8\u4e0b\u8f7d"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u6574\u5305\u9759\u9ed8\u4e0b\u8f7d\u5f00\u59cb"

    .line 17
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadEvent;->setLabel(Ljava/lang/String;)V

    const-string v0, "1042"

    .line 18
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadEvent;->setEid(Ljava/lang/String;)V

    .line 19
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 20
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    const-string p1, ""

    if-nez p3, :cond_0

    .line 22
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\u8001\u5305\u4e0d\u5b58\u5728"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 23
    :cond_0
    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 24
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
