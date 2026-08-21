.class public Lcom/mbridge/msdk/rover/b;
.super Ljava/lang/Object;
.source "RoverController.java"


# static fields
.field private static d:Lcom/mbridge/msdk/rover/b;


# instance fields
.field a:Landroid/content/Context;

.field b:J

.field private c:Landroid/os/Handler;


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/32 v0, 0xf731400

    .line 22
    iput-wide v0, p0, Lcom/mbridge/msdk/rover/b;->b:J

    .line 23
    new-instance v0, Lcom/mbridge/msdk/rover/b$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/rover/b$1;-><init>(Lcom/mbridge/msdk/rover/b;)V

    iput-object v0, p0, Lcom/mbridge/msdk/rover/b;->c:Landroid/os/Handler;

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/rover/b;
    .locals 2

    .line 39
    sget-object v0, Lcom/mbridge/msdk/rover/b;->d:Lcom/mbridge/msdk/rover/b;

    if-nez v0, :cond_1

    .line 40
    const-class v0, Lcom/mbridge/msdk/rover/b;

    monitor-enter v0

    .line 41
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/rover/b;->d:Lcom/mbridge/msdk/rover/b;

    if-nez v1, :cond_0

    .line 42
    new-instance v1, Lcom/mbridge/msdk/rover/b;

    invoke-direct {v1}, Lcom/mbridge/msdk/rover/b;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/rover/b;->d:Lcom/mbridge/msdk/rover/b;

    .line 44
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 46
    :cond_1
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/rover/b;->d:Lcom/mbridge/msdk/rover/b;

    return-object v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/rover/b;)V
    .locals 4

    .line 2068
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 2069
    iget-object v2, p0, Lcom/mbridge/msdk/rover/b;->a:Landroid/content/Context;

    sget-object v3, Lcom/mbridge/msdk/rover/a;->d:Ljava/lang/String;

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 2071
    new-instance v0, Lcom/mbridge/msdk/rover/g;

    iget-object v1, p0, Lcom/mbridge/msdk/rover/b;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/rover/g;-><init>(Landroid/content/Context;)V

    .line 2072
    new-instance v1, Lcom/mbridge/msdk/foundation/same/net/g/d;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;-><init>()V

    .line 2073
    new-instance v2, Lcom/mbridge/msdk/rover/b$2;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/rover/b$2;-><init>(Lcom/mbridge/msdk/rover/b;)V

    .line 2093
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object p0

    iget-object p0, p0, Lcom/mbridge/msdk/foundation/same/net/f/d;->A:Ljava/lang/String;

    const/4 v3, 0x1

    invoke-virtual {v0, v3, p0, v1, v2}, Lcom/mbridge/msdk/rover/g;->get(ILjava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;)V

    return-void
.end method

.method private c()Z
    .locals 10

    .line 103
    iget-object v0, p0, Lcom/mbridge/msdk/rover/b;->a:Landroid/content/Context;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 106
    :try_start_0
    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 107
    iget-object v2, p0, Lcom/mbridge/msdk/rover/b;->a:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v0

    .line 108
    iget-wide v2, v0, Landroid/content/pm/PackageInfo;->lastUpdateTime:J

    .line 109
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long v6, v4, v2

    .line 111
    iget-wide v8, p0, Lcom/mbridge/msdk/rover/b;->b:J

    cmp-long v0, v6, v8

    if-lez v0, :cond_0

    const/4 v1, 0x1

    :cond_0
    const-string v0, ""

    .line 115
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "currentTime="

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v4, ",lastUpdateTime:"

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 117
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return v1
.end method


# virtual methods
.method public final a(Landroid/content/Context;)V
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/mbridge/msdk/rover/b;->a:Landroid/content/Context;

    return-void
.end method

.method public final b()V
    .locals 12

    .line 54
    iget-object v0, p0, Lcom/mbridge/msdk/rover/b;->a:Landroid/content/Context;

    if-nez v0, :cond_0

    const-string v0, "RoverController"

    const-string v1, "Context is null"

    .line 55
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 58
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/rover/b;->c()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1126
    iget-object v0, p0, Lcom/mbridge/msdk/rover/b;->a:Landroid/content/Context;

    sget-object v1, Lcom/mbridge/msdk/rover/a;->d:Ljava/lang/String;

    const-wide/16 v2, 0x0

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-static {v0, v1, v4}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    .line 1129
    instance-of v1, v0, Ljava/lang/Long;

    const-wide/16 v4, 0x1

    if-eqz v1, :cond_1

    .line 1130
    check-cast v0, Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    goto :goto_0

    :cond_1
    move-wide v0, v4

    .line 1132
    :goto_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    .line 1133
    sget v8, Lcom/mbridge/msdk/rover/a;->c:I

    .line 1134
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v9

    .line 1135
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v10

    invoke-virtual {v10}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v10

    .line 1134
    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v9

    if-eqz v9, :cond_2

    .line 1136
    invoke-virtual {v9}, Lcom/mbridge/msdk/c/a;->S()J

    move-result-wide v10

    cmp-long v2, v10, v2

    if-lez v2, :cond_2

    .line 1137
    invoke-virtual {v9}, Lcom/mbridge/msdk/c/a;->S()J

    move-result-wide v2

    long-to-int v8, v2

    :cond_2
    sub-long/2addr v6, v0

    int-to-long v2, v8

    cmp-long v2, v6, v2

    const/4 v3, 0x0

    if-lez v2, :cond_3

    cmp-long v0, v0, v4

    if-eqz v0, :cond_3

    const/4 v0, 0x1

    goto :goto_1

    :cond_3
    move v0, v3

    :goto_1
    if-eqz v0, :cond_4

    .line 60
    iget-object v0, p0, Lcom/mbridge/msdk/rover/b;->c:Landroid/os/Handler;

    const-wide/16 v1, 0x7530

    invoke-virtual {v0, v3, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    :cond_4
    return-void
.end method
