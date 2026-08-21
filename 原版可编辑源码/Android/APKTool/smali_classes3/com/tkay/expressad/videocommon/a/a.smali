.class public Lcom/tkay/expressad/videocommon/a/a;
.super Ljava/lang/Object;


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field private static final c:Ljava/lang/String;

.field private static d:Lcom/tkay/expressad/videocommon/a/a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 17
    const-class v0, Lcom/tkay/expressad/videocommon/a/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/videocommon/a/a;->c:Ljava/lang/String;

    const/4 v0, 0x0

    .line 18
    sput-object v0, Lcom/tkay/expressad/videocommon/a/a;->d:Lcom/tkay/expressad/videocommon/a/a;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 31
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/videocommon/a/a;
    .locals 2

    .line 36
    sget-object v0, Lcom/tkay/expressad/videocommon/a/a;->d:Lcom/tkay/expressad/videocommon/a/a;

    if-nez v0, :cond_1

    .line 37
    const-class v0, Lcom/tkay/expressad/videocommon/a/a;

    monitor-enter v0

    .line 38
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/videocommon/a/a;->d:Lcom/tkay/expressad/videocommon/a/a;

    if-nez v1, :cond_0

    .line 39
    new-instance v1, Lcom/tkay/expressad/videocommon/a/a;

    invoke-direct {v1}, Lcom/tkay/expressad/videocommon/a/a;-><init>()V

    sput-object v1, Lcom/tkay/expressad/videocommon/a/a;->d:Lcom/tkay/expressad/videocommon/a/a;

    .line 41
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 43
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/expressad/videocommon/a/a;->d:Lcom/tkay/expressad/videocommon/a/a;

    return-object v0
.end method

.method public static a(Ljava/util/List;)Ljava/util/List;
    .locals 13
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p0, :cond_5

    .line 259
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object v1

    const-wide/16 v2, 0x0

    if-eqz v1, :cond_0

    .line 262
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/a;->c()J

    move-result-wide v4

    goto :goto_0

    :cond_0
    move-wide v4, v2

    .line 264
    :goto_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    if-eqz p0, :cond_5

    .line 265
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_5

    .line 266
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 267
    :try_start_1
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    .line 269
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->o()J

    move-result-wide v8

    const-wide/16 v10, 0x3e8

    mul-long/2addr v8, v10

    .line 270
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bg()J

    move-result-wide v10

    sub-long v10, v6, v10

    cmp-long v12, v8, v2

    if-lez v12, :cond_2

    cmp-long v8, v8, v10

    if-gez v8, :cond_3

    :cond_2
    if-gtz v12, :cond_1

    cmp-long v8, v4, v10

    if-ltz v8, :cond_1

    .line 272
    :cond_3
    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :cond_4
    move-object v0, v1

    goto :goto_3

    :catch_0
    move-exception p0

    move-object v0, v1

    goto :goto_2

    :catch_1
    move-exception p0

    .line 280
    :goto_2
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_5
    :goto_3
    return-object v0
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 48
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    nop

    :cond_0
    return-void
.end method

.method public static a(Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 12

    const/4 v0, 0x1

    .line 184
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object v1

    const-wide/16 v2, 0x0

    if-eqz v1, :cond_0

    .line 187
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/a;->c()J

    move-result-wide v4

    goto :goto_0

    :cond_0
    move-wide v4, v2

    .line 190
    :goto_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    if-eqz p0, :cond_3

    .line 192
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->o()J

    move-result-wide v8

    const-wide/16 v10, 0x3e8

    mul-long/2addr v8, v10

    .line 193
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->bg()J

    move-result-wide v10
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    sub-long/2addr v6, v10

    cmp-long p0, v8, v2

    if-lez p0, :cond_1

    cmp-long v1, v8, v6

    if-gez v1, :cond_2

    :cond_1
    if-gtz p0, :cond_3

    cmp-long p0, v4, v6

    if-ltz p0, :cond_3

    :cond_2
    const/4 p0, 0x0

    return p0

    :cond_3
    return v0

    :catch_0
    move-exception p0

    .line 201
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method private static b()V
    .locals 0

    return-void
.end method

.method private static c()V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    return-void
.end method

.method private static d()V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    return-void
.end method

.method private static e()V
    .locals 0

    return-void
.end method

.method private static f()V
    .locals 0

    return-void
.end method
