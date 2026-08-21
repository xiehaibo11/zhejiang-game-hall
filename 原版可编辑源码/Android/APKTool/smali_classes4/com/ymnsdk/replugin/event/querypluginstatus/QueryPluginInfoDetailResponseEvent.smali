.class public Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "QueryPluginInfoDetailResponseEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 12
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 13
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF002"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u8bf7\u6c42\u63d2\u4ef6\u8be6\u60c5\u54cd\u5e94"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;IJ)V
    .locals 1

    .line 20
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;-><init>(Landroid/app/Activity;)V

    .line 21
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;->setEid(Ljava/lang/String;)V

    .line 22
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p8, p9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;->setDur(Ljava/lang/String;)V

    .line 23
    invoke-virtual {p0, p4}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;->setRv(Ljava/lang/String;)V

    .line 24
    new-instance p4, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "2"

    .line 25
    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_server_type(Ljava/lang/String;)V

    .line 26
    invoke-virtual {p4, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 27
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRestart_num(Ljava/lang/String;)V

    .line 28
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_code(Ljava/lang/String;)V

    .line 29
    invoke-virtual {p4, p6}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 30
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p8, p9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_duration(Ljava/lang/String;)V

    .line 31
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
