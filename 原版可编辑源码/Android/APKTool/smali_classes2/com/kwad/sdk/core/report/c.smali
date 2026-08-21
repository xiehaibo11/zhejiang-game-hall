.class public abstract Lcom/kwad/sdk/core/report/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Lcom/kwad/sdk/core/report/g;",
        "R::",
        "Lcom/kwad/sdk/core/network/g;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# static fields
.field private static aqF:Ljava/util/concurrent/ExecutorService;

.field private static volatile mHandler:Landroid/os/Handler;


# instance fields
.field private volatile aqD:J

.field private aqE:Lcom/kwad/sdk/core/report/o;

.field private aqG:Ljava/util/concurrent/atomic/AtomicInteger;

.field private aqH:I

.field private aqI:Lcom/kwad/sdk/core/report/g;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field

.field private mContext:Landroid/content/Context;

.field private mRetryCount:Ljava/util/concurrent/atomic/AtomicInteger;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method protected constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/32 v0, 0x1d4c0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/c;->aqD:J

    new-instance v0, Lcom/kwad/sdk/core/report/q;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/q;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/c;->aqE:Lcom/kwad/sdk/core/report/o;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/c;->aqG:Ljava/util/concurrent/atomic/AtomicInteger;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/c;->mRetryCount:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v0, 0x5

    iput v0, p0, Lcom/kwad/sdk/core/report/c;->aqH:I

    sget-object v0, Lcom/kwad/sdk/core/report/c;->aqF:Ljava/util/concurrent/ExecutorService;

    if-nez v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->CU()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/report/c;->aqF:Ljava/util/concurrent/ExecutorService;

    :cond_0
    return-void
.end method

.method private BQ()Z
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/report/c;->mRetryCount:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/16 v1, 0x10

    if-le v0, v1, :cond_0

    move v0, v1

    :cond_0
    const-class v1, Lcom/kwad/sdk/core/report/w;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/report/w;

    if-eqz v1, :cond_1

    invoke-interface {v1}, Lcom/kwad/sdk/core/report/w;->xr()I

    move-result v1

    shl-int v0, v1, v0

    int-to-long v0, v0

    goto :goto_0

    :cond_1
    const-wide/16 v0, 0x14

    :goto_0
    iget-object v2, p0, Lcom/kwad/sdk/core/report/c;->aqE:Lcom/kwad/sdk/core/report/o;

    invoke-interface {v2}, Lcom/kwad/sdk/core/report/o;->size()J

    move-result-wide v2

    cmp-long v0, v2, v0

    if-ltz v0, :cond_2

    const/4 v0, 0x1

    return v0

    :cond_2
    const/4 v0, 0x0

    return v0
.end method

.method private BS()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/report/c;->mRetryCount:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->getAndIncrement()I

    move-result v0

    iget v1, p0, Lcom/kwad/sdk/core/report/c;->aqH:I

    if-gt v0, v1, :cond_1

    if-lez v0, :cond_0

    iget-wide v0, p0, Lcom/kwad/sdk/core/report/c;->aqD:J

    const-wide/16 v2, 0x2

    mul-long/2addr v0, v2

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/c;->aqD:J

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/core/report/c;->aqD:J

    invoke-direct {p0, v0, v1}, Lcom/kwad/sdk/core/report/c;->ae(J)V

    :cond_1
    return-void
.end method

.method static synthetic BT()Ljava/util/concurrent/ExecutorService;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/report/c;->aqF:Ljava/util/concurrent/ExecutorService;

    return-object v0
.end method

.method static synthetic a(Lcom/kwad/sdk/core/report/c;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/core/report/c;->aqD:J

    return-wide v0
.end method

.method static synthetic a(Lcom/kwad/sdk/core/report/c;Lcom/kwad/sdk/core/report/g;)Lcom/kwad/sdk/core/report/g;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/c;->aqI:Lcom/kwad/sdk/core/report/g;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/sdk/core/report/c;J)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/report/c;->ae(J)V

    return-void
.end method

.method private declared-synchronized ae(J)V
    .locals 5

    monitor-enter p0

    :try_start_0
    sget-object v0, Lcom/kwad/sdk/core/report/c;->mHandler:Landroid/os/Handler;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    sget-object v0, Lcom/kwad/sdk/core/report/c;->mHandler:Landroid/os/Handler;

    const v1, 0x1010111

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    sget-object v0, Lcom/kwad/sdk/core/report/c;->mHandler:Landroid/os/Handler;

    iget-object v2, p0, Lcom/kwad/sdk/core/report/c;->mContext:Landroid/content/Context;

    iget-object v3, p0, Lcom/kwad/sdk/core/report/c;->aqE:Lcom/kwad/sdk/core/report/o;

    iget-object v4, p0, Lcom/kwad/sdk/core/report/c;->aqG:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p0, v2, v3, v4}, Lcom/kwad/sdk/core/report/c;->a(Landroid/content/Context;Lcom/kwad/sdk/core/report/o;Ljava/util/concurrent/atomic/AtomicInteger;)Ljava/lang/Runnable;

    move-result-object v2

    invoke-static {v0, v2}, Landroid/os/Message;->obtain(Landroid/os/Handler;Ljava/lang/Runnable;)Landroid/os/Message;

    move-result-object v0

    iput v1, v0, Landroid/os/Message;->what:I

    sget-object v1, Lcom/kwad/sdk/core/report/c;->mHandler:Landroid/os/Handler;

    invoke-virtual {v1, v0, p1, p2}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic b(Lcom/kwad/sdk/core/report/c;)Lcom/kwad/sdk/core/report/o;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/report/c;->aqE:Lcom/kwad/sdk/core/report/o;

    return-object p0
