.class final Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTRdVideoObject$RdVrInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)V
    .locals 0

    .line 105
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClose()V
    .locals 1

    .line 123
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->k(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 124
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->l(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdClosed()V

    :cond_0
    return-void
.end method

.method public final onRdVerify(ZILjava/lang/String;ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onRewardArrived(ZILandroid/os/Bundle;)V
    .locals 1

    .line 153
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->r(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object p3

    const-string v0, "onRewardArrived(), rewardVerify: "

    invoke-virtual {v0, p3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_0

    .line 154
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    iget-boolean p1, p1, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->b:Z

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->s(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 155
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->b:Z

    .line 156
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->t(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onReward()V

    :cond_0
    return-void
.end method

.method public final onShow()V
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->g(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 110
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->h(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayStart()V

    :cond_0
    return-void
.end method

.method public final onSkippedVideo()V
    .locals 1

    .line 138
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->o(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)I

    return-void
.end method

.method public final onVideoBarClick()V
    .locals 1

    .line 116
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->i(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 117
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->j(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayClicked()V

    :cond_0
    return-void
.end method

.method public final onVideoComplete()V
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->m(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 132
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->n(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoError()V
    .locals 3

    .line 142
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->p(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 143
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->q(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    const-string v1, ""

    const-string v2, "Callback VideoError"

    invoke-interface {v0, v1, v2}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
