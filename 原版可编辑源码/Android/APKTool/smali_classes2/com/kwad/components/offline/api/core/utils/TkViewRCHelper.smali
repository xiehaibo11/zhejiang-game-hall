.class public Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper$CornerConf;
    }
.end annotation


# instance fields
.field private mClipBackground:Z

.field private mCornerConf:Lcom/kwad/sdk/widget/h$a;

.field private mPaint:Landroid/graphics/Paint;

.field private mPath:Landroid/graphics/Path;

.field private mRadius:F

.field private mRectF:Landroid/graphics/RectF;

.field public radiusArray:[F


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x8

    new-array v0, v0, [F

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    new-instance v0, Lcom/kwad/sdk/widget/h$a;

    invoke-direct {v0}, Lcom/kwad/sdk/widget/h$a;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/widget/h$a;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x8

    new-array v0, v0, [F

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    if-nez p1, :cond_0

    new-instance p1, Lcom/kwad/sdk/widget/h$a;

    invoke-direct {p1}, Lcom/kwad/sdk/widget/h$a;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    return-void

    :cond_0
    iput-object p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    return-void
.end method

.method private getPath()Landroid/graphics/Path;
    .locals 4

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mPath:Landroid/graphics/Path;

    invoke-virtual {v0}, Landroid/graphics/Path;->reset()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    iget v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRadius:F

    const/4 v1, 0x0

    cmpl-float v0, v0, v1

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    goto :goto_0

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->getRadius()[F

    move-result-object v0

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mPath:Landroid/graphics/Path;

    iget-object v2, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRectF:Landroid/graphics/RectF;

    sget-object v3, Landroid/graphics/Path$Direction;->CW:Landroid/graphics/Path$Direction;

    invoke-virtual {v1, v2, v0, v3}, Landroid/graphics/Path;->addRoundRect(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mPath:Landroid/graphics/Path;

    return-object v0
.end method

.method private getRadius()[F
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    iget-object v1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    invoke-virtual {v1}, Lcom/kwad/sdk/widget/h$a;->isLeftTop()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    iget v1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRadius:F

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    const/4 v3, 0x0

    aput v1, v0, v3

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    const/4 v1, 0x1

    iget-object v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    invoke-virtual {v3}, Lcom/kwad/sdk/widget/h$a;->isLeftTop()Z

    move-result v3

    if-eqz v3, :cond_1

    iget v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRadius:F

    goto :goto_1

    :cond_1
    move v3, v2

    :goto_1
    aput v3, v0, v1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    const/4 v1, 0x2

    iget-object v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    invoke-virtual {v3}, Lcom/kwad/sdk/widget/h$a;->isTopRight()Z

    move-result v3

    if-eqz v3, :cond_2

    iget v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRadius:F

    goto :goto_2

    :cond_2
    move v3, v2

    :goto_2
    aput v3, v0, v1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    const/4 v1, 0x3

    iget-object v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    invoke-virtual {v3}, Lcom/kwad/sdk/widget/h$a;->isTopRight()Z

    move-result v3

    if-eqz v3, :cond_3

    iget v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRadius:F

    goto :goto_3

    :cond_3
    move v3, v2

    :goto_3
    aput v3, v0, v1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    const/4 v1, 0x4

    iget-object v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    invoke-virtual {v3}, Lcom/kwad/sdk/widget/h$a;->isRightBottom()Z

    move-result v3

    if-eqz v3, :cond_4

    iget v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRadius:F

    goto :goto_4

    :cond_4
    move v3, v2

    :goto_4
    aput v3, v0, v1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    const/4 v1, 0x5

    iget-object v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    invoke-virtual {v3}, Lcom/kwad/sdk/widget/h$a;->isRightBottom()Z

    move-result v3

    if-eqz v3, :cond_5

    iget v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRadius:F

    goto :goto_5

    :cond_5
    move v3, v2

    :goto_5
    aput v3, v0, v1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    const/4 v1, 0x6

    iget-object v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    invoke-virtual {v3}, Lcom/kwad/sdk/widget/h$a;->isBottomLeft()Z

    move-result v3

    if-eqz v3, :cond_6

    iget v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRadius:F

    goto :goto_6

    :cond_6
    move v3, v2

    :goto_6
    aput v3, v0, v1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    const/4 v1, 0x7

    iget-object v3, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    invoke-virtual {v3}, Lcom/kwad/sdk/widget/h$a;->isBottomLeft()Z

    move-result v3

    if-eqz v3, :cond_7

    iget v2, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRadius:F

    :cond_7
    aput v2, v0, v1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    return-object v0
.end method


# virtual methods
.method public afterDispatchDraw(Landroid/graphics/Canvas;)V
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-ge v0, v1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->getPath()Landroid/graphics/Path;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    :cond_0
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    return-void
.end method

.method public afterDraw(Landroid/graphics/Canvas;)V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mClipBackground:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-ge v0, v1, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->getPath()Landroid/graphics/Path;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    :cond_1
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    return-void
.end method

.method public beforeDispatchDraw(Landroid/graphics/Canvas;)V
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-lt v0, v1, :cond_0

    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    invoke-direct {p0}, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->getPath()Landroid/graphics/Path;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/graphics/Canvas;->clipPath(Landroid/graphics/Path;)Z

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRectF:Landroid/graphics/RectF;

    const/4 v1, 0x0

    const/16 v2, 0x1f

    invoke-virtual {p1, v0, v1, v2}, Landroid/graphics/Canvas;->saveLayer(Landroid/graphics/RectF;Landroid/graphics/Paint;I)I

    return-void
.end method

.method public beforeDraw(Landroid/graphics/Canvas;)V
    .locals 3

    iget-boolean v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mClipBackground:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-ge v0, v1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRectF:Landroid/graphics/RectF;

    const/4 v1, 0x0

    const/16 v2, 0x1f

    invoke-virtual {p1, v0, v1, v2}, Landroid/graphics/Canvas;->saveLayer(Landroid/graphics/RectF;Landroid/graphics/Paint;I)I

    return-void

    :cond_1
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    invoke-direct {p0}, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->getPath()Landroid/graphics/Path;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/graphics/Canvas;->clipPath(Landroid/graphics/Path;)Z

    return-void
.end method

.method public getCornerConf()Lcom/kwad/sdk/widget/h$a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mCornerConf:Lcom/kwad/sdk/widget/h$a;

    return-object v0
.end method

.method public initAttrs(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    new-instance p1, Landroid/graphics/Path;

    invoke-direct {p1}, Landroid/graphics/Path;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mPath:Landroid/graphics/Path;

    new-instance p1, Landroid/graphics/Paint;

    const/4 p2, 0x1

    invoke-direct {p1, p2}, Landroid/graphics/Paint;-><init>(I)V

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mPaint:Landroid/graphics/Paint;

    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRectF:Landroid/graphics/RectF;

    iget-object p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mPaint:Landroid/graphics/Paint;

    new-instance p2, Landroid/graphics/PorterDuffXfermode;

    sget-object v0, Landroid/graphics/PorterDuff$Mode;->DST_IN:Landroid/graphics/PorterDuff$Mode;

    invoke-direct {p2, v0}, Landroid/graphics/PorterDuffXfermode;-><init>(Landroid/graphics/PorterDuff$Mode;)V

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    return-void
.end method

.method public onSizeChanged(II)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRectF:Landroid/graphics/RectF;

    int-to-float p1, p1

    int-to-float p2, p2

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1, p1, p2}, Landroid/graphics/RectF;->set(FFFF)V

    return-void
.end method

.method public setRadius(F)V
    .locals 0

    iput p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->mRadius:F

    return-void
.end method

.method public setRadius([F)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/utils/TkViewRCHelper;->radiusArray:[F

    return-void
.end method
