.class public Lcom/tkay/core/common/j/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/j/a;


# static fields
.field private static final a:Ljava/lang/String; = "TimeOutHandlerImpl"

.field private static volatile b:Lcom/tkay/core/common/j/c;


# instance fields
.field private final c:Landroid/os/Handler;

.field private final d:Landroid/os/Handler;


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 40
    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "tkay_timeout_handler_thread"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    .line 41
    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    .line 42
    new-instance v1, Landroid/os/Handler;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {v1, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v1, p0, Lcom/tkay/core/common/j/c;->d:Landroid/os/Handler;

    .line 43
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/core/common/j/c;->c:Landroid/os/Handler;

    return-void
.end method

.method private a(Z)Landroid/os/Handler;
    .locals 0

    if-eqz p1, :cond_0

    .line 47
    iget-object p1, p0, Lcom/tkay/core/common/j/c;->c:Landroid/os/Handler;

    return-object p1

    :cond_0
    iget-object p1, p0, Lcom/tkay/core/common/j/c;->d:Landroid/os/Handler;

    return-object p1
.end method

.method public static a()Lcom/tkay/core/common/j/a;
    .locals 2

    .line 30
    sget-object v0, Lcom/tkay/core/common/j/c;->b:Lcom/tkay/core/common/j/c;

    if-nez v0, :cond_1

    .line 31
    const-class v0, Lcom/tkay/core/common/j/c;

    monitor-enter v0

    .line 32
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/j/c;->b:Lcom/tkay/core/common/j/c;

    if-nez v1, :cond_0

    .line 33
    new-instance v1, Lcom/tkay/core/common/j/c;

    invoke-direct {v1}, Lcom/tkay/core/common/j/c;-><init>()V

    sput-object v1, Lcom/tkay/core/common/j/c;->b:Lcom/tkay/core/common/j/c;

    .line 34
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 36
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/j/c;->b:Lcom/tkay/core/common/j/c;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/tkay/core/common/j/b;)V
    .locals 1

    .line 67
    iget-object v0, p0, Lcom/tkay/core/common/j/c;->c:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 68
    invoke-virtual {v0, p1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 70
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/j/c;->d:Landroid/os/Handler;

    if-eqz v0, :cond_1

    .line 71
    invoke-virtual {v0, p1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/core/common/j/b;J)V
    .locals 1

    const/4 v0, 0x1

    .line 52
    invoke-virtual {p0, p1, p2, p3, v0}, Lcom/tkay/core/common/j/c;->a(Lcom/tkay/core/common/j/b;JZ)V

    return-void
.end method

.method public final a(Lcom/tkay/core/common/j/b;JZ)V
    .locals 2

    .line 57
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "sendTimeOutMsg() >>> delayMillis="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " isMainThread="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 58
    invoke-direct {p0, p4}, Lcom/tkay/core/common/j/c;->a(Z)Landroid/os/Handler;

    move-result-object p4

    if-nez p4, :cond_0

    return-void

    .line 62
    :cond_0
    invoke-virtual {p4, p1, p2, p3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method
