.class public Lcom/tkay/expressad/video/dynview/widget/TYImageView;
.super Landroid/widget/ImageView;


# static fields
.field private static final a:Ljava/lang/String; = "MBridgeImageView"


# instance fields
.field private b:Landroid/graphics/Xfermode;

.field private c:I

.field private d:I

.field private e:I

.field private f:I

.field private g:I

.field private h:I

.field private i:I

.field private j:I

.field private k:I

.field private l:[F

.field private m:[F

.field private n:Landroid/graphics/RectF;

.field private o:Landroid/graphics/RectF;

.field private p:Z

.field private q:Z

.field private r:Landroid/graphics/Path;

.field private s:Landroid/graphics/Paint;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 78
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 82
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 86
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 73
    new-instance p1, Landroid/graphics/Path;

    invoke-direct {p1}, Landroid/graphics/Path;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->r:Landroid/graphics/Path;

    .line 74
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    const/16 p1, 0x8

    new-array p2, p1, [F

    .line 87
    iput-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    new-array p1, p1, [F

    .line 88
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    .line 89
    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->o:Landroid/graphics/RectF;

    .line 90
    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->n:Landroid/graphics/RectF;

    .line 91
    new-instance p1, Landroid/graphics/PorterDuffXfermode;

    sget-object p2, Landroid/graphics/PorterDuff$Mode;->DST_IN:Landroid/graphics/PorterDuff$Mode;

    invoke-direct {p1, p2}, Landroid/graphics/PorterDuffXfermode;-><init>(Landroid/graphics/PorterDuff$Mode;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->b:Landroid/graphics/Xfermode;

    return-void
.end method

.method private a()V
    .locals 5

    .line 242
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    if-eqz v0, :cond_1

    const/4 v0, 0x0

    .line 244
    :goto_0
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    array-length v1, v1

    if-ge v0, v1, :cond_0

    .line 245
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->e:I

    int-to-float v2, v2

    aput v2, v1, v0

    .line 246
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->e:I

    int-to-float v2, v2

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float v3, v3

    const/high16 v4, 0x40000000    # 2.0f

    div-float/2addr v3, v4

    sub-float/2addr v2, v3

    aput v2, v1, v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 249
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method

.method private a(II)V
    .locals 1

    .line 228
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->r:Landroid/graphics/Path;

    if-eqz v0, :cond_0

    .line 229
    invoke-virtual {v0}, Landroid/graphics/Path;->reset()V

    .line 231
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    if-eqz v0, :cond_1

    int-to-float p1, p1

    .line 232
    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 233
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setColor(I)V

    .line 234
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    sget-object p2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    :cond_1
    return-void
.end method

.method private a(Landroid/graphics/Canvas;)V
    .locals 6

    .line 195
    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->k:I

    iget-object v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->o:Landroid/graphics/RectF;

    iget-object v5, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    move-object v0, p0

    move-object v1, p1

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->a(Landroid/graphics/Canvas;IILandroid/graphics/RectF;[F)V

    return-void
.end method

.method private a(Landroid/graphics/Canvas;IILandroid/graphics/RectF;[F)V
    .locals 0

    .line 210
    :try_start_0
    invoke-direct {p0, p2, p3}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->a(II)V

    .line 211
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->r:Landroid/graphics/Path;

    if-eqz p2, :cond_0

    .line 212
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->r:Landroid/graphics/Path;

    sget-object p3, Landroid/graphics/Path$Direction;->CCW:Landroid/graphics/Path$Direction;

    invoke-virtual {p2, p4, p5, p3}, Landroid/graphics/Path;->addRoundRect(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V

    :cond_0
    if-eqz p1, :cond_1

    .line 215
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->r:Landroid/graphics/Path;

    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    invoke-virtual {p1, p2, p3}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception p1

    .line 218
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private b()V
    .locals 5

    .line 259
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    if-eqz v0, :cond_3

    const/4 v0, 0x0

    :goto_0
    const/4 v1, 0x2

    const/high16 v2, 0x40000000    # 2.0f

    if-ge v0, v1, :cond_0

    .line 262
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->f:I

    int-to-float v3, v3

    aput v3, v1, v0

    .line 263
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->f:I

    int-to-float v3, v3

    iget v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float v4, v4

    div-float/2addr v4, v2

    sub-float/2addr v3, v4

    aput v3, v1, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    :goto_1
    const/4 v0, 0x4

    if-ge v1, v0, :cond_1

    .line 266
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->g:I

    int-to-float v3, v3

    aput v3, v0, v1

    .line 267
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->g:I

    int-to-float v3, v3

    iget v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float v4, v4

    div-float/2addr v4, v2

    sub-float/2addr v3, v4

    aput v3, v0, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    :cond_1
    :goto_2
    const/4 v1, 0x6

    if-ge v0, v1, :cond_2

    .line 270
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->h:I

    int-to-float v3, v3

    aput v3, v1, v0

    .line 271
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->h:I

    int-to-float v3, v3

    iget v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float v4, v4

    div-float/2addr v4, v2

    sub-float/2addr v3, v4

    aput v3, v1, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_2

    :cond_2
    :goto_3
    const/16 v0, 0x8

    if-ge v1, v0, :cond_3

    .line 274
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->i:I

    int-to-float v3, v3

    aput v3, v0, v1

    .line 275
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->i:I

    int-to-float v3, v3

    iget v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float v4, v4

    div-float/2addr v4, v2

    sub-float/2addr v3, v4

    aput v3, v0, v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_3

    :cond_3
    return-void

    :catch_0
    move-exception v0

    .line 279
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private c()V
    .locals 7

    .line 288
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->o:Landroid/graphics/RectF;

    if-eqz v0, :cond_0

    .line 289
    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float v2, v1

    const/high16 v3, 0x40000000    # 2.0f

    div-float/2addr v2, v3

    int-to-float v4, v1

    div-float/2addr v4, v3

    iget v5, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->c:I

    int-to-float v5, v5

    int-to-float v6, v1

    div-float/2addr v6, v3

    sub-float/2addr v5, v6

    iget v6, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->d:I

    int-to-float v6, v6

    int-to-float v1, v1

    div-float/2addr v1, v3

    sub-float/2addr v6, v1

    invoke-virtual {v0, v2, v4, v5, v6}, Landroid/graphics/RectF;->set(FFFF)V

    :cond_0
    return-void
.end method

.method private d()V
    .locals 4

    .line 297
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->n:Landroid/graphics/RectF;

    if-eqz v0, :cond_0

    .line 298
    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->c:I

    int-to-float v1, v1

    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->d:I

    int-to-float v2, v2

    const/4 v3, 0x0

    invoke-virtual {v0, v3, v3, v1, v2}, Landroid/graphics/RectF;->set(FFFF)V

    :cond_0
    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 7

    if-nez p1, :cond_0

    return-void

    .line 115
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->n:Landroid/graphics/RectF;

    const/16 v1, 0x1f

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v2, v1}, Landroid/graphics/Canvas;->saveLayer(Landroid/graphics/RectF;Landroid/graphics/Paint;I)I

    .line 116
    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->c:I

    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    mul-int/lit8 v1, v1, 0x2

    sub-int/2addr v0, v1

    int-to-float v0, v0

    const/high16 v1, 0x3f800000    # 1.0f

    mul-float/2addr v0, v1

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->c:I

    int-to-float v3, v3

    div-float/2addr v0, v3

    .line 117
    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->d:I

    iget v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    mul-int/lit8 v4, v4, 0x2

    sub-int/2addr v3, v4

    int-to-float v3, v3

    mul-float/2addr v3, v1

    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->d:I

    int-to-float v1, v1

    div-float/2addr v3, v1

    .line 119
    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->c:I

    int-to-float v1, v1

    const/high16 v4, 0x40000000    # 2.0f

    div-float/2addr v1, v4

    iget v5, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->d:I

    int-to-float v5, v5

    div-float/2addr v5, v4

    invoke-virtual {p1, v0, v3, v1, v5}, Landroid/graphics/Canvas;->scale(FFFF)V

    .line 120
    invoke-super {p0, p1}, Landroid/widget/ImageView;->onDraw(Landroid/graphics/Canvas;)V

    .line 121
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    if-eqz v0, :cond_1

    .line 122
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    invoke-virtual {v0}, Landroid/graphics/Paint;->reset()V

    .line 123
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 124
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    sget-object v1, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 125
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->b:Landroid/graphics/Xfermode;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    .line 127
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->r:Landroid/graphics/Path;

    if-eqz v0, :cond_2

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->r:Landroid/graphics/Path;

    invoke-virtual {v0}, Landroid/graphics/Path;->reset()V

    .line 129
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->r:Landroid/graphics/Path;

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->n:Landroid/graphics/RectF;

    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    sget-object v4, Landroid/graphics/Path$Direction;->CCW:Landroid/graphics/Path$Direction;

    invoke-virtual {v0, v1, v3, v4}, Landroid/graphics/Path;->addRoundRect(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V

    .line 131
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->r:Landroid/graphics/Path;

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    .line 133
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    if-eqz v0, :cond_3

    .line 134
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->s:Landroid/graphics/Paint;

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    .line 137
    :cond_3
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 138
    iget-boolean v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->p:Z

    if-eqz v0, :cond_4

    .line 3195
    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    iget v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->k:I

    iget-object v5, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->o:Landroid/graphics/RectF;

    iget-object v6, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    move-object v1, p0

    move-object v2, p1

    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->a(Landroid/graphics/Canvas;IILandroid/graphics/RectF;[F)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_4
    return-void

    :catch_0
    move-exception p1

    .line 142
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 3

    .line 96
    invoke-super {p0, p1, p2, p3, p4}, Landroid/widget/ImageView;->onSizeChanged(IIII)V

    .line 97
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->c:I

    .line 98
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->d:I

    .line 99
    iget-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->q:Z

    const/4 p2, 0x0

    const/high16 p3, 0x40000000    # 2.0f

    if-eqz p1, :cond_3

    .line 1259
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    if-eqz p1, :cond_4

    :goto_0
    const/4 p1, 0x2

    if-ge p2, p1, :cond_0

    .line 1262
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    iget p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->f:I

    int-to-float p4, p4

    aput p4, p1, p2

    .line 1263
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    iget p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->f:I

    int-to-float p4, p4

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float v0, v0

    div-float/2addr v0, p3

    sub-float/2addr p4, v0

    aput p4, p1, p2

    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_0
    :goto_1
    const/4 p2, 0x4

    if-ge p1, p2, :cond_1

    .line 1266
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    iget p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->g:I

    int-to-float p4, p4

    aput p4, p2, p1

    .line 1267
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    iget p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->g:I

    int-to-float p4, p4

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float v0, v0

    div-float/2addr v0, p3

    sub-float/2addr p4, v0

    aput p4, p2, p1

    add-int/lit8 p1, p1, 0x1

    goto :goto_1

    :cond_1
    :goto_2
    const/4 p1, 0x6

    if-ge p2, p1, :cond_2

    .line 1270
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    iget p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->h:I

    int-to-float p4, p4

    aput p4, p1, p2

    .line 1271
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    iget p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->h:I

    int-to-float p4, p4

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float v0, v0

    div-float/2addr v0, p3

    sub-float/2addr p4, v0

    aput p4, p1, p2

    add-int/lit8 p2, p2, 0x1

    goto :goto_2

    :cond_2
    :goto_3
    const/16 p2, 0x8

    if-ge p1, p2, :cond_4

    .line 1274
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    iget p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->i:I

    int-to-float p4, p4

    aput p4, p2, p1

    .line 1275
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    iget p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->i:I

    int-to-float p4, p4

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float v0, v0

    div-float/2addr v0, p3

    sub-float/2addr p4, v0

    aput p4, p2, p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 p1, p1, 0x1

    goto :goto_3

    :catch_0
    move-exception p1

    .line 1279
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_5

    .line 2242
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    if-eqz p1, :cond_4

    .line 2244
    :goto_4
    :try_start_1
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    array-length p1, p1

    if-ge p2, p1, :cond_4

    .line 2245
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->l:[F

    iget p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->e:I

    int-to-float p4, p4

    aput p4, p1, p2

    .line 2246
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->m:[F

    iget p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->e:I

    int-to-float p4, p4

    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float v0, v0

    div-float/2addr v0, p3

    sub-float/2addr p4, v0

    aput p4, p1, p2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    add-int/lit8 p2, p2, 0x1

    goto :goto_4

    :catch_1
    move-exception p1

    .line 2249
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2288
    :cond_4
    :goto_5
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->o:Landroid/graphics/RectF;

    if-eqz p1, :cond_5

    .line 2289
    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    int-to-float p4, p2

    div-float/2addr p4, p3

    int-to-float v0, p2

    div-float/2addr v0, p3

    iget v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->c:I

    int-to-float v1, v1

    int-to-float v2, p2

    div-float/2addr v2, p3

    sub-float/2addr v1, v2

    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->d:I

    int-to-float v2, v2

    int-to-float p2, p2

    div-float/2addr p2, p3

    sub-float/2addr v2, p2

    invoke-virtual {p1, p4, v0, v1, v2}, Landroid/graphics/RectF;->set(FFFF)V

    .line 2297
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->n:Landroid/graphics/RectF;

    if-eqz p1, :cond_6

    .line 2298
    iget p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->c:I

    int-to-float p2, p2

    iget p3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->d:I

    int-to-float p3, p3

    const/4 p4, 0x0

    invoke-virtual {p1, p4, p4, p2, p3}, Landroid/graphics/RectF;->set(FFFF)V

    :cond_6
    return-void
.end method

.method public setBorder(III)V
    .locals 1

    const/4 v0, 0x1

    .line 162
    iput-boolean v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->p:Z

    .line 163
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    .line 164
    iput p3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->k:I

    .line 165
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->e:I

    return-void
.end method

.method public setCornerRadius(I)V
    .locals 0

    .line 151
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->e:I

    return-void
.end method

.method public setCustomBorder(IIIIII)V
    .locals 1

    const/4 v0, 0x1

    .line 178
    iput-boolean v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->p:Z

    .line 179
    iput-boolean v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->q:Z

    .line 180
    iput p5, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->j:I

    .line 181
    iput p6, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->k:I

    .line 182
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->f:I

    .line 183
    iput p3, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->h:I

    .line 184
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->g:I

    .line 185
    iput p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->i:I

    return-void
.end method
