.class final Lcom/kwad/components/ad/feed/b/c$8;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/feed/b/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic eM:Lcom/kwad/components/ad/feed/b/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/c$8;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAudioBeOccupied()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/c$8;->eM:Lcom/kwad/components/ad/feed/b/c;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/feed/b/c;->b(Lcom/kwad/components/ad/feed/b/c;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/c$8;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/c;->j(Lcom/kwad/components/ad/feed/b/c;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/c$8;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/c;->j(Lcom/kwad/components/ad/feed/b/c;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/video/videoview/a;->setVideoSoundEnable(Z)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/c$8;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/c;->i(Lcom/kwad/components/ad/feed/b/c;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/c$8;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/c;->i(Lcom/kwad/components/ad/feed/b/c;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object v0

    invoke-interface {v0, v1, v1}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->setAudioEnabled(ZZ)V

    :cond_1
    return-void
.end method

.method public final onAudioBeReleased()V
    .locals 0

    return-void
.end method
