.class final Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/animation/ValueAnimator$AnimatorUpdateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/widget/KsAuthorIconView;->f(Landroid/view/View;Z)Landroid/animation/ValueAnimator$AnimatorUpdateListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic AS:Z

.field final synthetic eX:Landroid/view/View;


# direct methods
.method constructor <init>(Landroid/view/View;Z)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$1;->eX:Landroid/view/View;

    iput-boolean p2, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$1;->AS:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationUpdate(Landroid/animation/ValueAnimator;)V
    .locals 2

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Float;

    invoke-virtual {p1}, Ljava/lang/Float;->floatValue()F

    move-result p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$1;->eX:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    if-eqz v0, :cond_1

    float-to-int p1, p1

    iput p1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$1;->AS:Z

    if-nez v1, :cond_0

    iput p1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/KsAuthorIconView$1;->eX:Landroid/view/View;

    invoke-virtual {p1, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method
