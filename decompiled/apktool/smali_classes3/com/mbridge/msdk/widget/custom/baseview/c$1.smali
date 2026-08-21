.class final Lcom/mbridge/msdk/widget/custom/baseview/c$1;
.super Ljava/lang/Object;
.source "MorphingAnimation.java"

# interfaces
.implements Landroid/animation/ValueAnimator$AnimatorUpdateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/widget/custom/baseview/c;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/graphics/drawable/GradientDrawable;

.field final synthetic b:Lcom/mbridge/msdk/widget/custom/baseview/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/baseview/c;Landroid/graphics/drawable/GradientDrawable;)V
    .locals 0

    .line 85
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->b:Lcom/mbridge/msdk/widget/custom/baseview/c;

    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->a:Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationUpdate(Landroid/animation/ValueAnimator;)V
    .locals 4

    .line 88
    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    .line 93
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->b:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(Lcom/mbridge/msdk/widget/custom/baseview/c;)I

    move-result v1

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->b:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-static {v2}, Lcom/mbridge/msdk/widget/custom/baseview/c;->b(Lcom/mbridge/msdk/widget/custom/baseview/c;)I

    move-result v2

    if-le v1, v2, :cond_0

    .line 94
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->b:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(Lcom/mbridge/msdk/widget/custom/baseview/c;)I

    move-result v1

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sub-int/2addr v1, v0

    div-int/lit8 v1, v1, 0x2

    .line 95
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->b:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(Lcom/mbridge/msdk/widget/custom/baseview/c;)I

    move-result v0

    sub-int/2addr v0, v1

    .line 96
    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->b:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-static {v2}, Lcom/mbridge/msdk/widget/custom/baseview/c;->c(Lcom/mbridge/msdk/widget/custom/baseview/c;)F

    move-result v2

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedFraction()F

    move-result p1

    mul-float/2addr v2, p1

    goto :goto_0

    .line 98
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->b:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->b(Lcom/mbridge/msdk/widget/custom/baseview/c;)I

    move-result v1

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sub-int/2addr v1, v0

    div-int/lit8 v1, v1, 0x2

    .line 99
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->b:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->b(Lcom/mbridge/msdk/widget/custom/baseview/c;)I

    move-result v0

    sub-int/2addr v0, v1

    .line 100
    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->b:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-static {v2}, Lcom/mbridge/msdk/widget/custom/baseview/c;->c(Lcom/mbridge/msdk/widget/custom/baseview/c;)F

    move-result v2

    iget-object v3, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->b:Lcom/mbridge/msdk/widget/custom/baseview/c;

    invoke-static {v3}, Lcom/mbridge/msdk/widget/custom/baseview/c;->c(Lcom/mbridge/msdk/widget/custom/baseview/c;)F

    move-result v3

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->getAnimatedFraction()F

    move-result p1

    mul-float/2addr v3, p1

    sub-float/2addr v2, v3

    :goto_0
    float-to-int p1, v2

    .line 103
    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->a:Landroid/graphics/drawable/GradientDrawable;

    add-int/2addr v1, p1

    sub-int/2addr v0, p1

    iget-object v3, p0, Lcom/mbridge/msdk/widget/custom/baseview/c$1;->b:Lcom/mbridge/msdk/widget/custom/baseview/c;

    .line 104
    invoke-static {v3}, Lcom/mbridge/msdk/widget/custom/baseview/c;->d(Lcom/mbridge/msdk/widget/custom/baseview/c;)Landroid/widget/TextView;

    move-result-object v3

    invoke-virtual {v3}, Landroid/widget/TextView;->getHeight()I

    move-result v3

    sub-int/2addr v3, p1

    invoke-virtual {v2, v1, p1, v0, v3}, Landroid/graphics/drawable/GradientDrawable;->setBounds(IIII)V

    return-void
.end method
