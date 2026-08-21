.class public Lcom/bianfeng/seppellita/utils/TimerUtils;
.super Ljava/lang/Object;
.source "TimerUtils.java"


# static fields
.field static callback:Lcom/bianfeng/seppellita/SepperllitaCallback; = null

.field private static handler:Landroid/os/Handler; = null

.field private static volatile isNotDingshiIng:Z = true


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 15
    new-instance v0, Lcom/bianfeng/seppellita/utils/TimerUtils$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/seppellita/utils/TimerUtils$1;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/bianfeng/seppellita/utils/TimerUtils;->handler:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$002(Z)Z
    .locals 0

    .line 12
    sput-boolean p0, Lcom/bianfeng/seppellita/utils/TimerUtils;->isNotDingshiIng:Z

    return p0
.end method

.method protected static sendMsg(J)V
    .locals 4

    .line 31
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "TimerUtils sendMsg"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, "--->"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v3, Lcom/bianfeng/seppellita/utils/TimerUtils;->isNotDingshiIng:Z

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 32
    sget-boolean v0, Lcom/bianfeng/seppellita/utils/TimerUtils;->isNotDingshiIng:Z

    if-eqz v0, :cond_0

    .line 33
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v1, Lcom/bianfeng/seppellita/utils/TimerUtils;->isNotDingshiIng:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 34
    sput-boolean v0, Lcom/bianfeng/seppellita/utils/TimerUtils;->isNotDingshiIng:Z

    .line 35
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 36
    sget-object v1, Lcom/bianfeng/seppellita/utils/TimerUtils;->handler:Landroid/os/Handler;

    invoke-virtual {v1, v0, p0, p1}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z

    :cond_0
    return-void
.end method

.method public static setCallback(Lcom/bianfeng/seppellita/SepperllitaCallback;)V
    .locals 0

    .line 27
    sput-object p0, Lcom/bianfeng/seppellita/utils/TimerUtils;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    return-void
.end method