.end method

.method private c(Lcom/kwad/sdk/core/report/n;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/report/n<",
            "TT;>;)V"
        }
    .end annotation

    new-instance v0, Lcom/kwad/sdk/core/report/c$4;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/report/c$4;-><init>(Lcom/kwad/sdk/core/report/c;Lcom/kwad/sdk/core/report/n;)V

    new-instance p1, Lcom/kwad/sdk/core/report/c$5;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/core/report/c$5;-><init>(Lcom/kwad/sdk/core/report/c;)V

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/sdk/core/report/c;)Z
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/c;->BQ()Z

    move-result p0

    return p0
.end method

.method static synthetic d(Lcom/kwad/sdk/core/report/c;)Ljava/util/concurrent/atomic/AtomicInteger;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/report/c;->aqG:Ljava/util/concurrent/atomic/AtomicInteger;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/sdk/core/report/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/c;->BS()V

    return-void
.end method

.method static synthetic f(Lcom/kwad/sdk/core/report/c;)Lcom/kwad/sdk/core/report/g;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/report/c;->aqI:Lcom/kwad/sdk/core/report/g;

    return-object p0
.end method

.method static synthetic vW()Landroid/os/Handler;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/report/c;->mHandler:Landroid/os/Handler;

    return-object v0
.end method


# virtual methods
.method public final BR()V
    .locals 2

    const-wide/16 v0, 0x0

    invoke-direct {p0, v0, v1}, Lcom/kwad/sdk/core/report/c;->ae(J)V

    return-void
.end method

.method protected a(Lcom/kwad/sdk/core/report/g;)Lcom/kwad/sdk/core/network/g;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)TR;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/report/c;->s(Ljava/util/List;)Lcom/kwad/sdk/core/network/g;

    move-result-object p1

    return-object p1
.end method

.method protected a(Landroid/content/Context;Lcom/kwad/sdk/core/report/o;Ljava/util/concurrent/atomic/AtomicInteger;)Ljava/lang/Runnable;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/kwad/sdk/core/report/o<",
            "TT;>;",
            "Ljava/util/concurrent/atomic/AtomicInteger;",
            ")",
            "Ljava/lang/Runnable;"
        }
    .end annotation

    new-instance v0, Lcom/kwad/sdk/core/report/aa;

    invoke-direct {v0, p1, p2, p0, p3}, Lcom/kwad/sdk/core/report/aa;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/report/o;Lcom/kwad/sdk/core/report/c;Ljava/util/concurrent/atomic/AtomicInteger;)V

    return-object v0
.end method

.method public final a(Lcom/kwad/sdk/core/report/n;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/report/n<",
            "TT;>;)V"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/core/report/c;->aqF:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/kwad/sdk/core/report/c$1;

    invoke-direct {v1, p0, p1}, Lcom/kwad/sdk/core/report/c$1;-><init>(Lcom/kwad/sdk/core/report/c;Lcom/kwad/sdk/core/report/n;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method protected final a(Lcom/kwad/sdk/core/report/o;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/c;->aqE:Lcom/kwad/sdk/core/report/o;

    return-void
.end method

.method public final a(Ljava/util/List;Ljava/util/concurrent/atomic/AtomicBoolean;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "TT;>;",
            "Ljava/util/concurrent/atomic/AtomicBoolean;",
            ")V"
        }
    .end annotation

    if-eqz p1, :cond_0

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/report/c;->aqG:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->getAndIncrement()I

    new-instance v0, Lcom/kwad/sdk/core/report/c$2;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/report/c$2;-><init>(Lcom/kwad/sdk/core/report/c;Ljava/util/List;)V

    new-instance v1, Lcom/kwad/sdk/core/report/c$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/kwad/sdk/core/report/c$3;-><init>(Lcom/kwad/sdk/core/report/c;Ljava/util/List;Ljava/util/concurrent/atomic/AtomicBoolean;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    :cond_0
    return-void
.end method

.method protected final ad(J)V
    .locals 2

    const-wide/16 v0, 0x3c

    cmp-long v0, p1, v0

    if-gez v0, :cond_0

    const-wide/32 p1, 0xea60

    :goto_0
    iput-wide p1, p0, Lcom/kwad/sdk/core/report/c;->aqD:J

    return-void

    :cond_0
    const-wide/16 v0, 0x3e8

    mul-long/2addr p1, v0

    goto :goto_0
.end method

.method public final b(Lcom/kwad/sdk/core/report/n;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/report/n<",
            "TT;>;)V"
        }
    .end annotation

    :try_start_0
    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/report/c;->c(Lcom/kwad/sdk/core/report/n;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    const-class v0, Lcom/kwad/sdk/service/a/d;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/d;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    return-void
.end method

.method public declared-synchronized i(Landroid/content/Context;I)V
    .locals 0

    monitor-enter p0

    :try_start_0
    iput-object p1, p0, Lcom/kwad/sdk/core/report/c;->mContext:Landroid/content/Context;

    sget-object p1, Lcom/kwad/sdk/core/report/c;->mHandler:Landroid/os/Handler;

    if-nez p1, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/threads/a;->CO()Landroid/os/Handler;

    move-result-object p1

    sput-object p1, Lcom/kwad/sdk/core/report/c;->mHandler:Landroid/os/Handler;
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

.method protected abstract s(Ljava/util/List;)Lcom/kwad/sdk/core/network/g;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "TT;>;)TR;"
        }
    .end annotation
.end method
