.class public Lcom/bianfeng/replugin/HostProcessActivity;
.super Landroid/app/Activity;
.source "HostProcessActivity.java"

# interfaces
.implements Landroid/os/Handler$Callback;


# instance fields
.field private volatile callbacks:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/bianfeng/ymnsdk/feature/YmnCallback;",
            ">;"
        }
    .end annotation
.end field

.field private handler:Landroid/os/Handler;

.field private hostActivity:Landroid/app/Activity;

.field private volatile isNeedActivityReplace:Z

.field private isPaying:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 24
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, 0x0

    .line 27
    iput-object v0, p0, Lcom/bianfeng/replugin/HostProcessActivity;->hostActivity:Landroid/app/Activity;

    const/4 v1, 0x0

    .line 28
    iput-boolean v1, p0, Lcom/bianfeng/replugin/HostProcessActivity;->isNeedActivityReplace:Z

    .line 29
    iput-object v0, p0, Lcom/bianfeng/replugin/HostProcessActivity;->callbacks:Ljava/util/Set;

    return-void
.end method

.method private __fixNoCallbackBugBegin()V
    .locals 4

    .line 113
    iget-object v0, p0, Lcom/bianfeng/replugin/HostProcessActivity;->handler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    const-wide/16 v2, 0xbb8

    .line 114
    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    :cond_0
    return-void
.end method

.method private __fixNoCallbackBugEnd()V
    .locals 2

    .line 119
    iget-object v0, p0, Lcom/bianfeng/replugin/HostProcessActivity;->handler:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 120
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    :cond_0
    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/replugin/HostProcessActivity;)V
    .locals 0

    .line 24
    invoke-direct {p0}, Lcom/bianfeng/replugin/HostProcessActivity;->__fixNoCallbackBugEnd()V

    return-void
.end method

.method static synthetic access$102(Lcom/bianfeng/replugin/HostProcessActivity;Z)Z
    .locals 0

    .line 24
    iput-boolean p1, p0, Lcom/bianfeng/replugin/HostProcessActivity;->isPaying:Z

    return p1
.end method

.method static synthetic access$200(Lcom/bianfeng/replugin/HostProcessActivity;ILjava/lang/String;)V
    .locals 0

    .line 24
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/replugin/HostProcessActivity;->finishTemp(ILjava/lang/String;)V

    return-void
.end method

