.class public Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;
.super Lcom/kwad/sdk/widget/KSFrameLayout;

# interfaces
.implements Lcom/kwad/components/ad/splashscreen/widget/a;


# instance fields
.field private ER:F

.field private ES:F

.field private ET:I

.field private EU:Landroid/animation/ValueAnimator;

.field private EV:Z

.field private EW:Lcom/kwad/components/ad/splashscreen/widget/SkipView$a;

.field private EX:J

.field private EY:F

.field private mPaint:Landroid/graphics/Paint;

.field private mRectF:Landroid/graphics/RectF;

.field private padding:I

.field private radius:I

.field private sy:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-direct {p0, p1, v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 2

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    new-instance p2, Landroid/graphics/Paint;

    invoke-direct {p2}, Landroid/graphics/Paint;-><init>()V

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->mPaint:Landroid/graphics/Paint;

    const/high16 p2, 0x43870000    # 270.0f

    iput p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ER:F

    const/high16 p2, 0x43b40000    # 360.0f

    iput p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ES:F

    const/4 p2, 0x0

    iput p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->radius:I

    iput p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ET:I

    iput-boolean p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EV:Z

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EX:J

    const/4 p3, 0x0

    iput p3, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EY:F

    iput p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->padding:I

    const/4 p2, 0x1

    iput-boolean p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->sy:Z

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->W(Landroid/content/Context;)V

    return-void
.end method

.method private W(Landroid/content/Context;)V
    .locals 2

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {v0, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0x11

    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->X(Landroid/content/Context;)V

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->Y(Landroid/content/Context;)Landroid/widget/TextView;

    move-result-object p1

    invoke-virtual {p0, p1, v0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance p1, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView$1;-><init>(Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;)V

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private X(Landroid/content/Context;)V
    .locals 5

    const/high16 v0, 0x40000000    # 2.0f

    invoke-static {p1, v0}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ET:I

    const/high16 v0, 0x42000000    # 32.0f

    invoke-static {p1, v0}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p1

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ET:I

    sub-int/2addr p1, v0

    iput p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->radius:I

    div-int/lit8 v0, v0, 0x2

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->padding:I

    new-instance p1, Landroid/graphics/RectF;

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->padding:I

    int-to-float v1, v0

    int-to-float v2, v0

    iget v3, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->radius:I

    add-int v4, v3, v0

    int-to-float v4, v4

    add-int/2addr v3, v0

    int-to-float v0, v3

    invoke-direct {p1, v1, v2, v4, v0}, Landroid/graphics/RectF;-><init>(FFFF)V

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->mRectF:Landroid/graphics/RectF;

    return-void
.end method

.method private static Y(Landroid/content/Context;)Landroid/widget/TextView;
    .locals 2

    new-instance v0, Landroid/widget/TextView;

    invoke-direct {v0, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    sget v1, Lcom/kwad/sdk/R$string;->ksad_skip_text:I

    invoke-virtual {p0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/4 p0, -0x1

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setTextColor(I)V

    const/high16 p0, 0x41400000    # 12.0f

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setTextSize(F)V

    return-object v0
.end method

.method private Y(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EW:Lcom/kwad/components/ad/splashscreen/widget/SkipView$a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/components/ad/splashscreen/widget/SkipView$a;->Z(I)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;F)F
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EY:F

    return p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;)Lcom/kwad/components/ad/splashscreen/widget/SkipView$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EW:Lcom/kwad/components/ad/splashscreen/widget/SkipView$a;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->Y(I)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EV:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;)F
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EY:F

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;F)F
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ER:F

    return p1
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;F)F
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ES:F

    return p1
.end method

.method private c(IZ)V
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [F

    fill-array-data v0, :array_0

    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EU:Landroid/animation/ValueAnimator;

    int-to-long v1, p1

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EU:Landroid/animation/ValueAnimator;

    new-instance v1, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v1}, Landroid/view/animation/LinearInterpolator;-><init>()V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EU:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView$2;-><init>(Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EU:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView$3;-><init>(Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;IZ)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    return-void

    nop

    :array_0
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data
.end method

.method private lC()V
    .locals 3

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EV:Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EU:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_0

    iget-wide v1, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EX:J

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setCurrentPlayTime(J)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EU:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    :cond_0
    return-void
.end method

.method private lD()V
    .locals 2

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EV:Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EU:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->getCurrentPlayTime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EX:J

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EU:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    :cond_0
    return-void
.end method

.method private setAnimationPaint(Landroid/graphics/Paint;)V
    .locals 1

    invoke-virtual {p1}, Landroid/graphics/Paint;->reset()V

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    sget-object v0, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ET:I

    int-to-float v0, v0

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    const/4 v0, -0x1

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setColor(I)V

    return-void
.end method

.method private setBgCirclePaint(Landroid/graphics/Paint;)V
    .locals 1

    invoke-virtual {p1}, Landroid/graphics/Paint;->reset()V

    sget-object v0, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    const-string v0, "#4D000000"

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setColor(I)V

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    return-void
.end method

.method private setOuterCirclePaint(Landroid/graphics/Paint;)V
    .locals 1

    invoke-virtual {p1}, Landroid/graphics/Paint;->reset()V

    sget-object v0, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ET:I

    int-to-float v0, v0

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    const-string v0, "#33FFFFFF"

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setColor(I)V

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/splashscreen/local/SplashSkipViewModel;Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 1

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->ci(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->sy:Z

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->cj(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p2

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->sy:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->setVisibility(I)V

    :cond_0
    iget p1, p1, Lcom/kwad/components/ad/splashscreen/local/SplashSkipViewModel;->skipSecond:I

    mul-int/lit16 p1, p1, 0x3e8

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->c(IZ)V

    return-void
.end method

.method public final ac(I)I
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x420c0000    # 35.0f

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v0

    iput v0, p1, Landroid/view/ViewGroup$LayoutParams;->height:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->getWidth()I

    move-result p1

    return p1
.end method

.method public final bd()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->lD()V

    return-void
.end method

.method public dispatchDraw(Landroid/graphics/Canvas;)V
    .locals 7

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->getWidth()I

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->getHeight()I

    move-result v1

    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result v0

    int-to-float v0, v0

    const/high16 v1, 0x40000000    # 2.0f

    div-float/2addr v0, v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->mPaint:Landroid/graphics/Paint;

    invoke-direct {p0, v2}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->setBgCirclePaint(Landroid/graphics/Paint;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->getWidth()I

    move-result v2

    int-to-float v2, v2

    div-float/2addr v2, v1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->getHeight()I

    move-result v3

    int-to-float v3, v3

    div-float/2addr v3, v1

    iget v1, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ET:I

    int-to-float v1, v1

    sub-float/2addr v0, v1

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v2, v3, v0, v1}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->mPaint:Landroid/graphics/Paint;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->setOuterCirclePaint(Landroid/graphics/Paint;)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->mRectF:Landroid/graphics/RectF;

    iget-object v6, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->mPaint:Landroid/graphics/Paint;

    const/4 v3, 0x0

    const/high16 v4, 0x43b40000    # 360.0f

    const/4 v5, 0x0

    move-object v1, p1

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawArc(Landroid/graphics/RectF;FFZLandroid/graphics/Paint;)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EV:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->mPaint:Landroid/graphics/Paint;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->setAnimationPaint(Landroid/graphics/Paint;)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->mRectF:Landroid/graphics/RectF;

    iget v3, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ER:F

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->ES:F

    neg-float v4, v0

    const/4 v5, 0x0

    iget-object v6, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->mPaint:Landroid/graphics/Paint;

    move-object v1, p1

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawArc(Landroid/graphics/RectF;FFZLandroid/graphics/Paint;)V

    :cond_0
    invoke-super {p0, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;->dispatchDraw(Landroid/graphics/Canvas;)V

    return-void
.end method

.method public setOnViewListener(Lcom/kwad/components/ad/splashscreen/widget/SkipView$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->EW:Lcom/kwad/components/ad/splashscreen/widget/SkipView$a;

    return-void
.end method

.method public final w(Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->lD()V

    return-void
.end method

.method public final x(Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/widget/CircleSkipView;->lC()V

    return-void
.end method
