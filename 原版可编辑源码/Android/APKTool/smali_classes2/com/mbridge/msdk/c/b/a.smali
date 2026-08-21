.class public final Lcom/mbridge/msdk/c/b/a;
.super Ljava/lang/Object;
.source "ActiveAppUtil.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/c/b/a$a;
    }
.end annotation


# instance fields
.field private final a:Ljava/lang/String;

.field private b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/a;",
            ">;"
        }
    .end annotation
.end field

.field private c:Z

.field private d:Landroid/os/Handler;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "ActiveAppUtil"

    .line 22
    iput-object v0, p0, Lcom/mbridge/msdk/c/b/a;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 34
    iput-boolean v0, p0, Lcom/mbridge/msdk/c/b/a;->c:Z

    .line 168
    new-instance v0, Lcom/mbridge/msdk/c/b/a$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/c/b/a$1;-><init>(Lcom/mbridge/msdk/c/b/a;)V

    iput-object v0, p0, Lcom/mbridge/msdk/c/b/a;->d:Landroid/os/Handler;

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/c/b/a$1;)V
    .locals 0

    .line 21
    invoke-direct {p0}, Lcom/mbridge/msdk/c/b/a;-><init>()V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/c/b/a;
    .locals 1

    .line 39
    invoke-static {}, Lcom/mbridge/msdk/c/b/a$a;->a()Lcom/mbridge/msdk/c/b/a;

    move-result-object v0

    return-object v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/c/b/a;)V
    .locals 5

    .line 1122
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    goto/16 :goto_2

    .line 1125
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/c/b/a;->b:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_2

    .line 1126
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/c/b/a;->b()V

    .line 1129
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "active_last_time"

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 1132
    :try_start_0
    iget-object p0, p0, Lcom/mbridge/msdk/c/b/a;->b:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_3
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_9

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/a;

    .line 1133
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 1135
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->b()Ljava/lang/String;

    move-result-object v2

    const-string v3, "service"

    invoke-virtual {v2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_7

    .line 1137
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->a()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_9

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->c()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    goto/16 :goto_2

    .line 1140
    :cond_4
    new-instance v2, Landroid/content/ComponentName;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->c()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v2, v3, v4}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 1142
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->d()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    .line 1143
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 1145
    :cond_5
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1a

    if-lt v2, v3, :cond_6

    .line 1146
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/content/Context;->startForegroundService(Landroid/content/Intent;)Landroid/content/ComponentName;

    goto :goto_1

    .line 1148
    :cond_6
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    .line 1152
    :cond_7
    :goto_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->b()Ljava/lang/String;

    move-result-object v2

    const-string v3, "broadcast"

    invoke-virtual {v2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 1154
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->a()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_9

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->c()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_9

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->d()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_8

    goto :goto_2

    .line 1157
    :cond_8
    new-instance v2, Landroid/content/ComponentName;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->c()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v2, v3, v4}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 1158
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/a;->d()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 1159
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto/16 :goto_0

    :catchall_0
    move-exception p0

    .line 1163
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "ActiveAppUtil"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    :goto_2
    return-void
.end method


# virtual methods
.method public final b()V
    .locals 2

    .line 47
    iget-object v0, p0, Lcom/mbridge/msdk/c/b/a;->d:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 48
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public final c()Z
    .locals 1

    .line 53
    iget-boolean v0, p0, Lcom/mbridge/msdk/c/b/a;->c:Z

    return v0
.end method

.method public final declared-synchronized d()V
    .locals 3

    monitor-enter p0

    .line 57
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    .line 58
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 61
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->aN()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    .line 62
    invoke-virtual {p0}, Lcom/mbridge/msdk/c/b/a;->b()V

    goto :goto_1

    .line 64
    :cond_0
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->aP()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 65
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    goto :goto_0

    .line 68
    :cond_1
    iput-object v0, p0, Lcom/mbridge/msdk/c/b/a;->b:Ljava/util/List;

    goto :goto_1

    .line 66
    :cond_2
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/c/b/a;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 72
    :cond_3
    :goto_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized e()V
    .locals 10

    monitor-enter p0

    .line 75
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_0

    .line 76
    monitor-exit p0

    return-void

    .line 79
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    .line 80
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 82
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->aN()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_1

    goto :goto_2

    .line 85
    :cond_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->aP()Ljava/util/List;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/c/b/a;->b:Ljava/util/List;

    if-eqz v1, :cond_5

    .line 87
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_2

    goto :goto_1

    .line 90
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const-string v3, "active_last_time"

    const-wide/16 v4, 0x0

    .line 91
    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    .line 90
    invoke-static {v1, v3, v6}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    .line 93
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    cmp-long v3, v6, v4

    const/4 v4, 0x1

    if-nez v3, :cond_3

    .line 95
    iput v4, v1, Landroid/os/Message;->what:I

    .line 96
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->aO()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    iput v0, v1, Landroid/os/Message;->arg1:I

    goto :goto_0

    .line 98
    :cond_3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    sub-long/2addr v8, v6

    .line 99
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->aO()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v5, v0

    cmp-long v3, v8, v5

    if-lez v3, :cond_4

    .line 102
    iput v4, v1, Landroid/os/Message;->what:I

    .line 103
    iput v0, v1, Landroid/os/Message;->arg1:I

    goto :goto_0

    .line 105
    :cond_4
    iput v2, v1, Landroid/os/Message;->what:I

    sub-long/2addr v5, v8

    long-to-int v2, v5

    .line 106
    iput v2, v1, Landroid/os/Message;->arg1:I

    .line 107
    iput v0, v1, Landroid/os/Message;->arg2:I

    .line 111
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/c/b/a;->d:Landroid/os/Handler;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 113
    iput-boolean v4, p0, Lcom/mbridge/msdk/c/b/a;->c:Z

    const-string v0, "ActiveAppUtil"

    const-string v1, "init"

    .line 115
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_3

    .line 88
    :cond_5
    :goto_1
    monitor-exit p0

    return-void

    .line 83
    :cond_6
    :goto_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    :try_start_2
    const-string v1, "ActiveAppUtil"

    .line 117
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 119
    :goto_3
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method
