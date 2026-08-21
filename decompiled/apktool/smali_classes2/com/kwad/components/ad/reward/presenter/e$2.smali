.class final Lcom/kwad/components/ad/reward/presenter/e$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/e;->q(Lcom/kwad/components/ad/reward/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic oB:Lcom/kwad/components/ad/reward/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$2;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e$2;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->gd()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e$2;->oB:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/e$2;->oB:Lcom/kwad/components/ad/reward/j;

    iget-wide v1, v1, Lcom/kwad/components/ad/reward/j;->pF:J

    invoke-interface {v0, v1, v2}, Lcom/kwad/components/ad/reward/e/b;->onVideoSkipToEnd(J)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e$2;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->release()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e$2;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->hw()V

    return-void
.end method
