.class public Lcom/sigmob/sdk/base/views/r;
.super Landroid/widget/ImageView;


# static fields
.field private static final a:I = 0x3e8


# instance fields
.field private b:I

.field private c:Landroid/graphics/Movie;

.field private d:J

.field private e:I

.field private f:F

.field private g:F

.field private h:F

.field private i:F

.field private j:I

.field private k:I

.field private l:Z

.field private volatile m:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/base/views/r;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/base/views/r;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    iput p1, p0, Lcom/sigmob/sdk/base/views/r;->e:I

    const/4 p2, 0x1

    iput-boolean p2, p0, Lcom/sigmob/sdk/base/views/r;->l:Z

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/views/r;->m:Z

    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p3, 0xb

    if-lt p1, p3, :cond_0

    const/4 p1, 0x0

    invoke-virtual {p0, p2, p1}, Lcom/sigmob/sdk/base/views/r;->setLayerType(ILandroid/graphics/Paint;)V

    :cond_0
    return-void
.end method

.method private a(Landroid/graphics/Canvas;)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/r;->c:Landroid/graphics/Movie;

    iget v1, p0, Lcom/sigmob/sdk/base/views/r;->e:I

    invoke-virtual {v0, v1}, Landroid/graphics/Movie;->setTime(I)Z

    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    iget v0, p0, Lcom/sigmob/sdk/base/views/r;->h:F

    iget v1, p0, Lcom/sigmob/sdk/base/views/r;->i:F

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->scale(FF)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/r;->c:Landroid/graphics/Movie;

    iget v1, p0, Lcom/sigmob/sdk/base/views/r;->f:F

    iget v2, p0, Lcom/sigmob/sdk/base/views/r;->h:F

    div-float/2addr v1, v2

    iget v2, p0, Lcom/sigmob/sdk/base/views/r;->g:F

    iget v3, p0, Lcom/sigmob/sdk/base/views/r;->i:F

    div-float/2addr v2, v3

    invoke-virtual {v0, p1, v1, v2}, Landroid/graphics/Movie;->draw(Landroid/graphics/Canvas;FF)V

    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    return-void
.end method

.method private b()V
    .locals 2

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/views/r;->l:Z

    if-eqz v0, :cond_1

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/r;->postInvalidateOnAnimation()V

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/r;->invalidate()V

    :cond_1
    :goto_0
    return-void
.end method

.method private c()V
    .locals 6

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/sigmob/sdk/base/views/r;->d:J

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-nez v2, :cond_0

    iput-wide v0, p0, Lcom/sigmob/sdk/base/views/r;->d:J

    :cond_0
    iget-object v2, p0, Lcom/sigmob/sdk/base/views/r;->c:Landroid/graphics/Movie;

    invoke-virtual {v2}, Landroid/graphics/Movie;->duration()I

    move-result v2

    if-nez v2, :cond_1

    const/16 v2, 0x3e8

    :cond_1
    iget-wide v3, p0, Lcom/sigmob/sdk/base/views/r;->d:J

    sub-long/2addr v0, v3

    int-to-long v2, v2

    rem-long/2addr v0, v2

    long-to-int v0, v0

    iput v0, p0, Lcom/sigmob/sdk/base/views/r;->e:I

    return-void
.end method

