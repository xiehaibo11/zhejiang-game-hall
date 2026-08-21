.class public Lcom/kwad/sdk/widget/DownloadProgressBar;
.super Landroid/view/View;


# instance fields
.field private Dm:Ljava/lang/Runnable;

.field aLG:Landroid/graphics/Paint;

.field aLH:Landroid/graphics/Paint;

.field aLI:Landroid/graphics/Paint;

.field private aLJ:Ljava/lang/String;

.field private aLK:F

.field private aLL:Landroid/graphics/Rect;

.field private aLM:Landroid/graphics/LinearGradient;

.field private aLN:Landroid/graphics/LinearGradient;

.field private aLO:Landroid/graphics/LinearGradient;

.field private mMatrix:Landroid/graphics/Matrix;

.field private mPath:Landroid/graphics/Path;

.field private mRectF:Landroid/graphics/RectF;

.field private mStartTime:J


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-direct {p0, p1, v0, v1}, Lcom/kwad/sdk/widget/DownloadProgressBar;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/sdk/widget/DownloadProgressBar;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    new-instance p2, Lcom/kwad/sdk/widget/DownloadProgressBar$1;

    invoke-direct {p2, p0}, Lcom/kwad/sdk/widget/DownloadProgressBar$1;-><init>(Lcom/kwad/sdk/widget/DownloadProgressBar;)V

    iput-object p2, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->Dm:Ljava/lang/Runnable;

    new-instance p2, Landroid/graphics/Paint;

    const/4 p3, 0x1

    invoke-direct {p2, p3}, Landroid/graphics/Paint;-><init>(I)V

    iput-object p2, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLG:Landroid/graphics/Paint;

    new-instance p2, Landroid/graphics/Paint;

    invoke-direct {p2, p3}, Landroid/graphics/Paint;-><init>(I)V

    iput-object p2, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLH:Landroid/graphics/Paint;

    new-instance p2, Landroid/graphics/RectF;

    invoke-direct {p2}, Landroid/graphics/RectF;-><init>()V

    iput-object p2, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mRectF:Landroid/graphics/RectF;

    new-instance p2, Landroid/graphics/Paint;

    invoke-direct {p2, p3}, Landroid/graphics/Paint;-><init>(I)V

    iput-object p2, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLI:Landroid/graphics/Paint;

    const/high16 p3, 0x41800000    # 16.0f

    invoke-static {p1, p3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p1

    int-to-float p1, p1

    invoke-virtual {p2, p1}, Landroid/graphics/Paint;->setTextSize(F)V

    iget-object p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLI:Landroid/graphics/Paint;

    const/4 p2, -0x1

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setColor(I)V

    iget-object p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLI:Landroid/graphics/Paint;

    sget-object p2, Landroid/graphics/Paint$Align;->CENTER:Landroid/graphics/Paint$Align;

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setTextAlign(Landroid/graphics/Paint$Align;)V

    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1}, Landroid/graphics/Rect;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLL:Landroid/graphics/Rect;

    new-instance p1, Landroid/graphics/Matrix;

    invoke-direct {p1}, Landroid/graphics/Matrix;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mMatrix:Landroid/graphics/Matrix;

    new-instance p1, Landroid/graphics/Path;

    invoke-direct {p1}, Landroid/graphics/Path;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mPath:Landroid/graphics/Path;

    return-void
.end method


# virtual methods
.method protected onDetachedFromWindow()V
    .locals 1

    invoke-super {p0}, Landroid/view/View;->onDetachedFromWindow()V

    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->Dm:Ljava/lang/Runnable;

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->removeCallbacks(Ljava/lang/Runnable;)Z

    return-void
.end method

