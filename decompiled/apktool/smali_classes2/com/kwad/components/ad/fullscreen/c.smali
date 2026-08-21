.class public Lcom/kwad/components/ad/fullscreen/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;


# instance fields
.field private fQ:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/c;->fQ:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    return-void
.end method

.method public onAdClicked()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c;->fQ:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;->onAdClicked()V

    :cond_0
    return-void
.end method

.method public onPageDismiss()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c;->fQ:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;->onPageDismiss()V

    :cond_0
    return-void
.end method

.method public onSkippedVideo()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c;->fQ:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;->onSkippedVideo()V

    :cond_0
    return-void
.end method

.method public onVideoPlayEnd()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c;->fQ:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;->onVideoPlayEnd()V

    :cond_0
    return-void
.end method

.method public onVideoPlayError(II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c;->fQ:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;->onVideoPlayError(II)V

    :cond_0
    return-void
.end method

.method public onVideoPlayStart()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c;->fQ:Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;->onVideoPlayStart()V

    :cond_0
    return-void
.end method
