.class public Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "NotStartSilentDownloadEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;I)V
    .locals 1

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 12
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF001"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u5bbf\u4e3b\u5305\u542f\u52a8"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u4e0d\u542f\u52a8\u9759\u9ed8\u4e0b\u8f7d"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;->setLabel(Ljava/lang/String;)V

    .line 17
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 18
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setReason(I)V

    .line 19
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
