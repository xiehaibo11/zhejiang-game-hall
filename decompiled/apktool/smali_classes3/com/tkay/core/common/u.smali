.class public Lcom/tkay/core/common/u;
.super Ljava/lang/Object;


# static fields
.field private static volatile c:Lcom/tkay/core/common/u;


# instance fields
.field a:Ljava/util/concurrent/atomic/AtomicInteger;

.field private b:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 31
    const-class v0, Lcom/tkay/core/common/u;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/u;->b:Ljava/lang/String;

    .line 75
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/common/u;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    return-void
.end method

.method public static a()Lcom/tkay/core/common/u;
    .locals 2

    .line 40
    sget-object v0, Lcom/tkay/core/common/u;->c:Lcom/tkay/core/common/u;

    if-nez v0, :cond_1

    .line 41
    const-class v0, Lcom/tkay/core/common/u;

    monitor-enter v0

    .line 42
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/u;->c:Lcom/tkay/core/common/u;

    if-nez v1, :cond_0

    .line 43
    new-instance v1, Lcom/tkay/core/common/u;

    invoke-direct {v1}, Lcom/tkay/core/common/u;-><init>()V

    sput-object v1, Lcom/tkay/core/common/u;->c:Lcom/tkay/core/common/u;

    .line 44
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 46
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/u;->c:Lcom/tkay/core/common/u;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/core/common/u;)Ljava/lang/String;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/core/common/u;->b:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public final a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 9

    .line 58
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v8, Lcom/tkay/core/common/u$1;

    move-object v1, v8

    move-object v2, p0

    move v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    move-object v7, p5

    invoke-direct/range {v1 .. v7}, Lcom/tkay/core/common/u$1;-><init>(Lcom/tkay/core/common/u;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v8}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final declared-synchronized b()V
    .locals 6

    monitor-enter p0

    .line 81
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/u;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-gtz v0, :cond_3

    .line 83
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/g;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/g;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/c/g;->c()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 85
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 86
    iget-object v1, p0, Lcom/tkay/core/common/u;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 87
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "need to send request count: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/core/common/u;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 88
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/n;

    .line 90
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-wide v4, v1, Lcom/tkay/core/common/f/n;->f:J

    sub-long/2addr v2, v4

    const-wide/32 v4, 0x240c8400

    cmp-long v2, v2, v4

    if-ltz v2, :cond_0

    .line 91
    iget-object v2, p0, Lcom/tkay/core/common/u;->a:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    .line 92
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/c/g;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/g;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/tkay/core/common/c/g;->b(Lcom/tkay/core/common/f/n;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    goto :goto_0

    :cond_0
    const/16 v2, 0x3e8

    .line 98
    :try_start_1
    new-instance v3, Lorg/json/JSONObject;

    iget-object v4, v1, Lcom/tkay/core/common/f/n;->g:Ljava/lang/String;

    invoke-direct {v3, v4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v4, "business_type"

    .line 99
    invoke-virtual {v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 103
    :catchall_0
    :try_start_2
    iget v3, v1, Lcom/tkay/core/common/f/n;->b:I

    const/4 v4, 0x3

    if-ne v3, v4, :cond_1

    .line 104
    new-instance v3, Lcom/tkay/core/common/h/a/b;

    iget-object v4, v1, Lcom/tkay/core/common/f/n;->e:Ljava/lang/String;

    invoke-direct {v3, v4, v2}, Lcom/tkay/core/common/h/a/b;-><init>(Ljava/lang/String;I)V

    .line 105
    new-instance v2, Lcom/tkay/core/common/u$2;

    invoke-direct {v2, p0, v1}, Lcom/tkay/core/common/u$2;-><init>(Lcom/tkay/core/common/u;Lcom/tkay/core/common/f/n;)V

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/h/a/b;->a(Lcom/tkay/core/common/h/a/c$a;)V

    goto :goto_0

    .line 121
    :cond_1
    new-instance v3, Lcom/tkay/core/common/h/n;

    invoke-direct {v3, v1}, Lcom/tkay/core/common/h/n;-><init>(Lcom/tkay/core/common/f/n;)V

    const/16 v4, 0x3e9

    if-ne v2, v4, :cond_2

    .line 124
    invoke-virtual {v3}, Lcom/tkay/core/common/h/n;->p()V

    :cond_2
    const/4 v2, 0x0

    .line 127
    new-instance v4, Lcom/tkay/core/common/u$3;

    invoke-direct {v4, p0, v1, v3}, Lcom/tkay/core/common/u$3;-><init>(Lcom/tkay/core/common/u;Lcom/tkay/core/common/f/n;Lcom/tkay/core/common/h/n;)V

    invoke-virtual {v3, v2, v4}, Lcom/tkay/core/common/h/n;->a(ILcom/tkay/core/common/h/k;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    .line 160
    :cond_3
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method
