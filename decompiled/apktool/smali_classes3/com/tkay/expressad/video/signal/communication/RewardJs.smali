.class public Lcom/tkay/expressad/video/signal/communication/RewardJs;
.super Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;

# interfaces
.implements Lcom/tkay/expressad/video/signal/communication/IRewardBridge;


# instance fields
.field private j:Landroid/os/Handler;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 15
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;-><init>()V

    .line 16
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/communication/RewardJs;->j:Landroid/os/Handler;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->getEndScreenInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->install(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic e(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->getEndScreenInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic f(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->setOrientation(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->handlerPlayableException(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic h(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->openURL(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic i(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->cai(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic j(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->gial(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 132
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 133
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->cai(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 135
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/RewardJs;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/RewardJs$9;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/RewardJs$9;-><init>(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public feedbackLayoutOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 170
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->feedbackLayoutOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public feedbackOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 165
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->feedbackOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public feedbackPopupOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 160
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->feedbackPopupOperate(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public getEndScreenInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 20
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 21
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->getEndScreenInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 23
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/RewardJs;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/RewardJs$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/RewardJs$1;-><init>(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 146
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 147
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->gial(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 149
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/RewardJs;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/RewardJs$10;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/RewardJs$10;-><init>(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public handlerPlayableException(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 104
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 105
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->handlerPlayableException(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 107
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/RewardJs;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/RewardJs$7;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/RewardJs$7;-><init>(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 34
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 35
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->install(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 37
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/RewardJs;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/RewardJs$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/RewardJs$2;-><init>(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 48
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 49
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 51
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/RewardJs;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/RewardJs$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/RewardJs$3;-><init>(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 118
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 119
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->openURL(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 121
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/RewardJs;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/RewardJs$8;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/RewardJs$8;-><init>(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public setOrientation(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 90
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 91
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->setOrientation(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 93
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/RewardJs;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/RewardJs$6;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/RewardJs$6;-><init>(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 62
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 63
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 65
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/RewardJs;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/RewardJs$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/RewardJs$4;-><init>(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 76
    invoke-static {}, Lcom/tkay/expressad/foundation/h/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 77
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 79
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/RewardJs;->j:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/signal/communication/RewardJs$5;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/RewardJs$5;-><init>(Lcom/tkay/expressad/video/signal/communication/RewardJs;Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
