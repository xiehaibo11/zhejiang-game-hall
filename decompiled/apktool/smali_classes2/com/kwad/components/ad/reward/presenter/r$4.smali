.class final Lcom/kwad/components/ad/reward/presenter/r$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/animation/ValueAnimator$AnimatorUpdateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/r;->a(ZFIZZ)Landroid/animation/Animator;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic tt:Lcom/kwad/components/ad/reward/presenter/r;

.field final synthetic tv:Landroid/view/ViewGroup$LayoutParams;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/r;Landroid/view/ViewGroup$LayoutParams;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r$4;->tt:Lcom/kwad/components/ad/reward/presenter/r;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/r$4;->tv:Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationUpdate(Landroid/animation/ValueAnimator;)V
    .locals 1

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r$4;->tv:Landroid/view/ViewGroup$LayoutParams;

    if-eqz v0, :cond_0

    iput p1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/r$4;->tt:Lcom/kwad/components/ad/reward/presenter/r;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/r;->b(Lcom/kwad/components/ad/reward/presenter/r;)Landroid/widget/ImageView;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/r$4;->tv:Landroid/view/ViewGroup$LayoutParams;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method
