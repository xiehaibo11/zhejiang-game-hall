.class public Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "InstallPluginResponseEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 24
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 25
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF002"

    .line 26
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 27
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u8bf7\u6c42\u5b89\u88c5\u63d2\u4ef6\u54cd\u5e94"

    .line 28
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V
    .locals 2

    .line 32
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;-><init>(Landroid/app/Activity;)V

    .line 33
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setEid(Ljava/lang/String;)V

    .line 34
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p7, p8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setDur(Ljava/lang/String;)V

    .line 35
    invoke-virtual {p0, p4}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setRv(Ljava/lang/String;)V

    const/16 p4, 0x415

    if-ne p2, p4, :cond_0

    .line 37
    invoke-static {}, Lcom/ymnsdk/replugin/util/LogUtils;->isLogOpen()Z

    move-result p2

    if-eqz p2, :cond_0

    .line 38
    invoke-static {}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->getInstance()Lcom/qihoo360/replugin/utils/RepluginLogUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->readLog()Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    move-result-object p2

    .line 39
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "|"

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_0
    move-object p2, v1

    .line 41
    :goto_0
    new-instance p4, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 42
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_code(Ljava/lang/String;)V

    .line 43
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 44
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p7, p8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_duration(Ljava/lang/String;)V

    .line 45
    invoke-virtual {p4, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 46
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setCust(Ljava/lang/String;)V

    .line 47
    invoke-static {}, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->getInstance()Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;

    move-result-object p1

    const-string p2, "false"

    invoke-virtual {p1, p2}, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->setPluginLog(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;JI)V
    .locals 1

    .line 50
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;-><init>(Landroid/app/Activity;)V

    .line 51
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setEid(Ljava/lang/String;)V

    .line 52
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p7, p8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setDur(Ljava/lang/String;)V

    .line 53
    invoke-virtual {p0, p4}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setRv(Ljava/lang/String;)V

    .line 54
    new-instance p4, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 55
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_code(Ljava/lang/String;)V

    .line 56
    invoke-virtual {p4, p6}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 57
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p7, p8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_duration(Ljava/lang/String;)V

    .line 58
    invoke-virtual {p4, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 59
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRestart_num(Ljava/lang/String;)V

    .line 60
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, p4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
