.class final Lcom/kwad/components/ad/reward/presenter/f/b$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/b;->a(Lcom/kwad/components/core/webview/b/b/t;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wi:Lcom/kwad/components/ad/reward/presenter/f/b;

.field final synthetic wj:Lcom/kwad/components/core/webview/b/b/t;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/b;Lcom/kwad/components/core/webview/b/b/t;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/b$4;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/b$4;->wj:Lcom/kwad/components/core/webview/b/b/t;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/b$4;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;->n(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/b$4;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;->o(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/b$4;->wj:Lcom/kwad/components/core/webview/b/b/t;

    iget-wide v0, v0, Lcom/kwad/components/core/webview/b/b/t;->Xf:J

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/f/b$4;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/f/b;->p(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v2, v0, v1}, Lcom/kwad/components/ad/reward/e/b;->onVideoSkipToEnd(J)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/b$4;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;->q(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e;->v(Lcom/kwad/components/ad/reward/j;)V

    return-void
.end method
