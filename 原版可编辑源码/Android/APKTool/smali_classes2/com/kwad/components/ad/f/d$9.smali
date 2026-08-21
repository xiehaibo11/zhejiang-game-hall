.class final Lcom/kwad/components/ad/f/d$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/f/d$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/f/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic mF:Lcom/kwad/components/ad/f/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final eJ()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->l(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->l(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;->onAdShow(Lcom/kwad/sdk/api/KsNativeAd;)V

    :cond_0
    return-void
.end method

.method public final handleDownloadDialog(Landroid/content/DialogInterface$OnClickListener;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->l(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->l(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;->handleDownloadDialog(Landroid/content/DialogInterface$OnClickListener;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final l(Landroid/view/View;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->l(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v0, Landroid/widget/FrameLayout;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->dt(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-direct {v0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {p1}, Lcom/kwad/components/ad/f/d;->l(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;

    move-result-object p1

    iget-object v1, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-interface {p1, v0, v1}, Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;->onAdClicked(Landroid/view/View;Lcom/kwad/sdk/api/KsNativeAd;)V

    :cond_0
    return-void
.end method

.method public final onDownloadTipsDialogDismiss()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->l(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->l(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;->onDownloadTipsDialogDismiss()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public final onDownloadTipsDialogShow()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->l(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/d$9;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->l(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;->onDownloadTipsDialogShow()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
