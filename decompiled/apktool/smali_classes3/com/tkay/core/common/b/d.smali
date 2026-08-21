.class public Lcom/tkay/core/common/b/d;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/app/Application$ActivityLifecycleCallbacks;


# static fields
.field public static final a:Ljava/lang/String; = "start_time"

.field public static final b:Ljava/lang/String; = "end_time"

.field public static final c:Ljava/lang/String; = "psid"

.field public static final d:Ljava/lang/String; = "launch_mode"

.field public static final e:I = 0x0

.field public static final f:I = 0x1


# instance fields
.field g:J

.field h:I

.field i:Lorg/json/JSONObject;

.field j:Landroid/os/Handler;

.field k:Ljava/lang/Runnable;

.field private final l:Ljava/lang/String;


# direct methods
.method public constructor <init>(J)V
    .locals 2

    .line 80
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 36
    const-class v0, Lcom/tkay/core/common/b/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/d;->l:Ljava/lang/String;

    .line 45
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/core/common/b/d;->j:Landroid/os/Handler;

    .line 47
    new-instance v0, Lcom/tkay/core/common/b/d$1;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/b/d$1;-><init>(Lcom/tkay/core/common/b/d;)V

    iput-object v0, p0, Lcom/tkay/core/common/b/d;->k:Ljava/lang/Runnable;

    const/4 v0, 0x0

    .line 81
    iput v0, p0, Lcom/tkay/core/common/b/d;->h:I

    .line 82
    iput-wide p1, p0, Lcom/tkay/core/common/b/d;->g:J

    return-void
.end method

