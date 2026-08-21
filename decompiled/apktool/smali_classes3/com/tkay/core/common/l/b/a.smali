.class public Lcom/tkay/core/common/l/b/a;
.super Ljava/lang/Object;


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field public static final c:I = 0x4

.field public static final d:I = 0x5

.field public static final e:I = 0x6

.field public static final f:I = 0x7

.field private static volatile g:Lcom/tkay/core/common/l/b/a;


# instance fields
.field private h:Ljava/util/concurrent/ExecutorService;

.field private i:Ljava/util/concurrent/ExecutorService;

.field private j:Ljava/util/concurrent/ExecutorService;

.field private k:Ljava/util/concurrent/ExecutorService;

.field private l:Ljava/util/concurrent/ExecutorService;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 32
    iput-object v0, p0, Lcom/tkay/core/common/l/b/a;->h:Ljava/util/concurrent/ExecutorService;

    .line 33
    iput-object v0, p0, Lcom/tkay/core/common/l/b/a;->i:Ljava/util/concurrent/ExecutorService;

    .line 35
    iput-object v0, p0, Lcom/tkay/core/common/l/b/a;->j:Ljava/util/concurrent/ExecutorService;

    .line 36
    iput-object v0, p0, Lcom/tkay/core/common/l/b/a;->k:Ljava/util/concurrent/ExecutorService;

    .line 37
    iput-object v0, p0, Lcom/tkay/core/common/l/b/a;->l:Ljava/util/concurrent/ExecutorService;

    .line 41
    invoke-static {}, Ljava/util/concurrent/Executors;->newCachedThreadPool()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/l/b/a;->h:Ljava/util/concurrent/ExecutorService;

    .line 42
    invoke-static {}, Ljava/util/concurrent/Executors;->newSingleThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/l/b/a;->i:Ljava/util/concurrent/ExecutorService;

    return-void
.end method

.method public static a()Lcom/tkay/core/common/l/b/a;
    .locals 2

    .line 48
    sget-object v0, Lcom/tkay/core/common/l/b/a;->g:Lcom/tkay/core/common/l/b/a;

    if-nez v0, :cond_1

    .line 49
    const-class v0, Lcom/tkay/core/common/l/b/a;

    monitor-enter v0

    .line 50
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/l/b/a;->g:Lcom/tkay/core/common/l/b/a;

    if-nez v1, :cond_0

    .line 51
    new-instance v1, Lcom/tkay/core/common/l/b/a;

    invoke-direct {v1}, Lcom/tkay/core/common/l/b/a;-><init>()V

    sput-object v1, Lcom/tkay/core/common/l/b/a;->g:Lcom/tkay/core/common/l/b/a;

    .line 52
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 54
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/l/b/a;->g:Lcom/tkay/core/common/l/b/a;

    return-object v0
.end method

.method private a(Lcom/tkay/core/common/l/b/b;)V
    .locals 1

    const/4 v0, 0x2

    .line 106
    invoke-virtual {p0, p1, v0}, Lcom/tkay/core/common/l/b/a;->a(Lcom/tkay/core/common/l/b/b;I)V

    return-void
.end method

