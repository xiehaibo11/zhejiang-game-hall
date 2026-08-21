.class public Lcom/ymnsdk/replugin/event/other/CoreDownloadFailEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "CoreDownloadFailEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 12
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadFailEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 13
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadFailEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF007"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadFailEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u5e95\u5c42\u5e93\u89e6\u53d1\u548c\u54cd\u5e94"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadFailEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u4e0b\u8f7d\u5931\u8d25"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadFailEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 20
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadFailEvent;-><init>(Landroid/app/Activity;)V

    .line 21
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 22
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 23
    invoke-virtual {v0, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 24
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadFailEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
