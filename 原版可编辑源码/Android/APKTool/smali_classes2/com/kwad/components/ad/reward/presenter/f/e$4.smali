.class final Lcom/kwad/components/ad/reward/presenter/f/e$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/b/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/f/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wF:Lcom/kwad/components/ad/reward/presenter/f/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/e$4;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final ck()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e$4;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/e;->g(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/core/webview/b/f;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/webview/b/b/a;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/b/a;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/e$4;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/e;->h(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;

    move-result-object v1

    iget-boolean v1, v1, Lcom/kwad/components/ad/reward/j;->fz:Z

    iput v1, v0, Lcom/kwad/components/core/webview/b/b/a;->WQ:I

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/e$4;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/e;->g(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/core/webview/b/f;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/webview/b/f;->b(Lcom/kwad/sdk/core/response/a/a;)V

    :cond_0
    return-void
.end method