.method private finishTemp(ILjava/lang/String;)V
    .locals 2

    .line 102
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "code"

    .line 103
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string v1, "msg"

    .line 104
    invoke-virtual {v0, v1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const v1, 0x511b3

    .line 105
    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/replugin/HostProcessActivity;->setResult(ILandroid/content/Intent;)V

    .line 106
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, "zzx--code "

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-string p1, "zzx--msg "

    .line 107
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 108
    invoke-virtual {p0}, Lcom/bianfeng/replugin/HostProcessActivity;->finish()V

    const/4 p1, 0x0

    .line 109
    invoke-virtual {p0, p1, p1}, Lcom/bianfeng/replugin/HostProcessActivity;->overridePendingTransition(II)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)Z
    .locals 1

    const-string p1, "\u56de\u8c03\u5f02\u5e38"

    const-string v0, "zzx"

    .line 169
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/16 v0, 0xc9

    .line 170
    invoke-direct {p0, v0, p1}, Lcom/bianfeng/replugin/HostProcessActivity;->finishTemp(ILjava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 0

    .line 176
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onActivityResult(IILandroid/content/Intent;)V

    .line 177
    invoke-static {p1, p2, p3}, Lcom/bianfeng/ymnsdk/YmnSdk;->onActivityResult(IILandroid/content/Intent;)V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 18

    move-object/from16 v1, p0

    const-string v0, "ext"

    const-string v2, "notify_url"

    const-string v3, "server_name"

    const-string v4, "server_id"

    const-string v5, "role_balance"

    const-string v6, "role_grade"

    const-string v7, "role_name"

    const-string v8, "role_id"

    const-string v9, "product_count"

    const-string v10, "product_price"

    const-string v11, "product_name"

    const-string v12, "product_id"

    const-string v13, "order_id"

    .line 33
    invoke-super/range {p0 .. p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const-string v14, "zzx"

    const-string v15, "onCreate"

    .line 34
    invoke-static {v14, v15}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v14, 0x0

    .line 35
    iput-boolean v14, v1, Lcom/bianfeng/replugin/HostProcessActivity;->isNeedActivityReplace:Z

    .line 36
    new-instance v15, Ljava/util/HashSet;

    invoke-direct {v15}, Ljava/util/HashSet;-><init>()V

    iput-object v15, v1, Lcom/bianfeng/replugin/HostProcessActivity;->callbacks:Ljava/util/Set;

    .line 37
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->getCallbacks()Ljava/util/Set;

    move-result-object v15

    invoke-interface {v15}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v15

    :goto_0
    invoke-interface {v15}, Ljava/util/Iterator;->hasNext()Z

    move-result v16

    if-eqz v16, :cond_0

    invoke-interface {v15}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v16

    move-object/from16 v14, v16

    check-cast v14, Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    move-object/from16 v16, v15

    .line 38
    iget-object v15, v1, Lcom/bianfeng/replugin/HostProcessActivity;->callbacks:Ljava/util/Set;

    invoke-interface {v15, v14}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    move-object/from16 v15, v16

    const/4 v14, 0x0

    goto :goto_0

    .line 40
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->clearCallbacks()V

    const-string v14, "R.layout.activity_hostprocess"

    .line 41
    invoke-static {v1, v14}, Lcom/bianfeng/ymnsdk/util/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v14

    invoke-virtual {v1, v14}, Lcom/bianfeng/replugin/HostProcessActivity;->setContentView(I)V

    .line 42
    new-instance v14, Landroid/os/Handler;

    invoke-direct {v14, v1}, Landroid/os/Handler;-><init>(Landroid/os/Handler$Callback;)V

    iput-object v14, v1, Lcom/bianfeng/replugin/HostProcessActivity;->handler:Landroid/os/Handler;

    .line 43
    sget-object v14, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    iput-object v14, v1, Lcom/bianfeng/replugin/HostProcessActivity;->hostActivity:Landroid/app/Activity;

    .line 44
    new-instance v14, Lcom/bianfeng/replugin/HostProcessActivity$1;

    invoke-direct {v14, v1}, Lcom/bianfeng/replugin/HostProcessActivity$1;-><init>(Lcom/bianfeng/replugin/HostProcessActivity;)V

    invoke-static {v14}, Lcom/bianfeng/ymnsdk/YmnSdk;->registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 54
    invoke-virtual/range {p0 .. p0}, Lcom/bianfeng/replugin/HostProcessActivity;->getIntent()Landroid/content/Intent;

    move-result-object v14

    const-string v15, "funName"

    .line 55
    invoke-virtual {v14, v15}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    const-string v1, "funParams"

    .line 56
    invoke-virtual {v14, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 59
    new-instance v14, Ljava/util/HashMap;

    invoke-direct {v14}, Ljava/util/HashMap;-><init>()V

    move-object/from16 v16, v15

    .line 61
    :try_start_0
    new-instance v15, Lorg/json/JSONObject;

    invoke-direct {v15, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    move-object/from16 v17, v1

    .line 62
    :try_start_1
    invoke-virtual {v15, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v13, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 63
    invoke-virtual {v15, v12}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v12, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 64
    invoke-virtual {v15, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v11, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 65
    invoke-virtual {v15, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v10, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 66
    invoke-virtual {v15, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v9, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 67
    invoke-virtual {v15, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v8, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 68
    invoke-virtual {v15, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v7, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 69
    invoke-virtual {v15, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v6, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 70
    invoke-virtual {v15, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v5, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 71
    invoke-virtual {v15, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v4, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 72
    invoke-virtual {v15, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 73
    invoke-virtual {v15, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 74
    invoke-virtual {v15, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v14, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    goto :goto_1

    :catch_1
    move-exception v0

    move-object/from16 v17, v1

    .line 76
    :goto_1
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_2
    const-string v0, "zzx-- "

    move-object/from16 v1, v16

    .line 78
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    move-object/from16 v2, v17

    .line 79
    invoke-static {v0, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x1

    move-object/from16 v3, p0

    .line 80
    iput-boolean v0, v3, Lcom/bianfeng/replugin/HostProcessActivity;->isPaying:Z

    const-string v4, "pay"

    .line 81
    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 82
    iput-boolean v0, v3, Lcom/bianfeng/replugin/HostProcessActivity;->isNeedActivityReplace:Z

    .line 83
    invoke-static/range {p0 .. p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->onCreate(Landroid/app/Activity;)V

    .line 84
    invoke-static {v14}, Lcom/bianfeng/ymnsdk/YmnSdk;->pay(Ljava/util/Map;)V

    goto :goto_4

    :cond_1
    const-string v4, "login"

    .line 85
    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 86
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->login()V

    goto :goto_4

    .line 88
    :cond_2
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/YmnSdk;->isSupportFunction(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_5

    if-eqz v2, :cond_4

    .line 89
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_3

    goto :goto_3

    :cond_3
    new-array v0, v0, [Ljava/lang/String;

    const/4 v4, 0x0

    aput-object v2, v0, v4

    .line 92
    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_4

    .line 90
    :cond_4
    :goto_3
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;)V

    goto :goto_4

    :cond_5
    const/16 v0, 0xc9

    .line 95
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u4e0d\u652f\u6301"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\u65b9\u6cd5"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v3, v0, v1}, Lcom/bianfeng/replugin/HostProcessActivity;->finishTemp(ILjava/lang/String;)V

    :goto_4
    return-void
.end method

.method protected onDestroy()V
    .locals 2

    .line 155
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 156
    iget-boolean v0, p0, Lcom/bianfeng/replugin/HostProcessActivity;->isNeedActivityReplace:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 158
    iput-boolean v0, p0, Lcom/bianfeng/replugin/HostProcessActivity;->isNeedActivityReplace:Z

    .line 159
    iget-object v0, p0, Lcom/bianfeng/replugin/HostProcessActivity;->hostActivity:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->onCreate(Landroid/app/Activity;)V

    .line 161
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/replugin/HostProcessActivity;->callbacks:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    .line 162
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/YmnSdk;->registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    goto :goto_0

    :cond_1
    const-string v0, "zzx"

    const-string v1, "onDestroy"

    .line 164
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method protected onPause()V
    .locals 2

    .line 126
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    const-string v0, "zzx"

    const-string v1, "onPause"

    .line 127
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method protected onRestart()V
    .locals 2

    .line 139
    invoke-super {p0}, Landroid/app/Activity;->onRestart()V

    const-string v0, "zzx"

    const-string v1, "onRestart"

    .line 140
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 145
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    const-string v0, "zzx"

    const-string v1, "onResume"

    .line 146
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 147
    iget-boolean v0, p0, Lcom/bianfeng/replugin/HostProcessActivity;->isPaying:Z

    if-eqz v0, :cond_0

    return-void

    .line 150
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/replugin/HostProcessActivity;->__fixNoCallbackBugBegin()V

    return-void
.end method

.method protected onStart()V
    .locals 2

    .line 132
    invoke-super {p0}, Landroid/app/Activity;->onStart()V

    const-string v0, "zzx"

    const-string v1, "onStart"

    .line 133
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
