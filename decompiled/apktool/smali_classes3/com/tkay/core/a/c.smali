.class public final Lcom/tkay/core/a/c;
.super Ljava/lang/Object;


# static fields
.field private static a:Lcom/tkay/core/a/c;


# instance fields
.field private final b:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "pacing_"

    .line 21
    iput-object v0, p0, Lcom/tkay/core/a/c;->b:Ljava/lang/String;

    return-void
.end method

.method public static a()Lcom/tkay/core/a/c;
    .locals 1

    .line 25
    sget-object v0, Lcom/tkay/core/a/c;->a:Lcom/tkay/core/a/c;

    if-nez v0, :cond_0

    .line 26
    new-instance v0, Lcom/tkay/core/a/c;

    invoke-direct {v0}, Lcom/tkay/core/a/c;-><init>()V

    sput-object v0, Lcom/tkay/core/a/c;->a:Lcom/tkay/core/a/c;

    .line 28
    :cond_0
    sget-object v0, Lcom/tkay/core/a/c;->a:Lcom/tkay/core/a/c;

    return-object v0
.end method

.method public static a(Ljava/lang/String;)V
    .locals 4

    .line 33
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const-string v1, "tkay_sdk"

    const-string v2, "pacing_"

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v0, v1, p0, v2, v3}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/tkay/core/c/d;)Z
    .locals 10

    const/4 v0, 0x1

    if-nez p1, :cond_0

    return v0

    .line 46
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ae()J

    move-result-wide v1

    const-wide/16 v3, -0x1

    cmp-long v1, v1, v3

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    .line 49
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "pacing_"

    invoke-virtual {v4, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-wide/16 v4, 0x0

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    const-string v7, "tkay_sdk"

    invoke-static {v1, v7, v3, v6}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    .line 50
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    sub-long/2addr v8, v6

    cmp-long v1, v8, v4

    if-gez v1, :cond_2

    .line 51
    invoke-static {p0}, Lcom/tkay/core/a/c;->a(Ljava/lang/String;)V

    return v2

    .line 54
    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long/2addr v3, v6

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ae()J

    move-result-wide p0

    cmp-long p0, v3, p0

    if-gez p0, :cond_3

    return v0

    :cond_3
    return v2
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 64
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/a/c$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/core/a/c$1;-><init>(Lcom/tkay/core/a/c;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Z
    .locals 10

    const/4 v0, 0x1

    if-nez p2, :cond_0

    return v0

    .line 83
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->s()J

    move-result-wide v1

    const-wide/16 v3, -0x1

    cmp-long v1, v1, v3

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    .line 86
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "pacing_"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 87
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-wide/16 v4, 0x0

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    const-string v7, "tkay_sdk"

    .line 86
    invoke-static {v1, v7, v3, v6}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    .line 88
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    sub-long/2addr v8, v6

    cmp-long v1, v8, v4

    if-gez v1, :cond_2

    .line 89
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/tkay/core/a/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    .line 92
    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long/2addr v3, v6

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->s()J

    move-result-wide p1

    cmp-long p1, v3, p1

    if-gez p1, :cond_3

    return v0

    :cond_3
    return v2
.end method
