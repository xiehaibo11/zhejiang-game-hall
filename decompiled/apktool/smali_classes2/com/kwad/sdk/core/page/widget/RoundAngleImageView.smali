.class public Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;
.super Landroid/widget/ImageView;


# instance fields
.field private aqv:[F

.field private mPath:Landroid/graphics/Path;

.field private mRectF:Landroid/graphics/RectF;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    new-instance p1, Landroid/graphics/Path;

    invoke-direct {p1}, Landroid/graphics/Path;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->mPath:Landroid/graphics/Path;

    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->mRectF:Landroid/graphics/RectF;

    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 6

    iget-object v0, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->aqv:[F

    if-eqz v0, :cond_3

    array-length v0, v0

    const/16 v1, 0x8

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x12

    const/4 v2, 0x1

    if-ge v0, v1, :cond_1

    const/4 v0, 0x0

    invoke-virtual {p0, v2, v0}, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->setLayerType(ILandroid/graphics/Paint;)V

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->getMeasuredWidth()I

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->getMeasuredHeight()I

    move-result v1

    iget-object v3, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->aqv:[F

    const/4 v4, 0x0

    aget v4, v3, v4

    const/4 v5, 0x3

    aget v5, v3, v5

    add-float/2addr v4, v5

    aget v2, v3, v2

    const/4 v5, 0x7

    aget v3, v3, v5

    add-float/2addr v2, v3

    iget-object v3, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->mPath:Landroid/graphics/Path;

    invoke-virtual {v3}, Landroid/graphics/Path;->rewind()V

    int-to-float v0, v0

    cmpl-float v3, v0, v4

    if-ltz v3, :cond_2

    int-to-float v1, v1

    cmpl-float v2, v1, v2

    if-lez v2, :cond_2

    iget-object v2, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->mRectF:Landroid/graphics/RectF;

    const/4 v3, 0x0

    invoke-virtual {v2, v3, v3, v0, v1}, Landroid/graphics/RectF;->set(FFFF)V

    iget-object v0, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->mPath:Landroid/graphics/Path;

    iget-object v1, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->mRectF:Landroid/graphics/RectF;

    iget-object v2, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->aqv:[F

    sget-object v3, Landroid/graphics/Path$Direction;->CW:Landroid/graphics/Path$Direction;

    invoke-virtual {v0, v1, v2, v3}, Landroid/graphics/Path;->addRoundRect(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->mPath:Landroid/graphics/Path;

    invoke-virtual {p1, v0}, Landroid/graphics/Canvas;->clipPath(Landroid/graphics/Path;)Z

    :cond_2
    invoke-super {p0, p1}, Landroid/widget/ImageView;->onDraw(Landroid/graphics/Canvas;)V

    return-void

    :cond_3
    :goto_0
    invoke-super {p0, p1}, Landroid/widget/ImageView;->onDraw(Landroid/graphics/Canvas;)V

    return-void
.end method

.method public setRadius(F)V
    .locals 3

    const/16 v0, 0x8

    new-array v0, v0, [F

    iput-object v0, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->aqv:[F

    const/4 v0, 0x0

    :goto_0
    iget-object v1, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->aqv:[F

    array-length v2, v1

    if-ge v0, v2, :cond_0

    aput p1, v1, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public setRadius([F)V
    .locals 3

    const/16 v0, 0x8

    new-array v0, v0, [F

    iput-object v0, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->aqv:[F

    const/4 v0, 0x0

    :goto_0
    iget-object v1, p0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->aqv:[F

    array-length v2, v1

    if-ge v0, v2, :cond_0

    aget v2, p1, v0

    aput v2, v1, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method
