.class public Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;
.super Ljava/lang/Object;
.source "TimeoutTimerUtils.java"


# static fields
.field static callback:Lcom/ymnsdk/replugin/download/TimerCallback; = null

.field private static handler:Landroid/os/Handler; = null

.field private static volatile isNotDingshiIng:Z = true

.field static message:Landroid/os/Message;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 17
    new-instance v0, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils$1;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;->handler:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$002(Z)Z
    .locals 0

    .line 13
    sput-boolean p0, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;->isNotDingshiIng:Z

    return p0
.end method

.method public static clearTimer()V
    .locals 2

    .line 44
    sget-object v0, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;->message:Landroid/os/Message;

    if-eqz v0, :cond_0

    .line 46
    sget-object v1, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;->handler:Landroid/os/Handler;

    iget v0, v0, Landroid/os/Message;->what:I

    invoke-virtual {v1, v0}, Landroid/os/Handler;->removeMessages(I)V

    const/4 v0, 0x1

    .line 47
    sput-boolean v0, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;->isNotDingshiIng:Z

    :cond_0
    return-void
.end method

.method public static sendMsg(J)V
    .locals 4

    .line 33
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "TimerUtils sendMsg"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, "--->"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v3, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;->isNotDingshiIng:Z

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "ymn"

    invoke-static {v3, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 34
    sget-boolean v0, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;->isNotDingshiIng:Z

    if-eqz v0, :cond_0

    .line 35
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v1, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;->isNotDingshiIng:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    .line 36
    sput-boolean v0, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;->isNotDingshiIng:Z

    .line 37
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    sput-object v0, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;->message:Landroid/os/Message;

    .line 38
    sget-object v1, Lcom/ymnsdk/replugin/util/TimeoutTimerUtils;->handler:Landroid/os/Handler;

    invoke-virtual {v1, v0, p0, p1}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    :cond_0
    return-void
.end method

.method public static setCallback(Lcom/ymnsdk/replugin/download/TimerCallback;)V
    .locals 0

    .line 29
    sput-object p0, Lcom/ymnsdk/replugin/util/CallbackTimerUtils;->callback:Lcom/ymnsdk/replugin/download/TimerCallback;

    return-void
.end method
