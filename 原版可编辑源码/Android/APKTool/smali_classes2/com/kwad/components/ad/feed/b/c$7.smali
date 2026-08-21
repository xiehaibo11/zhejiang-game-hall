.class final Lcom/kwad/components/ad/feed/b/c$7;
.super Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;


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

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/c$7;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-direct {p0}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLivePlayEnd()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;->onLivePlayEnd()V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/c$7;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/c;->f(Lcom/kwad/components/ad/feed/b/c;)Landroid/widget/TextView;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    return-void
.end method

.method public final onLivePlayProgress(J)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;->onLivePlayProgress(J)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/c$7;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v0, p1, p2}, Lcom/kwad/components/ad/feed/b/c;->a(Lcom/kwad/components/ad/feed/b/c;J)V

    return-void
.end method

.method public final onLivePlayResume()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;->onLivePlayResume()V

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/c$7;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/b/c;->g(Lcom/kwad/components/ad/feed/b/c;)Lcom/kwad/components/core/j/a$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/j/a;->a(Lcom/kwad/components/core/j/a$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/c$7;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/c;->i(Lcom/kwad/components/ad/feed/b/c;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/c$7;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/b/c;->h(Lcom/kwad/components/ad/feed/b/c;)Z

    move-result v2

    invoke-static {v1, v2}, Lcom/kwad/components/ad/feed/b/c;->a(Lcom/kwad/components/ad/feed/b/c;Z)Z

    move-result v1

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->setAudioEnabled(ZZ)V

    return-void
.end method

.method public final onLivePlayStart()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/offline/api/core/adlive/listener/AdLivePlayStateListenerAdapter;->onLivePlayStart()V

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/c$7;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/b/c;->g(Lcom/kwad/components/ad/feed/b/c;)Lcom/kwad/components/core/j/a$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/j/a;->a(Lcom/kwad/components/core/j/a$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/c$7;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/b/c;->i(Lcom/kwad/components/ad/feed/b/c;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/c$7;->eM:Lcom/kwad/components/ad/feed/b/c;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/b/c;->h(Lcom/kwad/components/ad/feed/b/c;)Z

    move-result v2

    invoke-static {v1, v2}, Lcom/kwad/components/ad/feed/b/c;->a(Lcom/kwad/components/ad/feed/b/c;Z)Z

    move-result v1

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;->setAudioEnabled(ZZ)V

    return-void
.end method
