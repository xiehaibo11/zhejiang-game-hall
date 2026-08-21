.class final Lcom/kwad/components/ad/reward/presenter/f/d$7$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/d$7;->bD()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wv:Lcom/kwad/components/ad/reward/presenter/f/d$7;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/d$7;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d$7$1;->wv:Lcom/kwad/components/ad/reward/presenter/f/d$7;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/b/b/o;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/b/o;-><init>()V

    const/4 v1, 0x1

    iput v1, v0, Lcom/kwad/components/core/webview/b/b/o;->Xb:I

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d$7$1;->wv:Lcom/kwad/components/ad/reward/presenter/f/d$7;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/presenter/f/d$7;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/d;->K(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j/j;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/reward/j/j;->a(Lcom/kwad/components/core/webview/b/b/o;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d$7$1;->wv:Lcom/kwad/components/ad/reward/presenter/f/d$7;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/f/d$7;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/d;->L(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/core/webview/b/a/h;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d$7$1;->wv:Lcom/kwad/components/ad/reward/presenter/f/d$7;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/f/d$7;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/d;->M(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pL:Z

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d$7$1;->wv:Lcom/kwad/components/ad/reward/presenter/f/d$7;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/presenter/f/d$7;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/d;->L(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/core/webview/b/a/h;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/webview/b/a/h;->aN(Z)V

    :cond_0
    return-void
.end method
