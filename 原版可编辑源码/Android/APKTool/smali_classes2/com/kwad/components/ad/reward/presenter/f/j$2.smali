.class final Lcom/kwad/components/ad/reward/presenter/f/j$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/j$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/f/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wX:Lcom/kwad/components/ad/reward/presenter/f/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/j$2;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final gj()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$2;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/presenter/f/j;->a(Lcom/kwad/components/ad/reward/presenter/f/j;Z)Z

    return-void
.end method

.method public final gk()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$2;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/presenter/f/j;->a(Lcom/kwad/components/ad/reward/presenter/f/j;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$2;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/j;->b(Lcom/kwad/components/ad/reward/presenter/f/j;)V

    return-void
.end method

.method public final gl()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$2;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/presenter/f/j;->a(Lcom/kwad/components/ad/reward/presenter/f/j;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$2;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/j;->c(Lcom/kwad/components/ad/reward/presenter/f/j;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$2;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/j;->c(Lcom/kwad/components/ad/reward/presenter/f/j;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rE()V

    :cond_0
    return-void
.end method

.method public final gm()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$2;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/presenter/f/j;->a(Lcom/kwad/components/ad/reward/presenter/f/j;Z)Z

    return-void
.end method
