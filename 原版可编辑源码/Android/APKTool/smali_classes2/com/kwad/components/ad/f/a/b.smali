.class public final Lcom/kwad/components/ad/f/a/b;
.super Lcom/kwad/sdk/mvp/a;


# instance fields
.field public mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field public mE:Lcom/kwad/components/ad/f/d$a;

.field public mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

.field public mW:Lcom/kwad/components/ad/f/c/a;

.field public mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final release()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/a/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/e/d/c;->clear()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/f/c/a;->release()V

    return-void
.end method
