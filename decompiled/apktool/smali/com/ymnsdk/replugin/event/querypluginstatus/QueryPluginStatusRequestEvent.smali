.class public Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusRequestEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "QueryPluginStatusRequestEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 12
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusRequestEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 13
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusRequestEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF002"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusRequestEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusRequestEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "1042"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusRequestEvent;->setEid(Ljava/lang/String;)V

    const-string p1, "\u8bf7\u6c42\u63d2\u4ef6\u63a5\u53e3"

    .line 17
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusRequestEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 22
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusRequestEvent;-><init>(Landroid/app/Activity;)V

    .line 23
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 24
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 25
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusRequestEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
