.class public Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;
.super Landroid/widget/ImageView;
.source "MBridgeImageView.java"


# instance fields
.field private a:Landroid/graphics/Xfermode;

.field private b:I

.field private c:I

.field private d:I

.field private e:I

.field private f:I

.field private g:I

.field private h:I

.field private i:I

.field private j:I

.field private k:[F

.field private l:[F

.field private m:Landroid/graphics/RectF;

.field private n:Landroid/graphics/RectF;

.field private o:Z

.field private p:Z

.field private q:Landroid/graphics/Path;

.field private r:Landroid/graphics/Paint;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 76
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 80
    invoke-direct {p0, p1, p2, v0}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 84
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 71
    new-instance p1, Landroid/graphics/Path;

    invoke-direct {p1}, Landroid/graphics/Path;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->q:Landroid/graphics/Path;

    .line 72
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    const/16 p1, 0x8

    new-array p2, p1, [F

    .line 85
    iput-object p2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->k:[F

    new-array p1, p1, [F

    .line 86
    iput-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->l:[F

    .line 87
    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->n:Landroid/graphics/RectF;

    .line 88
    new-instance p1, Landroid/graphics/RectF;

    invoke-direct {p1}, Landroid/graphics/RectF;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->m:Landroid/graphics/RectF;

    .line 89
    new-instance p1, Landroid/graphics/PorterDuffXfermode;

    sget-object p2, Landroid/graphics/PorterDuff$Mode;->DST_IN:Landroid/graphics/PorterDuff$Mode;

    invoke-direct {p1, p2}, Landroid/graphics/PorterDuffXfermode;-><init>(Landroid/graphics/PorterDuff$Mode;)V

    iput-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->a:Landroid/graphics/Xfermode;

    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 6

    if-nez p1, :cond_0

    return-void

    .line 113
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->m:Landroid/graphics/RectF;

    const/16 v1, 0x1f

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v2, v1}, Landroid/graphics/Canvas;->saveLayer(Landroid/graphics/RectF;Landroid/graphics/Paint;I)I

    .line 114
    iget v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->b:I

    iget v1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->i:I

    mul-int/lit8 v1, v1, 0x2

    sub-int/2addr v0, v1

    int-to-float v0, v0

    const/high16 v1, 0x3f800000    # 1.0f

    mul-float/2addr v0, v1

    iget v3, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->b:I

    int-to-float v3, v3

    div-float/2addr v0, v3

    .line 115
    iget v3, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->c:I

    iget v4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->i:I

    mul-int/lit8 v4, v4, 0x2

    sub-int/2addr v3, v4

    int-to-float v3, v3

    mul-float/2addr v3, v1

    iget v1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->c:I

    int-to-float v1, v1

    div-float/2addr v3, v1

    .line 117
    iget v1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->b:I

    int-to-float v1, v1

    const/high16 v4, 0x40000000    # 2.0f

    div-float/2addr v1, v4

    iget v5, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->c:I

    int-to-float v5, v5

    div-float/2addr v5, v4

    invoke-virtual {p1, v0, v3, v1, v5}, Landroid/graphics/Canvas;->scale(FFFF)V

    .line 118
    invoke-super {p0, p1}, Landroid/widget/ImageView;->onDraw(Landroid/graphics/Canvas;)V

    .line 119
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    if-eqz v0, :cond_1

    .line 120
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    invoke-virtual {v0}, Landroid/graphics/Paint;->reset()V

    .line 121
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 122
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    sget-object v1, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 123
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    iget-object v1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->a:Landroid/graphics/Xfermode;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    .line 125
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->q:Landroid/graphics/Path;

    if-eqz v0, :cond_2

    .line 126
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->q:Landroid/graphics/Path;

    invoke-virtual {v0}, Landroid/graphics/Path;->reset()V

    .line 127
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->q:Landroid/graphics/Path;

    iget-object v1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->m:Landroid/graphics/RectF;

    iget-object v3, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->l:[F

    sget-object v4, Landroid/graphics/Path$Direction;->CCW:Landroid/graphics/Path$Direction;

    invoke-virtual {v0, v1, v3, v4}, Landroid/graphics/Path;->addRoundRect(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V

    .line 129
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->q:Landroid/graphics/Path;

    iget-object v1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    .line 131
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    if-eqz v0, :cond_3

    .line 132
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    .line 135
    :cond_3
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 136
    iget-boolean v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->o:Z

    if-eqz v0, :cond_7

    .line 3193
    iget v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->i:I

    iget v1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->j:I

    iget-object v2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->n:Landroid/graphics/RectF;

    iget-object v3, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->k:[F
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 3226
    :try_start_1
    iget-object v4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->q:Landroid/graphics/Path;

    if-eqz v4, :cond_4

    .line 3227
    iget-object v4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->q:Landroid/graphics/Path;

    invoke-virtual {v4}, Landroid/graphics/Path;->reset()V

    .line 3229
    :cond_4
    iget-object v4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    if-eqz v4, :cond_5

    .line 3230
    iget-object v4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    int-to-float v0, v0

    invoke-virtual {v4, v0}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 3231
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    .line 3232
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    sget-object v1, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 3209
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->q:Landroid/graphics/Path;

    if-eqz v0, :cond_6

    .line 3210
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->q:Landroid/graphics/Path;

    sget-object v1, Landroid/graphics/Path$Direction;->CCW:Landroid/graphics/Path$Direction;

    invoke-virtual {v0, v2, v3, v1}, Landroid/graphics/Path;->addRoundRect(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V

    :cond_6
    if-eqz p1, :cond_7

    .line 3213
    iget-object v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->q:Landroid/graphics/Path;

    iget-object v1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->r:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3216
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 140
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBridgeImageView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    :goto_0
    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 3

    .line 94
    invoke-super {p0, p1, p2, p3, p4}, Landroid/widget/ImageView;->onSizeChanged(IIII)V

    .line 95
    iput p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->b:I

    .line 96
    iput p2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->c:I

    .line 97
    iget-boolean p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->p:Z

    const/4 p2, 0x0

    const/high16 p3, 0x40000000    # 2.0f

    if-eqz p1, :cond_3

    .line 1257
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->k:[F

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->l:[F

    if-eqz p1, :cond_4

    :goto_0
    const/4 p1, 0x2

    if-ge p2, p1, :cond_0

    .line 1260
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->k:[F

    iget p4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->e:I

    int-to-float p4, p4

    aput p4, p1, p2

    .line 1261
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->l:[F

    iget p4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->e:I

    int-to-float p4, p4

    iget v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->i:I

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

    .line 1264
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->k:[F

    iget p4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->f:I

    int-to-float p4, p4

    aput p4, p2, p1

    .line 1265
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->l:[F

    iget p4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->f:I

    int-to-float p4, p4

    iget v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->i:I

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

    .line 1268
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->k:[F

    iget p4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->g:I

    int-to-float p4, p4

    aput p4, p1, p2

    .line 1269
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->l:[F

    iget p4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->g:I

    int-to-float p4, p4

    iget v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->i:I

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

    .line 1272
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->k:[F

    iget p4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->h:I

    int-to-float p4, p4

    aput p4, p2, p1

    .line 1273
    iget-object p2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->l:[F

    iget p4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->h:I

    int-to-float p4, p4

    iget v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->i:I

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

    .line 1277
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_5

    .line 2240
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->k:[F

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->l:[F

    if-eqz p1, :cond_4

    .line 2242
    :goto_4
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->k:[F

    array-length p1, p1

    if-ge p2, p1, :cond_4

    .line 2243
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->k:[F

    iget p4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->d:I

    int-to-float p4, p4

    aput p4, p1, p2

    .line 2244
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->l:[F

    iget p4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->d:I

    int-to-float p4, p4

    iget v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->i:I

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

    .line 2247
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2286
    :cond_4
    :goto_5
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->n:Landroid/graphics/RectF;

    if-eqz p1, :cond_5

    .line 2287
    iget p2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->i:I

    int-to-float p4, p2

    div-float/2addr p4, p3

    int-to-float v0, p2

    div-float/2addr v0, p3

    iget v1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->b:I

    int-to-float v1, v1

    int-to-float v2, p2

    div-float/2addr v2, p3

    sub-float/2addr v1, v2

    iget v2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->c:I

    int-to-float v2, v2

    int-to-float p2, p2

    div-float/2addr p2, p3

    sub-float/2addr v2, p2

    invoke-virtual {p1, p4, v0, v1, v2}, Landroid/graphics/RectF;->set(FFFF)V

    .line 2295
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->m:Landroid/graphics/RectF;

    if-eqz p1, :cond_6

    .line 2296
    iget p2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->b:I

    int-to-float p2, p2

    iget p3, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->c:I

    int-to-float p3, p3

    const/4 p4, 0x0

    invoke-virtual {p1, p4, p4, p2, p3}, Landroid/graphics/RectF;->set(FFFF)V

    :cond_6
    return-void
.end method

.method public setBorder(III)V
    .locals 1

    const/4 v0, 0x1

    .line 160
    iput-boolean v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->o:Z

    .line 161
    iput p2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->i:I

    .line 162
    iput p3, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->j:I

    .line 163
    iput p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->d:I

    return-void
.end method

.method public setCornerRadius(I)V
    .locals 0

    .line 149
    iput p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->d:I

    return-void
.end method

.method public setCustomBorder(IIIIII)V
    .locals 1

    const/4 v0, 0x1

    .line 176
    iput-boolean v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->o:Z

    .line 177
    iput-boolean v0, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->p:Z

    .line 178
    iput p5, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->i:I

    .line 179
    iput p6, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->j:I

    .line 180
    iput p1, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->e:I

    .line 181
    iput p3, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->g:I

    .line 182
    iput p2, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->f:I

    .line 183
    iput p4, p0, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->h:I

    return-void
.end method
