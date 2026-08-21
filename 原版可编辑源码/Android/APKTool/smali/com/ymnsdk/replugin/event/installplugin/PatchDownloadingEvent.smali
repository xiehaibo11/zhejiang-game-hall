.class public Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "PatchDownloadingEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 12
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 13
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF002"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u4e0b\u8f7dpatch\u4e2d"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;->setLabel(Ljava/lang/String;)V

    const-string p1, "1060"

    .line 17
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;->setEid(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJJ)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;-><init>(Landroid/app/Activity;)V

    .line 22
    invoke-virtual {p0, p3}, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;->setRv(Ljava/lang/String;)V

    .line 23
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p3, p8, p9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p8, ""

    invoke-virtual {p3, p8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p0, p3}, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;->setDur(Ljava/lang/String;)V

    .line 24
    new-instance p3, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p3, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 25
    invoke-virtual {p3, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 26
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p4, p5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setDownload_size(Ljava/lang/String;)V

    .line 27
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p6, p7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setDownload_progress(Ljava/lang/String;)V

    .line 28
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
