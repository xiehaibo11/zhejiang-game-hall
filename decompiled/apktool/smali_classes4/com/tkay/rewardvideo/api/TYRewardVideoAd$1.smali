.class Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/rewardvideo/api/TYRewardVideoAd;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd;)V
    .locals 0

    .line 50
    iput-object p1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAgainReward(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 125
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$11;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$11;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
    .locals 2

    .line 53
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$1;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/TYAdInfo;Z)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 2

    .line 65
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onReward(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 210
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$5;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$5;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onRewardedVideoAdAgainPlayClicked(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 113
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$10;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$10;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onRewardedVideoAdAgainPlayEnd(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 89
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$8;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$8;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onRewardedVideoAdAgainPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 101
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$9;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$9;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onRewardedVideoAdAgainPlayStart(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 77
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$7;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$7;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onRewardedVideoAdClosed(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 185
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$3;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onRewardedVideoAdFailed(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method public onRewardedVideoAdLoaded()V
    .locals 0

    return-void
.end method

.method public onRewardedVideoAdPlayClicked(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 197
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$4;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$4;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onRewardedVideoAdPlayEnd(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 159
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$13;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$13;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onRewardedVideoAdPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 172
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$2;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onRewardedVideoAdPlayStart(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 147
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$12;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$12;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
