.class public final Lcom/loc/cq;
.super Ljava/lang/Object;
.source "BasicThreadFactory.java"

# interfaces
.implements Ljava/util/concurrent/ThreadFactory;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/cq$a;
    }
.end annotation


# static fields
.field private static final k:I

.field private static final l:I

.field private static final m:I


# instance fields
.field private final a:Ljava/util/concurrent/atomic/AtomicLong;

.field private final b:Ljava/util/concurrent/ThreadFactory;

.field private final c:Ljava/lang/Thread$UncaughtExceptionHandler;

.field private final d:Ljava/lang/String;

.field private final e:Ljava/lang/Integer;

.field private final f:Ljava/lang/Boolean;

.field private final g:I

.field private final h:I

.field private final i:Ljava/util/concurrent/BlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/BlockingQueue<",
            "Ljava/lang/Runnable;",
            ">;"
        }
    .end annotation
.end field

.field private final j:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Runtime;->availableProcessors()I

    move-result v0

    sput v0, Lcom/loc/cq;->k:I

    add-int/lit8 v0, v0, -0x1

    const/4 v1, 0x4

    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result v0

    const/4 v1, 0x2

    invoke-static {v1, v0}, Ljava/lang/Math;->max(II)I

    move-result v0

    sput v0, Lcom/loc/cq;->l:I

    sget v0, Lcom/loc/cq;->k:I

    mul-int/lit8 v0, v0, 0x2

    add-int/lit8 v0, v0, 0x1

    sput v0, Lcom/loc/cq;->m:I

    return-void
.end method

