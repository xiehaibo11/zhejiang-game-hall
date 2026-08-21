.class final Lcom/tkay/network/ks/KSTYSplashAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYSplashAdapter;->show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/ks/KSTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYSplashAdapter;)V
    .locals 0

    .line 144
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->d(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 149
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->e(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdClicked()V

    :cond_0
    return-void
.end method

.method public final onAdShowEnd()V
    .locals 2

    .line 166
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->k(Lcom/tkay/network/ks/KSTYSplashAdapter;)I

    .line 167
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/ks/KSTYSplashAdapter;->d:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->l(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 168
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/network/ks/KSTYSplashAdapter;->d:Z

    .line 169
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->m(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method

.method public final onAdShowError(ILjava/lang/String;)V
    .locals 3

    .line 155
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->f(Lcom/tkay/network/ks/KSTYSplashAdapter;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "onAdShowError: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 156
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->g(Lcom/tkay/network/ks/KSTYSplashAdapter;)I

    .line 157
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/ks/KSTYSplashAdapter;->d:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->h(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 158
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/network/ks/KSTYSplashAdapter;->d:Z

    .line 159
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->i(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v1, "4006"

    invoke-static {v1, p1, p2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShowFail(Lcom/tkay/core/api/AdError;)V

    .line 160
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYSplashAdapter;->j(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method

.method public final onAdShowStart()V
    .locals 4

    .line 176
    :try_start_0
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-virtual {v1}, Lcom/tkay/network/ks/KSTYSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    iget-object v3, v3, Lcom/tkay/network/ks/KSTYSplashAdapter;->b:Lcom/kwad/sdk/api/KsSplashScreenAd;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/ks/KSTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 180
    :catchall_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->n(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 181
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->o(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShow()V

    :cond_0
    return-void
.end method

.method public final onDownloadTipsDialogCancel()V
    .locals 0

    return-void
.end method

.method public final onDownloadTipsDialogDismiss()V
    .locals 0

    return-void
.end method

.method public final onDownloadTipsDialogShow()V
    .locals 0

    return-void
.end method

.method public final onSkippedAd()V
    .locals 2

    .line 187
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->p(Lcom/tkay/network/ks/KSTYSplashAdapter;)I

    .line 188
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/ks/KSTYSplashAdapter;->d:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->q(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 189
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/network/ks/KSTYSplashAdapter;->d:Z

    .line 190
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$3;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->r(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method
