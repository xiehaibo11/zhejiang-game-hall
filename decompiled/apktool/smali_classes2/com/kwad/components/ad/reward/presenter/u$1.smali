.class final Lcom/kwad/components/ad/reward/presenter/u$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/u;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic tC:Lcom/kwad/components/ad/reward/presenter/u;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/u;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/u$1;->tC:Lcom/kwad/components/ad/reward/presenter/u;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayStart()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlayStart()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u$1;->tC:Lcom/kwad/components/ad/reward/presenter/u;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/u;->a(Lcom/kwad/components/ad/reward/presenter/u;)Lcom/kwad/components/core/video/DetailVideoView;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/u$1$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/u$1$1;-><init>(Lcom/kwad/components/ad/reward/presenter/u$1;)V

    const-wide/16 v2, 0xc8

    invoke-virtual {v0, v1, v2, v3}, Lcom/kwad/components/core/video/DetailVideoView;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method
