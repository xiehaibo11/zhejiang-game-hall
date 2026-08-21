.class public Lcom/sigmob/sdk/base/views/s;
.super Lcom/sigmob/sdk/base/views/f;


# instance fields
.field private final a:Landroid/graphics/Paint;

.field private final b:Landroid/graphics/Paint;

.field private c:I

.field private d:I

.field private e:I

.field private f:I

.field private g:F

.field private final h:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 3

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/f;-><init>()V

    new-instance v0, Landroid/graphics/Paint;

    invoke-direct {v0}, Landroid/graphics/Paint;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/s;->a:Landroid/graphics/Paint;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/s;->a:Landroid/graphics/Paint;

    const/16 v1, 0x80

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAlpha(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/s;->a:Landroid/graphics/Paint;

    sget-object v1, Lcom/sigmob/sdk/base/views/n$b;->e:Landroid/graphics/Paint$Style;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/s;->a:Landroid/graphics/Paint;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    new-instance v0, Landroid/graphics/Paint;

    invoke-direct {v0}, Landroid/graphics/Paint;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/s;->b:Landroid/graphics/Paint;

    sget v2, Lcom/sigmob/sdk/base/views/n$b;->f:I

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setColor(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/s;->b:Landroid/graphics/Paint;

    const/16 v2, 0xff

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setAlpha(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/s;->b:Landroid/graphics/Paint;

    sget-object v2, Lcom/sigmob/sdk/base/views/n$b;->h:Landroid/graphics/Paint$Style;

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/s;->b:Landroid/graphics/Paint;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    const/high16 v0, 0x40800000    # 4.0f

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/base/views/s;->h:I

    return-void
.end method

.method private d()V
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/views/s;->c:I

    iput v0, p0, Lcom/sigmob/sdk/base/views/s;->e:I

    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/base/views/s;->f:I

    return-void
.end method

.method public a(I)V
    .locals 3

    iget v0, p0, Lcom/sigmob/sdk/base/views/s;->f:I

    if-lt p1, v0, :cond_0

    iput p1, p0, Lcom/sigmob/sdk/base/views/s;->e:I

    iput p1, p0, Lcom/sigmob/sdk/base/views/s;->f:I

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_1

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, v1, v2

    const/4 v0, 0x1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v1, v0

    const-string p1, "Progress not monotonically increasing: last = %d, current = %d"

    invoke-static {p1, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/s;->d()V

    :cond_1
    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/s;->invalidateSelf()V

    return-void
.end method

.method public a(II)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/views/s;->c:I

    iput p2, p0, Lcom/sigmob/sdk/base/views/s;->d:I

    int-to-float p2, p2

    int-to-float p1, p1

    div-float/2addr p2, p1

    iput p2, p0, Lcom/sigmob/sdk/base/views/s;->g:F

    return-void
.end method

.method public b()F
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget v0, p0, Lcom/sigmob/sdk/base/views/s;->g:F

    return v0
.end method

.method public c()I
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget v0, p0, Lcom/sigmob/sdk/base/views/s;->e:I

    return v0
.end method

.method public draw(Landroid/graphics/Canvas;)V
    .locals 8

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/s;->getBounds()Landroid/graphics/Rect;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/s;->a:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawRect(Landroid/graphics/Rect;Landroid/graphics/Paint;)V

    iget v0, p0, Lcom/sigmob/sdk/base/views/s;->e:I

    int-to-float v0, v0

    iget v1, p0, Lcom/sigmob/sdk/base/views/s;->c:I

    int-to-float v1, v1

    div-float/2addr v0, v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/s;->getBounds()Landroid/graphics/Rect;

    move-result-object v1

    iget v1, v1, Landroid/graphics/Rect;->left:I

    int-to-float v3, v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/s;->getBounds()Landroid/graphics/Rect;

    move-result-object v1

    iget v1, v1, Landroid/graphics/Rect;->top:I

    int-to-float v4, v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/s;->getBounds()Landroid/graphics/Rect;

    move-result-object v1

    iget v1, v1, Landroid/graphics/Rect;->right:I

    int-to-float v1, v1

    mul-float v5, v1, v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/s;->getBounds()Landroid/graphics/Rect;

    move-result-object v0

    iget v0, v0, Landroid/graphics/Rect;->bottom:I

    int-to-float v6, v0

    iget-object v7, p0, Lcom/sigmob/sdk/base/views/s;->b:Landroid/graphics/Paint;

    move-object v2, p1

    invoke-virtual/range {v2 .. v7}, Landroid/graphics/Canvas;->drawRect(FFFFLandroid/graphics/Paint;)V

    iget v0, p0, Lcom/sigmob/sdk/base/views/s;->d:I

    if-lez v0, :cond_0

    iget v1, p0, Lcom/sigmob/sdk/base/views/s;->c:I

    if-ge v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/s;->getBounds()Landroid/graphics/Rect;

    move-result-object v0

    iget v0, v0, Landroid/graphics/Rect;->right:I

    int-to-float v0, v0

    iget v1, p0, Lcom/sigmob/sdk/base/views/s;->g:F

    mul-float v3, v0, v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/s;->getBounds()Landroid/graphics/Rect;

    move-result-object v0

    iget v0, v0, Landroid/graphics/Rect;->top:I

    int-to-float v4, v0

    iget v0, p0, Lcom/sigmob/sdk/base/views/s;->h:I

    int-to-float v0, v0

    add-float v5, v3, v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/s;->getBounds()Landroid/graphics/Rect;

    move-result-object v0

    iget v0, v0, Landroid/graphics/Rect;->bottom:I

    int-to-float v6, v0

    iget-object v7, p0, Lcom/sigmob/sdk/base/views/s;->b:Landroid/graphics/Paint;

    move-object v2, p1

    invoke-virtual/range {v2 .. v7}, Landroid/graphics/Canvas;->drawRect(FFFFLandroid/graphics/Paint;)V

    :cond_0
    return-void
.end method

.method public bridge synthetic getOpacity()I
    .locals 1

    invoke-super {p0}, Lcom/sigmob/sdk/base/views/f;->getOpacity()I

    move-result v0

    return v0
.end method

.method public bridge synthetic setAlpha(I)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/views/f;->setAlpha(I)V

    return-void
.end method

.method public bridge synthetic setColorFilter(Landroid/graphics/ColorFilter;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/views/f;->setColorFilter(Landroid/graphics/ColorFilter;)V

    return-void
.end method