.method private b()V
    .locals 1

    .line 150
    iget-object v0, p0, Lcom/tkay/core/common/l/b/a;->i:Ljava/util/concurrent/ExecutorService;

    invoke-interface {v0}, Ljava/util/concurrent/ExecutorService;->shutdown()V

    .line 151
    iget-object v0, p0, Lcom/tkay/core/common/l/b/a;->h:Ljava/util/concurrent/ExecutorService;

    invoke-interface {v0}, Ljava/util/concurrent/ExecutorService;->shutdown()V

    return-void
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/tkay/core/common/l/b/b;I)V
    .locals 1

    monitor-enter p0

    const/4 v0, 0x1

    if-eq p2, v0, :cond_8

    const/4 v0, 0x2

    if-eq p2, v0, :cond_7

    const/4 v0, 0x4

    if-eq p2, v0, :cond_5

    const/4 v0, 0x5

    if-eq p2, v0, :cond_3

    const/4 v0, 0x6

    if-eq p2, v0, :cond_1

    const/4 v0, 0x7

    if-eq p2, v0, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    const-string p2, "tkay_type_network"

    .line 71
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/l/b/b;->a(Ljava/lang/String;)V

    .line 72
    iget-object p2, p0, Lcom/tkay/core/common/l/b/a;->h:Ljava/util/concurrent/ExecutorService;

    invoke-interface {p2, p1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 73
    monitor-exit p0

    return-void

    :cond_1
    :try_start_1
    const-string p2, "tkay_type_preload_task"

    .line 93
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/l/b/b;->a(Ljava/lang/String;)V

    .line 94
    iget-object p2, p0, Lcom/tkay/core/common/l/b/a;->l:Ljava/util/concurrent/ExecutorService;

    if-nez p2, :cond_2

    .line 95
    invoke-static {}, Ljava/util/concurrent/Executors;->newSingleThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/core/common/l/b/a;->l:Ljava/util/concurrent/ExecutorService;

    .line 97
    :cond_2
    iget-object p2, p0, Lcom/tkay/core/common/l/b/a;->l:Ljava/util/concurrent/ExecutorService;

    invoke-interface {p2, p1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 103
    :goto_0
    monitor-exit p0

    return-void

    :cond_3
    :try_start_2
    const-string p2, "tkay_type_image_type"

    .line 86
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/l/b/b;->a(Ljava/lang/String;)V

    .line 87
    iget-object p2, p0, Lcom/tkay/core/common/l/b/a;->k:Ljava/util/concurrent/ExecutorService;

    if-nez p2, :cond_4

    .line 88
    invoke-static {v0}, Ljava/util/concurrent/Executors;->newFixedThreadPool(I)Ljava/util/concurrent/ExecutorService;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/core/common/l/b/a;->k:Ljava/util/concurrent/ExecutorService;

    .line 90
    :cond_4
    iget-object p2, p0, Lcom/tkay/core/common/l/b/a;->k:Ljava/util/concurrent/ExecutorService;

    invoke-interface {p2, p1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 91
    monitor-exit p0

    return-void

    :cond_5
    :try_start_3
    const-string p2, "tkay_type_tcp_log"

    .line 79
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/l/b/b;->a(Ljava/lang/String;)V

    .line 80
    iget-object p2, p0, Lcom/tkay/core/common/l/b/a;->j:Ljava/util/concurrent/ExecutorService;

    if-nez p2, :cond_6

    .line 81
    invoke-static {}, Ljava/util/concurrent/Executors;->newSingleThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/core/common/l/b/a;->j:Ljava/util/concurrent/ExecutorService;

    .line 83
    :cond_6
    iget-object p2, p0, Lcom/tkay/core/common/l/b/a;->j:Ljava/util/concurrent/ExecutorService;

    invoke-interface {p2, p1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 84
    monitor-exit p0

    return-void

    :cond_7
    :try_start_4
    const-string p2, "tkay_type_normal"

    .line 67
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/l/b/b;->a(Ljava/lang/String;)V

    .line 68
    iget-object p2, p0, Lcom/tkay/core/common/l/b/a;->h:Ljava/util/concurrent/ExecutorService;

    invoke-interface {p2, p1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 69
    monitor-exit p0

    return-void

    :cond_8
    :try_start_5
    const-string p2, "tkay_type_single"

    .line 63
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/l/b/b;->a(Ljava/lang/String;)V

    .line 64
    iget-object p2, p0, Lcom/tkay/core/common/l/b/a;->i:Ljava/util/concurrent/ExecutorService;

    invoke-interface {p2, p1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 65
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Ljava/lang/Runnable;)V
    .locals 2

    const-wide/16 v0, 0x0

    .line 110
    invoke-virtual {p0, p1, v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method public final a(Ljava/lang/Runnable;J)V
    .locals 3

    if-eqz p1, :cond_0

    .line 115
    new-instance v0, Lcom/tkay/core/common/l/b/a$1;

    invoke-direct {v0, p0, p2, p3, p1}, Lcom/tkay/core/common/l/b/a$1;-><init>(Lcom/tkay/core/common/l/b/a;JLjava/lang/Runnable;)V

    .line 130
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    const-wide/16 v1, 0x3e8

    div-long/2addr p1, v1

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->intValue()I

    move-result p1

    int-to-long p1, p1

    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/common/l/b/b;->a(J)V

    const/4 p1, 0x2

    .line 1106
    invoke-virtual {p0, v0, p1}, Lcom/tkay/core/common/l/b/a;->a(Lcom/tkay/core/common/l/b/b;I)V

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/Runnable;)V
    .locals 5

    if-eqz p1, :cond_0

    .line 137
    new-instance v0, Lcom/tkay/core/common/l/b/a$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/core/common/l/b/a$2;-><init>(Lcom/tkay/core/common/l/b/a;Ljava/lang/Runnable;)V

    .line 144
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-wide/16 v3, 0x3e8

    div-long/2addr v1, v3

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->intValue()I

    move-result p1

    int-to-long v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/l/b/b;->a(J)V

    const/4 p1, 0x7

    .line 145
    invoke-virtual {p0, v0, p1}, Lcom/tkay/core/common/l/b/a;->a(Lcom/tkay/core/common/l/b/b;I)V

    :cond_0
    return-void
.end method
