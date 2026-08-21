.class public Lcom/tkay/banner/b/a;
.super Ljava/lang/Object;


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/tkay/banner/a/d;",
            ">;"
        }
    .end annotation
.end field

.field c:Ljava/util/Timer;

.field private d:Z


# direct methods
.method public constructor <init>(Lcom/tkay/banner/a/d;)V
    .locals 1

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 21
    iput-boolean v0, p0, Lcom/tkay/banner/b/a;->d:Z

    .line 24
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/banner/b/a;->b:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method static synthetic a(Lcom/tkay/banner/b/a;)V
    .locals 1

    .line 1072
    iget-object v0, p0, Lcom/tkay/banner/b/a;->b:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/banner/a/d;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    .line 1074
    invoke-interface {v0}, Lcom/tkay/banner/a/d;->timeUpRefreshView()V

    return-void

    .line 1076
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/banner/b/a;->d()V

    return-void
.end method

.method private e()Ljava/util/TimerTask;
    .locals 1

    .line 63
    new-instance v0, Lcom/tkay/banner/b/a$1;

    invoke-direct {v0, p0}, Lcom/tkay/banner/b/a$1;-><init>(Lcom/tkay/banner/b/a;)V

    return-object v0
.end method

.method private f()V
    .locals 1

    .line 72
    iget-object v0, p0, Lcom/tkay/banner/b/a;->b:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/banner/a/d;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    .line 74
    invoke-interface {v0}, Lcom/tkay/banner/a/d;->timeUpRefreshView()V

    return-void

    .line 76
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/banner/b/a;->d()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 28
    iput-object p1, p0, Lcom/tkay/banner/b/a;->a:Ljava/lang/String;

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 32
    iget-boolean v0, p0, Lcom/tkay/banner/b/a;->d:Z

    return v0
.end method

.method public final declared-synchronized b()V
    .locals 7

    monitor-enter p0

    .line 36
    :try_start_0
    iget-object v0, p0, Lcom/tkay/banner/b/a;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 37
    monitor-exit p0

    return-void

    .line 39
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/banner/b/a;->a:Ljava/lang/String;

    .line 40
    invoke-virtual {v0, v1}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v0

    .line 42
    iget-object v1, p0, Lcom/tkay/banner/b/a;->c:Ljava/util/Timer;

    if-eqz v1, :cond_1

    .line 43
    iget-object v1, p0, Lcom/tkay/banner/b/a;->c:Ljava/util/Timer;

    invoke-virtual {v1}, Ljava/util/Timer;->cancel()V

    :cond_1
    if-eqz v0, :cond_3

    .line 46
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->W()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_3

    .line 47
    iput-boolean v2, p0, Lcom/tkay/banner/b/a;->d:Z

    .line 48
    new-instance v1, Ljava/util/Timer;

    invoke-direct {v1}, Ljava/util/Timer;-><init>()V

    iput-object v1, p0, Lcom/tkay/banner/b/a;->c:Ljava/util/Timer;

    .line 50
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->X()J

    move-result-wide v1

    const-wide/16 v3, 0x1388

    cmp-long v1, v1, v3

    if-lez v1, :cond_2

    .line 51
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->X()J

    move-result-wide v3

    :cond_2
    move-wide v5, v3

    .line 53
    iget-object v1, p0, Lcom/tkay/banner/b/a;->c:Ljava/util/Timer;

    .line 1063
    new-instance v2, Lcom/tkay/banner/b/a$1;

    invoke-direct {v2, p0}, Lcom/tkay/banner/b/a$1;-><init>(Lcom/tkay/banner/b/a;)V

    move-wide v3, v5

    .line 53
    invoke-virtual/range {v1 .. v6}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 55
    :cond_3
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final c()Z
    .locals 1

    .line 58
    iget-object v0, p0, Lcom/tkay/banner/b/a;->c:Ljava/util/Timer;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final declared-synchronized d()V
    .locals 1

    monitor-enter p0

    .line 81
    :try_start_0
    iget-object v0, p0, Lcom/tkay/banner/b/a;->c:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 82
    iget-object v0, p0, Lcom/tkay/banner/b/a;->c:Ljava/util/Timer;

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    :cond_0
    const/4 v0, 0x0

    .line 84
    iput-object v0, p0, Lcom/tkay/banner/b/a;->c:Ljava/util/Timer;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 85
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
