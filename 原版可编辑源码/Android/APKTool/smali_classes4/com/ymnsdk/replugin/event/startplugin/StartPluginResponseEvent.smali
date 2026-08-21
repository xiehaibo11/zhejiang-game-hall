.class public Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "StartPluginResponseEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 15
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 17
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF002"

    .line 18
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 19
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u8bf7\u6c42\u542f\u52a8\u63d2\u4ef6\u54cd\u5e94"

    .line 20
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 1

    .line 24
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;-><init>(Landroid/app/Activity;)V

    .line 25
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;->setEid(Ljava/lang/String;)V

    .line 26
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p9, p10}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;->setDur(Ljava/lang/String;)V

    .line 27
    invoke-virtual {p0, p4}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;->setRv(Ljava/lang/String;)V

    .line 28
    invoke-virtual {p0, p7}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;->setUid(Ljava/lang/String;)V

    .line 30
    new-instance p4, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 31
    invoke-virtual {p4, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 32
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_code(Ljava/lang/String;)V

    .line 33
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 34
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p9, p10}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_duration(Ljava/lang/String;)V

    .line 35
    invoke-virtual {p4, p8}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setLogin_json_str(Ljava/lang/String;)V

    .line 36
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
