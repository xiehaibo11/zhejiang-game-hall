.class public Lcom/bianfeng/datafunsdk/timer/HandlerUtils;
.super Ljava/lang/Object;
.source "HandlerUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/datafunsdk/timer/HandlerUtils$HandlerCallback;
    }
.end annotation


# static fields
.field public static handler:Landroid/os/Handler;

.field public static list:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/bianfeng/datafunsdk/timer/HandlerUtils$HandlerCallback;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public static constructor <clinit>()V
    .locals 2

    .line 1
    new-instance v0, Lcom/bianfeng/datafunsdk/timer/HandlerUtils$a;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/datafunsdk/timer/HandlerUtils$a;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->handler:Landroid/os/Handler;

    .line 10
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->list:Ljava/util/Set;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static synthetic access$000()Ljava/util/Set;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->list:Ljava/util/Set;

    return-object v0
.end method

.method public static addHandlerCallback(Lcom/bianfeng/datafunsdk/timer/HandlerUtils$HandlerCallback;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->list:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static remove(Lcom/bianfeng/datafunsdk/timer/HandlerUtils$HandlerCallback;)Z
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->list:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method public static removeMsg(I)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->handler:Landroid/os/Handler;

    invoke-virtual {v0, p0}, Landroid/os/Handler;->removeMessages(I)V

    return-void
.end method

.method public static sendMsg(IJ)V
    .locals 1

    .line 1
    const-string v0, ""

    invoke-static {p0, v0, p1, p2}, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->sendMsg(ILjava/lang/String;J)V

    return-void
.end method

.method public static sendMsg(ILjava/lang/String;J)V
    .locals 2

    .line 2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "HandlerUtils sendMsg"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 3
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 4
    iput p0, v0, Landroid/os/Message;->what:I

    .line 5
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 6
    sget-object p0, Lcom/bianfeng/datafunsdk/timer/HandlerUtils;->handler:Landroid/os/Handler;

    invoke-virtual {p0, v0, p2, p3}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    return-void
.end method
