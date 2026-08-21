.class public Lcom/tkay/expressad/foundation/g/f/j;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/foundation/g/f/j$a;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Landroid/content/Context;

.field private c:Lcom/tkay/expressad/foundation/g/f/c;

.field private d:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/tkay/expressad/foundation/g/f/i;",
            ">;"
        }
    .end annotation
.end field

.field private e:Ljava/util/concurrent/ExecutorService;

.field private f:Ljava/util/concurrent/atomic/AtomicInteger;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 16
    const-class v0, Lcom/tkay/expressad/foundation/g/f/j;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/g/f/j;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 8

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/f/j;->d:Ljava/util/Set;

    .line 22
    new-instance v0, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v6, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v7, Ljava/util/concurrent/SynchronousQueue;

    invoke-direct {v7}, Ljava/util/concurrent/SynchronousQueue;-><init>()V

    const/4 v2, 0x0

    const v3, 0x7fffffff

    const-wide/16 v4, 0x3c

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/f/j;->e:Ljava/util/concurrent/ExecutorService;

    .line 26
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/f/j;->f:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 29
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/j;->b:Landroid/content/Context;

    .line 30
    new-instance p1, Lcom/tkay/expressad/foundation/g/f/d;

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    invoke-direct {p1, v0}, Lcom/tkay/expressad/foundation/g/f/d;-><init>(Landroid/os/Handler;)V

    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/j;->c:Lcom/tkay/expressad/foundation/g/f/c;

    return-void
.end method

.method private a()I
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/j;->f:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    move-result v0

    return v0
.end method

.method static synthetic a(Lcom/tkay/expressad/foundation/g/f/j;)Landroid/content/Context;
    .locals 0

    .line 15
    iget-object p0, p0, Lcom/tkay/expressad/foundation/g/f/j;->b:Landroid/content/Context;

    return-object p0
.end method

.method private a(Lcom/tkay/expressad/foundation/g/f/j$a;)V
    .locals 3

    .line 42
    monitor-enter p0

    .line 43
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/j;->d:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/g/f/i;

    .line 44
    invoke-interface {p1, v1}, Lcom/tkay/expressad/foundation/g/f/j$a;->a(Lcom/tkay/expressad/foundation/g/f/i;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 45
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/g/f/i;->e()V

    goto :goto_0

    .line 48
    :cond_1
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private a(Ljava/lang/Object;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 55
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/j$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/foundation/g/f/j$1;-><init>(Lcom/tkay/expressad/foundation/g/f/j;Ljava/lang/Object;)V

    invoke-direct {p0, v0}, Lcom/tkay/expressad/foundation/g/f/j;->a(Lcom/tkay/expressad/foundation/g/f/j$a;)V

    return-void

    .line 53
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "Cannot cancelAll with a null tag"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method static synthetic b(Lcom/tkay/expressad/foundation/g/f/j;)Lcom/tkay/expressad/foundation/g/f/c;
    .locals 0

    .line 15
    iget-object p0, p0, Lcom/tkay/expressad/foundation/g/f/j;->c:Lcom/tkay/expressad/foundation/g/f/c;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/foundation/g/f/i;)V
    .locals 2

    .line 64
    invoke-virtual {p1, p0}, Lcom/tkay/expressad/foundation/g/f/i;->a(Lcom/tkay/expressad/foundation/g/f/j;)Lcom/tkay/expressad/foundation/g/f/i;

    .line 66
    monitor-enter p0

    .line 67
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/j;->d:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 68
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1034
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/j;->f:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    move-result v0

    .line 69
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/g/f/i;->a(I)Lcom/tkay/expressad/foundation/g/f/i;

    .line 71
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/j;->e:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/tkay/expressad/foundation/g/f/j$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/foundation/g/f/j$2;-><init>(Lcom/tkay/expressad/foundation/g/f/j;Lcom/tkay/expressad/foundation/g/f/i;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void

    :catchall_0
    move-exception p1

    .line 68
    monitor-exit p0

    throw p1
.end method

.method final b(Lcom/tkay/expressad/foundation/g/f/i;)V
    .locals 1

    .line 83
    monitor-enter p0

    .line 84
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/j;->d:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 85
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
