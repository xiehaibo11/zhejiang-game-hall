.class public Lcom/tkay/basead/ui/GuideToClickView;
.super Landroid/widget/RelativeLayout;


# instance fields
.field a:Lcom/tkay/basead/ui/WaveAnimImageView;

.field b:Lcom/tkay/basead/ui/WaveAnimImageView;

.field c:Landroid/widget/ImageView;

.field d:F

.field e:F

.field f:F

.field g:F

.field h:F

.field i:F

.field final j:I

.field final k:I

.field final l:F

.field m:Landroid/animation/ValueAnimator;

.field n:Landroid/animation/ValueAnimator;

.field o:Landroid/view/animation/ScaleAnimation;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 43
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/16 v0, 0x3e8

    .line 33
    iput v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->j:I

    const/16 v0, 0xc8

    .line 34
    iput v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->k:I

    const v0, 0x3f36db6e

    .line 35
    iput v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->l:F

    .line 44
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/GuideToClickView;->a(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 48
    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/16 p2, 0x3e8

    .line 33
    iput p2, p0, Lcom/tkay/basead/ui/GuideToClickView;->j:I

    const/16 p2, 0xc8

    .line 34
    iput p2, p0, Lcom/tkay/basead/ui/GuideToClickView;->k:I

    const p2, 0x3f36db6e

    .line 35
    iput p2, p0, Lcom/tkay/basead/ui/GuideToClickView;->l:F

    .line 49
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/GuideToClickView;->a(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 53
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/16 p2, 0x3e8

    .line 33
    iput p2, p0, Lcom/tkay/basead/ui/GuideToClickView;->j:I

    const/16 p2, 0xc8

    .line 34
    iput p2, p0, Lcom/tkay/basead/ui/GuideToClickView;->k:I

    const p2, 0x3f36db6e

    .line 35
    iput p2, p0, Lcom/tkay/basead/ui/GuideToClickView;->l:F

    .line 54
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/GuideToClickView;->a(Landroid/content/Context;)V

    return-void
.end method

.method private a()V
    .locals 4

    .line 96
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->m:Landroid/animation/ValueAnimator;

    iget-object v1, p0, Lcom/tkay/basead/ui/GuideToClickView;->a:Lcom/tkay/basead/ui/WaveAnimImageView;

    const-wide/16 v2, 0x0

    invoke-virtual {p0, v0, v1, v2, v3}, Lcom/tkay/basead/ui/GuideToClickView;->startAnim(Landroid/animation/ValueAnimator;Lcom/tkay/basead/ui/WaveAnimImageView;J)V

    .line 97
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->n:Landroid/animation/ValueAnimator;

    iget-object v1, p0, Lcom/tkay/basead/ui/GuideToClickView;->b:Lcom/tkay/basead/ui/WaveAnimImageView;

    const-wide/16 v2, 0x320

    invoke-virtual {p0, v0, v1, v2, v3}, Lcom/tkay/basead/ui/GuideToClickView;->startAnim(Landroid/animation/ValueAnimator;Lcom/tkay/basead/ui/WaveAnimImageView;J)V

    .line 99
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->c:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/tkay/basead/ui/GuideToClickView;->o:Landroid/view/animation/ScaleAnimation;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 3

    .line 58
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    const-string v1, "myoffer_guide_to_click"

    const-string v2, "layout"

    invoke-static {p1, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    const v0, 0x3f4ccccd    # 0.8f

    .line 60
    iput v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->d:F

    const v0, 0x3d4ccccd    # 0.05f

    .line 61
    iput v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->e:F

    const/high16 v0, 0x40800000    # 4.0f

    .line 63
    invoke-static {p1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    int-to-float v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->f:F

    const/high16 v0, 0x41900000    # 18.0f

    .line 64
    invoke-static {p1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    int-to-float v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->g:F

    const/high16 v0, 0x40000000    # 2.0f

    .line 66
    invoke-static {p1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    int-to-float v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->h:F

    const/high16 v0, 0x42200000    # 40.0f

    .line 67
    invoke-static {p1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    int-to-float v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->i:F

    const-string v0, "id"

    const-string v1, "myoffer_wave_anim_image"

    .line 69
    invoke-static {p1, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/basead/ui/GuideToClickView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/basead/ui/WaveAnimImageView;

    iput-object v1, p0, Lcom/tkay/basead/ui/GuideToClickView;->a:Lcom/tkay/basead/ui/WaveAnimImageView;

    const-string v1, "myoffer_wave_anim_image2"

    .line 70
    invoke-static {p1, v1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/basead/ui/GuideToClickView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/basead/ui/WaveAnimImageView;

    iput-object v1, p0, Lcom/tkay/basead/ui/GuideToClickView;->b:Lcom/tkay/basead/ui/WaveAnimImageView;

    const/4 v1, 0x2

    new-array v2, v1, [F

    .line 72
    fill-array-data v2, :array_0

    invoke-static {v2}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/basead/ui/GuideToClickView;->m:Landroid/animation/ValueAnimator;

    new-array v2, v1, [F

    .line 73
    fill-array-data v2, :array_1

    invoke-static {v2}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/basead/ui/GuideToClickView;->n:Landroid/animation/ValueAnimator;

    const-string v2, "myoffer_guide_to_click_finger"

    .line 75
    invoke-static {p1, v2, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/GuideToClickView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/tkay/basead/ui/GuideToClickView;->c:Landroid/widget/ImageView;

    .line 76
    new-instance p1, Landroid/view/animation/ScaleAnimation;

    const v0, 0x3f8ccccd    # 1.1f

    const/high16 v2, 0x3f800000    # 1.0f

    invoke-direct {p1, v2, v0, v2, v0}, Landroid/view/animation/ScaleAnimation;-><init>(FFFF)V

    iput-object p1, p0, Lcom/tkay/basead/ui/GuideToClickView;->o:Landroid/view/animation/ScaleAnimation;

    .line 77
    invoke-virtual {p1, v1}, Landroid/view/animation/ScaleAnimation;->setRepeatMode(I)V

    .line 78
    iget-object p1, p0, Lcom/tkay/basead/ui/GuideToClickView;->o:Landroid/view/animation/ScaleAnimation;

    const/4 v0, -0x1

    invoke-virtual {p1, v0}, Landroid/view/animation/ScaleAnimation;->setRepeatCount(I)V

    .line 79
    iget-object p1, p0, Lcom/tkay/basead/ui/GuideToClickView;->o:Landroid/view/animation/ScaleAnimation;

    const-wide/16 v0, 0x14d

    invoke-virtual {p1, v0, v1}, Landroid/view/animation/ScaleAnimation;->setDuration(J)V

    return-void

    nop

    :array_0
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data

    :array_1
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data
.end method

.method private b()V
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->m:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_0

    .line 104
    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    .line 106
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->n:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_1

    .line 107
    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    .line 109
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->o:Landroid/view/animation/ScaleAnimation;

    if-eqz v0, :cond_2

    .line 110
    invoke-virtual {v0}, Landroid/view/animation/ScaleAnimation;->cancel()V

    :cond_2
    return-void
.end method


# virtual methods
.method protected onAttachedToWindow()V
    .locals 4

    .line 85
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    .line 1096
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->m:Landroid/animation/ValueAnimator;

    iget-object v1, p0, Lcom/tkay/basead/ui/GuideToClickView;->a:Lcom/tkay/basead/ui/WaveAnimImageView;

    const-wide/16 v2, 0x0

    invoke-virtual {p0, v0, v1, v2, v3}, Lcom/tkay/basead/ui/GuideToClickView;->startAnim(Landroid/animation/ValueAnimator;Lcom/tkay/basead/ui/WaveAnimImageView;J)V

    .line 1097
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->n:Landroid/animation/ValueAnimator;

    iget-object v1, p0, Lcom/tkay/basead/ui/GuideToClickView;->b:Lcom/tkay/basead/ui/WaveAnimImageView;

    const-wide/16 v2, 0x320

    invoke-virtual {p0, v0, v1, v2, v3}, Lcom/tkay/basead/ui/GuideToClickView;->startAnim(Landroid/animation/ValueAnimator;Lcom/tkay/basead/ui/WaveAnimImageView;J)V

    .line 1099
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->c:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/tkay/basead/ui/GuideToClickView;->o:Landroid/view/animation/ScaleAnimation;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    .line 91
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    .line 1103
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->m:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_0

    .line 1104
    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    .line 1106
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->n:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_1

    .line 1107
    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    .line 1109
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/GuideToClickView;->o:Landroid/view/animation/ScaleAnimation;

    if-eqz v0, :cond_2

    .line 1110
    invoke-virtual {v0}, Landroid/view/animation/ScaleAnimation;->cancel()V

    :cond_2
    return-void
.end method

.method public startAnim(Landroid/animation/ValueAnimator;Lcom/tkay/basead/ui/WaveAnimImageView;J)V
    .locals 2

    if-eqz p1, :cond_0

    const/4 v0, 0x1

    .line 116
    invoke-virtual {p1, v0}, Landroid/animation/ValueAnimator;->setRepeatMode(I)V

    const/4 v0, -0x1

    .line 117
    invoke-virtual {p1, v0}, Landroid/animation/ValueAnimator;->setRepeatCount(I)V

    const-wide/16 v0, 0x578

    .line 118
    invoke-virtual {p1, v0, v1}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    .line 119
    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->removeAllUpdateListeners()V

    .line 120
    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->removeAllListeners()V

    .line 121
    new-instance v0, Lcom/tkay/basead/ui/GuideToClickView$1;

    invoke-direct {v0, p0, p2}, Lcom/tkay/basead/ui/GuideToClickView$1;-><init>(Lcom/tkay/basead/ui/GuideToClickView;Lcom/tkay/basead/ui/WaveAnimImageView;)V

    invoke-virtual {p1, v0}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    .line 153
    invoke-virtual {p1, p3, p4}, Landroid/animation/ValueAnimator;->setStartDelay(J)V

    .line 154
    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->start()V

    :cond_0
    return-void
.end method
