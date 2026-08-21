.class public final Lcom/tkay/core/common/l/u;
.super Ljava/lang/Object;


# static fields
.field private static a:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(III)Landroid/graphics/Path;
    .locals 4

    .line 83
    new-instance v0, Landroid/graphics/Path;

    invoke-direct {v0}, Landroid/graphics/Path;-><init>()V

    int-to-float v1, p0

    const/4 v2, 0x0

    .line 84
    invoke-virtual {v0, v1, v2}, Landroid/graphics/Path;->moveTo(FF)V

    sub-int v3, p1, p0

    int-to-float v3, v3

    .line 86
    invoke-virtual {v0, v3, v2}, Landroid/graphics/Path;->lineTo(FF)V

    int-to-float p1, p1

    .line 87
    invoke-virtual {v0, p1, v2, p1, v1}, Landroid/graphics/Path;->quadTo(FFFF)V

    sub-int p0, p2, p0

    int-to-float p0, p0

    .line 89
    invoke-virtual {v0, p1, p0}, Landroid/graphics/Path;->lineTo(FF)V

    int-to-float p2, p2

    .line 90
    invoke-virtual {v0, p1, p2, v3, p2}, Landroid/graphics/Path;->quadTo(FFFF)V

    .line 92
    invoke-virtual {v0, v1, p2}, Landroid/graphics/Path;->lineTo(FF)V

    .line 93
    invoke-virtual {v0, v2, p2, v2, p0}, Landroid/graphics/Path;->quadTo(FFFF)V

    .line 95
    invoke-virtual {v0, v2, v1}, Landroid/graphics/Path;->lineTo(FF)V

    .line 96
    invoke-virtual {v0, v2, v2, v1, v2}, Landroid/graphics/Path;->quadTo(FFFF)V

    .line 98
    invoke-virtual {v0}, Landroid/graphics/Path;->close()V

    return-object v0
.end method

