.class final Lcom/tkay/network/ks/KSTYNativeAd$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsAppDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYNativeAd;->a(Landroid/view/ViewGroup;Ljava/util/List;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/ks/KSTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYNativeAd;)V
    .locals 0

    .line 174
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadFailed()V
    .locals 8

    .line 205
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->j(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->k(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 206
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->l(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    iget-wide v2, v0, Lcom/tkay/network/ks/KSTYNativeAd;->d:J

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    iget-wide v4, v0, Lcom/tkay/network/ks/KSTYNativeAd;->h:J

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->getTitle()Ljava/lang/String;

    move-result-object v7

    const-string v6, ""

    invoke-interface/range {v1 .. v7}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadFail(JJLjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onDownloadFinished()V
    .locals 5

    .line 198
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->g(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->h(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 199
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->i(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    iget-wide v1, v1, Lcom/tkay/network/ks/KSTYNativeAd;->d:J

    iget-object v3, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-virtual {v3}, Lcom/tkay/network/ks/KSTYNativeAd;->getTitle()Ljava/lang/String;

    move-result-object v3

    const-string v4, ""

    invoke-interface {v0, v1, v2, v4, v3}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadFinish(JLjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onDownloadStarted()V
    .locals 8

    .line 182
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->a(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->b(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 184
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->c(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    iget-wide v2, v0, Lcom/tkay/network/ks/KSTYNativeAd;->d:J

    const-wide/16 v4, 0x0

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->getTitle()Ljava/lang/String;

    move-result-object v7

    const-string v6, ""

    invoke-interface/range {v1 .. v7}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadStart(JJLjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onIdle()V
    .locals 0

    return-void
.end method

.method public final onInstalled()V
    .locals 3

    .line 212
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->m(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->n(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 213
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->o(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-virtual {v1}, Lcom/tkay/network/ks/KSTYNativeAd;->getTitle()Ljava/lang/String;

    move-result-object v1

    const-string v2, ""

    invoke-interface {v0, v2, v1}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onInstalled(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 7

    .line 190
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->d(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->e(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    if-eqz v0, :cond_0

    .line 191
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    iget-wide v1, v0, Lcom/tkay/network/ks/KSTYNativeAd;->d:J

    int-to-long v3, p1

    mul-long/2addr v1, v3

    const-wide/16 v3, 0x64

    div-long/2addr v1, v3

    iput-wide v1, v0, Lcom/tkay/network/ks/KSTYNativeAd;->h:J

    .line 192
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYNativeAd;->f(Lcom/tkay/network/ks/KSTYNativeAd;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/tkay/china/api/CustomAdapterDownloadListener;

    iget-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    iget-wide v1, p1, Lcom/tkay/network/ks/KSTYNativeAd;->d:J

    iget-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    iget-wide v3, p1, Lcom/tkay/network/ks/KSTYNativeAd;->h:J

    iget-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd$2;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/ks/KSTYNativeAd;->getTitle()Ljava/lang/String;

    move-result-object v6

    const-string v5, ""

    invoke-interface/range {v0 .. v6}, Lcom/tkay/china/api/CustomAdapterDownloadListener;->onDownloadUpdate(JJLjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
