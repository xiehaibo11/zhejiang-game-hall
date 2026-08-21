.class final Lcom/kwad/components/core/video/DetailVideoView$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/animation/ValueAnimator$AnimatorUpdateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/video/DetailVideoView;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILandroid/animation/ValueAnimator$AnimatorUpdateListener;)Landroid/animation/ValueAnimator;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic SB:Lcom/kwad/components/core/video/DetailVideoView;

.field final synthetic SC:Z

.field final synthetic SD:F

.field final synthetic SE:Landroid/view/ViewGroup$LayoutParams;

.field final synthetic SF:Landroid/animation/ValueAnimator$AnimatorUpdateListener;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/video/DetailVideoView;ZFLandroid/view/ViewGroup$LayoutParams;Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SB:Lcom/kwad/components/core/video/DetailVideoView;

    iput-boolean p2, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SC:Z

    iput p3, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SD:F

    iput-object p4, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SE:Landroid/view/ViewGroup$LayoutParams;

    iput-object p5, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SF:Landroid/animation/ValueAnimator$AnimatorUpdateListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationUpdate(Landroid/animation/ValueAnimator;)V
    .locals 4

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iget-boolean v1, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SC:Z

    if-eqz v1, :cond_1

    int-to-float v1, v0

    iget v2, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SD:F

    div-float/2addr v1, v2

    float-to-int v1, v1

    iget-object v2, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SE:Landroid/view/ViewGroup$LayoutParams;

    if-eqz v2, :cond_0

    iput v0, v2, Landroid/view/ViewGroup$LayoutParams;->height:I

    iget-object v2, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SE:Landroid/view/ViewGroup$LayoutParams;

    iput v1, v2, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget-object v2, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SB:Lcom/kwad/components/core/video/DetailVideoView;

    iget-object v3, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SE:Landroid/view/ViewGroup$LayoutParams;

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/video/DetailVideoView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    iget-object v2, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SB:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v2, v1, v0}, Lcom/kwad/components/core/video/DetailVideoView;->adaptVideoSize(II)V

    goto :goto_0

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SE:Landroid/view/ViewGroup$LayoutParams;

    if-eqz v1, :cond_2

    iput v0, v1, Landroid/view/ViewGroup$LayoutParams;->height:I

    iget-object v0, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SE:Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget-object v0, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SB:Lcom/kwad/components/core/video/DetailVideoView;

    iget-object v1, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SE:Landroid/view/ViewGroup$LayoutParams;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/video/DetailVideoView$2;->SF:Landroid/animation/ValueAnimator$AnimatorUpdateListener;

    if-eqz v0, :cond_3

    invoke-interface {v0, p1}, Landroid/animation/ValueAnimator$AnimatorUpdateListener;->onAnimationUpdate(Landroid/animation/ValueAnimator;)V

    :cond_3
    return-void
.end method
