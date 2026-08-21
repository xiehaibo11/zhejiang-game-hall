.class final Lcom/bianfeng/seppellita/utils/TimerUtils$1;
.super Landroid/os/Handler;
.source "TimerUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/seppellita/utils/TimerUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>(Landroid/os/Looper;)V
    .locals 0

    .line 15
    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 0

    .line 18
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 19
    sget-object p1, Lcom/bianfeng/seppellita/utils/TimerUtils;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    if-eqz p1, :cond_0

    .line 20
    sget-object p1, Lcom/bianfeng/seppellita/utils/TimerUtils;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-interface {p1}, Lcom/bianfeng/seppellita/SepperllitaCallback;->callTime()V

    :cond_0
    const/4 p1, 0x1

    .line 22
    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/TimerUtils;->access$002(Z)Z

    return-void
.end method
