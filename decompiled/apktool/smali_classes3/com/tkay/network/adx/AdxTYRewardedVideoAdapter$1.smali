.class final Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;
.super Lcom/tkay/basead/e/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->show(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;Lcom/tkay/core/common/f/h;)V
    .locals 0

    .line 44
    iput-object p1, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-direct {p0, p2}, Lcom/tkay/basead/e/f;-><init>(Lcom/tkay/core/common/f/h;)V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 88
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 90
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 92
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->k(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 93
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->l(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->i(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 82
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->j(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdClosed()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 73
    invoke-super {p0}, Lcom/tkay/basead/e/f;->onAdShow()V

    .line 74
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->g(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 75
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->h(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayStart()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->m(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 100
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->n(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final onRewarded()V
    .locals 1

    .line 65
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->e(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 66
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->f(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onReward()V

    :cond_0
    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 58
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->c(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 59
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->d(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

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

    .line 51
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->a(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 52
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;->b:Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->b(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoAdPlayStart()V
    .locals 0

    return-void
.end method
