.class final Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTAppDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/toutiao/TTTYSplashAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)V
    .locals 0

    .line 339
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadActive(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 347
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->g(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 348
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->h(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Z

    .line 349
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->i(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->j(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_1

    .line 350
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->k(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    move-wide v2, p1

    move-wide v4, p3

    move-object v6, p5

    move-object v7, p6

    invoke-interface/range {v1 .. v7}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadStart(JJLjava/lang/String;Ljava/lang/String;)V

    return-void

    .line 353
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->l(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->m(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_1

    .line 354
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->n(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 370
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->r(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->s(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 371
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->t(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 377
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->u(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->v(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 378
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->w(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadFinish(JLjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onDownloadPaused(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 363
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->o(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->p(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 364
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->q(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 384
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->x(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->y(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 385
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$4;->a:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->z(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    invoke-interface {v0, p1, p2}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onInstalled(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
