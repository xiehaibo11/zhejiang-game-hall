.class public Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;
.super Landroid/view/View;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;
    }
.end annotation


# instance fields
.field private axA:I

.field private axB:I

.field private axC:I

.field private axD:Landroid/graphics/drawable/GradientDrawable;

.field private axE:Landroid/graphics/drawable/GradientDrawable;

.field private axF:Landroid/graphics/drawable/GradientDrawable;

.field private axG:Landroid/graphics/Rect;

.field private axH:Landroid/graphics/Rect;

.field private axI:Landroid/graphics/Rect;

.field private axJ:Landroid/graphics/Rect;

.field private axK:Landroid/graphics/drawable/Drawable;

.field private axL:Z

.field private axM:Z

.field private axN:Z

.field private axO:Z

.field private axP:Z

.field private axQ:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;",
            ">;"
        }
    .end annotation
.end field

.field private axR:Z

.field private axS:Z

.field private axT:Landroid/animation/ValueAnimator;

.field private axU:Landroid/animation/ValueAnimator;

.field private axV:Landroid/animation/ValueAnimator;

.field private axW:F

.field private axX:F

.field private axY:F

.field private axZ:F

.field private axm:Landroid/graphics/Paint;

.field private axn:I

.field private axo:I

.field private axp:I

.field private axq:I

.field private axr:I

.field private axs:I

.field private axt:I

.field private axu:I

.field private axv:Z

.field private axw:I

.field private axx:I

.field private axy:I

.field private axz:I

.field private aya:I

.field private ayb:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 1

    invoke-direct {p0, p1, p2, p3}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/16 p3, 0x64

    iput p3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axs:I

    const/4 p3, 0x0

    iput-boolean p3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axv:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axK:Landroid/graphics/drawable/Drawable;

    iput-boolean p3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axL:Z

    iput-boolean p3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axM:Z

    iput-boolean p3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axN:Z

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axO:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axR:Z

    iput-boolean p3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axS:Z

    const/high16 p3, 0x3f800000    # 1.0f

    iput p3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axW:F

    const v0, 0x3fab851f    # 1.34f

    iput v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axX:F

    iput p3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axY:F

    const/high16 p3, 0x40000000    # 2.0f

    iput p3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axZ:F

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->init(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axy:I

    return p1
.end method

.method private a(IZZ)V
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axr:I

    if-gt p1, v0, :cond_0

    :goto_0
    move p1, v0

    goto :goto_1

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axs:I

    if-lt p1, v0, :cond_1

    goto :goto_0

    :cond_1
    :goto_1
    invoke-direct {p0, p2, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->h(ZI)V

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->getOnSeekBarChangedListener()Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;

    move-result-object p1

    if-eqz p1, :cond_2

    iget p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axz:I

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axy:I

    if-eq p2, v0, :cond_2

    iput-boolean p3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axN:Z

    invoke-interface {p1, p0, p3}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;->a(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;Z)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axN:Z

    :cond_2
    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axy:I

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axz:I

    return-void
.end method

.method private a(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/drawable/GradientDrawable;)V
    .locals 3

    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    iget v1, p2, Landroid/graphics/Rect;->top:I

    int-to-float v1, v1

    iget v2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axY:F

    mul-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, v0, Landroid/graphics/Rect;->top:I

    iget v1, p2, Landroid/graphics/Rect;->bottom:I

    int-to-float v1, v1

    iget v2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axY:F

    mul-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, v0, Landroid/graphics/Rect;->bottom:I

    iget v1, p2, Landroid/graphics/Rect;->left:I

    iput v1, v0, Landroid/graphics/Rect;->left:I

    iget p2, p2, Landroid/graphics/Rect;->right:I

    iput p2, v0, Landroid/graphics/Rect;->right:I

    invoke-virtual {p3, v0}, Landroid/graphics/drawable/GradientDrawable;->setBounds(Landroid/graphics/Rect;)V

    iget p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axt:I

    int-to-float p2, p2

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axY:F

    mul-float/2addr p2, v0

    invoke-virtual {p3, p2}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    invoke-virtual {p3, p1}, Landroid/graphics/drawable/GradientDrawable;->draw(Landroid/graphics/Canvas;)V

    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;F)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->g(F)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;F)F
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axW:F

    return p1
