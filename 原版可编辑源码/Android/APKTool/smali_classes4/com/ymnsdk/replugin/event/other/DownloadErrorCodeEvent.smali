.class public Lcom/ymnsdk/replugin/event/other/DownloadErrorCodeEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "DownloadErrorCodeEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 12
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 13
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/DownloadErrorCodeEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/DownloadErrorCodeEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF006"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/DownloadErrorCodeEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u4e0b\u8f7dcode\u7801"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/DownloadErrorCodeEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u7ed3\u675f\u4e0b\u8f7d"

    .line 17
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/DownloadErrorCodeEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 22
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/other/DownloadErrorCodeEvent;-><init>(Landroid/app/Activity;)V

    .line 23
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 24
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 25
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/DownloadErrorCodeEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
