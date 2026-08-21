.class final Lcom/kwad/components/ad/reward/presenter/u$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/u$1;->onMediaPlayStart()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic tD:Lcom/kwad/components/ad/reward/presenter/u$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/u$1;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/u$1$1;->tD:Lcom/kwad/components/ad/reward/presenter/u$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u$1$1;->tD:Lcom/kwad/components/ad/reward/presenter/u$1;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/u$1;->tC:Lcom/kwad/components/ad/reward/presenter/u;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/u;->a(Lcom/kwad/components/ad/reward/presenter/u;)Lcom/kwad/components/core/video/DetailVideoView;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setVisibility(I)V

    return-void
.end method
