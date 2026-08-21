.class public Lcom/tkay/basead/ui/WaveAnimImageView;
.super Landroid/widget/ImageView;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/ui/WaveAnimImageView$a;
    }
.end annotation


# instance fields
.field a:I

.field b:I

.field private c:Landroid/graphics/Paint;

.field private d:Lcom/tkay/basead/ui/WaveAnimImageView$a;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 19
    invoke-direct {p0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 20
    invoke-direct {p0}, Lcom/tkay/basead/ui/WaveAnimImageView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 24
    invoke-direct {p0, p1, p2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 25
    invoke-direct {p0}, Lcom/tkay/basead/ui/WaveAnimImageView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 29
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 30
    invoke-direct {p0}, Lcom/tkay/basead/ui/WaveAnimImageView;->a()V

    return-void
.end method

.method private a()V
    .locals 2

    .line 34
    new-instance v0, Landroid/graphics/Paint;

    invoke-direct {v0}, Landroid/graphics/Paint;-><init>()V

    iput-object v0, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->c:Landroid/graphics/Paint;

    const/4 v1, 0x1

    .line 35
    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 36
    iget-object v0, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->c:Landroid/graphics/Paint;

    sget-object v1, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 37
    iget-object v0, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->c:Landroid/graphics/Paint;

    const-string v1, "#FFFFFF"

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 4

    .line 54
    invoke-super {p0, p1}, Landroid/widget/ImageView;->onDraw(Landroid/graphics/Canvas;)V

    .line 56
    iget-object v0, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->d:Lcom/tkay/basead/ui/WaveAnimImageView$a;

    if-eqz v0, :cond_0

    .line 57
    iget-object v1, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->c:Landroid/graphics/Paint;

    const/high16 v2, 0x437f0000    # 255.0f

    iget v0, v0, Lcom/tkay/basead/ui/WaveAnimImageView$a;->c:F

    mul-float/2addr v0, v2

    float-to-int v0, v0

    invoke-virtual {v1, v0}, Landroid/graphics/Paint;->setAlpha(I)V

    .line 58
    iget-object v0, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->c:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->d:Lcom/tkay/basead/ui/WaveAnimImageView$a;

    iget v1, v1, Lcom/tkay/basead/ui/WaveAnimImageView$a;->b:F

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 59
    iget v0, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->a:I

    int-to-float v0, v0

    iget v1, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->b:I

    int-to-float v1, v1

    iget-object v2, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->d:Lcom/tkay/basead/ui/WaveAnimImageView$a;

    iget v2, v2, Lcom/tkay/basead/ui/WaveAnimImageView$a;->a:F

    iget-object v3, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->c:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1, v2, v3}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    :cond_0
    return-void
.end method

.method protected onLayout(ZIIII)V
    .locals 0

    .line 47
    invoke-super/range {p0 .. p5}, Landroid/widget/ImageView;->onLayout(ZIIII)V

    .line 48
    invoke-virtual {p0}, Lcom/tkay/basead/ui/WaveAnimImageView;->getWidth()I

    move-result p1

    div-int/lit8 p1, p1, 0x2

    iput p1, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->a:I

    .line 49
    invoke-virtual {p0}, Lcom/tkay/basead/ui/WaveAnimImageView;->getHeight()I

    move-result p1

    div-int/lit8 p1, p1, 0x2

    iput p1, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->b:I

    return-void
.end method

.method public setWaveAnimParams(Lcom/tkay/basead/ui/WaveAnimImageView$a;)V
    .locals 0

    .line 41
    iput-object p1, p0, Lcom/tkay/basead/ui/WaveAnimImageView;->d:Lcom/tkay/basead/ui/WaveAnimImageView$a;

    .line 42
    invoke-virtual {p0}, Lcom/tkay/basead/ui/WaveAnimImageView;->invalidate()V

    return-void
.end method
