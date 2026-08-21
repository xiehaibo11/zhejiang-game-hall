.class final Lcom/kwad/components/ad/reward/presenter/f/j$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/b/a/e$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/j;->ji()Lcom/kwad/components/core/webview/b/a/e$b;
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

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/j$3;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final jj()I
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$3;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/j;->d(Lcom/kwad/components/ad/reward/presenter/f/j;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->py:Lcom/kwad/components/ad/reward/e/m;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/j$3;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/j;->e(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/content/Context;

    move-result-object v1

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/m;->bZ()I

    move-result v0

    int-to-float v0, v0

    invoke-static {v1, v0}, Lcom/kwad/sdk/d/a/a;->b(Landroid/content/Context;F)I

    move-result v0

    return v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$3;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/j;->f(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$3;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/j;->f(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    instance-of v1, v0, Landroid/view/ViewGroup$MarginLayoutParams;

    if-eqz v1, :cond_1

    check-cast v0, Landroid/view/ViewGroup$MarginLayoutParams;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/j$3;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/j;->g(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/f/j$3;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/f/j;->f(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2}, Landroid/view/View;->getHeight()I

    move-result v2

    iget v0, v0, Landroid/view/ViewGroup$MarginLayoutParams;->bottomMargin:I

    add-int/2addr v2, v0

    int-to-float v0, v2

    invoke-static {v1, v0}, Lcom/kwad/sdk/d/a/a;->b(Landroid/content/Context;F)I

    move-result v0

    return v0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$3;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/j;->h(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/j$3;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/j;->f(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/View;->getHeight()I

    move-result v1

    int-to-float v1, v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->b(Landroid/content/Context;F)I

    move-result v0

    return v0

    :cond_2
    const/4 v0, 0x0

    return v0
.end method
