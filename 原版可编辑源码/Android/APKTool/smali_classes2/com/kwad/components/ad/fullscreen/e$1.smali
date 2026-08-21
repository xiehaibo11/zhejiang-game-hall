.class final Lcom/kwad/components/ad/fullscreen/e$1;
.super Lcom/kwad/components/ad/fullscreen/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/fullscreen/e;->setFullScreenVideoAdInteractionListener(Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic fW:Lcom/kwad/components/ad/fullscreen/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/fullscreen/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/e$1;->fW:Lcom/kwad/components/ad/fullscreen/e;

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageDismiss()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/fullscreen/c;->onPageDismiss()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/e$1;->fW:Lcom/kwad/components/ad/fullscreen/e;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/e;->a(Lcom/kwad/components/ad/fullscreen/e;)Lcom/kwad/components/core/internal/api/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/e$1;->fW:Lcom/kwad/components/ad/fullscreen/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/internal/api/c;->i(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/fullscreen/c;->onVideoPlayStart()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/e$1;->fW:Lcom/kwad/components/ad/fullscreen/e;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/e;->a(Lcom/kwad/components/ad/fullscreen/e;)Lcom/kwad/components/core/internal/api/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/e$1;->fW:Lcom/kwad/components/ad/fullscreen/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/internal/api/c;->h(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method
