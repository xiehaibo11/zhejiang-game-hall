.class public Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "DownloadPatchInSilentAndUserEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 12
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 13
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF002"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "patch\u90e8\u5206\u4e3b\u52a8\u4e0b\u8f7d"

    .line 17
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;->setLabel(Ljava/lang/String;)V

    const-string p1, "1060"

    .line 18
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;->setEid(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJ)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;-><init>(Landroid/app/Activity;)V

    .line 23
    invoke-virtual {p0, p3}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;->setRv(Ljava/lang/String;)V

    .line 24
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p3, p6, p7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p6, ""

    invoke-virtual {p3, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p0, p3}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;->setDur(Ljava/lang/String;)V

    .line 25
    new-instance p3, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p3, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 26
    invoke-virtual {p3, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 27
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p4, p5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setDownload_size(Ljava/lang/String;)V

    .line 28
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
