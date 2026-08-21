.class public Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;
.super Ljava/lang/Object;
.source "PluginsInfoWapper.java"


# instance fields
.field public activity:Landroid/app/Activity;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 41
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    return-void
.end method

.method public static checkDownloadingPlugin(Landroid/app/Activity;)V
    .locals 3

    .line 105
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getAllPlugin()Ljava/util/List;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    .line 107
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 109
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ymnsdk/replugin/entity/Plugin;

    .line 110
    invoke-static {p0, v2}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->checkDowningPlugin(Landroid/app/Activity;Lcom/ymnsdk/replugin/entity/Plugin;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static saveHostAppInfo(Ljava/lang/String;)V
    .locals 3

    const-string v0, "cpsid"

    const-string v1, "user_id"

    .line 118
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 119
    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    .line 121
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setUserId(Ljava/lang/String;)V

    .line 123
    :cond_0
    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 125
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setCpSid(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 129
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public getPluginsInfo(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;)V
    .locals 10

    .line 45
    invoke-static {}, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->getInstance()Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;

    move-result-object v0

    const-string v1, "false"

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->setPluginLog(Ljava/lang/String;)V

    .line 46
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v6

    new-instance v7, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    const v2, 0x21ef8

    const-string v4, ""

    move-object v0, v7

    move-object v3, p1

    move-object v5, p2

    invoke-direct/range {v0 .. v5}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v6, v7}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 47
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    .line 48
    invoke-static {}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getInstance()Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    move-result-object v3

    .line 49
    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    invoke-virtual {v3, v0}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->setActivity(Landroid/app/Activity;)V

    .line 50
    invoke-virtual {v3, p2}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->setHostAppInfo(Ljava/lang/String;)V

    .line 51
    new-instance v8, Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;

    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    invoke-direct {v8, v0}, Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;-><init>(Landroid/content/Context;)V

    .line 52
    invoke-virtual {v8, p1}, Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;->setRequestParams(Ljava/lang/String;)V

    .line 53
    invoke-static {p2}, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->saveHostAppInfo(Ljava/lang/String;)V

    .line 54
    new-instance v9, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;

    move-object v0, v9

    move-object v1, p0

    move-object v2, p2

    move-object v6, p3

    move-object v7, v8

    invoke-direct/range {v0 .. v7}, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;-><init>(Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;Ljava/lang/String;Lcom/ymnsdk/replugin/util/RequestRetryUtils;JLcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;)V

    invoke-virtual {v8, v9}, Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;->addObserver(Ljava/util/Observer;)V

    .line 99
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    const/16 v3, 0x412

    invoke-direct {v1, v2, v3, p2}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 100
    invoke-virtual {v8}, Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;->actionStart()V

    return-void
.end method
