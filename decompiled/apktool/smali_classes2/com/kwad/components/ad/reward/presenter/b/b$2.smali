.class final Lcom/kwad/components/ad/reward/presenter/b/b$2;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/b/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic tN:Lcom/kwad/components/ad/reward/presenter/b/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/b/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/b/b$2;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLivePlayEnd()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onLivePlayEnd()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$2;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/b/b;->b(Lcom/kwad/components/ad/reward/presenter/b/b;)V

    return-void
.end method

.method public final onLivePlayResume()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onLivePlayResume()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$2;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/b/b;->c(Lcom/kwad/components/ad/reward/presenter/b/b;)V

    return-void
.end method

.method public final onMediaPlayProgress(JJ)V
    .locals 0

    invoke-super {p0, p1, p2, p3, p4}, Lcom/kwad/components/core/video/l;->onMediaPlayProgress(JJ)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/b/b$2;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {p1, p3, p4}, Lcom/kwad/components/ad/reward/presenter/b/b;->a(Lcom/kwad/components/ad/reward/presenter/b/b;J)J

    return-void
.end method

.method public final onMediaPlayStart()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlayStart()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b$2;->tN:Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/b/b;->c(Lcom/kwad/components/ad/reward/presenter/b/b;)V

    return-void
.end method
