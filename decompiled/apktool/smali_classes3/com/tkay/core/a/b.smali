.class public Lcom/tkay/core/a/b;
.super Ljava/lang/Object;


# static fields
.field private static volatile c:Lcom/tkay/core/a/b;


# instance fields
.field final a:Ljava/lang/String;

.field b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/b;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    const-class v0, Lcom/tkay/core/a/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/a/b;->a:Ljava/lang/String;

    .line 24
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/a/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public static a()Lcom/tkay/core/a/b;
    .locals 2

    .line 29
    sget-object v0, Lcom/tkay/core/a/b;->c:Lcom/tkay/core/a/b;

    if-nez v0, :cond_1

    .line 30
    const-class v0, Lcom/tkay/core/a/b;

    monitor-enter v0

    .line 31
    :try_start_0
    sget-object v1, Lcom/tkay/core/a/b;->c:Lcom/tkay/core/a/b;

    if-nez v1, :cond_0

    .line 32
    new-instance v1, Lcom/tkay/core/a/b;

    invoke-direct {v1}, Lcom/tkay/core/a/b;-><init>()V

    sput-object v1, Lcom/tkay/core/a/b;->c:Lcom/tkay/core/a/b;

    .line 33
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 35
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/a/b;->c:Lcom/tkay/core/a/b;

    return-object v0
.end method


# virtual methods
.method public final a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/c/d;)Z
    .locals 4

    .line 41
    invoke-virtual {p3}, Lcom/tkay/core/c/d;->al()I

    move-result v0

    const/4 v1, 0x0

    if-gtz v0, :cond_0

    return v1

    .line 45
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/a/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/b;

    if-nez v0, :cond_2

    const-string v0, "tkay_placement_load"

    const-string v2, ""

    .line 48
    invoke-static {p1, v0, p2, v2}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 49
    new-instance v0, Lcom/tkay/core/common/f/b;

    invoke-direct {v0}, Lcom/tkay/core/common/f/b;-><init>()V

    .line 50
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 51
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/b;->a(Ljava/lang/String;)V

    .line 53
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/a/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, p2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 56
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v2, "Load Cap info:"

    invoke-direct {p1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ":"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/b;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 58
    iget p1, v0, Lcom/tkay/core/common/f/b;->a:I

    invoke-virtual {p3}, Lcom/tkay/core/c/d;->al()I

    move-result p2

    if-lt p1, p2, :cond_3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iget-wide v2, v0, Lcom/tkay/core/common/f/b;->b:J

    sub-long/2addr p1, v2

    invoke-virtual {p3}, Lcom/tkay/core/c/d;->am()J

    move-result-wide v2

    cmp-long p1, p1, v2

    if-gtz p1, :cond_3

    const/4 p1, 0x1

    return p1

    :cond_3
    return v1
.end method

.method public final b(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/c/d;)V
    .locals 6

    .line 67
    iget-object v0, p0, Lcom/tkay/core/a/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/b;

    const-string v1, "tkay_placement_load"

    if-nez v0, :cond_1

    const-string v0, ""

    .line 70
    invoke-static {p1, v1, p2, v0}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 71
    new-instance v2, Lcom/tkay/core/common/f/b;

    invoke-direct {v2}, Lcom/tkay/core/common/f/b;-><init>()V

    .line 72
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 73
    invoke-virtual {v2, v0}, Lcom/tkay/core/common/f/b;->a(Ljava/lang/String;)V

    .line 75
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/a/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p2, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-object v0, v2

    .line 79
    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-wide v4, v0, Lcom/tkay/core/common/f/b;->b:J

    sub-long/2addr v2, v4

    invoke-virtual {p3}, Lcom/tkay/core/c/d;->am()J

    move-result-wide v4

    cmp-long p3, v2, v4

    if-lez p3, :cond_2

    .line 80
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, v0, Lcom/tkay/core/common/f/b;->b:J

    const/4 p3, 0x0

    .line 81
    iput p3, v0, Lcom/tkay/core/common/f/b;->a:I

    .line 84
    :cond_2
    iget p3, v0, Lcom/tkay/core/common/f/b;->a:I

    add-int/lit8 p3, p3, 0x1

    iput p3, v0, Lcom/tkay/core/common/f/b;->a:I

    .line 86
    new-instance p3, Ljava/lang/StringBuilder;

    const-string v2, "After save load cap:"

    invoke-direct {p3, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/b;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 87
    invoke-virtual {v0}, Lcom/tkay/core/common/f/b;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, v1, p2, p3}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
