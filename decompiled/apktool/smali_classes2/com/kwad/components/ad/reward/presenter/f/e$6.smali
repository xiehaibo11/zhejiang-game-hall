.class final Lcom/kwad/components/ad/reward/presenter/f/e$6;
.super Lcom/kwad/components/core/webview/b/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/e;->ej()Lcom/kwad/components/core/webview/b/f;
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

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/e$6;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/f;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/f;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    new-instance p1, Lcom/kwad/components/core/webview/b/b/a;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/a;-><init>()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e$6;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/e;->k(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->fz:Z

    iput v0, p1, Lcom/kwad/components/core/webview/b/b/a;->WQ:I

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
