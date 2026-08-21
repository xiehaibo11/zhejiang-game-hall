.class public final Lcom/loc/cr;
.super Lcom/loc/ct;
.source "ThreadPool.java"


# static fields
.field private static c:Lcom/loc/cr;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/loc/cr;

    new-instance v1, Lcom/loc/cq$a;

    invoke-direct {v1}, Lcom/loc/cq$a;-><init>()V

    const-string v2, "amap-global-threadPool"

    invoke-virtual {v1, v2}, Lcom/loc/cq$a;->a(Ljava/lang/String;)Lcom/loc/cq$a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/loc/cq$a;->a()Lcom/loc/cq;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/loc/cr;-><init>(Lcom/loc/cq;)V

    sput-object v0, Lcom/loc/cr;->c:Lcom/loc/cr;

    return-void
.end method

.method private constructor <init>(Lcom/loc/cq;)V
    .locals 9

    invoke-direct {p0}, Lcom/loc/ct;-><init>()V

    :try_start_0
    new-instance v8, Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {p1}, Lcom/loc/cq;->a()I

    move-result v1

    invoke-virtual {p1}, Lcom/loc/cq;->b()I

    move-result v2

    invoke-virtual {p1}, Lcom/loc/cq;->d()I

    move-result v0

    int-to-long v3, v0

    sget-object v5, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {p1}, Lcom/loc/cq;->c()Ljava/util/concurrent/BlockingQueue;

    move-result-object v6

    move-object v0, v8

    move-object v7, p1

    invoke-direct/range {v0 .. v7}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V

    iput-object v8, p0, Lcom/loc/cr;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    iget-object p1, p0, Lcom/loc/cr;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->allowCoreThreadTimeOut(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    const-string v0, "TPool"

    const-string v1, "ThreadPool"

    invoke-static {p1, v0, v1}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public static a()Lcom/loc/cr;
    .locals 1

    sget-object v0, Lcom/loc/cr;->c:Lcom/loc/cr;

    return-object v0
.end method
