.class final Lcom/kwad/components/ad/reward/presenter/s$7;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/s;->a(FF)Landroid/animation/Animator;
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

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/s$7;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationStart(Landroid/animation/Animator;)V
    .locals 1

    invoke-super {p0, p1}, Landroid/animation/AnimatorListenerAdapter;->onAnimationStart(Landroid/animation/Animator;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/s$7;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/s;->f(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/widget/ImageView;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$7;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->f(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getWidth()I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setPivotX(F)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/s$7;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/s;->f(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/widget/ImageView;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$7;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->f(Lcom/kwad/components/ad/reward/presenter/s;)Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getHeight()I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setPivotY(F)V

    return-void
.end method
