.class public Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;
.super Ljava/lang/Object;
.source "SelectEventTimer.java"


# static fields
.field public static volatile eventTimer:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;


# instance fields
.field public callback:Lcom/bianfeng/datafunsdk/a;

.field public isStart:Z

.field public period:J

.field public timer:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const-wide/32 v0, 0x493e0

    iput-wide v0, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->period:J

    .line 4
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->isStart:Z

    return-void
.end method

.method public static synthetic access$000(Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;)Lcom/bianfeng/datafunsdk/a;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->callback:Lcom/bianfeng/datafunsdk/a;

    return-object p0
.end method

.method public static getInstance()Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->eventTimer:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->eventTimer:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    invoke-direct {v1}, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;-><init>()V

    sput-object v1, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->eventTimer:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    .line 6
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 8
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->eventTimer:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    return-object v0
.end method


# virtual methods
.method public cancel()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->timer:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 2
    iput-boolean v1, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->isStart:Z

    .line 3
    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->onRemove()V

    const/4 v0, 0x0

    .line 4
    iput-object v0, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->timer:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    .line 5
    const-string v0, "SelectEventTimer  \u53d6\u6d88"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public setCallback(Lcom/bianfeng/datafunsdk/a;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->callback:Lcom/bianfeng/datafunsdk/a;

    return-void
.end method

.method public start()V
    .locals 5

    .line 1
    :try_start_0
    iget-boolean v0, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->isStart:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const-string v0, "SelectEventTimer start"

    .line 4
    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 5
    new-instance v0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    invoke-direct {v0}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->timer:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    .line 6
    new-instance v1, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer$a;

    invoke-direct {v1, p0}, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer$a;-><init>(Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->addCallback(Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;)V

    .line 12
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->timer:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    sget-object v1, Lcom/bianfeng/datafunsdk/timer/LoopType;->ZENGDINGSHI:Lcom/bianfeng/datafunsdk/timer/LoopType;

    invoke-virtual {v0, v1}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->setloopType(Lcom/bianfeng/datafunsdk/timer/LoopType;)V

    .line 13
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->timer:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/16 v1, 0x3e8

    const-string v2, ""

    :try_start_1
    iget-wide v3, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->period:J

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->start(ILjava/lang/String;J)V

    const/4 v0, 0x1

    .line 14
    iput-boolean v0, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->isStart:Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    .line 16
    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
