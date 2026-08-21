.class public Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchRequestEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "DownloadPatchRequestEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 12
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchRequestEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 13
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchRequestEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF002"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchRequestEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchRequestEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u4e0b\u8f7dpatch\u5f00\u59cb"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchRequestEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 21
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchRequestEvent;-><init>(Landroid/app/Activity;)V

    .line 22
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchRequestEvent;->setEid(Ljava/lang/String;)V

    .line 23
    new-instance p2, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p2, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 24
    invoke-virtual {p2, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 25
    invoke-virtual {p2, p4}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 26
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchRequestEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
