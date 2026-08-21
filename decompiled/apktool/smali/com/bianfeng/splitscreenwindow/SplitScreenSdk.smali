.class public Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;
.super Ljava/lang/Object;
.source "SplitScreenSdk.java"


# static fields
.field private static volatile screenSdk:Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;


# instance fields
.field private activity:Landroid/app/Activity;

.field private shopid:Ljava/lang/String;

.field private showtype:Lcom/bianfeng/splitscreenwindow/ShowType;

.field private windowManager:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private closeWindow()V
    .locals 1

    .line 132
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->windowManager:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    if-eqz v0, :cond_0

    .line 133
    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->closeWindow()V

    const/4 v0, 0x0

    .line 134
    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->windowManager:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    :cond_0
    return-void
.end method

.method public static getInstance()Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;
    .locals 2

    .line 35
    sget-object v0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->screenSdk:Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    if-nez v0, :cond_1

    .line 36
    const-class v0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    monitor-enter v0

    .line 37
    :try_start_0
    sget-object v1, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->screenSdk:Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    if-nez v1, :cond_0

    .line 38
    new-instance v1, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    invoke-direct {v1}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;-><init>()V

    sput-object v1, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->screenSdk:Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    .line 40
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 42
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->screenSdk:Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    return-object v0
.end method

.method private show(Lcom/bianfeng/splitscreenwindow/ShowType;)V
    .locals 1

    .line 54
    sget-object v0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk$1;->$SwitchMap$com$bianfeng$splitscreenwindow$ShowType:[I

    invoke-virtual {p1}, Lcom/bianfeng/splitscreenwindow/ShowType;->ordinal()I

    move-result p1

    aget p1, v0, p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    const/4 v0, 0x3

    if-eq p1, v0, :cond_0

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 59
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->windowManager:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    if-nez p1, :cond_1

    .line 60
    new-instance p1, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->activity:Landroid/app/Activity;

    invoke-direct {p1, v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;-><init>(Landroid/app/Activity;)V

    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->windowManager:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public endPay()V
    .locals 1

    .line 126
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->windowManager:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    if-eqz v0, :cond_0

    .line 127
    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->setPaying()V

    :cond_0
    return-void
.end method

.method public init(Landroid/app/Activity;Ljava/lang/String;Lcom/bianfeng/splitscreenwindow/ShowType;)V
    .locals 2

    .line 46
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->activity:Landroid/app/Activity;

    .line 47
    iput-object p2, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->shopid:Ljava/lang/String;

    .line 48
    iput-object p3, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->showtype:Lcom/bianfeng/splitscreenwindow/ShowType;

    .line 49
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "data_map init: shopid"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 50
    invoke-direct {p0, p3}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->show(Lcom/bianfeng/splitscreenwindow/ShowType;)V

    return-void
.end method

.method public onDestory()V
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->windowManager:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    if-eqz v0, :cond_0

    .line 141
    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->onDestory()V

    :cond_0
    return-void
.end method

.method public onWindowFocusChanged(ZLandroid/app/Activity;)V
    .locals 1

    .line 146
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->windowManager:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    .line 150
    invoke-virtual {v0, p2}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->onResume(Landroid/app/Activity;)V

    goto :goto_0

    .line 152
    :cond_1
    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->onPause()V

    :goto_0
    return-void
.end method

.method public pay(Ljava/lang/String;)V
    .locals 3

    .line 89
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/thridlibrary/GsonUtils;->fromJson(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    .line 90
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 91
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 92
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 94
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->shopid:Ljava/lang/String;

    const-string v1, "shop_id"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 96
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "data_map:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 97
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getReflexCall()Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;

    move-result-object p1

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getClassNameSet()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->getH5PayCallback()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1, v0}, Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;->onCallWithObject(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public payWeb(Ljava/lang/String;)V
    .locals 4

    const-string v0, "ext"

    .line 101
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/bianfeng/thridlibrary/GsonUtils;->fromJson(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    .line 102
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    .line 103
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 104
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 108
    :cond_0
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-direct {p1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "app_cp"

    .line 109
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 111
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    const-string p1, ""

    :goto_1
    const-string v2, "cp"

    .line 115
    invoke-interface {v1, v2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 116
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->shopid:Ljava/lang/String;

    const-string v2, "shop_id"

    invoke-interface {v1, v2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "gameid"

    .line 117
    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    const-string v2, "game_id"

    invoke-interface {v1, v2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 118
    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    const-string v2, "thirdGame_ext"

    invoke-interface {v1, v2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 119
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getExt()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v1, v0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 120
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getSdkVersion()Ljava/lang/String;

    move-result-object p1

    const-string v0, "sdk_version"

    invoke-interface {v1, v0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 122
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getReflexCall()Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;

    move-result-object p1

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getClassNameSet()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->getH5PayWebCallback()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0, v1}, Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;->onCallWithObject(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public show(Ljava/lang/String;)V
    .locals 2

    .line 67
    sget-object v0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk$1;->$SwitchMap$com$bianfeng$splitscreenwindow$ShowType:[I

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->showtype:Lcom/bianfeng/splitscreenwindow/ShowType;

    invoke-virtual {v1}, Lcom/bianfeng/splitscreenwindow/ShowType;->ordinal()I

    move-result v1

    aget v0, v0, v1

    packed-switch v0, :pswitch_data_0

    goto :goto_0

    .line 82
    :pswitch_0
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->closeWindow()V

    .line 83
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->activity:Landroid/app/Activity;

    invoke-static {v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewActivity;->start(Landroid/app/Activity;Ljava/lang/String;)V

    goto :goto_0

    .line 78
    :pswitch_1
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->closeWindow()V

    .line 79
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->activity:Landroid/app/Activity;

    invoke-static {v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->start(Landroid/app/Activity;Ljava/lang/String;)V

    goto :goto_0

    .line 72
    :pswitch_2
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->windowManager:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    if-eqz v0, :cond_0

    .line 73
    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->showtype:Lcom/bianfeng/splitscreenwindow/ShowType;

    invoke-virtual {v0, v1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->setShowType(Lcom/bianfeng/splitscreenwindow/ShowType;)V

    .line 74
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->windowManager:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;

    invoke-virtual {v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->show(Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_2
        :pswitch_2
        :pswitch_2
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
