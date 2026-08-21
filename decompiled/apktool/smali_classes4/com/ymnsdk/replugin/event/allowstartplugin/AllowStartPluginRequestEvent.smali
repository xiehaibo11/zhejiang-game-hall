.class public Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginRequestEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "AllowStartPluginRequestEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Z)V
    .locals 1

    .line 12
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginRequestEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginRequestEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF010"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginRequestEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u6a21\u5f0f\u6d41\u7a0b"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginRequestEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u5141\u8bb8\u542f\u52a8\u63d2\u4ef6\u8bf7\u6c42"

    .line 17
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginRequestEvent;->setLabel(Ljava/lang/String;)V

    const-string v0, "1042"

    .line 18
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginRequestEvent;->setEid(Ljava/lang/String;)V

    .line 19
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 20
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 21
    invoke-virtual {v0, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setIs_allow(I)V

    .line 22
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginRequestEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
