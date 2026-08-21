.class public Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "AllowStartPluginResponseEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V
    .locals 1

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 12
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF010"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u6a21\u5f0f\u6d41\u7a0b"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u5141\u8bb8\u542f\u52a8\u63d2\u4ef6\u54cd\u5e94"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;->setLabel(Ljava/lang/String;)V

    .line 17
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p3, ""

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p0, p3}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;->setEid(Ljava/lang/String;)V

    .line 18
    new-instance p3, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p3, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 19
    invoke-virtual {p3, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 20
    invoke-virtual {p3, p4}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 21
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
