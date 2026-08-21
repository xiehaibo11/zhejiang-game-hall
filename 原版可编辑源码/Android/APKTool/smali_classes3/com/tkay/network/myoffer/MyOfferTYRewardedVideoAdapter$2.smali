.class final Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/g;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->show(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)V
    .locals 0

    .line 115
    iput-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 158
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 160
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 162
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->p(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 163
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->q(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->n(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 152
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->o(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdClosed()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 144
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->l(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 145
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->m(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayStart()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 0

    return-void
.end method

.method public final onRewarded()V
    .locals 1

    .line 136
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->j(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 137
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->k(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onReward()V

    :cond_0
    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 129
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->h(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 130
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->i(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->b()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onVideoAdPlayEnd()V
    .locals 1

    .line 122
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->f(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 123
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->g(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoAdPlayStart()V
    .locals 0

    return-void
.end method
