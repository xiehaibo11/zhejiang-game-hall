.class final Lcom/kwad/components/ad/reward/presenter/s$1;
.super Lcom/kwad/components/ad/reward/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/s;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic tw:Lcom/kwad/components/ad/reward/presenter/s;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/s;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/s$1;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/e/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final bD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$1;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->a(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/view/ViewGroup;

    move-result-object v0

    const/16 v1, 0x8

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$1;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->a(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/view/ViewGroup;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$1;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->b(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/widget/FrameLayout;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$1;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->b(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/widget/FrameLayout;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$1;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->c(Lcom/kwad/components/ad/reward/presenter/s;)Lcom/kwad/sdk/core/g/d;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$1;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->c(Lcom/kwad/components/ad/reward/presenter/s;)Lcom/kwad/sdk/core/g/d;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/s$1;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/s;->d(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bh(Landroid/content/Context;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$1;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->e(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/animation/Animator;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$1;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->e(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/animation/Animator;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$1;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/presenter/s;->a(Lcom/kwad/components/ad/reward/presenter/s;Landroid/animation/Animator;)Landroid/animation/Animator;

    :cond_3
    return-void
.end method
