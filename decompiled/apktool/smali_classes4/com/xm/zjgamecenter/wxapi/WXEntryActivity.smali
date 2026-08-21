.class public Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;
.super Landroid/app/Activity;
.source "WXEntryActivity.java"

# interfaces
.implements Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;


# static fields
.field static final FILE:Ljava/lang/String; = "plugins.ymn"

.field static final KEY:Ljava/lang/String; = "wxHandler"

.field static final gson:Lcom/google/gson/Gson;


# instance fields
.field private api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

.field private handlers:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List",
            "<",
            "Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;",
            ">;"
        }
    .end annotation
.end field

.field private loaded:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .prologue
    .line 39
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    sput-object v0, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->gson:Lcom/google/gson/Gson;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .prologue
    .line 30
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 35
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->handlers:Ljava/util/List;

    return-void
.end method

.method private newHandler(Ljava/lang/String;)Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;
    .locals 6
    .param p1, "className"    # Ljava/lang/String;

    .prologue
    .line 69
    :try_start_0
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 70
    .local v0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Class;

    const/4 v4, 0x0

    const-class v5, Landroid/content/Context;

    aput-object v5, v3, v4

    invoke-virtual {v0, v3}, Ljava/lang/Class;->getDeclaredConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v1

    .line 71
    .local v1, "constructor":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
    const/4 v3, 0x1

    invoke-virtual {v1, v3}, Ljava/lang/reflect/Constructor;->setAccessible(Z)V

    .line 72
    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    const/4 v4, 0x0

    aput-object p0, v3, v4

    invoke-virtual {v1, v3}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 75
    .end local v0    # "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    .end local v1    # "constructor":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
    :goto_0
    return-object v3

    .line 73
    :catch_0
    move-exception v2

    .line 74
    .local v2, "e":Ljava/lang/Exception;
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 75
    const/4 v3, 0x0

    goto :goto_0
.end method


# virtual methods
.method initialize()V
    .locals 2

    .prologue
    .line 42
    iget-boolean v1, p0, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->loaded:Z

    if-eqz v1, :cond_0

    .line 50
    :goto_0
    return-void

    .line 43
    :cond_0
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->loaded:Z

    .line 46
    :try_start_0
    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->loadHandlers()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 47
    :catch_0
    move-exception v0

    .line 48
    .local v0, "e":Ljava/io/IOException;
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_0
.end method

.method loadHandlers()V
    .locals 11
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .prologue
    .line 53
    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    .line 54
    .local v0, "am":Landroid/content/res/AssetManager;
    new-instance v4, Ljava/io/InputStreamReader;

    const-string v7, "plugins.ymn"

    invoke-virtual {v0, v7}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v7

    invoke-direct {v4, v7}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    .line 55
    .local v4, "reader":Ljava/io/InputStreamReader;
    new-instance v7, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity$1;

    invoke-direct {v7, p0}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity$1;-><init>(Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;)V

    .line 56
    invoke-virtual {v7}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity$1;->getType()Ljava/lang/reflect/Type;

    move-result-object v6

    .line 57
    .local v6, "type":Ljava/lang/reflect/Type;
    sget-object v7, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->gson:Lcom/google/gson/Gson;

    invoke-virtual {v7, v4, v6}, Lcom/google/gson/Gson;->fromJson(Ljava/io/Reader;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/Map;

    .line 58
    .local v5, "sdkInfos":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Lcom/google/gson/JsonElement;>;"
    sget-object v8, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->gson:Lcom/google/gson/Gson;

    const-string v7, "wxHandler"

    invoke-interface {v5, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/google/gson/JsonElement;

    const-class v9, Ljava/util/List;

    invoke-virtual {v8, v7, v9}, Lcom/google/gson/Gson;->fromJson(Lcom/google/gson/JsonElement;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/List;

    .line 59
    .local v2, "classNames":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v7

    :cond_0
    :goto_0
    invoke-interface {v7}, Ljava/util/Iterator;->hasNext()Z

    move-result v8

    if-eqz v8, :cond_1

    invoke-interface {v7}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 60
    .local v1, "className":Ljava/lang/String;
    const-string v8, "YmnSdk"

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "load IWXAPIEventHandler: "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v9

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v8, v9}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 61
    invoke-direct {p0, v1}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->newHandler(Ljava/lang/String;)Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;

    move-result-object v3

    .line 62
    .local v3, "handler":Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;
    if-eqz v3, :cond_0

    iget-object v8, p0, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->handlers:Ljava/util/List;

    invoke-interface {v8, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 64
    .end local v1    # "className":Ljava/lang/String;
    .end local v3    # "handler":Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;
    :cond_1
    invoke-virtual {v4}, Ljava/io/InputStreamReader;->close()V

    .line 65
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .prologue
    .line 81
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 82
    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object v0

    iput-object v0, p0, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    .line 83
    iget-object v0, p0, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-interface {v0, v1, p0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->handleIntent(Landroid/content/Intent;Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;)Z

    .line 84
    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->initialize()V

    .line 85
    return-void
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 1
    .param p1, "intent"    # Landroid/content/Intent;

    .prologue
    .line 89
    invoke-super {p0, p1}, Landroid/app/Activity;->onNewIntent(Landroid/content/Intent;)V

    .line 90
    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->initialize()V

    .line 91
    invoke-virtual {p0, p1}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->setIntent(Landroid/content/Intent;)V

    .line 92
    iget-object v0, p0, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-interface {v0, p1, p0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->handleIntent(Landroid/content/Intent;Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;)Z

    .line 93
    return-void
.end method

.method public onReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)V
    .locals 4
    .param p1, "req"    # Lcom/tencent/mm/opensdk/modelbase/BaseReq;

    .prologue
    .line 98
    const-string v1, "YmnSdk"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dispatch IWXAPIEventHandler when onReq "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    sget-object v3, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->gson:Lcom/google/gson/Gson;

    invoke-virtual {v3, p1}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 99
    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->initialize()V

    .line 100
    iget-object v1, p0, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->handlers:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;

    .line 101
    .local v0, "callback":Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;
    if-eqz v0, :cond_0

    .line 102
    invoke-interface {v0, p1}, Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;->onReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)V

    goto :goto_0

    .line 105
    .end local v0    # "callback":Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;
    :cond_1
    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->finish()V

    .line 106
    return-void
.end method

.method public onResp(Lcom/tencent/mm/opensdk/modelbase/BaseResp;)V
    .locals 4
    .param p1, "resp"    # Lcom/tencent/mm/opensdk/modelbase/BaseResp;

    .prologue
    .line 111
    const-string v1, "YmnSdk"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dispatch IWXAPIEventHandler when onResp "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    sget-object v3, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->gson:Lcom/google/gson/Gson;

    invoke-virtual {v3, p1}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 112
    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->initialize()V

    .line 113
    iget-object v1, p0, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->handlers:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;

    .line 114
    .local v0, "callback":Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;
    if-eqz v0, :cond_0

    .line 115
    invoke-interface {v0, p1}, Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;->onResp(Lcom/tencent/mm/opensdk/modelbase/BaseResp;)V

    goto :goto_0

    .line 118
    .end local v0    # "callback":Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;
    :cond_1
    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXEntryActivity;->finish()V

    .line 119
    return-void
.end method
