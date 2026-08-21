.class final Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTAppDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->setAdData(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)V
    .locals 0

    .line 113
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadActive(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 121
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    iget-boolean v0, v0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->f:Z

    if-nez v0, :cond_0

    .line 122
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->f:Z

    .line 123
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->b(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_1

    .line 124
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->c(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    move-wide v2, p1

    move-wide v4, p3

    move-object v6, p5

    move-object v7, p6

    invoke-interface/range {v1 .. v7}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadStart(JJLjava/lang/String;Ljava/lang/String;)V

    return-void

    .line 127
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->d(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->e(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_1

    .line 128
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->f(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 143
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->j(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->k(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 144
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->l(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 150
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->m(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->n(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 151
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->o(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadFinish(JLjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onDownloadPaused(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 136
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->g(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->h(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 137
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->i(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 157
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->p(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->q(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 158
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->r(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    invoke-interface {v0, p1, p2}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onInstalled(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
