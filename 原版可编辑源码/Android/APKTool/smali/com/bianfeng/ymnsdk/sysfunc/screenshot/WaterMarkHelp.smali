.class public Lcom/bianfeng/ymnsdk/sysfunc/screenshot/WaterMarkHelp;
.super Ljava/lang/Object;
.source "WaterMarkHelp.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addWatermarkToBitmap(Ljava/lang/String;Ljava/lang/String;)Landroid/graphics/Bitmap;
    .locals 6

    .line 56
    invoke-static {p0}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object p0

    .line 57
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p0

    .line 61
    :cond_0
    invoke-virtual {p0}, Landroid/graphics/Bitmap;->getConfig()Landroid/graphics/Bitmap$Config;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {p0, v0, v1}, Landroid/graphics/Bitmap;->copy(Landroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;

    move-result-object v0

    .line 63
    new-instance v2, Landroid/graphics/Canvas;

    invoke-direct {v2, v0}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    .line 64
    new-instance v3, Landroid/graphics/Paint;

    invoke-direct {v3}, Landroid/graphics/Paint;-><init>()V

    const/4 v4, -0x1

    .line 65
    invoke-virtual {v3, v4}, Landroid/graphics/Paint;->setColor(I)V

    const/high16 v4, 0x41c80000    # 25.0f

    .line 66
    invoke-virtual {v3, v4}, Landroid/graphics/Paint;->setTextSize(F)V

    .line 67
    invoke-virtual {v3, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 70
    sget-object v1, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v3, v1}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    const/high16 v1, 0x3f800000    # 1.0f

    .line 71
    invoke-virtual {v3, v1}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    const/high16 v1, -0x1000000

    .line 72
    invoke-virtual {v3, v1}, Landroid/graphics/Paint;->setColor(I)V

    .line 74
    new-instance v1, Landroid/graphics/Rect;

    invoke-direct {v1}, Landroid/graphics/Rect;-><init>()V

    const/4 v4, 0x0

    .line 75
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v3, p1, v4, v5, v1}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    .line 78
    invoke-virtual {p0}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v4

    mul-int/lit8 v4, v4, 0x8

    div-int/lit8 v4, v4, 0x64

    .line 79
    invoke-virtual {p0}, Landroid/graphics/Bitmap;->getHeight()I

    move-result p0

    const/16 v5, 0x55

    mul-int/lit8 p0, p0, 0x55

    div-int/lit8 p0, p0, 0x64

    .line 82
    invoke-virtual {v3, v5}, Landroid/graphics/Paint;->setAlpha(I)V

    int-to-float v4, v4

    int-to-float v5, p0

    .line 85
    invoke-virtual {v2, p1, v4, v5, v3}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 88
    invoke-virtual {v1}, Landroid/graphics/Rect;->height()I

    move-result p1

    add-int/2addr p0, p1

    add-int/lit8 p0, p0, 0xa

    .line 89
    new-instance p1, Ljava/text/SimpleDateFormat;

    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v1

    const-string v5, "yyyy-MM-dd HH:mm"

    invoke-direct {p1, v5, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;Ljava/util/Locale;)V

    .line 90
    new-instance v1, Ljava/util/Date;

    invoke-direct {v1}, Ljava/util/Date;-><init>()V

    invoke-virtual {p1, v1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object p1

    int-to-float p0, p0

    invoke-virtual {v2, p1, v4, p0, v3}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    return-object v0
.end method

.method public static saveImageWithWatermark(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 34
    :try_start_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/WaterMarkHelp;->addWatermarkToBitmap(Ljava/lang/String;Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 36
    new-instance v0, Ljava/io/FileOutputStream;

    invoke-direct {v0, p0}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V

    .line 37
    sget-object v1, Landroid/graphics/Bitmap$CompressFormat;->JPEG:Landroid/graphics/Bitmap$CompressFormat;

    const/16 v2, 0x64

    invoke-virtual {p1, v1, v2, v0}, Landroid/graphics/Bitmap;->compress(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z

    .line 38
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->flush()V

    .line 39
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p1

    .line 42
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-object p0
.end method
