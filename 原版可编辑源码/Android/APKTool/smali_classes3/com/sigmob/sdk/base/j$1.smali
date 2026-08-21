.class Lcom/sigmob/sdk/base/j$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/rewardVideoAd/g;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/j;->show(Ljava/util/HashMap;Lcom/sigmob/sdk/rewardVideoAd/g;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/rewardVideoAd/g;

.field final synthetic b:Lcom/sigmob/sdk/base/j;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/j;Lcom/sigmob/sdk/rewardVideoAd/g;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    iput-object p2, p0, Lcom/sigmob/sdk/base/j$1;->a:Lcom/sigmob/sdk/rewardVideoAd/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onVideoAdClicked(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/j$1$4;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/base/j$1$4;-><init>(Lcom/sigmob/sdk/base/j$1;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onVideoAdClosed(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusClose:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, v0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->b(Lcom/sigmob/sdk/base/j;)Lcom/sigmob/sdk/rewardVideoAd/c;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->c(Lcom/sigmob/sdk/base/j;)Lcom/sigmob/sdk/rewardVideoAd/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->c(Lcom/sigmob/sdk/base/j;)Lcom/sigmob/sdk/rewardVideoAd/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/c;->b()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->b(Lcom/sigmob/sdk/base/j;)Lcom/sigmob/sdk/rewardVideoAd/c;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;Lcom/sigmob/sdk/rewardVideoAd/c;)Lcom/sigmob/sdk/rewardVideoAd/c;

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, v0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/j;->b(Lcom/sigmob/sdk/base/j;Lcom/sigmob/sdk/rewardVideoAd/c;)Lcom/sigmob/sdk/rewardVideoAd/c;

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/j$1$5;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/base/j$1$5;-><init>(Lcom/sigmob/sdk/base/j$1;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onVideoAdPlayComplete(Lcom/sigmob/windad/rewardVideo/WindRewardInfo;Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/j$1$2;

    invoke-direct {v1, p0, p2, p1}, Lcom/sigmob/sdk/base/j$1$2;-><init>(Lcom/sigmob/sdk/base/j$1;Ljava/lang/String;Lcom/sigmob/windad/rewardVideo/WindRewardInfo;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onVideoAdPlayEnd(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/j$1$3;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/base/j$1$3;-><init>(Lcom/sigmob/sdk/base/j$1;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onVideoAdPlayError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusClose:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, v0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->b(Lcom/sigmob/sdk/base/j;)Lcom/sigmob/sdk/rewardVideoAd/c;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->c(Lcom/sigmob/sdk/base/j;)Lcom/sigmob/sdk/rewardVideoAd/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->c(Lcom/sigmob/sdk/base/j;)Lcom/sigmob/sdk/rewardVideoAd/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/c;->b()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->b(Lcom/sigmob/sdk/base/j;)Lcom/sigmob/sdk/rewardVideoAd/c;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;Lcom/sigmob/sdk/rewardVideoAd/c;)Lcom/sigmob/sdk/rewardVideoAd/c;

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, v0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/j;->b(Lcom/sigmob/sdk/base/j;Lcom/sigmob/sdk/rewardVideoAd/c;)Lcom/sigmob/sdk/rewardVideoAd/c;

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/j$1$6;

    invoke-direct {v1, p0, p1, p2}, Lcom/sigmob/sdk/base/j$1$6;-><init>(Lcom/sigmob/sdk/base/j$1;Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onVideoAdPlayStart(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusPlaying:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, v0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/sdk/base/j$1;->b:Lcom/sigmob/sdk/base/j;

    invoke-static {v0}, Lcom/sigmob/sdk/base/j;->a(Lcom/sigmob/sdk/base/j;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/j$1$1;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/base/j$1$1;-><init>(Lcom/sigmob/sdk/base/j$1;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
