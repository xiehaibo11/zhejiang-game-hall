.class public Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadFailEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "PatchStartSilentDownloadFailEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 12
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadFailEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadFailEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF008"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadFailEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u9009\u62e9\u63d2\u4ef6\u9759\u9ed8\u4e0b\u8f7d"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadFailEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "patch\u5305\u9759\u9ed8\u4e0b\u8f7d\u5931\u8d25"

    .line 17
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadFailEvent;->setLabel(Ljava/lang/String;)V

    const-string v0, "1045"

    .line 18
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadFailEvent;->setEid(Ljava/lang/String;)V

    .line 19
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 20
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 21
    invoke-virtual {v0, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 22
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadFailEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
