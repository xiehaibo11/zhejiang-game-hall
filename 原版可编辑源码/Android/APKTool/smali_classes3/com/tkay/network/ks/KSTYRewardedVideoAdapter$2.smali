.class final Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;
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

    .line 131
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 1

    .line 134
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->n(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 135
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->o(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdAgainPlayClicked()V

    :cond_0
    return-void
.end method

.method public final onExtraRewardVerify(I)V
    .locals 0

    return-void
.end method

.method public final onPageDismiss()V
    .locals 2

    .line 141
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->i:Z

    if-nez v0, :cond_0

    .line 142
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->i:Z

    .line 144
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->p(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 145
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->q(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

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

    .line 178
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->y(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 179
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->z(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onAgainReward()V

    :cond_0
    return-void
.end method

.method public final onVideoPlayEnd()V
    .locals 1

    .line 159
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->t(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 160
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->u(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdAgainPlayEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoPlayError(II)V
    .locals 1

    .line 152
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {p2}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->r(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 153
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {p2}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->s(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p2

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, "Again AD, Callback VideoError"

    invoke-interface {p2, p1, v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdAgainPlayFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 1

    .line 171
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->w(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 172
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->x(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdAgainPlayStart()V

    :cond_0
    return-void
.end method

.method public final onVideoSkipToEnd(J)V
    .locals 0

    .line 166
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->v(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)I

    return-void
.end method
