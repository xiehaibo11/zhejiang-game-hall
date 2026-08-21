.class public Lcom/bianfeng/datafunsdk/timer/HandlerTimer;
.super Ljava/lang/Object;
.source "HandlerTimer.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;
    }
.end annotation


# instance fields
.field public callback:Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;

.field public handlerCallback:Lcom/bianfeng/datafunsdk/timer/HandlerUtils$HandlerCallback;

.field public i:I

.field public loopType:Lcom/bianfeng/datafunsdk/timer/LoopType;

.field public mCode:I

.field public time:J


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const/4 v0, 0x1

    iput v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->i:I

    .line 4
    new-instance v0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$a;

    invoke-direct {v0, p0}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$a;-><init>(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;)V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->handlerCallback:Lcom/bianfeng/datafunsdk/timer/HandlerUtils$HandlerCallback;

    .line 38
    invoke-static {v0}, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->addHandlerCallback(Lcom/bianfeng/datafunsdk/timer/HandlerUtils$HandlerCallback;)V

    return-void
.end method

.method public static synthetic access$000(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;)I
    .locals 0

    .line 1
    iget p0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->mCode:I

    return p0
.end method

.method public static synthetic access$100(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;)Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->callback:Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;

    return-object p0
.end method

.method public static synthetic access$200(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;)Lcom/bianfeng/datafunsdk/timer/LoopType;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->loopType:Lcom/bianfeng/datafunsdk/timer/LoopType;

    return-object p0
.end method

.method public static synthetic access$300(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;ILjava/lang/String;)V
    .locals 0

    .line 1
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->dingshi(ILjava/lang/String;)V

    return-void
.end method

.method public static synthetic access$400(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;ILjava/lang/String;)V
    .locals 0

    .line 1
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->zengDingshi(ILjava/lang/String;)V

    return-void
.end method

.method private dingshi(ILjava/lang/String;)V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->callback:Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;->onCall(ILjava/lang/String;)V

    .line 2
    iget-wide v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->time:J

    invoke-static {p1, p2, v0, v1}, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->sendMsg(ILjava/lang/String;J)V

    return-void
.end method

.method private zengDingshi(ILjava/lang/String;)V
    .locals 5

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->callback:Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;->onCall(ILjava/lang/String;)V

    .line 2
    iget v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->i:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->i:I

    .line 3
    iget-wide v1, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->time:J

    int-to-long v3, v0

    mul-long v1, v1, v3

    invoke-static {p1, p2, v1, v2}, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->sendMsg(ILjava/lang/String;J)V

    return-void
.end method


# virtual methods
.method public addCallback(Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->callback:Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;

    return-void
.end method

.method public onRemove()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->handlerCallback:Lcom/bianfeng/datafunsdk/timer/HandlerUtils$HandlerCallback;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->remove(Lcom/bianfeng/datafunsdk/timer/HandlerUtils$HandlerCallback;)Z

    .line 2
    iget v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->mCode:I

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->removeMsg(I)V

    return-void
.end method

.method public setloopType(Lcom/bianfeng/datafunsdk/timer/LoopType;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->loopType:Lcom/bianfeng/datafunsdk/timer/LoopType;

    return-void
.end method

.method public start(IJ)V
    .locals 1

    .line 9
    const-string v0, ""

    invoke-virtual {p0, p1, v0, p2, p3}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->start(ILjava/lang/String;J)V

    return-void
.end method

.method public start(ILjava/lang/String;J)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->callback:Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;

    if-nez v0, :cond_0

    .line 2
    const-string p1, "TimeCallback is null"

    invoke-static {p1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    return-void

    :cond_0
    nop

    .line 5
    const-string v0, "HandlerTimer start"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 6
    iput p1, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->mCode:I

    .line 7
    iput-wide p3, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->time:J

    .line 8
    invoke-static {p1, p2, p3, p4}, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->sendMsg(ILjava/lang/String;J)V

    return-void
.end method
