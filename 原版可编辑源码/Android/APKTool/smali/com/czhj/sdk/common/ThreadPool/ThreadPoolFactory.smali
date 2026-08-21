.class public Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;
    }
.end annotation


# static fields
.field private static final a:I

.field private static final b:Ljava/util/concurrent/TimeUnit;

.field private static c:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Runtime;->availableProcessors()I

    move-result v0

    sput v0, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory;->a:I

    sget-object v0, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    sput-object v0, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory;->b:Ljava/util/concurrent/TimeUnit;

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory;->c:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static MainThreadRun(Ljava/lang/Runnable;)V
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory;->c:Landroid/os/Handler;

    invoke-virtual {v0, p0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic a()I
    .locals 1

    sget v0, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory;->a:I

    return v0
.end method

.method static synthetic b()Ljava/util/concurrent/TimeUnit;
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory;->b:Ljava/util/concurrent/TimeUnit;

    return-object v0
.end method
