.class final Lcom/kwad/components/ad/f/b/e$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/b/e;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic nh:Lcom/kwad/components/ad/f/b/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/b/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayCompleted()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayComplete()V

    :cond_0
    return-void
.end method

.method public final onMediaPlayError(II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayError(II)V

    :cond_0
    return-void
.end method

.method public final onMediaPlayPaused()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlayPaused()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayPause()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;Z)Z

    return-void
.end method

.method public final onMediaPlayStart()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayStart()V

    :cond_0
    return-void
.end method

.method public final onMediaPlaying()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlaying()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->b(Lcom/kwad/components/ad/f/b/e;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

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

.method public final onMediaPrepared()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPrepared()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e$1;->nh:Lcom/kwad/components/ad/f/b/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/e;->a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

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