.method private declared-synchronized a()V
    .locals 12

    monitor-enter p0

    .line 61
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/b/d;->i:Lorg/json/JSONObject;

    if-eqz v0, :cond_1

    .line 63
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const-string v1, "tkay_sdk"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "playRecord"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const-wide/16 v0, 0x0

    .line 64
    iput-wide v0, p0, Lcom/tkay/core/common/b/d;->g:J

    .line 65
    iget-object v0, p0, Lcom/tkay/core/common/b/d;->i:Lorg/json/JSONObject;

    const-string v1, "start_time"

    .line 66
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v8

    const-string v1, "end_time"

    .line 67
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v10

    const-string v1, "psid"

    .line 68
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v1, "launch_mode"

    .line 69
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x0

    .line 71
    iput-object v1, p0, Lcom/tkay/core/common/b/d;->i:Lorg/json/JSONObject;

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x3

    move v2, v0

    goto :goto_0

    :cond_0
    move v2, v1

    :goto_0
    move-wide v3, v8

    move-wide v5, v10

    .line 73
    invoke-static/range {v2 .. v7}, Lcom/tkay/core/common/k/c;->a(IJJLjava/lang/String;)V

    .line 74
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Time up to send application playTime, reset playStartTime and send agent, playtime:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sub-long/2addr v10, v8

    const-wide/16 v1, 0x3e8

    div-long/2addr v10, v1

    invoke-virtual {v0, v10, v11}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 78
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized a(J)V
    .locals 15

    move-object v1, p0

    monitor-enter p0

    .line 118
    :try_start_0
    iget-object v0, v1, Lcom/tkay/core/common/b/d;->j:Landroid/os/Handler;

    iget-object v2, v1, Lcom/tkay/core/common/b/d;->k:Ljava/lang/Runnable;

    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 120
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    .line 121
    iget-object v2, v1, Lcom/tkay/core/common/b/d;->i:Lorg/json/JSONObject;

    const-wide/16 v3, 0x0

    const/4 v5, 0x1

    if-eqz v2, :cond_1

    .line 123
    iget-object v2, v1, Lcom/tkay/core/common/b/d;->i:Lorg/json/JSONObject;

    const-string v6, "start_time"

    .line 124
    invoke-virtual {v2, v6}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v8

    const-string v6, "end_time"

    .line 125
    invoke-virtual {v2, v6}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v10

    const-string v6, "psid"

    .line 126
    invoke-virtual {v2, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    const-string v6, "launch_mode"

    .line 127
    invoke-virtual {v2, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    .line 129
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long/2addr v6, v10

    invoke-virtual {v0}, Lcom/tkay/core/c/a;->B()I

    move-result v0

    int-to-long v13, v0

    cmp-long v0, v6, v13

    if-lez v0, :cond_1

    .line 130
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v6, "onActivityResumed : Time countdown is closed, time up to send agent and create new psid, playtime:"

    invoke-direct {v0, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sub-long v6, v10, v8

    const-wide/16 v13, 0x3e8

    div-long/2addr v6, v13

    invoke-virtual {v0, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    .line 132
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const-string v6, "tkay_sdk"

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v13

    invoke-virtual {v13}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "playRecord"

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v13, ""

    invoke-static {v0, v6, v7, v13}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    if-ne v2, v5, :cond_0

    const/4 v0, 0x3

    move v7, v0

    goto :goto_0

    :cond_0
    move v7, v5

    .line 134
    :goto_0
    invoke-static/range {v7 .. v12}, Lcom/tkay/core/common/k/c;->a(IJJLjava/lang/String;)V

    .line 135
    iput-wide v3, v1, Lcom/tkay/core/common/b/d;->g:J

    :cond_1
    const/4 v0, 0x0

    .line 142
    iput-object v0, v1, Lcom/tkay/core/common/b/d;->i:Lorg/json/JSONObject;

    .line 144
    iget-wide v6, v1, Lcom/tkay/core/common/b/d;->g:J

    cmp-long v0, v6, v3

    if-nez v0, :cond_2

    .line 145
    iput v5, v1, Lcom/tkay/core/common/b/d;->h:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 148
    :try_start_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v2, v6, v5}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;I)J

    move-result-wide v5

    iput-wide v5, v1, Lcom/tkay/core/common/b/d;->g:J
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    .line 157
    :cond_2
    :try_start_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    .line 158
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v5, "tkay_sdk"

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "playRecord"

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v6, ""

    invoke-static {v2, v5, v0, v6}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 162
    :catch_0
    :goto_1
    iget-wide v5, v1, Lcom/tkay/core/common/b/d;->g:J

    cmp-long v0, v5, v3

    if-nez v0, :cond_3

    .line 163
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/tkay/core/common/b/d;->g:J

    .line 166
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "onActivityResumed: Method use time:"

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long v2, v2, p1

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 167
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method static synthetic a(Lcom/tkay/core/common/b/d;)V
    .locals 0

    .line 26
    invoke-direct {p0}, Lcom/tkay/core/common/b/d;->a()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/b/d;J)V
    .locals 0

    .line 26
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/b/d;->a(J)V

    return-void
.end method

.method private declared-synchronized b()V
    .locals 8

    monitor-enter p0

    .line 170
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 172
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 174
    :try_start_1
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "psid"

    .line 175
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "start_time"

    .line 176
    iget-wide v5, p0, Lcom/tkay/core/common/b/d;->g:J

    invoke-virtual {v3, v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v4, "end_time"

    .line 177
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v3, v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v4, "launch_mode"

    .line 178
    iget v5, p0, Lcom/tkay/core/common/b/d;->h:I

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 179
    iput-object v3, p0, Lcom/tkay/core/common/b/d;->i:Lorg/json/JSONObject;

    .line 180
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    const-string v5, "tkay_sdk"

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "playRecord"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v4, v5, v6, v7}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 181
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "onActivityPaused: record leave time:"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 188
    :catch_0
    :try_start_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v2

    .line 189
    invoke-virtual {v2}, Lcom/tkay/core/c/a;->D()I

    move-result v3

    const/4 v4, 0x1

    if-ne v3, v4, :cond_0

    .line 190
    iget-object v3, p0, Lcom/tkay/core/common/b/d;->j:Landroid/os/Handler;

    iget-object v4, p0, Lcom/tkay/core/common/b/d;->k:Ljava/lang/Runnable;

    invoke-virtual {v2}, Lcom/tkay/core/c/a;->B()I

    move-result v2

    int-to-long v5, v2

    invoke-virtual {v3, v4, v5, v6}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 194
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "onActivityPaused: Method use time:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long/2addr v3, v0

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 195
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method static synthetic b(Lcom/tkay/core/common/b/d;)V
    .locals 0

    .line 26
    invoke-direct {p0}, Lcom/tkay/core/common/b/d;->b()V

    return-void
.end method


# virtual methods
.method public onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public onActivityDestroyed(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onActivityPaused(Landroid/app/Activity;)V
    .locals 1

    .line 109
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    new-instance v0, Lcom/tkay/core/common/b/d$3;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/b/d$3;-><init>(Lcom/tkay/core/common/b/d;)V

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onActivityResumed(Landroid/app/Activity;)V
    .locals 3

    .line 96
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 98
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    new-instance v2, Lcom/tkay/core/common/b/d$2;

    invoke-direct {v2, p0, v0, v1}, Lcom/tkay/core/common/b/d$2;-><init>(Lcom/tkay/core/common/b/d;J)V

    invoke-virtual {p1, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onActivitySaveInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public onActivityStarted(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onActivityStopped(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method