.method private getGiftBytes()[B
    .locals 7

    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/r;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    iget v2, p0, Lcom/sigmob/sdk/base/views/r;->b:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->openRawResource(I)Ljava/io/InputStream;

    move-result-object v1

    const/16 v2, 0x400

    new-array v3, v2, [B

    :goto_0
    const/4 v4, 0x0

    :try_start_0
    invoke-virtual {v1, v3, v4, v2}, Ljava/io/InputStream;->read([BII)I

    move-result v5

    const/4 v6, -0x1

    if-eq v5, v6, :cond_0

    invoke-virtual {v0, v3, v4, v5}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->flush()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v1, :cond_1

    :try_start_1
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    goto :goto_1

    :catchall_1
    move-exception v2

    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    if-eqz v1, :cond_1

    :try_start_3
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :cond_1
    :goto_1
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v0

    return-object v0

    :catchall_2
    move-exception v0

    if-eqz v1, :cond_2

    :try_start_4
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    goto :goto_2

    :catchall_3
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_2
    :goto_2
    throw v0
.end method


# virtual methods
.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/views/r;->m:Z

    return v0
.end method

.method public getMovie()Landroid/graphics/Movie;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/r;->c:Landroid/graphics/Movie;

    return-object v0
.end method

.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/r;->c:Landroid/graphics/Movie;

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/r;->c()V

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/r;->a(Landroid/graphics/Canvas;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/r;->b()V

    goto :goto_0

    :cond_0
    invoke-super {p0, p1}, Landroid/widget/ImageView;->onDraw(Landroid/graphics/Canvas;)V

    :goto_0
    return-void
.end method

.method protected onLayout(ZIIII)V
    .locals 0

    invoke-super/range {p0 .. p5}, Landroid/widget/ImageView;->onLayout(ZIIII)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/r;->getWidth()I

    move-result p1

    iget p2, p0, Lcom/sigmob/sdk/base/views/r;->j:I

    sub-int/2addr p1, p2

    int-to-float p1, p1

    const/high16 p2, 0x40000000    # 2.0f

    div-float/2addr p1, p2

    iput p1, p0, Lcom/sigmob/sdk/base/views/r;->f:F

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/r;->getHeight()I

    move-result p1

    iget p3, p0, Lcom/sigmob/sdk/base/views/r;->k:I

    sub-int/2addr p1, p3

    int-to-float p1, p1

    div-float/2addr p1, p2

    iput p1, p0, Lcom/sigmob/sdk/base/views/r;->g:F

    return-void
.end method

.method protected onMeasure(II)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/r;->c:Landroid/graphics/Movie;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/graphics/Movie;->width()I

    move-result v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/r;->c:Landroid/graphics/Movie;

    invoke-virtual {v1}, Landroid/graphics/Movie;->height()I

    move-result v1

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p1

    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v2

    int-to-float v0, v0

    int-to-float v3, p1

    div-float/2addr v0, v3

    int-to-float v1, v1

    int-to-float v2, v2

    div-float/2addr v1, v2

    const/high16 v2, 0x3f800000    # 1.0f

    div-float v0, v2, v0

    iput v0, p0, Lcom/sigmob/sdk/base/views/r;->h:F

    div-float/2addr v2, v1

    iput v2, p0, Lcom/sigmob/sdk/base/views/r;->i:F

    iput p1, p0, Lcom/sigmob/sdk/base/views/r;->j:I

    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/base/views/r;->k:I

    iget p2, p0, Lcom/sigmob/sdk/base/views/r;->j:I

    invoke-virtual {p0, p2, p1}, Lcom/sigmob/sdk/base/views/r;->setMeasuredDimension(II)V

    goto :goto_0

    :cond_0
    invoke-super {p0, p1, p2}, Landroid/widget/ImageView;->onMeasure(II)V

    :goto_0
    return-void
.end method

.method public onScreenStateChanged(I)V
    .locals 1

    invoke-super {p0, p1}, Landroid/widget/ImageView;->onScreenStateChanged(I)V

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iput-boolean v0, p0, Lcom/sigmob/sdk/base/views/r;->l:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/r;->b()V

    return-void
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    invoke-super {p0, p1, p2}, Landroid/widget/ImageView;->onVisibilityChanged(Landroid/view/View;I)V

    if-nez p2, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    iput-boolean p1, p0, Lcom/sigmob/sdk/base/views/r;->l:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/r;->b()V

    return-void
.end method

.method protected onWindowVisibilityChanged(I)V
    .locals 0

    invoke-super {p0, p1}, Landroid/widget/ImageView;->onWindowVisibilityChanged(I)V

    if-nez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    iput-boolean p1, p0, Lcom/sigmob/sdk/base/views/r;->l:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/r;->b()V

    return-void
.end method

.method public setMovie(Landroid/graphics/Movie;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/r;->c:Landroid/graphics/Movie;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/r;->requestLayout()V

    return-void
.end method

.method public setMovieResource(I)V
    .locals 2

    iput p1, p0, Lcom/sigmob/sdk/base/views/r;->b:I

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/r;->getGiftBytes()[B

    move-result-object p1

    array-length v0, p1

    const/4 v1, 0x0

    invoke-static {p1, v1, v0}, Landroid/graphics/Movie;->decodeByteArray([BII)Landroid/graphics/Movie;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/r;->c:Landroid/graphics/Movie;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/r;->requestLayout()V

    return-void
.end method

.method public setMovieTime(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/views/r;->e:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/r;->invalidate()V

    return-void
.end method

.method public setPaused(Z)V
    .locals 4

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/views/r;->m:Z

    if-nez p1, :cond_0

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    iget p1, p0, Lcom/sigmob/sdk/base/views/r;->e:I

    int-to-long v2, p1

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/sigmob/sdk/base/views/r;->d:J

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/r;->invalidate()V

    return-void
.end method
