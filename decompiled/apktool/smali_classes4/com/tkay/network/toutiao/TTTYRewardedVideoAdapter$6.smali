.class final Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTAppDownloadListener;


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

    .line 404
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadActive(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 412
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->K(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 413
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->L(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Z

    .line 414
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->M(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->N(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_1

    .line 415
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->O(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    move-wide v2, p1

    move-wide v4, p3

    move-object v6, p5

    move-object v7, p6

    invoke-interface/range {v1 .. v7}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadStart(JJLjava/lang/String;Ljava/lang/String;)V

    return-void

    .line 418
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->P(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->Q(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_1

    .line 419
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->R(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    move-wide v2, p1

    move-wide v4, p3

    move-object v6, p5

    move-object v7, p6

    invoke-interface/range {v1 .. v7}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadUpdate(JJLjava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final onDownloadFailed(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 434
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->V(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->W(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 435
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->X(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    move-wide v2, p1

    move-wide v4, p3

    move-object v6, p5

    move-object v7, p6

    invoke-interface/range {v1 .. v7}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadFail(JJLjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onDownloadFinished(JLjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 441
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->Y(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->Z(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 442
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->aa(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadFinish(JLjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onDownloadPaused(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 427
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->S(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->T(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 428
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->U(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    move-wide v2, p1

    move-wide v4, p3

    move-object v6, p5

    move-object v7, p6

    invoke-interface/range {v1 .. v7}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadPause(JJLjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onIdle()V
    .locals 0

    return-void
.end method

.method public final onInstalled(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 448
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->ab(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->ac(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 449
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->ad(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    invoke-interface {v0, p1, p2}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onInstalled(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
