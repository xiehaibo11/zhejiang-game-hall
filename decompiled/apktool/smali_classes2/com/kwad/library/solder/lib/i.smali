.class public final Lcom/kwad/library/solder/lib/i;
.super Lcom/kwad/library/solder/lib/j;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/library/solder/lib/i$a;
    }
.end annotation


# static fields
.field private static volatile afB:Lcom/kwad/library/solder/lib/i;


# instance fields
.field private afC:Lcom/kwad/library/solder/lib/j;

.field private afD:Ljava/util/concurrent/ExecutorService;

.field private afE:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/kwad/library/solder/lib/i$a;",
            ">;"
        }
    .end annotation
.end field

.field private volatile mHasInit:Z


# direct methods
.method private constructor <init>()V
    .locals 7

    const/4 v1, 0x0

    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v0, p0

    invoke-direct/range {v0 .. v6}, Lcom/kwad/library/solder/lib/j;-><init>(Lcom/kwad/library/solder/lib/a/d;Lcom/kwad/library/solder/lib/a/g;Lcom/kwad/library/solder/lib/a/c;Lcom/kwad/library/solder/lib/a/b;Lcom/kwad/library/solder/lib/ext/c;Lcom/kwad/library/solder/lib/ext/a;)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    return-void
.end method

.method private declared-synchronized a(Ljava/lang/String;Lcom/kwad/library/solder/lib/i$a;)V
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/i;->afE:Ljava/util/Map;

    invoke-static {v0}, Lcom/kwad/library/solder/lib/i;->c(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/library/solder/lib/i;->afE:Ljava/util/Map;

    if-eqz p1, :cond_0

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    monitor-exit p0

    return-void

    :cond_1
    :try_start_1
    new-instance p1, Ljava/lang/RuntimeException;

    const-string p2, "Sodler has not yet been init."

    invoke-direct {p1, p2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private b(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/j$a;)Lcom/kwad/library/solder/lib/i$a;
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/kwad/library/solder/lib/i;->bC(Ljava/lang/String;)Lcom/kwad/library/solder/lib/i$a;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/i$a;->cancel()V

    :cond_0
    invoke-virtual {p1, p0}, Lcom/kwad/library/solder/lib/a/f;->a(Lcom/kwad/library/solder/lib/a/e;)Lcom/kwad/library/solder/lib/a/f;

    iget-object v0, p0, Lcom/kwad/library/solder/lib/i;->afD:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/kwad/library/solder/lib/i$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/kwad/library/solder/lib/i$2;-><init>(Lcom/kwad/library/solder/lib/i;Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/j$a;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;

    move-result-object p2

    new-instance v0, Lcom/kwad/library/solder/lib/i$a;

    invoke-direct {v0, p1, p2}, Lcom/kwad/library/solder/lib/i$a;-><init>(Lcom/kwad/library/solder/lib/a/f;Ljava/util/concurrent/Future;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1, v0}, Lcom/kwad/library/solder/lib/i;->a(Ljava/lang/String;Lcom/kwad/library/solder/lib/i$a;)V

    return-object v0

    :cond_1
    new-instance p1, Ljava/lang/RuntimeException;

    const-string p2, "Sodler has not yet been init."

    invoke-direct {p1, p2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private declared-synchronized bC(Ljava/lang/String;)Lcom/kwad/library/solder/lib/i$a;
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/i;->afE:Ljava/util/Map;

    invoke-static {v0}, Lcom/kwad/library/solder/lib/i;->c(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/library/solder/lib/i;->afE:Ljava/util/Map;

    if-eqz p1, :cond_0

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/library/solder/lib/i$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object p1

    :cond_0
    const/4 p1, 0x0

    monitor-exit p0

    return-object p1

    :cond_1
    :try_start_1
    new-instance p1, Ljava/lang/RuntimeException;

    const-string v0, "Sodler has not yet been init."

    invoke-direct {p1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public static wb()Lcom/kwad/library/solder/lib/i;
    .locals 2

    sget-object v0, Lcom/kwad/library/solder/lib/i;->afB:Lcom/kwad/library/solder/lib/i;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/library/solder/lib/i;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/library/solder/lib/i;->afB:Lcom/kwad/library/solder/lib/i;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/library/solder/lib/i;

    invoke-direct {v1}, Lcom/kwad/library/solder/lib/i;-><init>()V

    sput-object v1, Lcom/kwad/library/solder/lib/i;->afB:Lcom/kwad/library/solder/lib/i;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/kwad/library/solder/lib/i;->afB:Lcom/kwad/library/solder/lib/i;

    return-object v0
.end method

.method private static wc()Ljava/util/concurrent/ExecutorService;
    .locals 9

    new-instance v8, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v5, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v6, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v6}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    new-instance v7, Lcom/kwad/library/solder/lib/i$1;

    invoke-direct {v7}, Lcom/kwad/library/solder/lib/i$1;-><init>()V

    const/4 v1, 0x0

    const/4 v2, 0x3

    const-wide/16 v3, 0x3c

    move-object v0, v8

    invoke-direct/range {v0 .. v7}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V

    return-object v8
.end method

.method private wj()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "Sodler has not yet been init."

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method


# virtual methods
.method public final a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/j$a;)Lcom/kwad/library/solder/lib/a/f;
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/library/solder/lib/i;->afC:Lcom/kwad/library/solder/lib/j;

    if-nez v0, :cond_0

    move-object v0, v1

    :cond_0
    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->a(Lcom/kwad/library/solder/lib/a/e;)Lcom/kwad/library/solder/lib/a/f;

    move-result-object p1

    invoke-virtual {v1, p1, p2}, Lcom/kwad/library/solder/lib/j;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/j$a;)Lcom/kwad/library/solder/lib/a/f;

    move-result-object p1

    return-object p1

    :cond_1
    new-instance p1, Ljava/lang/RuntimeException;

    const-string p2, "Sodler has not yet been init."

    invoke-direct {p1, p2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final a(Lcom/kwad/library/solder/lib/a/f;I)Lcom/kwad/library/solder/lib/i$a;
    .locals 0

    const/16 p2, 0x10

    invoke-static {p0, p2}, Lcom/kwad/library/solder/lib/j$a;->a(Lcom/kwad/library/solder/lib/a/e;I)Lcom/kwad/library/solder/lib/j$a;

    move-result-object p2

    invoke-direct {p0, p1, p2}, Lcom/kwad/library/solder/lib/i;->b(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/j$a;)Lcom/kwad/library/solder/lib/i$a;

    move-result-object p1

    return-object p1
.end method

.method public final declared-synchronized a(Landroid/content/Context;Lcom/kwad/library/solder/lib/ext/c;)V
    .locals 8

    monitor-enter p0

    :try_start_0
    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-nez v0, :cond_0

    new-instance v2, Lcom/kwad/library/solder/lib/d;

    invoke-direct {v2, p1}, Lcom/kwad/library/solder/lib/d;-><init>(Landroid/content/Context;)V

    new-instance v3, Lcom/kwad/library/solder/lib/e;

    invoke-direct {v3, p1}, Lcom/kwad/library/solder/lib/e;-><init>(Landroid/content/Context;)V

    new-instance v4, Lcom/kwad/library/solder/lib/c;

    invoke-direct {v4, p1, p2}, Lcom/kwad/library/solder/lib/c;-><init>(Landroid/content/Context;Lcom/kwad/library/solder/lib/ext/c;)V

    new-instance v5, Lcom/kwad/library/solder/lib/b;

    invoke-direct {v5}, Lcom/kwad/library/solder/lib/b;-><init>()V

    invoke-static {}, Lcom/kwad/library/solder/lib/i;->wc()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/library/solder/lib/i;->afD:Ljava/util/concurrent/ExecutorService;

    new-instance p1, Lcom/kwad/library/solder/lib/j;

    new-instance v7, Lcom/kwad/library/solder/lib/ext/a;

    invoke-direct {v7}, Lcom/kwad/library/solder/lib/ext/a;-><init>()V

    move-object v1, p1

    move-object v6, p2

    invoke-direct/range {v1 .. v7}, Lcom/kwad/library/solder/lib/j;-><init>(Lcom/kwad/library/solder/lib/a/d;Lcom/kwad/library/solder/lib/a/g;Lcom/kwad/library/solder/lib/a/c;Lcom/kwad/library/solder/lib/a/b;Lcom/kwad/library/solder/lib/ext/c;Lcom/kwad/library/solder/lib/ext/a;)V

    iput-object p1, p0, Lcom/kwad/library/solder/lib/i;->afC:Lcom/kwad/library/solder/lib/j;

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    invoke-direct {p0}, Lcom/kwad/library/solder/lib/i;->wj()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final l(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/kwad/library/solder/lib/i;->bC(Ljava/lang/String;)Lcom/kwad/library/solder/lib/i$a;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/i$a;->cancel()V

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/library/solder/lib/i;->a(Ljava/lang/String;Lcom/kwad/library/solder/lib/i$a;)V

    return-void
.end method

.method public final wd()Lcom/kwad/library/solder/lib/ext/c;
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/library/solder/lib/i;->afC:Lcom/kwad/library/solder/lib/j;

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/j;->wd()Lcom/kwad/library/solder/lib/ext/c;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "Sodler has not yet been init."

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final we()Lcom/kwad/library/solder/lib/a/d;
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/library/solder/lib/i;->afC:Lcom/kwad/library/solder/lib/j;

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/j;->we()Lcom/kwad/library/solder/lib/a/d;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "Sodler has not yet been init."

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final wf()Lcom/kwad/library/solder/lib/a/g;
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/library/solder/lib/i;->afC:Lcom/kwad/library/solder/lib/j;

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/j;->wf()Lcom/kwad/library/solder/lib/a/g;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "Sodler has not yet been init."

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final wg()Lcom/kwad/library/solder/lib/a/c;
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/library/solder/lib/i;->afC:Lcom/kwad/library/solder/lib/j;

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/j;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "Sodler has not yet been init."

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final wh()Lcom/kwad/library/solder/lib/a/b;
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/library/solder/lib/i;->afC:Lcom/kwad/library/solder/lib/j;

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/j;->wh()Lcom/kwad/library/solder/lib/a/b;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "Sodler has not yet been init."

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final wi()Lcom/kwad/library/solder/lib/ext/a;
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/i;->mHasInit:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/library/solder/lib/i;->afC:Lcom/kwad/library/solder/lib/j;

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/j;->wi()Lcom/kwad/library/solder/lib/ext/a;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "Sodler has not yet been init."

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method
