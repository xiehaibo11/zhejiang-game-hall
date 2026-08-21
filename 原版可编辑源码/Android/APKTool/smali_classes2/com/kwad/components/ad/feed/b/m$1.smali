.class final Lcom/kwad/components/ad/feed/b/m$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/feed/b/m;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fI:Lcom/kwad/components/ad/feed/b/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/m;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$1;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAudioBeOccupied()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$1;->fI:Lcom/kwad/components/ad/feed/b/m;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/ad/feed/b/m;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$1;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$1;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->a(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/video/videoview/a;->setVideoSoundEnable(Z)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$1;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->b(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$1;->fI:Lcom/kwad/components/ad/feed/b/m;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/m;->b(Lcom/kwad/components/ad/feed/b/m;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object v0

    invoke-interface {v0, v1, v1}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->setAudioEnabled(ZZ)V

    :cond_1
    return-void
.end method

.method public final onAudioBeReleased()V
    .locals 0

    return-void
.end method
