.class final Lcom/kwad/components/ad/f/d$8;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;


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

    iput-object p1, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onVideoPlayComplete()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayComplete()V

    :cond_0
    return-void
.end method

.method public final onVideoPlayError(II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayError(II)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayPause()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayPause()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayReady()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayReady()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayResume()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayResume()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$8;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->k(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayStart()V

    :cond_0
    return-void
.end method
