.class public final Lcom/tramini/plugin/a/g/b/a;
.super Ljava/lang/Object;


# static fields
.field private static a:Lcom/tramini/plugin/a/g/b/a;


# instance fields
.field private b:Ljava/util/concurrent/ExecutorService;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method protected constructor <init>()V
    .locals 8

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 26
    iput-object v0, p0, Lcom/tramini/plugin/a/g/b/a;->b:Ljava/util/concurrent/ExecutorService;

    .line 30
    new-instance v0, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v6, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v7, Ljava/util/concurrent/SynchronousQueue;

    invoke-direct {v7}, Ljava/util/concurrent/SynchronousQueue;-><init>()V

    const/4 v2, 0x0

    const/16 v3, 0x32

    const-wide/16 v4, 0x3c

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V

    iput-object v0, p0, Lcom/tramini/plugin/a/g/b/a;->b:Ljava/util/concurrent/ExecutorService;

    return-void
.end method

.method public static a()Lcom/tramini/plugin/a/g/b/a;
    .locals 1

    .line 36
    sget-object v0, Lcom/tramini/plugin/a/g/b/a;->a:Lcom/tramini/plugin/a/g/b/a;

    if-nez v0, :cond_0

    .line 37
    new-instance v0, Lcom/tramini/plugin/a/g/b/a;

    invoke-direct {v0}, Lcom/tramini/plugin/a/g/b/a;-><init>()V

    sput-object v0, Lcom/tramini/plugin/a/g/b/a;->a:Lcom/tramini/plugin/a/g/b/a;

    .line 39
    :cond_0
    sget-object v0, Lcom/tramini/plugin/a/g/b/a;->a:Lcom/tramini/plugin/a/g/b/a;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/tramini/plugin/a/g/b/b;)V
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/tramini/plugin/a/g/b/a;->b:Ljava/util/concurrent/ExecutorService;

    invoke-interface {v0, p1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Ljava/lang/Runnable;)V
    .locals 2

    const-wide/16 v0, 0x0

    .line 47
    invoke-virtual {p0, p1, v0, v1}, Lcom/tramini/plugin/a/g/b/a;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method public final a(Ljava/lang/Runnable;J)V
    .locals 3

    if-eqz p1, :cond_0

    .line 52
    new-instance v0, Lcom/tramini/plugin/a/g/b/a$1;

    invoke-direct {v0, p0, p2, p3, p1}, Lcom/tramini/plugin/a/g/b/a$1;-><init>(Lcom/tramini/plugin/a/g/b/a;JLjava/lang/Runnable;)V

    .line 64
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    const-wide/16 v1, 0x3e8

    div-long/2addr p1, v1

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->intValue()I

    move-result p1

    invoke-virtual {v0, p1}, Lcom/tramini/plugin/a/g/b/b;->a(I)V

    .line 65
    invoke-virtual {p0, v0}, Lcom/tramini/plugin/a/g/b/a;->a(Lcom/tramini/plugin/a/g/b/b;)V

    :cond_0
    return-void
.end method
