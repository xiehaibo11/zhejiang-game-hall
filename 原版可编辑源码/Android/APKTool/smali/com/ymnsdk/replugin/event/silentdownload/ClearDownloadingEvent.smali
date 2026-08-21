.class public Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "ClearDownloadingEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 12
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 13
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF001"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u5bbf\u4e3b\u5305\u542f\u52a8"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u6e05\u9664\u5df2\u4e0b\u8f7d\u7684\u6587\u4ef6"

    .line 17
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;->setLabel(Ljava/lang/String;)V

    const-string p1, "1045"

    .line 18
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;->setEid(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;-><init>(Landroid/app/Activity;)V

    .line 23
    invoke-virtual {p0, p3}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;->setRv(Ljava/lang/String;)V

    .line 24
    new-instance p3, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p3, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 25
    invoke-virtual {p3, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 26
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
