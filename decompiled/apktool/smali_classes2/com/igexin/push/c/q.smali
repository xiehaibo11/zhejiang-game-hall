.class public Lcom/igexin/push/c/q;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;

.field private static b:Ljava/util/concurrent/ThreadPoolExecutor;


# instance fields
.field private c:Ljava/util/concurrent/Future;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/Future<",
            "Lcom/igexin/push/c/j;",
            ">;"
        }
    .end annotation
.end field

.field private d:Lcom/igexin/push/c/j;

.field private e:Lcom/igexin/push/c/p;

.field private f:Z


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "DT_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-class v1, Lcom/igexin/push/c/q;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/c/q;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/p;
    .locals 0

    iget-object p0, p0, Lcom/igexin/push/c/q;->e:Lcom/igexin/push/c/p;

    return-object p0
.end method

.method public static a()V
    .locals 2

    invoke-static {}, Lcom/igexin/push/config/SDKUrlConfig;->getXfrAddress()[Ljava/lang/String;

    move-result-object v0

    array-length v0, v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    sget-object v0, Lcom/igexin/push/c/q;->b:Ljava/util/concurrent/ThreadPoolExecutor;

    if-eqz v0, :cond_0

    :try_start_0
    invoke-virtual {v0}, Ljava/util/concurrent/ThreadPoolExecutor;->shutdownNow()Ljava/util/List;

    const/4 v0, 0x0

    sput-object v0, Lcom/igexin/push/c/q;->b:Ljava/util/concurrent/ThreadPoolExecutor;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/igexin/push/c/q;)Lcom/igexin/push/c/j;
    .locals 0

    iget-object p0, p0, Lcom/igexin/push/c/q;->d:Lcom/igexin/push/c/j;

    return-object p0
.end method

.method static synthetic c(Lcom/igexin/push/c/q;)Ljava/lang/String;
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/c/q;->h()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic f()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/igexin/push/c/q;->a:Ljava/lang/String;

    return-object v0
.end method

.method private g()V
    .locals 8

    sget-object v0, Lcom/igexin/push/c/q;->b:Ljava/util/concurrent/ThreadPoolExecutor;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/concurrent/ThreadPoolExecutor;

    const/4 v2, 0x0

    const/16 v3, 0xc

    const-wide/16 v4, 0x3c

    sget-object v6, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v7, Ljava/util/concurrent/SynchronousQueue;

    invoke-direct {v7}, Ljava/util/concurrent/SynchronousQueue;-><init>()V

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V

    sput-object v0, Lcom/igexin/push/c/q;->b:Ljava/util/concurrent/ThreadPoolExecutor;

    :cond_0
    sget-object v0, Lcom/igexin/push/c/q;->b:Ljava/util/concurrent/ThreadPoolExecutor;

    new-instance v1, Lcom/igexin/push/c/r;

    invoke-direct {v1, p0}, Lcom/igexin/push/c/r;-><init>(Lcom/igexin/push/c/q;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->submit(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/c/q;->c:Ljava/util/concurrent/Future;

    return-void
.end method

.method private h()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/igexin/push/c/q;->d:Lcom/igexin/push/c/j;

    invoke-virtual {v1}, Lcom/igexin/push/c/j;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/igexin/push/c/q;->d:Lcom/igexin/push/c/j;

    invoke-virtual {v1}, Lcom/igexin/push/c/j;->c()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private i()V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/c/q;->c:Ljava/util/concurrent/Future;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/igexin/push/c/q;->c:Ljava/util/concurrent/Future;

    invoke-interface {v0}, Ljava/util/concurrent/Future;->isCancelled()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/igexin/push/c/q;->c:Ljava/util/concurrent/Future;

    invoke-interface {v0}, Ljava/util/concurrent/Future;->isDone()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/igexin/push/c/q;->c:Ljava/util/concurrent/Future;

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Ljava/util/concurrent/Future;->cancel(Z)Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/igexin/push/c/q;->c:Ljava/util/concurrent/Future;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method


# virtual methods
.method public a(Lcom/igexin/push/c/j;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/c/q;->d:Lcom/igexin/push/c/j;

    return-void
.end method

.method public a(Lcom/igexin/push/c/p;)V
    .locals 1

    const-class v0, Lcom/igexin/push/c/p;

    monitor-enter v0

    :try_start_0
    iput-object p1, p0, Lcom/igexin/push/c/q;->e:Lcom/igexin/push/c/p;

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/c/q;->f:Z

    return-void
.end method

.method public b()Lcom/igexin/push/c/j;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/c/q;->d:Lcom/igexin/push/c/j;

    return-object v0
.end method

.method protected c()V
    .locals 2

    const-class v0, Lcom/igexin/push/c/p;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/c/q;->e:Lcom/igexin/push/c/p;

    if-eqz v1, :cond_0

    invoke-direct {p0}, Lcom/igexin/push/c/q;->g()V

    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public d()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/c/q;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|stop "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0}, Lcom/igexin/push/c/q;->h()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " task"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-direct {p0}, Lcom/igexin/push/c/q;->i()V

    return-void
.end method

.method public e()V
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/p;)V

    invoke-direct {p0}, Lcom/igexin/push/c/q;->i()V

    return-void
.end method
