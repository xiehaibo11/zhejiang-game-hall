.class public Lcom/ymnsdk/replugin/event/startplugin/StartPluginRequestEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "StartPluginRequestEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 15
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginRequestEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 17
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginRequestEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF002"

    .line 18
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginRequestEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 19
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginRequestEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u8bf7\u6c42\u542f\u52a8\u63d2\u4ef6"

    .line 20
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginRequestEvent;->setLabel(Ljava/lang/String;)V

    const-string v0, "1042"

    .line 21
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginRequestEvent;->setEid(Ljava/lang/String;)V

    .line 22
    invoke-virtual {p0, p3}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginRequestEvent;->setUid(Ljava/lang/String;)V

    .line 23
    new-instance p3, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p3, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 24
    invoke-virtual {p3, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 25
    invoke-virtual {p3, p4}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setLogin_json_str(Ljava/lang/String;)V

    .line 26
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginRequestEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