.method private constructor <init>(Lcom/loc/cq$a;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {p1}, Lcom/loc/cq$a;->a(Lcom/loc/cq$a;)Ljava/util/concurrent/ThreadFactory;

    move-result-object v0

    if-nez v0, :cond_0

    invoke-static {}, Ljava/util/concurrent/Executors;->defaultThreadFactory()Ljava/util/concurrent/ThreadFactory;

    move-result-object v0

    goto :goto_0

    :cond_0
    invoke-static {p1}, Lcom/loc/cq$a;->a(Lcom/loc/cq$a;)Ljava/util/concurrent/ThreadFactory;

    move-result-object v0

    :goto_0
    iput-object v0, p0, Lcom/loc/cq;->b:Ljava/util/concurrent/ThreadFactory;

    invoke-static {p1}, Lcom/loc/cq$a;->b(Lcom/loc/cq$a;)I

    move-result v0

    iput v0, p0, Lcom/loc/cq;->g:I

    sget v1, Lcom/loc/cq;->m:I

    iput v1, p0, Lcom/loc/cq;->h:I

    if-lt v1, v0, :cond_3

    invoke-static {p1}, Lcom/loc/cq$a;->c(Lcom/loc/cq$a;)I

    move-result v0

    iput v0, p0, Lcom/loc/cq;->j:I

    invoke-static {p1}, Lcom/loc/cq$a;->d(Lcom/loc/cq$a;)Ljava/util/concurrent/BlockingQueue;

    move-result-object v0

    if-nez v0, :cond_1

    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    const/16 v1, 0x100

    invoke-direct {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>(I)V

    goto :goto_1

    :cond_1
    invoke-static {p1}, Lcom/loc/cq$a;->d(Lcom/loc/cq$a;)Ljava/util/concurrent/BlockingQueue;

    move-result-object v0

    :goto_1
    iput-object v0, p0, Lcom/loc/cq;->i:Ljava/util/concurrent/BlockingQueue;

    invoke-static {p1}, Lcom/loc/cq$a;->e(Lcom/loc/cq$a;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "amap-threadpool"

    goto :goto_2

    :cond_2
    invoke-static {p1}, Lcom/loc/cq$a;->e(Lcom/loc/cq$a;)Ljava/lang/String;

    move-result-object v0

    :goto_2
    iput-object v0, p0, Lcom/loc/cq;->d:Ljava/lang/String;

    invoke-static {p1}, Lcom/loc/cq$a;->f(Lcom/loc/cq$a;)Ljava/lang/Integer;

    move-result-object v0

    iput-object v0, p0, Lcom/loc/cq;->e:Ljava/lang/Integer;

    invoke-static {p1}, Lcom/loc/cq$a;->g(Lcom/loc/cq$a;)Ljava/lang/Boolean;

    move-result-object v0

    iput-object v0, p0, Lcom/loc/cq;->f:Ljava/lang/Boolean;

    invoke-static {p1}, Lcom/loc/cq$a;->h(Lcom/loc/cq$a;)Ljava/lang/Thread$UncaughtExceptionHandler;

    move-result-object p1

    iput-object p1, p0, Lcom/loc/cq;->c:Ljava/lang/Thread$UncaughtExceptionHandler;

    new-instance p1, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-direct {p1}, Ljava/util/concurrent/atomic/AtomicLong;-><init>()V

    iput-object p1, p0, Lcom/loc/cq;->a:Ljava/util/concurrent/atomic/AtomicLong;

    return-void

    :cond_3
    new-instance p1, Ljava/lang/NullPointerException;

    const-string v0, "maxPoolSize must > corePoolSize!"

    invoke-direct {p1, v0}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method synthetic constructor <init>(Lcom/loc/cq$a;B)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/cq;-><init>(Lcom/loc/cq$a;)V

    return-void
.end method

.method static synthetic e()I
    .locals 1

    sget v0, Lcom/loc/cq;->l:I

    return v0
.end method

.method static synthetic f()I
    .locals 1

    sget v0, Lcom/loc/cq;->m:I

    return v0
.end method

.method private g()Ljava/util/concurrent/ThreadFactory;
    .locals 1

    iget-object v0, p0, Lcom/loc/cq;->b:Ljava/util/concurrent/ThreadFactory;

    return-object v0
.end method

.method private h()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/cq;->d:Ljava/lang/String;

    return-object v0
.end method

.method private i()Ljava/lang/Boolean;
    .locals 1

    iget-object v0, p0, Lcom/loc/cq;->f:Ljava/lang/Boolean;

    return-object v0
.end method

.method private j()Ljava/lang/Integer;
    .locals 1

    iget-object v0, p0, Lcom/loc/cq;->e:Ljava/lang/Integer;

    return-object v0
.end method

.method private k()Ljava/lang/Thread$UncaughtExceptionHandler;
    .locals 1

    iget-object v0, p0, Lcom/loc/cq;->c:Ljava/lang/Thread$UncaughtExceptionHandler;

    return-object v0
.end method


# virtual methods
.method public final a()I
    .locals 1

    iget v0, p0, Lcom/loc/cq;->g:I

    return v0
.end method

.method public final b()I
    .locals 1

    iget v0, p0, Lcom/loc/cq;->h:I

    return v0
.end method

.method public final c()Ljava/util/concurrent/BlockingQueue;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/concurrent/BlockingQueue<",
            "Ljava/lang/Runnable;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/loc/cq;->i:Ljava/util/concurrent/BlockingQueue;

    return-object v0
.end method

.method public final d()I
    .locals 1

    iget v0, p0, Lcom/loc/cq;->j:I

    return v0
.end method

.method public final newThread(Ljava/lang/Runnable;)Ljava/lang/Thread;
    .locals 4

    new-instance v0, Lcom/loc/cq$1;

    invoke-direct {v0, p0, p1}, Lcom/loc/cq$1;-><init>(Lcom/loc/cq;Ljava/lang/Runnable;)V

    invoke-direct {p0}, Lcom/loc/cq;->g()Ljava/util/concurrent/ThreadFactory;

    move-result-object v0

    invoke-interface {v0, p1}, Ljava/util/concurrent/ThreadFactory;->newThread(Ljava/lang/Runnable;)Ljava/lang/Thread;

    move-result-object p1

    invoke-direct {p0}, Lcom/loc/cq;->h()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/cq;->a:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->incrementAndGet()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {p0}, Lcom/loc/cq;->h()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "-%d"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object v0, v2, v3

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Thread;->setName(Ljava/lang/String;)V

    :cond_0
    invoke-direct {p0}, Lcom/loc/cq;->k()Ljava/lang/Thread$UncaughtExceptionHandler;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/loc/cq;->k()Ljava/lang/Thread$UncaughtExceptionHandler;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Thread;->setUncaughtExceptionHandler(Ljava/lang/Thread$UncaughtExceptionHandler;)V

    :cond_1
    invoke-direct {p0}, Lcom/loc/cq;->j()Ljava/lang/Integer;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-direct {p0}, Lcom/loc/cq;->j()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/Thread;->setPriority(I)V

    :cond_2
    invoke-direct {p0}, Lcom/loc/cq;->i()Ljava/lang/Boolean;

    move-result-object v0

    if-eqz v0, :cond_3

    invoke-direct {p0}, Lcom/loc/cq;->i()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/Thread;->setDaemon(Z)V

    :cond_3
    return-object p1
.end method
