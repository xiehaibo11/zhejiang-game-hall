.class final Lcom/kwad/components/ad/reward/presenter/f/e$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/e;->R(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wF:Lcom/kwad/components/ad/reward/presenter/f/e;

.field final synthetic wG:I


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/e;I)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/e$3;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    iput p2, p0, Lcom/kwad/components/ad/reward/presenter/f/e$3;->wG:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e$3;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/e;->d(Lcom/kwad/components/ad/reward/presenter/f/e;)I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/e$3;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    iget v2, p0, Lcom/kwad/components/ad/reward/presenter/f/e$3;->wG:I

    invoke-static {v1, v2}, Lcom/kwad/components/ad/reward/presenter/f/e;->a(Lcom/kwad/components/ad/reward/presenter/f/e;I)I

    move-result v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/f/e$3;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/f/e;->e(Lcom/kwad/components/ad/reward/presenter/f/e;)Landroid/widget/FrameLayout;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/f/e$3;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/f/e;->e(Lcom/kwad/components/ad/reward/presenter/f/e;)Landroid/widget/FrameLayout;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/FrameLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v3, -0x1

    iput v3, v2, Landroid/widget/FrameLayout$LayoutParams;->width:I

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/f/e$3;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-static {v3}, Lcom/kwad/components/ad/reward/presenter/f/e;->f(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;

    move-result-object v3

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v3}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getHeight()I

    move-result v3

    sub-int/2addr v3, v0

    sub-int/2addr v3, v1

    if-gez v3, :cond_0

    const/4 v3, 0x0

    :cond_0
    iput v0, v2, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    iput v3, v2, Landroid/widget/FrameLayout$LayoutParams;->height:I

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e$3;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/e;->e(Lcom/kwad/components/ad/reward/presenter/f/e;)Landroid/widget/FrameLayout;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method
