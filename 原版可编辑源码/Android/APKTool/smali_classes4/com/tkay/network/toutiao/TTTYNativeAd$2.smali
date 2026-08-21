.class final Lcom/tkay/network/toutiao/TTTYNativeAd$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTAppDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYNativeAd;->setAdData(ZLandroid/graphics/Bitmap;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYNativeAd;)V
    .locals 0

    .line 160
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadActive(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 168
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    iget-boolean v0, v0, Lcom/tkay/network/toutiao/TTTYNativeAd;->d:Z

    if-nez v0, :cond_0

    .line 169
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/network/toutiao/TTTYNativeAd;->d:Z

    .line 170
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->a(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->b(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_1

    .line 171
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->c(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    move-wide v2, p1

    move-wide v4, p3

    move-object v6, p5

    move-object v7, p6

    invoke-interface/range {v1 .. v7}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadStart(JJLjava/lang/String;Ljava/lang/String;)V

    return-void

    .line 174
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->d(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->e(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_1

    .line 175
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->f(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 190
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->j(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->k(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 191
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->l(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 197
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->m(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->n(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 198
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->o(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadFinish(JLjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onDownloadPaused(JJLjava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 183
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->g(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->h(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 184
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->i(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

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

    .line 204
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->p(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->q(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 205
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$2;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYNativeAd;->r(Lcom/tkay/network/toutiao/TTTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    invoke-interface {v0, p1, p2}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onInstalled(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
