.class public Lcom/kwad/sdk/widget/DividerView;
.super Landroid/view/View;


# static fields
.field public static ORIENTATION_HORIZONTAL:I = 0x0

.field public static ORIENTATION_VERTICAL:I = 0x1


# instance fields
.field private aLF:I

.field private mPaint:Landroid/graphics/Paint;

.field private orientation:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/widget/DividerView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 5

    invoke-direct {p0, p1, p2}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    invoke-virtual {p1}, Landroid/content/Context;->getTheme()Landroid/content/res/Resources$Theme;

    move-result-object p1

    sget-object v0, Lcom/kwad/sdk/R$styleable;->ksad_DividerView:[I

    const/4 v1, 0x0

    invoke-virtual {p1, p2, v0, v1, v1}, Landroid/content/res/Resources$Theme;->obtainStyledAttributes(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;

    move-result-object p1

    :try_start_0
    sget p2, Lcom/kwad/sdk/R$styleable;->ksad_DividerView_ksad_dashGap:I

    const/4 v0, 0x5

    invoke-virtual {p1, p2, v0}, Landroid/content/res/TypedArray;->getDimensionPixelSize(II)I

    move-result p2

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_DividerView_ksad_dashLength:I

    invoke-virtual {p1, v2, v0}, Landroid/content/res/TypedArray;->getDimensionPixelSize(II)I

    move-result v0

    sget v2, Lcom/kwad/sdk/R$styleable;->ksad_DividerView_ksad_dashThickness:I

    const/4 v3, 0x3

    invoke-virtual {p1, v2, v3}, Landroid/content/res/TypedArray;->getDimensionPixelSize(II)I

    move-result v2

    sget v3, Lcom/kwad/sdk/R$styleable;->ksad_DividerView_ksad_color:I

    const/high16 v4, -0x1000000

    invoke-virtual {p1, v3, v4}, Landroid/content/res/TypedArray;->getColor(II)I

    move-result v3

    iput v3, p0, Lcom/kwad/sdk/widget/DividerView;->aLF:I

    sget v3, Lcom/kwad/sdk/R$styleable;->ksad_DividerView_ksad_orientation:I

    sget v4, Lcom/kwad/sdk/widget/DividerView;->ORIENTATION_HORIZONTAL:I

    invoke-virtual {p1, v3, v4}, Landroid/content/res/TypedArray;->getInt(II)I

    move-result v3

    iput v3, p0, Lcom/kwad/sdk/widget/DividerView;->orientation:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-virtual {p1}, Landroid/content/res/TypedArray;->recycle()V

    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/widget/DividerView;->mPaint:Landroid/graphics/Paint;

    const/4 v3, 0x1

    invoke-virtual {p1, v3}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    iget-object p1, p0, Lcom/kwad/sdk/widget/DividerView;->mPaint:Landroid/graphics/Paint;

    iget v4, p0, Lcom/kwad/sdk/widget/DividerView;->aLF:I

    invoke-virtual {p1, v4}, Landroid/graphics/Paint;->setColor(I)V

    iget-object p1, p0, Lcom/kwad/sdk/widget/DividerView;->mPaint:Landroid/graphics/Paint;

    sget-object v4, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, v4}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    iget-object p1, p0, Lcom/kwad/sdk/widget/DividerView;->mPaint:Landroid/graphics/Paint;

    int-to-float v2, v2

    invoke-virtual {p1, v2}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    iget-object p1, p0, Lcom/kwad/sdk/widget/DividerView;->mPaint:Landroid/graphics/Paint;

    new-instance v2, Landroid/graphics/DashPathEffect;

    const/4 v4, 0x2

    new-array v4, v4, [F

    int-to-float v0, v0

    aput v0, v4, v1

    int-to-float p2, p2

    aput p2, v4, v3

    const/4 p2, 0x0

    invoke-direct {v2, v4, p2}, Landroid/graphics/DashPathEffect;-><init>([FF)V

    invoke-virtual {p1, v2}, Landroid/graphics/Paint;->setPathEffect(Landroid/graphics/PathEffect;)Landroid/graphics/PathEffect;

    return-void

    :catchall_0
    move-exception p2

    invoke-virtual {p1}, Landroid/content/res/TypedArray;->recycle()V

    throw p2
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 9

    iget v0, p0, Lcom/kwad/sdk/widget/DividerView;->orientation:I

    sget v1, Lcom/kwad/sdk/widget/DividerView;->ORIENTATION_HORIZONTAL:I

    const/high16 v2, 0x3f000000    # 0.5f

    if-ne v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DividerView;->getHeight()I

    move-result v0

    int-to-float v0, v0

    mul-float v7, v0, v2

    const/4 v4, 0x0

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DividerView;->getWidth()I

    move-result v0

    int-to-float v6, v0

    iget-object v8, p0, Lcom/kwad/sdk/widget/DividerView;->mPaint:Landroid/graphics/Paint;

    move-object v3, p1

    move v5, v7

    :goto_0
    invoke-virtual/range {v3 .. v8}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DividerView;->getWidth()I

    move-result v0

    int-to-float v0, v0

    mul-float v6, v0, v2

    const/4 v5, 0x0

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DividerView;->getHeight()I

    move-result v0

    int-to-float v7, v0

    iget-object v8, p0, Lcom/kwad/sdk/widget/DividerView;->mPaint:Landroid/graphics/Paint;

    move-object v3, p1

    move v4, v6

    goto :goto_0
.end method

.method public setDividerColor(I)V
    .locals 1

    iput p1, p0, Lcom/kwad/sdk/widget/DividerView;->aLF:I

    iget-object v0, p0, Lcom/kwad/sdk/widget/DividerView;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setColor(I)V

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DividerView;->postInvalidate()V

    return-void
.end method
