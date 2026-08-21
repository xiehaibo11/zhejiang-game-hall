.class public Lcom/ymnsdk/replugin/event/silentdownload/EndSilentDownloadingEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "EndSilentDownloadingEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 12
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/EndSilentDownloadingEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 13
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/EndSilentDownloadingEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF001"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/EndSilentDownloadingEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u5bbf\u4e3b\u5305\u542f\u52a8"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/EndSilentDownloadingEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u5173\u95ed\u9759\u9ed8\u4e0b\u8f7d"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/EndSilentDownloadingEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;J)V
    .locals 2

    .line 20
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/EndSilentDownloadingEvent;-><init>(Landroid/app/Activity;)V

    .line 21
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/silentdownload/EndSilentDownloadingEvent;->setDur(Ljava/lang/String;)V

    .line 22
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 23
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_duration(Ljava/lang/String;)V

    .line 24
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/silentdownload/EndSilentDownloadingEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
