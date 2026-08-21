.class final Lcom/mbridge/msdk/c/c$1;
.super Lcom/mbridge/msdk/foundation/same/net/g/c;
.source "SettingRequestController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/c/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/mbridge/msdk/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/c/c;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 64
    iput-object p1, p0, Lcom/mbridge/msdk/c/c$1;->d:Lcom/mbridge/msdk/c/c;

    iput-object p2, p0, Lcom/mbridge/msdk/c/c$1;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/c/c$1;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/mbridge/msdk/c/c$1;->c:Ljava/lang/String;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/net/g/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 4

    .line 159
    iget-object v0, p0, Lcom/mbridge/msdk/c/c$1;->d:Lcom/mbridge/msdk/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/c/c;->a(Lcom/mbridge/msdk/c/c;)Ljava/lang/String;

    move-result-object v0

    .line 160
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v1

    iget v1, v1, Lcom/mbridge/msdk/foundation/same/net/f/d;->j:I

    .line 161
    iget-object v2, p0, Lcom/mbridge/msdk/c/c$1;->d:Lcom/mbridge/msdk/c/c;

    const/4 v3, 0x2

    invoke-static {v2, v3, v1, p1, v0}, Lcom/mbridge/msdk/c/c;->a(Lcom/mbridge/msdk/c/c;IILjava/lang/String;Ljava/lang/String;)V

    .line 163
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v0

    iget-boolean v0, v0, Lcom/mbridge/msdk/foundation/same/net/f/d;->i:Z

    if-nez v0, :cond_0

    .line 164
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v0

    iget v1, v0, Lcom/mbridge/msdk/foundation/same/net/f/d;->D:I

    add-int/lit8 v1, v1, 0x1

    iput v1, v0, Lcom/mbridge/msdk/foundation/same/net/f/d;->D:I

    goto :goto_0

    .line 166
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v0

    iget v1, v0, Lcom/mbridge/msdk/foundation/same/net/f/d;->E:I

    add-int/lit8 v1, v1, 0x1

    iput v1, v0, Lcom/mbridge/msdk/foundation/same/net/f/d;->E:I

    .line 168
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/c/c$1;->d:Lcom/mbridge/msdk/c/c;

    iget-object v1, p0, Lcom/mbridge/msdk/c/c$1;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/c/c$1;->a:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/c/c$1;->c:Ljava/lang/String;

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/c/c;->a(Lcom/mbridge/msdk/c/c;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    iget-object v0, p0, Lcom/mbridge/msdk/c/c$1;->d:Lcom/mbridge/msdk/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/c/c;->b(Lcom/mbridge/msdk/c/c;)V

    .line 172
    invoke-static {}, Lcom/mbridge/msdk/c/c;->a()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "get app setting error"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Lorg/json/JSONObject;)V
    .locals 14

    const-string v0, "web_env_url"

    const-string v1, "mraid_js"

    const-string v2, "hst_st_t"

    const-string v3, "hst_st"

    const-string v4, "mb_optimization_setting"

    const-string v5, "use_thread_pool"

    .line 68
    :try_start_0
    iget-object v6, p0, Lcom/mbridge/msdk/c/c$1;->d:Lcom/mbridge/msdk/c/c;

    invoke-static {v6}, Lcom/mbridge/msdk/c/c;->a(Lcom/mbridge/msdk/c/c;)Ljava/lang/String;

    move-result-object v6

    .line 69
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v7

    iget v7, v7, Lcom/mbridge/msdk/foundation/same/net/f/d;->j:I

    .line 71
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lorg/json/JSONObject;)Z

    move-result v8
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3

    const-string v9, "current_time"

    const/4 v10, 0x1

    if-eqz v8, :cond_7

    :try_start_1
    const-string v8, "vtag_status"

    const/4 v11, 0x0

    .line 73
    invoke-virtual {p1, v8, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v8

    if-ne v8, v10, :cond_0

    .line 74
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v8

    iget-object v12, p0, Lcom/mbridge/msdk/c/c$1;->a:Ljava/lang/String;

    invoke-virtual {v8, v12}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 75
    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3

    if-nez v12, :cond_0

    .line 77
    :try_start_2
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v12

    new-instance v13, Lorg/json/JSONObject;

    invoke-direct {v13, v8}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v12, v13, p1}, Lcom/mbridge/msdk/c/b;->a(Lorg/json/JSONObject;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v8

    .line 79
    :try_start_3
    invoke-virtual {v8}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    .line 84
    :cond_0
    :goto_0
    :try_start_4
    invoke-virtual {p1, v5, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v8

    .line 85
    iget-object v12, p0, Lcom/mbridge/msdk/c/c$1;->b:Landroid/content/Context;

    if-eqz v12, :cond_1

    .line 86
    iget-object v12, p0, Lcom/mbridge/msdk/c/c$1;->b:Landroid/content/Context;

    invoke-virtual {v12, v4, v11}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v12

    invoke-interface {v12}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v12

    invoke-interface {v12, v5, v8}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    move-result-object v8

    invoke-interface {v8}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_1

    .line 89
    :catch_1
    :try_start_5
    iget-object v8, p0, Lcom/mbridge/msdk/c/c$1;->b:Landroid/content/Context;

    if-eqz v8, :cond_1

    .line 90
    iget-object v8, p0, Lcom/mbridge/msdk/c/c$1;->b:Landroid/content/Context;

    invoke-virtual {v8, v4, v11}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v4

    invoke-interface {v4}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v4

    invoke-interface {v4, v5, v11}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    move-result-object v4

    invoke-interface {v4}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_1
    :goto_1
    const-string v4, "aa"

    .line 94
    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v4

    .line 95
    sput-boolean v4, Lcom/mbridge/msdk/MBridgeConstans;->ALLOW_APK_DOWNLOAD:Z

    .line 96
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-virtual {p1, v9, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 98
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v4

    iget-boolean v4, v4, Lcom/mbridge/msdk/foundation/same/net/f/d;->i:Z

    if-eqz v4, :cond_2

    .line 99
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 100
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v3

    iget-object v3, v3, Lcom/mbridge/msdk/foundation/same/net/f/d;->d:Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_2

    .line 103
    :cond_2
    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 104
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v2

    iget-object v2, v2, Lcom/mbridge/msdk/foundation/same/net/f/d;->c:Ljava/lang/String;

    invoke-virtual {p1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 108
    :cond_3
    :goto_2
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/c/c$1;->a:Ljava/lang/String;

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 109
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/same/net/f/d;->c()V

    .line 110
    invoke-static {}, Lcom/mbridge/msdk/c/b/a;->a()Lcom/mbridge/msdk/c/b/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/c/b/a;->c()Z

    move-result v2

    if-nez v2, :cond_4

    .line 111
    new-instance v2, Ljava/lang/Thread;

    new-instance v3, Lcom/mbridge/msdk/c/c$1$1;

    invoke-direct {v3, p0}, Lcom/mbridge/msdk/c/c$1$1;-><init>(Lcom/mbridge/msdk/c/c$1;)V

    invoke-direct {v2, v3}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 118
    invoke-virtual {v2}, Ljava/lang/Thread;->start()V

    goto :goto_3

    .line 120
    :cond_4
    invoke-static {}, Lcom/mbridge/msdk/c/b/a;->a()Lcom/mbridge/msdk/c/b/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/c/b/a;->d()V

    .line 123
    :goto_3
    new-instance v2, Ljava/lang/Thread;

    new-instance v3, Lcom/mbridge/msdk/c/c$1$2;

    invoke-direct {v3, p0}, Lcom/mbridge/msdk/c/c$1$2;-><init>(Lcom/mbridge/msdk/c/c$1;)V

    invoke-direct {v2, v3}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 128
    invoke-virtual {v2}, Ljava/lang/Thread;->start()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    .line 132
    :try_start_6
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    .line 133
    invoke-static {}, Lcom/mbridge/msdk/c/b/b;->a()Lcom/mbridge/msdk/c/b/b;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/c/c$1;->b:Landroid/content/Context;

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v3, v1}, Lcom/mbridge/msdk/c/b/b;->a(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_4

    :catch_2
    move-exception v1

    .line 136
    :try_start_7
    invoke-static {}, Lcom/mbridge/msdk/c/c;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 140
    :cond_5
    :goto_4
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_6

    .line 141
    invoke-static {}, Lcom/mbridge/msdk/c/b/c;->a()Lcom/mbridge/msdk/c/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/c/c$1;->b:Landroid/content/Context;

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v2, p1}, Lcom/mbridge/msdk/c/b/c;->a(Landroid/content/Context;Ljava/lang/String;)V

    .line 145
    :cond_6
    iget-object p1, p0, Lcom/mbridge/msdk/c/c$1;->d:Lcom/mbridge/msdk/c/c;

    iget-object v0, p0, Lcom/mbridge/msdk/c/c$1;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/mbridge/msdk/c/c$1;->a:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/mbridge/msdk/c/c;->a(Lcom/mbridge/msdk/c/c;Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_5

    .line 147
    :cond_7
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/c/c$1;->a:Ljava/lang/String;
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_3

    .line 1655
    :try_start_8
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1656
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_8

    .line 1657
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1658
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v2, v9, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 1659
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    goto :goto_5

    :catchall_0
    move-exception p1

    .line 1662
    :try_start_9
    sget-object v0, Lcom/mbridge/msdk/c/b;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 150
    :cond_8
    :goto_5
    iget-object p1, p0, Lcom/mbridge/msdk/c/c$1;->d:Lcom/mbridge/msdk/c/c;

    const-string v0, ""

    invoke-static {p1, v10, v7, v0, v6}, Lcom/mbridge/msdk/c/c;->a(Lcom/mbridge/msdk/c/c;IILjava/lang/String;Ljava/lang/String;)V

    .line 151
    iget-object p1, p0, Lcom/mbridge/msdk/c/c$1;->d:Lcom/mbridge/msdk/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/c/c;->b(Lcom/mbridge/msdk/c/c;)V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_3

    goto :goto_6

    :catch_3
    move-exception p1

    .line 153
    invoke-static {}, Lcom/mbridge/msdk/c/c;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_6
    return-void
.end method
