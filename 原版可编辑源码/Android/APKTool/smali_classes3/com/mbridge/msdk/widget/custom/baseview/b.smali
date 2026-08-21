.class final Lcom/mbridge/msdk/widget/custom/baseview/b;
.super Landroid/graphics/drawable/Drawable;
.source "CircularProgressDrawable.java"


# instance fields
.field private a:F

.field private b:F

.field private c:I

.field private d:I

.field private e:I

.field private f:Landroid/graphics/RectF;

.field private g:Landroid/graphics/Paint;

.field private h:Landroid/graphics/Path;


# direct methods
.method public constructor <init>(III)V
    .locals 0

    .line 14
    invoke-direct {p0}, Landroid/graphics/drawable/Drawable;-><init>()V

    .line 15
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->c:I

    .line 16
    iput p2, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->d:I

    .line 17
    iput p3, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->e:I

    const/high16 p1, -0x3d4c0000    # -90.0f

    .line 18
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->b:F

    const/4 p1, 0x0

    .line 19
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->a:F

    return-void
.end method


# virtual methods
.method public final a(F)V
    .locals 0

    .line 23
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->a:F

    return-void
.end method

.method public final draw(Landroid/graphics/Canvas;)V
    .locals 7

    .line 32
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/b;->getBounds()Landroid/graphics/Rect;

    move-result-object v0

    .line 34
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->h:Landroid/graphics/Path;

    if-nez v1, :cond_0

    .line 35
    new-instance v1, Landroid/graphics/Path;

    invoke-direct {v1}, Landroid/graphics/Path;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->h:Landroid/graphics/Path;

    .line 37
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->h:Landroid/graphics/Path;

    invoke-virtual {v1}, Landroid/graphics/Path;->reset()V

    .line 38
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->h:Landroid/graphics/Path;

    .line 1062
    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->f:Landroid/graphics/RectF;

    if-nez v2, :cond_1

    .line 1063
    iget v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->d:I

    div-int/lit8 v2, v2, 0x2

    .line 1064
    new-instance v3, Landroid/graphics/RectF;

    int-to-float v4, v2

    .line 2027
    iget v5, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->c:I

    sub-int v6, v5, v2

    int-to-float v6, v6

    sub-int/2addr v5, v2

    int-to-float v2, v5

    .line 1064
    invoke-direct {v3, v4, v4, v6, v2}, Landroid/graphics/RectF;-><init>(FFFF)V

    iput-object v3, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->f:Landroid/graphics/RectF;

    .line 1066
    :cond_1
    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->f:Landroid/graphics/RectF;

    .line 38
    iget v3, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->b:F

    iget v4, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->a:F

    invoke-virtual {v1, v2, v3, v4}, Landroid/graphics/Path;->addArc(Landroid/graphics/RectF;FF)V

    .line 39
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->h:Landroid/graphics/Path;

    iget v2, v0, Landroid/graphics/Rect;->left:I

    int-to-float v2, v2

    iget v0, v0, Landroid/graphics/Rect;->top:I

    int-to-float v0, v0

    invoke-virtual {v1, v2, v0}, Landroid/graphics/Path;->offset(FF)V

    .line 40
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->h:Landroid/graphics/Path;

    .line 3070
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->g:Landroid/graphics/Paint;

    if-nez v1, :cond_2

    .line 3071
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->g:Landroid/graphics/Paint;

    const/4 v2, 0x1

    .line 3072
    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 3073
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->g:Landroid/graphics/Paint;

    sget-object v2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 3074
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->g:Landroid/graphics/Paint;

    iget v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->d:I

    int-to-float v2, v2

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 3075
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->g:Landroid/graphics/Paint;

    iget v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->e:I

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setColor(I)V

    .line 3078
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/b;->g:Landroid/graphics/Paint;

    .line 40
    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    return-void
.end method

.method public final getOpacity()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final setAlpha(I)V
    .locals 0

    return-void
.end method

.method public final setColorFilter(Landroid/graphics/ColorFilter;)V
    .locals 0

    return-void
.end method
