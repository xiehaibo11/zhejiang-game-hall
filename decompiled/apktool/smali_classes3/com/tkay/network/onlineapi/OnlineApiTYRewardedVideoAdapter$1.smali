.class final Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/g;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->show(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)V
    .locals 0

    .line 45
    iput-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 88
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 90
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 92
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->k(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 93
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->l(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->i(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 82
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->j(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdClosed()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->g(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 75
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->h(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayStart()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->m(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 100
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->n(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final onRewarded()V
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->e(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 67
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->f(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onReward()V

    :cond_0
    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 59
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->c(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 60
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->d(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

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

    .line 52
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->a(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 53
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->b(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoAdPlayStart()V
    .locals 0

    return-void
.end method
