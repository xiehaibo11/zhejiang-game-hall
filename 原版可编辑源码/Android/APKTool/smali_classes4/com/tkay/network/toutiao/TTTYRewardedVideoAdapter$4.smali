.class final Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTRdVideoObject$RdVrInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->show(Landroid/app/Activity;)V
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

    .line 260
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClose()V
    .locals 0

    return-void
.end method

.method public final onRdVerify(ZILjava/lang/String;ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onRewardArrived(ZILandroid/os/Bundle;)V
    .locals 1

    .line 314
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->r(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object p3

    const-string v0, "Again AD, onRewardArrived(), rewardVerify: "

    invoke-virtual {v0, p3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_0

    .line 315
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    iget-boolean p1, p1, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->b:Z

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->I(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 316
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->b:Z

    .line 317
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->J(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onAgainReward()V

    :cond_0
    return-void
.end method

.method public final onShow()V
    .locals 4

    .line 263
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->b:Z

    .line 265
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/bykv/vk/openvk/TTRdVideoObject;

    move-result-object v0

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTRdVideoObject;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 267
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->b(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_0

    .line 268
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    new-instance v2, Ljava/util/HashMap;

    const/4 v3, 0x3

    invoke-direct {v2, v3}, Ljava/util/HashMap;-><init>(I)V

    invoke-static {v1, v2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Ljava/util/Map;)Ljava/util/Map;

    .line 270
    :cond_0
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->b(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Map;->clear()V

    .line 271
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v1}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->b(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 274
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 277
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->A(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 278
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->B(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdAgainPlayStart()V

    :cond_2
    return-void
.end method

.method public final onSkippedVideo()V
    .locals 0

    return-void
.end method

.method public final onVideoBarClick()V
    .locals 1

    .line 284
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->C(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 285
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->D(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdAgainPlayClicked()V

    :cond_0
    return-void
.end method

.method public final onVideoComplete()V
    .locals 1

    .line 296
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->E(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 297
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->F(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdAgainPlayEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoError()V
    .locals 3

    .line 303
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->G(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 304
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->H(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    const-string v1, ""

    const-string v2, "Again AD, Callback VideoError"

    invoke-interface {v0, v1, v2}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdAgainPlayFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