.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 14

    invoke-super {p0, p1}, Landroid/view/View;->onDraw(Landroid/graphics/Canvas;)V

    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mPath:Landroid/graphics/Path;

    invoke-virtual {p1, v0}, Landroid/graphics/Canvas;->clipPath(Landroid/graphics/Path;)Z

    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLG:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLM:Landroid/graphics/LinearGradient;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mRectF:Landroid/graphics/RectF;

    iget-object v1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLG:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawRect(Landroid/graphics/RectF;Landroid/graphics/Paint;)V

    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLG:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLN:Landroid/graphics/LinearGradient;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getWidth()I

    move-result v0

    int-to-float v0, v0

    iget v1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLK:F

    mul-float/2addr v0, v1

    const/high16 v1, 0x42c80000    # 100.0f

    div-float v5, v0, v1

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getHeight()I

    move-result v0

    int-to-float v6, v0

    iget-object v7, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLG:Landroid/graphics/Paint;

    const/4 v3, 0x0

    const/4 v4, 0x0

    move-object v2, p1

    invoke-virtual/range {v2 .. v7}, Landroid/graphics/Canvas;->drawRect(FFFFLandroid/graphics/Paint;)V

    iget v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLK:F

    const/4 v2, 0x0

    cmpl-float v3, v0, v2

    if-lez v3, :cond_3

    cmpg-float v0, v0, v1

    if-gez v0, :cond_3

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    iget-wide v5, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mStartTime:J

    sub-long/2addr v3, v5

    const-wide/16 v5, 0x9c4

    rem-long/2addr v3, v5

    const-wide/16 v5, 0x5dc

    cmp-long v0, v3, v5

    if-ltz v0, :cond_0

    move v5, v2

    goto :goto_0

    :cond_0
    long-to-float v5, v3

    const v6, 0x44bb8000    # 1500.0f

    div-float/2addr v5, v6

    :goto_0
    iget-object v6, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mMatrix:Landroid/graphics/Matrix;

    invoke-virtual {v6}, Landroid/graphics/Matrix;->reset()V

    iget-object v6, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mMatrix:Landroid/graphics/Matrix;

    const/high16 v7, 0x3f800000    # 1.0f

    invoke-virtual {v6, v7, v5}, Landroid/graphics/Matrix;->setScale(FF)V

    iget-object v6, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLO:Landroid/graphics/LinearGradient;

    iget-object v8, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mMatrix:Landroid/graphics/Matrix;

    invoke-virtual {v6, v8}, Landroid/graphics/LinearGradient;->setLocalMatrix(Landroid/graphics/Matrix;)V

    iget-object v6, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLH:Landroid/graphics/Paint;

    iget-object v8, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLO:Landroid/graphics/LinearGradient;

    invoke-virtual {v6, v8}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getWidth()I

    move-result v6

    int-to-float v6, v6

    iget v8, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLK:F

    mul-float/2addr v6, v8

    div-float/2addr v6, v1

    mul-float v11, v6, v5

    const/4 v9, 0x0

    const/4 v10, 0x0

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getHeight()I

    move-result v6

    int-to-float v12, v6

    iget-object v13, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLH:Landroid/graphics/Paint;

    move-object v8, p1

    invoke-virtual/range {v8 .. v13}, Landroid/graphics/Canvas;->drawRect(FFFFLandroid/graphics/Paint;)V

    const-wide/16 v8, 0x1f4

    cmp-long v6, v3, v8

    if-lez v6, :cond_2

    if-lez v0, :cond_1

    goto :goto_1

    :cond_1
    sub-long/2addr v3, v8

    long-to-float v0, v3

    const/high16 v2, 0x447a0000    # 1000.0f

    div-float v2, v0, v2

    :cond_2
    :goto_1
    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getWidth()I

    move-result v0

    int-to-float v0, v0

    iget v3, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLK:F

    mul-float/2addr v0, v3

    div-float/2addr v0, v1

    mul-float v11, v0, v2

    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mMatrix:Landroid/graphics/Matrix;

    invoke-virtual {v0}, Landroid/graphics/Matrix;->reset()V

    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mMatrix:Landroid/graphics/Matrix;

    invoke-virtual {v0, v7, v5}, Landroid/graphics/Matrix;->setScale(FF)V

    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLO:Landroid/graphics/LinearGradient;

    iget-object v1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mMatrix:Landroid/graphics/Matrix;

    invoke-virtual {v0, v1}, Landroid/graphics/LinearGradient;->setLocalMatrix(Landroid/graphics/Matrix;)V

    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLH:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLO:Landroid/graphics/LinearGradient;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    const/4 v9, 0x0

    const/4 v10, 0x0

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getHeight()I

    move-result v0

    int-to-float v12, v0

    iget-object v13, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLH:Landroid/graphics/Paint;

    move-object v8, p1

    invoke-virtual/range {v8 .. v13}, Landroid/graphics/Canvas;->drawRect(FFFFLandroid/graphics/Paint;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLJ:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLI:Landroid/graphics/Paint;

    const/4 v2, 0x0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v3

    iget-object v4, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLL:Landroid/graphics/Rect;

    invoke-virtual {v1, v0, v2, v3, v4}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLL:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->top:I

    iget-object v1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLL:Landroid/graphics/Rect;

    iget v1, v1, Landroid/graphics/Rect;->bottom:I

    add-int/2addr v0, v1

    int-to-float v0, v0

    const/high16 v1, 0x40000000    # 2.0f

    div-float/2addr v0, v1

    iget-object v2, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLJ:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getWidth()I

    move-result v3

    int-to-float v3, v3

    div-float/2addr v3, v1

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getHeight()I

    move-result v4

    int-to-float v4, v4

    div-float/2addr v4, v1

    sub-float/2addr v4, v0

    iget-object v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLI:Landroid/graphics/Paint;

    invoke-virtual {p1, v2, v3, v4, v0}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    :cond_4
    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 19

    move-object/from16 v0, p0

    invoke-super/range {p0 .. p4}, Landroid/view/View;->onSizeChanged(IIII)V

    new-instance v9, Landroid/graphics/LinearGradient;

    invoke-virtual/range {p0 .. p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getMeasuredWidth()I

    move-result v1

    int-to-float v4, v1

    const/4 v10, 0x2

    new-array v6, v10, [I

    fill-array-data v6, :array_0

    new-array v7, v10, [F

    fill-array-data v7, :array_1

    sget-object v8, Landroid/graphics/Shader$TileMode;->CLAMP:Landroid/graphics/Shader$TileMode;

    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v5, 0x0

    move-object v1, v9

    invoke-direct/range {v1 .. v8}, Landroid/graphics/LinearGradient;-><init>(FFFF[I[FLandroid/graphics/Shader$TileMode;)V

    iput-object v9, v0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLM:Landroid/graphics/LinearGradient;

    new-instance v1, Landroid/graphics/LinearGradient;

    invoke-virtual/range {p0 .. p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getMeasuredWidth()I

    move-result v2

    int-to-float v14, v2

    new-array v2, v10, [I

    fill-array-data v2, :array_2

    new-array v3, v10, [F

    fill-array-data v3, :array_3

    sget-object v18, Landroid/graphics/Shader$TileMode;->CLAMP:Landroid/graphics/Shader$TileMode;

    const/4 v12, 0x0

    const/4 v13, 0x0

    const/4 v15, 0x0

    move-object v11, v1

    move-object/from16 v16, v2

    move-object/from16 v17, v3

    invoke-direct/range {v11 .. v18}, Landroid/graphics/LinearGradient;-><init>(FFFF[I[FLandroid/graphics/Shader$TileMode;)V

    iput-object v1, v0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLN:Landroid/graphics/LinearGradient;

    iget-object v1, v0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLG:Landroid/graphics/Paint;

    iget-object v2, v0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLM:Landroid/graphics/LinearGradient;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    new-instance v1, Landroid/graphics/LinearGradient;

    invoke-virtual/range {p0 .. p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getMeasuredWidth()I

    move-result v2

    int-to-float v14, v2

    new-array v2, v10, [I

    fill-array-data v2, :array_4

    new-array v3, v10, [F

    fill-array-data v3, :array_5

    sget-object v18, Landroid/graphics/Shader$TileMode;->CLAMP:Landroid/graphics/Shader$TileMode;

    move-object v11, v1

    move-object/from16 v16, v2

    move-object/from16 v17, v3

    invoke-direct/range {v11 .. v18}, Landroid/graphics/LinearGradient;-><init>(FFFF[I[FLandroid/graphics/Shader$TileMode;)V

    iput-object v1, v0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLO:Landroid/graphics/LinearGradient;

    iget-object v2, v0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLH:Landroid/graphics/Paint;

    invoke-virtual {v2, v1}, Landroid/graphics/Paint;->setShader(Landroid/graphics/Shader;)Landroid/graphics/Shader;

    iget-object v1, v0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mRectF:Landroid/graphics/RectF;

    move/from16 v2, p1

    int-to-float v2, v2

    move/from16 v3, p2

    int-to-float v3, v3

    const/4 v4, 0x0

    invoke-virtual {v1, v4, v4, v2, v3}, Landroid/graphics/RectF;->set(FFFF)V

    iget-object v1, v0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mPath:Landroid/graphics/Path;

    invoke-virtual {v1}, Landroid/graphics/Path;->reset()V

    iget-object v1, v0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mPath:Landroid/graphics/Path;

    iget-object v3, v0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mRectF:Landroid/graphics/RectF;

    const/high16 v4, 0x40000000    # 2.0f

    div-float/2addr v2, v4

    sget-object v4, Landroid/graphics/Path$Direction;->CW:Landroid/graphics/Path$Direction;

    invoke-virtual {v1, v3, v2, v2, v4}, Landroid/graphics/Path;->addRoundRect(Landroid/graphics/RectF;FFLandroid/graphics/Path$Direction;)V

    return-void

    nop

    :array_0
    .array-data 4
        0x4cfb1e52    # 1.3165838E8f
        0x4cfbc90c
    .end array-data

    :array_1
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data

    :array_2
    .array-data 4
        -0x4e1ae
        -0x436f4
    .end array-data

    :array_3
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data

    :array_4
    .array-data 4
        0xfbc90c
        -0x436f4
    .end array-data

    :array_5
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    invoke-super {p0, p1, p2}, Landroid/view/View;->onVisibilityChanged(Landroid/view/View;I)V

    return-void
.end method

.method protected onWindowVisibilityChanged(I)V
    .locals 2

    invoke-super {p0, p1}, Landroid/view/View;->onWindowVisibilityChanged(I)V

    if-nez p1, :cond_0

    iget p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLK:F

    const/4 v0, 0x0

    cmpl-float v0, p1, v0

    if-lez v0, :cond_1

    const/high16 v0, 0x42c80000    # 100.0f

    cmpg-float p1, p1, v0

    if-gez p1, :cond_1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mStartTime:J

    iget-object p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->Dm:Ljava/lang/Runnable;

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->post(Ljava/lang/Runnable;)Z

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->Dm:Ljava/lang/Runnable;

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->removeCallbacks(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method

.method public setProgress(F)V
    .locals 4

    iput p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLK:F

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->invalidate()V

    const/4 v0, 0x0

    cmpl-float v0, p1, v0

    if-eqz v0, :cond_2

    const/high16 v0, 0x42c80000    # 100.0f

    cmpl-float p1, p1, v0

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->getWindowVisibility()I

    move-result p1

    if-nez p1, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->mStartTime:J

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->Dm:Ljava/lang/Runnable;

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->Dm:Ljava/lang/Runnable;

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/widget/DownloadProgressBar;->removeCallbacks(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public setText(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/widget/DownloadProgressBar;->aLJ:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/kwad/sdk/widget/DownloadProgressBar;->invalidate()V

    return-void
.end method
