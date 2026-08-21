.class public final Lcom/kwad/components/ad/draw/a/b;
.super Lcom/kwad/sdk/mvp/a;


# instance fields
.field public bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

.field public bF:Lcom/kwad/components/ad/draw/c/a;

.field public bX:Lcom/kwad/components/ad/draw/b/b/a;

.field public bY:Lcom/kwad/components/ad/k/b;

.field public mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field public mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final release()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/a/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/e/d/c;->clear()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/a/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/c/a;->release()V

    return-void
.end method