.method public static a(Landroid/graphics/Canvas;III)V
    .locals 7

    .line 105
    :try_start_0
    new-instance v0, Landroid/graphics/Paint;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Landroid/graphics/Paint;-><init>(I)V

    const/4 v1, -0x1

    .line 106
    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setColor(I)V

    .line 107
    sget-object v1, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {p1, p2, v1}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v1

    .line 108
    new-instance v2, Landroid/graphics/Canvas;

    invoke-direct {v2, v1}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    .line 1083
    new-instance v3, Landroid/graphics/Path;

    invoke-direct {v3}, Landroid/graphics/Path;-><init>()V

    int-to-float v4, p3

    const/4 v5, 0x0

    .line 1084
    invoke-virtual {v3, v4, v5}, Landroid/graphics/Path;->moveTo(FF)V

    sub-int v6, p1, p3

    int-to-float v6, v6

    .line 1086
    invoke-virtual {v3, v6, v5}, Landroid/graphics/Path;->lineTo(FF)V

    int-to-float p1, p1

    .line 1087
    invoke-virtual {v3, p1, v5, p1, v4}, Landroid/graphics/Path;->quadTo(FFFF)V

    sub-int p3, p2, p3

    int-to-float p3, p3

    .line 1089
    invoke-virtual {v3, p1, p3}, Landroid/graphics/Path;->lineTo(FF)V

    int-to-float p2, p2

    .line 1090
    invoke-virtual {v3, p1, p2, v6, p2}, Landroid/graphics/Path;->quadTo(FFFF)V

    .line 1092
    invoke-virtual {v3, v4, p2}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1093
    invoke-virtual {v3, v5, p2, v5, p3}, Landroid/graphics/Path;->quadTo(FFFF)V

    .line 1095
    invoke-virtual {v3, v5, v4}, Landroid/graphics/Path;->lineTo(FF)V

    .line 1096
    invoke-virtual {v3, v5, v5, v4, v5}, Landroid/graphics/Path;->quadTo(FFFF)V

    .line 1098
    invoke-virtual {v3}, Landroid/graphics/Path;->close()V

    .line 109
    invoke-virtual {v2, v3, v0}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    .line 110
    new-instance p1, Landroid/graphics/PorterDuffXfermode;

    sget-object p2, Landroid/graphics/PorterDuff$Mode;->DST_IN:Landroid/graphics/PorterDuff$Mode;

    invoke-direct {p1, p2}, Landroid/graphics/PorterDuffXfermode;-><init>(Landroid/graphics/PorterDuff$Mode;)V

    invoke-virtual {v0, p1}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    .line 113
    invoke-virtual {p0, v1, v5, v5, v0}, Landroid/graphics/Canvas;->drawBitmap(Landroid/graphics/Bitmap;FFLandroid/graphics/Paint;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    .line 116
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public static a(Landroid/graphics/Canvas;IILandroid/graphics/RectF;)V
    .locals 7

    .line 122
    :try_start_0
    new-instance v6, Landroid/graphics/Paint;

    const/4 v0, 0x1

    invoke-direct {v6, v0}, Landroid/graphics/Paint;-><init>(I)V

    const/4 v0, -0x1

    .line 123
    invoke-virtual {v6, v0}, Landroid/graphics/Paint;->setColor(I)V

    .line 124
    sget-object v0, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {v6, v0}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 125
    sget-object v0, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {p1, p2, v0}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 126
    new-instance v0, Landroid/graphics/Canvas;

    invoke-direct {v0, p1}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    const/4 v2, 0x0

    const/high16 v3, 0x43340000    # 180.0f

    const/4 v4, 0x1

    move-object v1, p3

    move-object v5, v6

    .line 127
    invoke-virtual/range {v0 .. v5}, Landroid/graphics/Canvas;->drawArc(Landroid/graphics/RectF;FFZLandroid/graphics/Paint;)V

    .line 128
    new-instance p2, Landroid/graphics/PorterDuffXfermode;

    sget-object p3, Landroid/graphics/PorterDuff$Mode;->DST_IN:Landroid/graphics/PorterDuff$Mode;

    invoke-direct {p2, p3}, Landroid/graphics/PorterDuffXfermode;-><init>(Landroid/graphics/PorterDuff$Mode;)V

    invoke-virtual {v6, p2}, Landroid/graphics/Paint;->setXfermode(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;

    const/4 p2, 0x0

    .line 130
    invoke-virtual {p0, p1, p2, p2, v6}, Landroid/graphics/Canvas;->drawBitmap(Landroid/graphics/Bitmap;FFLandroid/graphics/Paint;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    .line 132
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public static a(Landroid/view/View;)V
    .locals 2

    if-eqz p0, :cond_0

    .line 159
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    .line 160
    instance-of v1, v0, Landroid/view/ViewGroup;

    if-eqz v1, :cond_0

    .line 161
    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public static a(Landroid/view/View;F)V
    .locals 2

    .line 47
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    .line 48
    new-instance v1, Lcom/tkay/core/common/l/u$2;

    invoke-direct {v1, p0, p1, v0}, Lcom/tkay/core/common/l/u$2;-><init>(Landroid/view/View;FLandroid/view/View;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private static a(Landroid/view/View;I)V
    .locals 2

    .line 29
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    .line 30
    new-instance v1, Lcom/tkay/core/common/l/u$1;

    invoke-direct {v1, p0, p1, v0}, Lcom/tkay/core/common/l/u$1;-><init>(Landroid/view/View;ILandroid/view/View;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public static a(Z)V
    .locals 0

    .line 178
    sput-boolean p0, Lcom/tkay/core/common/l/u;->a:Z

    return-void
.end method

.method public static a(Landroid/view/View;Lcom/tkay/core/common/l/a/f$b;)Z
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    .line 183
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-eqz v1, :cond_0

    if-eqz p1, :cond_0

    .line 184
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    .line 185
    instance-of v2, v1, Landroid/view/View;

    if-eqz v2, :cond_0

    .line 187
    check-cast v1, Landroid/view/View;

    const/16 v2, 0x64

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {p1, v1, p0, v2, v3}, Lcom/tkay/core/common/l/a/f$b;->a(Landroid/view/View;Landroid/view/View;ILjava/lang/Integer;)Z

    move-result p0

    if-eqz p0, :cond_0

    sget-boolean p0, Lcom/tkay/core/common/l/u;->a:Z

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    return v0
.end method

.method public static a(IIF)[I
    .locals 3

    int-to-float v0, p0

    int-to-float v1, p1

    div-float v2, v0, v1

    cmpl-float v2, p2, v2

    if-lez v2, :cond_0

    div-float/2addr v0, p2

    float-to-double p1, v0

    .line 145
    invoke-static {p1, p2}, Ljava/lang/Math;->ceil(D)D

    move-result-wide p1

    double-to-int p1, p1

    goto :goto_0

    :cond_0
    mul-float/2addr v1, p2

    float-to-double v0, v1

    .line 148
    invoke-static {v0, v1}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v0

    double-to-int p0, v0

    :goto_0
    const/4 p2, 0x2

    new-array p2, p2, [I

    const/4 v0, 0x0

    aput p0, p2, v0

    const/4 p0, 0x1

    aput p1, p2, p0

    return-object p2
.end method

.method public static b(Landroid/view/View;)Z
    .locals 4

    .line 167
    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    .line 168
    invoke-virtual {p0, v0}, Landroid/view/View;->getLocalVisibleRect(Landroid/graphics/Rect;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    .line 172
    :cond_0
    iget v1, v0, Landroid/graphics/Rect;->top:I

    if-ltz v1, :cond_1

    iget v1, v0, Landroid/graphics/Rect;->bottom:I

    invoke-virtual {p0}, Landroid/view/View;->getHeight()I

    move-result v3

    if-gt v1, v3, :cond_1

    invoke-virtual {v0}, Landroid/graphics/Rect;->height()I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {p0}, Landroid/view/View;->getHeight()I

    move-result p0

    int-to-float p0, p0

    const v1, 0x3e99999a    # 0.3f

    mul-float/2addr p0, v1

    cmpl-float p0, v0, p0

    if-lez p0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    return v2
.end method
