.class final Lcom/kwad/components/ad/f/e$2;
.super Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/f/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic mS:Lcom/kwad/components/ad/f/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-direct {p0}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLivePlayCompleted()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;->onLivePlayCompleted()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayComplete()V

    :cond_0
    return-void
.end method

.method public final onLivePlayEnd()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;->onLivePlayEnd()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayComplete()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->i(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aY(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-class v1, Lcom/kwad/components/core/offline/api/a/a;

    invoke-static {v1}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/offline/api/a/a;

    if-eqz v1, :cond_1

    iget-object v2, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-interface {v1, v0}, Lcom/kwad/components/core/offline/api/a/a;->getAdLiveEndRequest(Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/kwad/components/ad/f/e;->a(Lcom/kwad/components/ad/f/e;Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;)Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->n(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/core/network/m;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/f/e$2$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/f/e$2$1;-><init>(Lcom/kwad/components/ad/f/e$2;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    :cond_2
    return-void
.end method

.method public final onLivePlayPause()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;->onLivePlayPause()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayPause()V

    :cond_0
    return-void
.end method

.method public final onLivePlayProgress(J)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;->onLivePlayProgress(J)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0, p1, p2}, Lcom/kwad/components/ad/f/e;->a(Lcom/kwad/components/ad/f/e;J)V

    return-void
.end method

.method public final onLivePlayResume()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;->onLivePlayResume()V

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v1}, Lcom/kwad/components/ad/f/e;->o(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/core/j/a$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/j/a;->a(Lcom/kwad/components/core/j/a$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    iget-object v0, v0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v1}, Lcom/kwad/components/ad/f/e;->p(Lcom/kwad/components/ad/f/e;)Z

    move-result v2

    invoke-static {v1, v2}, Lcom/kwad/components/ad/f/e;->a(Lcom/kwad/components/ad/f/e;Z)Z

    move-result v1

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->setAudioEnabled(ZZ)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayResume()V

    :cond_0
    return-void
.end method

.method public final onLivePlayStart()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;->onLivePlayStart()V

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v1}, Lcom/kwad/components/ad/f/e;->o(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/core/j/a$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/j/a;->a(Lcom/kwad/components/core/j/a$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    iget-object v0, v0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v1}, Lcom/kwad/components/ad/f/e;->p(Lcom/kwad/components/ad/f/e;)Z

    move-result v2

    invoke-static {v1, v2}, Lcom/kwad/components/ad/f/e;->a(Lcom/kwad/components/ad/f/e;Z)Z

    move-result v1

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->setAudioEnabled(ZZ)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayStart()V

    :cond_0
    return-void
.end method

.method public final onLivePrepared()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;->onLivePrepared()V

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v1}, Lcom/kwad/components/ad/f/e;->o(Lcom/kwad/components/ad/f/e;)Lcom/kwad/components/core/j/a$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/j/a;->a(Lcom/kwad/components/core/j/a$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/f/e;->m(Lcom/kwad/components/ad/f/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;->onVideoPlayReady()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    iget-object v0, v0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$2;->mS:Lcom/kwad/components/ad/f/e;

    iget-object v0, v0, Lcom/kwad/components/ad/f/e;->eF:Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    const/4 v1, 0x0

    invoke-interface {v0, v1, v1}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->setAudioEnabled(ZZ)V

    :cond_1
    return-void
.end method
