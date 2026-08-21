.class public Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "GetPluginsInfoRequestEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 13
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF001"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u5bbf\u4e3b\u5305\u542f\u52a8"

    .line 17
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u8bf7\u6c42\u5bbf\u4e3b\u914d\u7f6e\u4fe1\u606f"

    .line 18
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;ILjava/lang/String;)V
    .locals 1

    .line 22
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;-><init>(Landroid/app/Activity;)V

    .line 23
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;->setEid(Ljava/lang/String;)V

    .line 24
    new-instance p2, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p2, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "1"

    .line 25
    invoke-virtual {p2, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_server_type(Ljava/lang/String;)V

    .line 26
    invoke-virtual {p2, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setHost_app_info(Ljava/lang/String;)V

    .line 27
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
