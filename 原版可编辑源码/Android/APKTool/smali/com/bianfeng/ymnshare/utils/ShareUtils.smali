.class public Lcom/bianfeng/ymnshare/utils/ShareUtils;
.super Ljava/lang/Object;
.source "ShareUtils.java"


# static fields
.field private static final KB:I = 0x400

.field private static utils:Lcom/bianfeng/ymnshare/utils/ShareUtils;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static bmpToByteArray(Landroid/graphics/Bitmap;I)[B
    .locals 3

    .line 97
    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    mul-int/lit16 p1, p1, 0x400

    .line 100
    :try_start_0
    sget-object v1, Landroid/graphics/Bitmap$CompressFormat;->PNG:Landroid/graphics/Bitmap$CompressFormat;

    const/16 v2, 0x64

    invoke-virtual {p0, v1, v2, v0}, Landroid/graphics/Bitmap;->compress(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z

    .line 102
    :goto_0
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v1

    array-length v1, v1

    if-le v1, p1, :cond_0

    const/16 v1, 0xa

    if-eq v2, v1, :cond_0

    .line 103
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->reset()V

    .line 104
    sget-object v1, Landroid/graphics/Bitmap$CompressFormat;->JPEG:Landroid/graphics/Bitmap$CompressFormat;

    invoke-virtual {p0, v1, v2, v0}, Landroid/graphics/Bitmap;->compress(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v2, v2, -0xa

    goto :goto_0

    :catch_0
    move-exception p0

    .line 108
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 110
    :cond_0
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p0

    return-object p0
.end method

.method public static getInstance()Lcom/bianfeng/ymnshare/utils/ShareUtils;
    .locals 1

    .line 25
    sget-object v0, Lcom/bianfeng/ymnshare/utils/ShareUtils;->utils:Lcom/bianfeng/ymnshare/utils/ShareUtils;

    if-nez v0, :cond_0

    .line 26
    new-instance v0, Lcom/bianfeng/ymnshare/utils/ShareUtils;

    invoke-direct {v0}, Lcom/bianfeng/ymnshare/utils/ShareUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnshare/utils/ShareUtils;->utils:Lcom/bianfeng/ymnshare/utils/ShareUtils;

    .line 28
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnshare/utils/ShareUtils;->utils:Lcom/bianfeng/ymnshare/utils/ShareUtils;

    return-object v0
.end method

.method public static isAPPInstalled(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x1

    .line 41
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/4 v1, 0x0

    .line 42
    invoke-virtual {p0, v1}, Landroid/content/pm/PackageManager;->getInstalledPackages(I)Ljava/util/List;

    move-result-object p0

    if-eqz p0, :cond_1

    const/4 v2, 0x0

    .line 44
    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_1

    .line 45
    invoke-interface {p0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/content/pm/PackageInfo;

    iget-object v3, v3, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    invoke-virtual {v3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v3, :cond_0

    return v0

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return v1

    :catch_0
    return v0
.end method


# virtual methods
.method public bmpToByteArray(Landroid/graphics/Bitmap;Z)[B
    .locals 7

    const/4 v0, 0x0

    if-nez p1, :cond_0

    new-array p1, v0, [B

    return-object p1

    .line 64
    :cond_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v1

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v2

    if-le v1, v2, :cond_1

    .line 65
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v1

    .line 66
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v2

    goto :goto_0

    .line 68
    :cond_1
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v1

    .line 69
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v2

    .line 72
    :goto_0
    sget-object v3, Landroid/graphics/Bitmap$Config;->RGB_565:Landroid/graphics/Bitmap$Config;

    invoke-static {v1, v2, v3}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v3

    .line 73
    new-instance v4, Landroid/graphics/Canvas;

    invoke-direct {v4, v3}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    .line 76
    :goto_1
    new-instance v5, Landroid/graphics/Rect;

    invoke-direct {v5, v0, v0, v1, v2}, Landroid/graphics/Rect;-><init>(IIII)V

    new-instance v6, Landroid/graphics/Rect;

    invoke-direct {v6, v0, v0, v1, v2}, Landroid/graphics/Rect;-><init>(IIII)V

    const/4 v1, 0x0

    invoke-virtual {v4, p1, v5, v6, v1}, Landroid/graphics/Canvas;->drawBitmap(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Paint;)V

    if-eqz p2, :cond_2

    .line 78
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->recycle()V

    .line 79
    :cond_2
    new-instance v1, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v1}, Ljava/io/ByteArrayOutputStream;-><init>()V

    .line 80
    sget-object v2, Landroid/graphics/Bitmap$CompressFormat;->JPEG:Landroid/graphics/Bitmap$CompressFormat;

    const/16 v5, 0x64

    invoke-virtual {v3, v2, v5, v1}, Landroid/graphics/Bitmap;->compress(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z

    .line 82
    invoke-virtual {v3}, Landroid/graphics/Bitmap;->recycle()V

    .line 83
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v2

    .line 85
    :try_start_0
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v2

    .line 90
    :catch_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v1

    .line 91
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v2

    goto :goto_1
.end method

.method public buildTransaction(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    if-nez p1, :cond_0

    .line 115
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    :goto_0
    return-object p1
.end method

.method public compressBitmapToFile(Ljava/lang/String;II)V
    .locals 5

    .line 146
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 149
    :cond_0
    invoke-static {p1}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    .line 153
    :cond_1
    sget-object v1, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {p2, p3, v1}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v1

    .line 154
    new-instance v2, Landroid/graphics/Canvas;

    invoke-direct {v2, v1}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    .line 155
    new-instance v3, Landroid/graphics/Rect;

    const/4 v4, 0x0

    invoke-direct {v3, v4, v4, p2, p3}, Landroid/graphics/Rect;-><init>(IIII)V

    const/4 p2, 0x0

    .line 156
    invoke-virtual {v2, v0, p2, v3, p2}, Landroid/graphics/Canvas;->drawBitmap(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Paint;)V

    .line 157
    new-instance p2, Ljava/io/ByteArrayOutputStream;

    invoke-direct {p2}, Ljava/io/ByteArrayOutputStream;-><init>()V

    .line 158
    sget-object p3, Landroid/graphics/Bitmap$CompressFormat;->JPEG:Landroid/graphics/Bitmap$CompressFormat;

    const/16 v0, 0x46

    invoke-virtual {v1, p3, v0, p2}, Landroid/graphics/Bitmap;->compress(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z

    .line 159
    new-instance p3, Ljava/io/FileOutputStream;

    invoke-direct {p3, p1}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V

    .line 160
    invoke-virtual {p2}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/io/FileOutputStream;->write([B)V

    .line 161
    invoke-virtual {p3}, Ljava/io/FileOutputStream;->flush()V

    .line 162
    invoke-virtual {p3}, Ljava/io/FileOutputStream;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 164
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public compressBitmapToFile(Ljava/lang/String;Ljava/lang/Double;)V
    .locals 9

    .line 120
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 123
    :cond_0
    invoke-static {p1}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    .line 128
    :cond_1
    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v1

    int-to-double v1, v1

    invoke-virtual {p2}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v3

    mul-double v1, v1, v3

    double-to-int v1, v1

    .line 129
    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v2

    int-to-double v2, v2

    invoke-virtual {p2}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v4

    mul-double v2, v2, v4

    double-to-int v2, v2

    sget-object v3, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    .line 127
    invoke-static {v1, v2, v3}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v1

    .line 130
    new-instance v2, Landroid/graphics/Canvas;

    invoke-direct {v2, v1}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    .line 131
    new-instance v3, Landroid/graphics/Rect;

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v4

    int-to-double v4, v4

    invoke-virtual {p2}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v6

    mul-double v4, v4, v6

    double-to-int v4, v4

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v5

    int-to-double v5, v5

    invoke-virtual {p2}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v7

    mul-double v5, v5, v7

    double-to-int v5, v5

    const/4 v6, 0x0

    invoke-direct {v3, v6, v6, v4, v5}, Landroid/graphics/Rect;-><init>(IIII)V

    const/4 v4, 0x0

    .line 132
    invoke-virtual {v2, v0, v4, v3, v4}, Landroid/graphics/Canvas;->drawBitmap(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Paint;)V

    .line 133
    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    .line 134
    sget-object v2, Landroid/graphics/Bitmap$CompressFormat;->JPEG:Landroid/graphics/Bitmap$CompressFormat;

    invoke-virtual {p2}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v3

    const-wide/high16 v5, 0x4059000000000000L    # 100.0

    mul-double v3, v3, v5

    sub-double/2addr v5, v3

    double-to-int p2, v5

    invoke-virtual {v1, v2, p2, v0}, Landroid/graphics/Bitmap;->compress(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z

    .line 135
    new-instance p2, Ljava/io/FileOutputStream;

    invoke-direct {p2, p1}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V

    .line 136
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/io/FileOutputStream;->write([B)V

    .line 137
    invoke-virtual {p2}, Ljava/io/FileOutputStream;->flush()V

    .line 138
    invoke-virtual {p2}, Ljava/io/FileOutputStream;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 140
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
