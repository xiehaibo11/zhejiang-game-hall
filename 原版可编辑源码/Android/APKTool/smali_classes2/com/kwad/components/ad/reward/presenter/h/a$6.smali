.class final Lcom/kwad/components/ad/reward/presenter/h/a$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/h/a;->hE()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic xq:Lcom/kwad/components/ad/reward/presenter/h/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/h/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a$6;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$6;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->m(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$6;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->n(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->onRewardVerify()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$6;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->o(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->pause()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$6;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->p(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->fR()V

    return-void
.end method
