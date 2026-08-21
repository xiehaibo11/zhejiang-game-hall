.class final Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->show(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)V
    .locals 0

    .line 63
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->a(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 67
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->b(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayClicked()V

    :cond_0
    return-void
.end method

.method public final onExtraRewardVerify(I)V
    .locals 0

    return-void
.end method

.method public final onPageDismiss()V
    .locals 2

    .line 73
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->i:Z

    if-nez v0, :cond_0

    .line 74
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->i:Z

    .line 76
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->c(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 77
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->d(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdClosed()V

    :cond_0
    return-void
.end method

.method public final onRewardStepVerify(II)V
    .locals 0

    return-void
.end method

.method public final onRewardVerify()V
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->l(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 116
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->m(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onReward()V

    :cond_0
    return-void
.end method

.method public final onVideoPlayEnd()V
    .locals 1

    .line 91
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 92
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->h(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoPlayError(II)V
    .locals 1

    .line 84
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {p2}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->e(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 85
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {p2}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->f(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p2

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, ""

    invoke-interface {p2, p1, v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 4

    .line 104
    :try_start_0
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-virtual {v1}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    iget-object v3, v3, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/ks/KSTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 108
    :catchall_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->j(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 109
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->k(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayStart()V

    :cond_0
    return-void
.end method

.method public final onVideoSkipToEnd(J)V
    .locals 0

    .line 98
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->i(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)I

    return-void
.end method
