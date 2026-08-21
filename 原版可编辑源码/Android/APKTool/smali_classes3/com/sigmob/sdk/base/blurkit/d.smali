.class public Lcom/sigmob/sdk/base/blurkit/d;
.super Landroid/widget/ImageView;


# static fields
.field public static final a:I = -0x1000000

.field public static final b:I


# instance fields
.field private c:F

.field private d:Landroid/graphics/RectF;

.field private e:Landroid/graphics/PorterDuffXfermode;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/d;->c:F

    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/base/blurkit/d;->d:Landroid/graphics/RectF;

    new-instance p1, Landroid/graphics/PorterDuffXfermode;

    sget-object v0, Landroid/graphics/PorterDuff$Mode;->SRC_IN:Landroid/graphics/PorterDuff$Mode;

    invoke-direct {p1, v0}, Landroid/graphics/PorterDuffXfermode;-><init>(Landroid/graphics/PorterDuff$Mode;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/blurkit/d;->e:Landroid/graphics/PorterDuffXfermode;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/d;->c:F

    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/base/blurkit/d;->d:Landroid/graphics/RectF;

    new-instance p1, Landroid/graphics/PorterDuffXfermode;

    sget-object p2, Landroid/graphics/PorterDuff$Mode;->SRC_IN:Landroid/graphics/PorterDuff$Mode;

    invoke-direct {p1, p2}, Landroid/graphics/PorterDuffXfermode;-><init>(Landroid/graphics/PorterDuff$Mode;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/blurkit/d;->e:Landroid/graphics/PorterDuffXfermode;

    return-void
.end method


# virtual methods
.method public getCornerRadius()F
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/blurkit/d;->c:F

    return v0
.end method

.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 5

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/d;->getDrawable()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    if-eqz v0, :cond_0

    instance-of v1, v0, Landroid/graphics/drawable/BitmapDrawable;

    if-eqz v1, :cond_0

    iget v1, p0, Lcom/sigmob/sdk/base/blurkit/d;->c:F

    const/4 v2, 0x0

    cmpl-float v1, v1, v2

    if-lez v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/blurkit/d;->d:Landroid/graphics/RectF;

    invoke-virtual {v0}, Landroid/graphics/drawable/Drawable;->getBounds()Landroid/graphics/Rect;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/graphics/RectF;->set(Landroid/graphics/Rect;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/blurkit/d;->d:Landroid/graphics/RectF;

    const/4 v2, 0x0

    const/16 v3, 0x1f

    invoke-virtual {p1, v1, v2, v3}, Landroid/graphics/Canvas;->saveLayer(Landroid/graphics/RectF;Landroid/graphics/Paint;I)I

    move-result v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/blurkit/d;->getImageMatrix()Landroid/graphics/Matrix;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/base/blurkit/d;->d:Landroid/graphics/RectF;

    invoke-virtual {v2, v3}, Landroid/graphics/Matrix;->mapRect(Landroid/graphics/RectF;)Z

    check-cast v0, Landroid/graphics/drawable/BitmapDrawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/BitmapDrawable;->getPaint()Landroid/graphics/Paint;

    move-result-object v0

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    const/high16 v2, -0x1000000

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setColor(I)V

    invoke-virtual {v0}, Landroid/graphics/Paint;->getXfermode()Landroid/graphics/Xfermode;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {p1, v3, v3, v3, v3}, Landroid/graphics/Canvas;->drawARGB(IIII)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/blurkit/d;->d:Landroid/graphics/RectF;

    iget v4, p0, Lcom/sigmob/sdk/base/blurkit/d;->c:F

    invoke-virtual {p1, v3, v4, v4, v0}, Landroid/graphics/Canvas;->drawRoundRect(Landroid/graphics/RectF;FFLandroid/graphics/Paint;)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/blurkit/d;->e:Landroid/graphics/PorterDuffXfermode;

    invoke-virtual {v0, v3}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    invoke-super {p0, p1}, Landroid/widget/ImageView;->onDraw(Landroid/graphics/Canvas;)V

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    invoke-virtual {p1, v1}, Landroid/graphics/Canvas;->restoreToCount(I)V

    goto :goto_0

    :cond_0
    invoke-super {p0, p1}, Landroid/widget/ImageView;->onDraw(Landroid/graphics/Canvas;)V

    :goto_0
    return-void
.end method

.method public setCornerRadius(F)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/blurkit/d;->c:F

    return-void
.end method