.end method

.method static synthetic b(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;I)I
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->cB(I)I

    move-result p0

    return p0
.end method

.method private bh(Z)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axR:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    const/4 p1, 0x1

    :goto_0
    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->bi(Z)V

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->bj(Z)V

    return-void

    :cond_1
    const/4 p1, 0x0

    goto :goto_0
.end method

.method private bi(Z)V
    .locals 4

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axW:F

    if-eqz p1, :cond_0

    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axX:F

    goto :goto_0

    :cond_0
    const/high16 p1, 0x3f800000    # 1.0f

    :goto_0
    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axT:Landroid/animation/ValueAnimator;

    if-nez v1, :cond_1

    new-instance v1, Landroid/animation/ValueAnimator;

    invoke-direct {v1}, Landroid/animation/ValueAnimator;-><init>()V

    iput-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axT:Landroid/animation/ValueAnimator;

    const-wide/16 v2, 0xfa

    invoke-virtual {v1, v2, v3}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axT:Landroid/animation/ValueAnimator;

    new-instance v2, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v2}, Landroid/view/animation/LinearInterpolator;-><init>()V

    invoke-virtual {v1, v2}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axT:Landroid/animation/ValueAnimator;

    new-instance v2, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$3;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$3;-><init>(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;)V

    invoke-virtual {v1, v2}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    goto :goto_1

    :cond_1
    invoke-virtual {v1}, Landroid/animation/ValueAnimator;->cancel()V

    :goto_1
    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axT:Landroid/animation/ValueAnimator;

    const/4 v2, 0x2

    new-array v2, v2, [F

    const/4 v3, 0x0

    aput v0, v2, v3

    const/4 v0, 0x1

    aput p1, v2, v0

    invoke-virtual {v1, v2}, Landroid/animation/ValueAnimator;->setFloatValues([F)V

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axT:Landroid/animation/ValueAnimator;

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->start()V

    return-void
.end method

.method private bj(Z)V
    .locals 4

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axY:F

    if-eqz p1, :cond_0

    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axZ:F

    goto :goto_0

    :cond_0
    const/high16 p1, 0x3f800000    # 1.0f

    :goto_0
    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axU:Landroid/animation/ValueAnimator;

    if-nez v1, :cond_1

    new-instance v1, Landroid/animation/ValueAnimator;

    invoke-direct {v1}, Landroid/animation/ValueAnimator;-><init>()V

    iput-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axU:Landroid/animation/ValueAnimator;

    const-wide/16 v2, 0xfa

    invoke-virtual {v1, v2, v3}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axU:Landroid/animation/ValueAnimator;

    new-instance v2, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v2}, Landroid/view/animation/LinearInterpolator;-><init>()V

    invoke-virtual {v1, v2}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axU:Landroid/animation/ValueAnimator;

    new-instance v2, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$4;

    invoke-direct {v2, p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$4;-><init>(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;)V

    invoke-virtual {v1, v2}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    goto :goto_1

    :cond_1
    invoke-virtual {v1}, Landroid/animation/ValueAnimator;->cancel()V

    :goto_1
    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axU:Landroid/animation/ValueAnimator;

    const/4 v2, 0x2

    new-array v2, v2, [F

    const/4 v3, 0x0

    aput v0, v2, v3

    const/4 v0, 0x1

    aput p1, v2, v0

    invoke-virtual {v1, v2}, Landroid/animation/ValueAnimator;->setFloatValues([F)V

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axU:Landroid/animation/ValueAnimator;

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->start()V

    return-void
.end method

.method private bm(Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axR:Z

    const/high16 v0, 0x41200000    # 10.0f

    invoke-static {p1, v0}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->aya:I

    const/high16 v0, 0x40400000    # 3.0f

    invoke-static {p1, v0}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axq:I

    const/high16 v0, 0x41a00000    # 20.0f

    invoke-static {p1, v0}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axx:I

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axK:Landroid/graphics/drawable/Drawable;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axS:Z

    const v1, 0x3e99999a    # 0.3f

    invoke-static {p1, v1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axu:I

    const/high16 v1, 0x3f800000    # 1.0f

    invoke-static {p1, v1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axt:I

    const p1, 0x26ffffff

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axn:I

    const/4 p1, -0x1

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axo:I

    const p1, 0x40ffffff    # 7.9999995f

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axp:I

    iput v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axr:I

    const/16 p1, 0x64

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axs:I

    iput-boolean v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axv:Z

    return-void
.end method

.method static synthetic c(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;F)F
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axY:F

    return p1
.end method

.method private c(Landroid/graphics/Canvas;)V
    .locals 4

    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axK:Landroid/graphics/drawable/Drawable;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/Drawable;->setBounds(Landroid/graphics/Rect;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axK:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axm:Landroid/graphics/Paint;

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axo:I

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    invoke-virtual {v0}, Landroid/graphics/Rect;->centerX()I

    move-result v0

    int-to-float v0, v0

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    invoke-virtual {v1}, Landroid/graphics/Rect;->centerY()I

    move-result v1

    int-to-float v1, v1

    iget-object v2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    invoke-virtual {v2}, Landroid/graphics/Rect;->width()I

    move-result v2

    int-to-float v2, v2

    iget v3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axW:F

    mul-float/2addr v2, v3

    const/high16 v3, 0x40000000    # 2.0f

    div-float/2addr v2, v3

    iget-object v3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axm:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1, v2, v3}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    :goto_0
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    return-void
.end method

.method private cA(I)F
    .locals 3

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    int-to-float v1, v0

    iget v2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axr:I

    sub-int/2addr p1, v2

    int-to-float p1, p1

    mul-float/2addr v1, p1

    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axs:I

    sub-int/2addr p1, v2

    int-to-float p1, p1

    div-float/2addr v1, p1

    int-to-float p1, v0

    const/high16 v0, 0x40000000    # 2.0f

    div-float/2addr p1, v0

    sub-float/2addr v1, p1

    return v1
.end method

.method private cB(I)I
    .locals 3

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    div-int/lit8 v1, v0, 0x2

    if-le p1, v1, :cond_0

    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axs:I

    return p1

    :cond_0
    neg-int v1, v0

    div-int/lit8 v1, v1, 0x2

    if-ge p1, v1, :cond_1

    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axr:I

    return p1

    :cond_1
    int-to-float p1, p1

    int-to-float v1, v0

    const/high16 v2, 0x40000000    # 2.0f

    div-float/2addr v1, v2

    add-float/2addr p1, v1

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axs:I

    iget v2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axr:I

    sub-int/2addr v1, v2

    int-to-float v1, v1

    mul-float/2addr p1, v1

    int-to-float v0, v0

    div-float/2addr p1, v0

    invoke-static {p1}, Ljava/lang/Math;->round(F)I

    move-result p1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axr:I

    add-int/2addr p1, v0

    return p1
.end method

.method private d(FF)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->left:I

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget v1, v1, Landroid/graphics/Rect;->right:I

    if-ge v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->top:I

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget v1, v1, Landroid/graphics/Rect;->bottom:I

    if-ge v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->left:I

    int-to-float v0, v0

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axW:F

    mul-float/2addr v0, v1

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axx:I

    int-to-float v1, v1

    sub-float/2addr v0, v1

    cmpl-float v0, p1, v0

    if-ltz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->right:I

    int-to-float v0, v0

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axW:F

    mul-float/2addr v0, v1

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axx:I

    int-to-float v1, v1

    add-float/2addr v0, v1

    cmpg-float p1, p1, v0

    if-gtz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget p1, p1, Landroid/graphics/Rect;->top:I

    int-to-float p1, p1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axW:F

    mul-float/2addr p1, v0

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axx:I

    int-to-float v0, v0

    sub-float/2addr p1, v0

    cmpl-float p1, p2, p1

    if-ltz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget p1, p1, Landroid/graphics/Rect;->bottom:I

    int-to-float p1, p1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axW:F

    mul-float/2addr p1, v0

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axx:I

    int-to-float v0, v0

    add-float/2addr p1, v0

    cmpg-float p1, p2, p1

    if-gtz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method private e(FF)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->left:I

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget v1, v1, Landroid/graphics/Rect;->right:I

    if-ge v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->top:I

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget v1, v1, Landroid/graphics/Rect;->bottom:I

    if-ge v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->left:I

    int-to-float v0, v0

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axY:F

    mul-float/2addr v0, v1

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axx:I

    int-to-float v1, v1

    sub-float/2addr v0, v1

    cmpl-float v0, p1, v0

    if-ltz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->right:I

    int-to-float v0, v0

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axY:F

    mul-float/2addr v0, v1

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axx:I

    int-to-float v1, v1

    add-float/2addr v0, v1

    cmpg-float p1, p1, v0

    if-gtz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget p1, p1, Landroid/graphics/Rect;->top:I

    int-to-float p1, p1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axY:F

    mul-float/2addr p1, v0

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axx:I

    int-to-float v0, v0

    sub-float/2addr p1, v0

    cmpl-float p1, p2, p1

    if-ltz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget p1, p1, Landroid/graphics/Rect;->bottom:I

    int-to-float p1, p1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axY:F

    mul-float/2addr p1, v0

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axx:I

    int-to-float v0, v0

    add-float/2addr p1, v0

    cmpg-float p1, p2, p1

    if-gtz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method private g(F)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axq:I

    int-to-float v1, v1

    sub-float v1, p1, v1

    float-to-int v1, v1

    iput v1, v0, Landroid/graphics/Rect;->left:I

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axq:I

    int-to-float v1, v1

    add-float/2addr v1, p1

    float-to-int v1, v1

    iput v1, v0, Landroid/graphics/Rect;->right:I

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axH:Landroid/graphics/Rect;

    float-to-int p1, p1

    iput p1, v0, Landroid/graphics/Rect;->right:I

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->invalidate()V

    return-void
.end method

.method private getOnSeekBarChangedListener()Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axQ:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private h(F)F
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    div-int/lit8 v0, v0, 0x2

    int-to-float v0, v0

    cmpl-float v1, p1, v0

    if-lez v1, :cond_0

    return v0

    :cond_0
    neg-float v0, v0

    cmpg-float v1, p1, v0

    if-gez v1, :cond_1

    return v0

    :cond_1
    return p1
.end method

.method private h(ZI)V
    .locals 3

    if-eqz p1, :cond_1

    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axy:I

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->cA(I)F

    move-result p1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->h(F)F

    move-result p1

    invoke-direct {p0, p2}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->cA(I)F

    move-result p2

    invoke-direct {p0, p2}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->h(F)F

    move-result p2

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axV:Landroid/animation/ValueAnimator;

    if-nez v0, :cond_0

    new-instance v0, Landroid/animation/ValueAnimator;

    invoke-direct {v0}, Landroid/animation/ValueAnimator;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axV:Landroid/animation/ValueAnimator;

    const-wide/16 v1, 0x12c

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axV:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$1;

    invoke-direct {v1, p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$1;-><init>(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axV:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$2;

    invoke-direct {v1, p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$2;-><init>(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    :goto_0
    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axV:Landroid/animation/ValueAnimator;

    const/4 v1, 0x2

    new-array v1, v1, [F

    const/4 v2, 0x0

    aput p1, v1, v2

    const/4 p1, 0x1

    aput p2, v1, p1

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setFloatValues([F)V

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axV:Landroid/animation/ValueAnimator;

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->start()V

    return-void

    :cond_1
    iput p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axy:I

    invoke-direct {p0, p2}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->cA(I)F

    move-result p1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->h(F)F

    move-result p1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->g(F)V

    return-void
.end method

.method private init(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    if-eqz p2, :cond_0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->bm(Landroid/content/Context;)V

    :cond_0
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axm:Landroid/graphics/Paint;

    sget-object p2, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axm:Landroid/graphics/Paint;

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    new-instance p1, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {p1}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axD:Landroid/graphics/drawable/GradientDrawable;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/graphics/drawable/GradientDrawable;->setShape(I)V

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axD:Landroid/graphics/drawable/GradientDrawable;

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axn:I

    invoke-virtual {p1, v0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    new-instance p1, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {p1}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axE:Landroid/graphics/drawable/GradientDrawable;

    invoke-virtual {p1, p2}, Landroid/graphics/drawable/GradientDrawable;->setShape(I)V

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axE:Landroid/graphics/drawable/GradientDrawable;

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axo:I

    invoke-virtual {p1, v0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    new-instance p1, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {p1}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axF:Landroid/graphics/drawable/GradientDrawable;

    invoke-virtual {p1, p2}, Landroid/graphics/drawable/GradientDrawable;->setShape(I)V

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axF:Landroid/graphics/drawable/GradientDrawable;

    iget p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axp:I

    invoke-virtual {p1, p2}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axH:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axI:Landroid/graphics/Rect;

    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axr:I

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axy:I

    return-void
.end method

.method private v(II)V
    .locals 3

    if-lez p1, :cond_6

    if-gtz p2, :cond_0

    goto/16 :goto_5

    :cond_0
    iget-boolean p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axR:Z

    if-eqz p2, :cond_1

    int-to-float p2, p1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->aya:I

    mul-int/lit8 v0, v0, 0x2

    int-to-float v0, v0

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axX:F

    iget v2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axW:F

    sub-float/2addr v1, v2

    mul-float/2addr v0, v1

    sub-float/2addr p2, v0

    float-to-int p2, p2

    goto :goto_0

    :cond_1
    iget p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->aya:I

    mul-int/lit8 p2, p2, 0x2

    sub-int p2, p1, p2

    :goto_0
    iput p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    iget-object p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axu:I

    neg-int v0, v0

    iput v0, p2, Landroid/graphics/Rect;->top:I

    iget-object p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget v0, p2, Landroid/graphics/Rect;->top:I

    neg-int v0, v0

    iput v0, p2, Landroid/graphics/Rect;->bottom:I

    iget-object p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget-boolean v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axv:Z

    if-eqz v0, :cond_2

    neg-int v0, p1

    goto :goto_1

    :cond_2
    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    neg-int v0, v0

    :goto_1
    div-int/lit8 v0, v0, 0x2

    iput v0, p2, Landroid/graphics/Rect;->left:I

    iget-object p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget-boolean v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axv:Z

    if-eqz v0, :cond_3

    div-int/lit8 v0, p1, 0x2

    goto :goto_2

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    div-int/lit8 v0, v0, 0x2

    :goto_2
    iput v0, p2, Landroid/graphics/Rect;->right:I

    iget-object p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axH:Landroid/graphics/Rect;

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axu:I

    neg-int v0, v0

    iput v0, p2, Landroid/graphics/Rect;->top:I

    iget-object p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axH:Landroid/graphics/Rect;

    iget v0, p2, Landroid/graphics/Rect;->top:I

    neg-int v0, v0

    iput v0, p2, Landroid/graphics/Rect;->bottom:I

    iget-object p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axH:Landroid/graphics/Rect;

    iget-boolean v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axv:Z

    if-eqz v0, :cond_4

    neg-int v0, p1

    goto :goto_3

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    neg-int v0, v0

    :goto_3
    div-int/lit8 v0, v0, 0x2

    iput v0, p2, Landroid/graphics/Rect;->left:I

    iget-object p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axH:Landroid/graphics/Rect;

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    neg-int v0, v0

    div-int/lit8 v0, v0, 0x2

    iput v0, p2, Landroid/graphics/Rect;->right:I

    iget-object p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axI:Landroid/graphics/Rect;

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axu:I

    neg-int v0, v0

    iput v0, p2, Landroid/graphics/Rect;->top:I

    iget-object p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axI:Landroid/graphics/Rect;

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axH:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->top:I

    neg-int v0, v0

    iput v0, p2, Landroid/graphics/Rect;->bottom:I

    iget-object p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axI:Landroid/graphics/Rect;

    iget-boolean v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axv:Z

    if-eqz v0, :cond_5

    goto :goto_4

    :cond_5
    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    :goto_4
    neg-int p1, p1

    div-int/lit8 p1, p1, 0x2

    iput p1, p2, Landroid/graphics/Rect;->left:I

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axI:Landroid/graphics/Rect;

    iget p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    neg-int p2, p2

    div-int/lit8 p2, p2, 0x2

    iput p2, p1, Landroid/graphics/Rect;->right:I

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axq:I

    neg-int p2, p2

    iput p2, p1, Landroid/graphics/Rect;->top:I

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axq:I

    iput p2, p1, Landroid/graphics/Rect;->bottom:I

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    neg-int p2, p2

    div-int/lit8 p2, p2, 0x2

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axq:I

    sub-int/2addr p2, v0

    iput p2, p1, Landroid/graphics/Rect;->left:I

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axJ:Landroid/graphics/Rect;

    iget p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    neg-int p2, p2

    div-int/lit8 p2, p2, 0x2

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axq:I

    add-int/2addr p2, v0

    iput p2, p1, Landroid/graphics/Rect;->right:I

    iget-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axK:Landroid/graphics/drawable/Drawable;

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->setThumbDrawable(Landroid/graphics/drawable/Drawable;)V

    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axy:I

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->setProgress(I)V

    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axA:I

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->setSecondaryProgress(I)V

    :cond_6
    :goto_5
    return-void
.end method


# virtual methods
.method public final bg(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->ayb:Z

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->bh(Z)V

    return-void
.end method

.method public getMaxProgress()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axs:I

    return v0
.end method

.method public getProgress()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axy:I

    return v0
.end method

.method public getProgressLength()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axw:I

    return v0
.end method

.method public getProgressX()I
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->getX()F

    move-result v0

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axq:I

    int-to-float v1, v1

    iget v2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axX:F

    mul-float/2addr v1, v2

    add-float/2addr v0, v1

    float-to-int v0, v0

    return v0
.end method

.method public getSecondaryProgress()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axA:I

    return v0
.end method

.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 2

    invoke-super {p0, p1}, Landroid/view/View;->onDraw(Landroid/graphics/Canvas;)V

    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axC:I

    div-int/lit8 v0, v0, 0x2

    int-to-float v0, v0

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axB:I

    div-int/lit8 v1, v1, 0x2

    int-to-float v1, v1

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->translate(FF)V

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axG:Landroid/graphics/Rect;

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axD:Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {p0, p1, v0, v1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->a(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/drawable/GradientDrawable;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axI:Landroid/graphics/Rect;

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axF:Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {p0, p1, v0, v1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->a(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/drawable/GradientDrawable;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axH:Landroid/graphics/Rect;

    iget-object v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axE:Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {p0, p1, v0, v1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->a(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/drawable/GradientDrawable;)V

    iget-boolean v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->ayb:Z

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->c(Landroid/graphics/Canvas;)V

    :cond_0
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    return-void
.end method

.method protected onMeasure(II)V
    .locals 3

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getMode(I)I

    move-result v0

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p1

    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getMode(I)I

    move-result v1

    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p2

    const/high16 v2, 0x40000000    # 2.0f

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->getWidth()I

    move-result p1

    :goto_0
    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axC:I

    if-ne v1, v2, :cond_1

    iput p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axB:I

    goto :goto_1

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->getHeight()I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axB:I

    :goto_1
    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axC:I

    iget p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axB:I

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->v(II)V

    iget p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axC:I

    iget p2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axB:I

    invoke-virtual {p0, p1, p2}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->setMeasuredDimension(II)V

    return-void
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 7

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    iget v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axC:I

    const/4 v2, 0x2

    div-int/2addr v1, v2

    int-to-float v1, v1

    sub-float/2addr v0, v1

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v1

    iget v3, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axB:I

    div-int/2addr v3, v2

    int-to-float v3, v3

    sub-float/2addr v1, v3

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    invoke-direct {p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->getOnSeekBarChangedListener()Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;

    move-result-object v4

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v5

    const/4 v6, 0x1

    if-eqz v5, :cond_5

    const/4 p1, 0x0

    if-eq v5, v6, :cond_2

    if-eq v5, v2, :cond_0

    goto/16 :goto_1

    :cond_0
    iget-boolean v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axL:Z

    if-nez v1, :cond_1

    iget-boolean v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axM:Z

    if-eqz v1, :cond_a

    :cond_1
    float-to-int v0, v0

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->cB(I)I

    move-result v0

    invoke-direct {p0, v0, p1, v6}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->a(IZZ)V

    goto :goto_1

    :cond_2
    iput-boolean p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axP:Z

    iget-boolean v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axM:Z

    if-nez v1, :cond_3

    iget-boolean v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axL:Z

    if-eqz v1, :cond_4

    :cond_3
    iput-boolean p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axM:Z

    iput-boolean p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axL:Z

    float-to-int v0, v0

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->cB(I)I

    move-result v0

    iget-boolean v1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axS:Z

    invoke-direct {p0, v0, v1, v6}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->a(IZZ)V

    if-eqz v4, :cond_4

    invoke-interface {v4, p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;->a(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;)V

    :cond_4
    if-eqz v3, :cond_a

    invoke-interface {v3, p1}, Landroid/view/ViewParent;->requestDisallowInterceptTouchEvent(Z)V

    goto :goto_1

    :cond_5
    iget-boolean v2, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axO:Z

    if-nez v2, :cond_6

    invoke-super {p0, p1}, Landroid/view/View;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1

    :cond_6
    invoke-direct {p0, v0, v1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->d(FF)Z

    move-result p1

    if-eqz p1, :cond_8

    invoke-direct {p0, v6}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->bh(Z)V

    iput-boolean v6, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axL:Z

    iput-boolean v6, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axP:Z

    if-eqz v4, :cond_7

    invoke-interface {v4}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;->st()V

    :cond_7
    if-eqz v3, :cond_a

    :goto_0
    invoke-interface {v3, v6}, Landroid/view/ViewParent;->requestDisallowInterceptTouchEvent(Z)V

    goto :goto_1

    :cond_8
    invoke-direct {p0, v0, v1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->e(FF)Z

    move-result p1

    if-eqz p1, :cond_a

    invoke-direct {p0, v6}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->bh(Z)V

    iput-boolean v6, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axM:Z

    if-eqz v4, :cond_9

    invoke-interface {v4}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;->st()V

    :cond_9
    if-eqz v3, :cond_a

    goto :goto_0

    :cond_a
    :goto_1
    return v6
.end method

.method public setMaxProgress(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axs:I

    return-void
.end method

.method public setMinProgress(I)V
    .locals 1

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axr:I

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axy:I

    if-ge v0, p1, :cond_0

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axy:I

    :cond_0
    return-void
.end method

.method public setOnSeekBarChangeListener(Lcom/kwad/sdk/core/view/ScaleAnimSeekBar$a;)V
    .locals 1

    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axQ:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public setProgress(I)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0, v0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->a(IZZ)V

    return-void
.end method

.method public setProgressBackgroundColor(I)V
    .locals 1

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axn:I

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axD:Landroid/graphics/drawable/GradientDrawable;

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    return-void
.end method

.method public setProgressColor(I)V
    .locals 1

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axo:I

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axE:Landroid/graphics/drawable/GradientDrawable;

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    return-void
.end method

.method public setSecondaryProgress(I)V
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axr:I

    if-gt p1, v0, :cond_0

    :goto_0
    move p1, v0

    goto :goto_1

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axs:I

    if-lt p1, v0, :cond_1

    goto :goto_0

    :cond_1
    :goto_1
    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axA:I

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->cA(I)F

    move-result p1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->h(F)F

    move-result p1

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axI:Landroid/graphics/Rect;

    float-to-int p1, p1

    iput p1, v0, Landroid/graphics/Rect;->right:I

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->invalidate()V

    return-void
.end method

.method public setSecondaryProgressColor(I)V
    .locals 1

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axp:I

    iget-object v0, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axF:Landroid/graphics/drawable/GradientDrawable;

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    return-void
.end method

.method public setThumbDrawable(Landroid/graphics/drawable/Drawable;)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    :cond_0
    iput-object p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axK:Landroid/graphics/drawable/Drawable;

    return-void
.end method

.method public setThumbEnable(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axO:Z

    return-void
.end method

.method public setThumbScale(F)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axW:F

    return-void
.end method

.method public setThumbTouchOffset(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->axx:I

    invoke-virtual {p0}, Lcom/kwad/sdk/core/view/ScaleAnimSeekBar;->invalidate()V

    return-void
.end method
