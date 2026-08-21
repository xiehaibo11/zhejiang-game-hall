.class public Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "CoreDownloadSuccessEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 12
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 13
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF007"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u5e95\u5c42\u5e93\u89e6\u53d1\u548c\u54cd\u5e94"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u4e0b\u8f7d\u6210\u529f"

    .line 17
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 1

    .line 20
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;-><init>(Landroid/app/Activity;)V

    .line 21
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 22
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 23
    invoke-virtual {v0, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 24
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p4, p5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setDownload_size(Ljava/lang/String;)V

    .line 25
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
