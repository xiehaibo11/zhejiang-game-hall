.class final Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTAppDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/toutiao/TTTYBannerAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V
    .locals 0

    .line 466
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadActive(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 474
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->t(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 475
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->u(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Z

    .line 476
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->v(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->w(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_1

    .line 477
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->x(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    move-wide v2, p1

    move-wide v4, p3

    move-object v6, p5

    move-object v7, p6

    invoke-interface/range {v1 .. v7}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadStart(JJLjava/lang/String;Ljava/lang/String;)V

    return-void

    .line 480
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->y(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->z(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_1

    .line 481
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->A(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 496
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->E(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->F(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 497
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->G(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 503
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->H(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->I(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 504
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->J(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadFinish(JLjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onDownloadPaused(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 489
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->B(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->C(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 490
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->D(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 510
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->K(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->L(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 511
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->M(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    invoke-interface {v0, p1, p2}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onInstalled(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
