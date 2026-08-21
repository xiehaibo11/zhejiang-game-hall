.class public final Lcom/tkay/basead/a/b/g;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/a/b/g$a;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/io/FileDescriptor;)Lcom/tkay/basead/a/b/g$a;
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 64
    :cond_0
    :try_start_0
    new-instance v1, Lcom/tkay/basead/a/b/g$a;

    invoke-direct {v1}, Lcom/tkay/basead/a/b/g$a;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 67
    :try_start_1
    new-instance v0, Landroid/media/MediaMetadataRetriever;

    invoke-direct {v0}, Landroid/media/MediaMetadataRetriever;-><init>()V

    .line 69
    invoke-virtual {v0, p0}, Landroid/media/MediaMetadataRetriever;->setDataSource(Ljava/io/FileDescriptor;)V

    const/16 p0, 0x12

    .line 71
    invoke-virtual {v0, p0}, Landroid/media/MediaMetadataRetriever;->extractMetadata(I)Ljava/lang/String;

    move-result-object p0

    const/16 v2, 0x13

    .line 73
    invoke-virtual {v0, v2}, Landroid/media/MediaMetadataRetriever;->extractMetadata(I)Ljava/lang/String;

    move-result-object v2

    .line 75
    invoke-virtual {v0}, Landroid/media/MediaMetadataRetriever;->release()V

    .line 77
    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    iput p0, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 78
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    iput p0, v1, Lcom/tkay/basead/a/b/g$a;->b:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    move-object v0, v1

    goto :goto_0

    :catch_1
    move-exception p0

    .line 80
    :goto_0
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    move-object v1, v0

    :goto_1
    return-object v1
.end method

.method private static a(Ljava/io/FileDescriptor;II)Lcom/tkay/basead/a/b/g$a;
    .locals 3

    .line 115
    invoke-static {p0}, Lcom/tkay/basead/a/b/g;->a(Ljava/io/FileDescriptor;)Lcom/tkay/basead/a/b/g$a;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 120
    :cond_0
    iget v0, p0, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 121
    iget v1, p0, Lcom/tkay/basead/a/b/g$a;->b:I

    int-to-float v0, v0

    const/high16 v2, 0x3f800000    # 1.0f

    mul-float/2addr v0, v2

    int-to-float v1, v1

    div-float/2addr v0, v1

    int-to-float v1, p1

    mul-float/2addr v1, v2

    int-to-float v2, p2

    div-float/2addr v1, v2

    cmpg-float v1, v0, v1

    if-gez v1, :cond_1

    .line 128
    iput p2, p0, Lcom/tkay/basead/a/b/g$a;->b:I

    .line 129
    iget p1, p0, Lcom/tkay/basead/a/b/g$a;->b:I

    int-to-float p1, p1

    mul-float/2addr p1, v0

    float-to-double p1, p1

    invoke-static {p1, p2}, Ljava/lang/Math;->ceil(D)D

    move-result-wide p1

    double-to-int p1, p1

    iput p1, p0, Lcom/tkay/basead/a/b/g$a;->a:I

    goto :goto_0

    .line 132
    :cond_1
    iput p1, p0, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 133
    iget p1, p0, Lcom/tkay/basead/a/b/g$a;->a:I

    int-to-float p1, p1

    div-float/2addr p1, v0

    float-to-double p1, p1

    invoke-static {p1, p2}, Ljava/lang/Math;->ceil(D)D

    move-result-wide p1

    double-to-int p1, p1

    iput p1, p0, Lcom/tkay/basead/a/b/g$a;->b:I

    :goto_0
    return-object p0
.end method

.method public static a(Ljava/lang/String;)Lcom/tkay/basead/a/b/g$a;
    .locals 3

    const/4 v0, 0x0

    .line 28
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    .line 31
    :cond_0
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 32
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_1

    return-object v0

    .line 35
    :cond_1
    new-instance v1, Lcom/tkay/basead/a/b/g$a;

    invoke-direct {v1}, Lcom/tkay/basead/a/b/g$a;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 38
    :try_start_1
    new-instance v0, Landroid/media/MediaMetadataRetriever;

    invoke-direct {v0}, Landroid/media/MediaMetadataRetriever;-><init>()V

    .line 40
    invoke-virtual {v0, p0}, Landroid/media/MediaMetadataRetriever;->setDataSource(Ljava/lang/String;)V

    const/16 p0, 0x12

    .line 42
    invoke-virtual {v0, p0}, Landroid/media/MediaMetadataRetriever;->extractMetadata(I)Ljava/lang/String;

    move-result-object p0

    const/16 v2, 0x13

    .line 44
    invoke-virtual {v0, v2}, Landroid/media/MediaMetadataRetriever;->extractMetadata(I)Ljava/lang/String;

    move-result-object v2

    .line 46
    invoke-virtual {v0}, Landroid/media/MediaMetadataRetriever;->release()V

    .line 48
    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    iput p0, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 49
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    iput p0, v1, Lcom/tkay/basead/a/b/g$a;->b:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    move-object v0, v1

    goto :goto_0

    :catch_1
    move-exception p0

    .line 51
    :goto_0
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    move-object v1, v0

    :goto_1
    return-object v1
.end method

.method private static a(Ljava/lang/String;II)Lcom/tkay/basead/a/b/g$a;
    .locals 3

    .line 89
    invoke-static {p0}, Lcom/tkay/basead/a/b/g;->a(Ljava/lang/String;)Lcom/tkay/basead/a/b/g$a;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 94
    :cond_0
    iget v0, p0, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 95
    iget v1, p0, Lcom/tkay/basead/a/b/g$a;->b:I

    int-to-float v0, v0

    const/high16 v2, 0x3f800000    # 1.0f

    mul-float/2addr v0, v2

    int-to-float v1, v1

    div-float/2addr v0, v1

    int-to-float v1, p1

    mul-float/2addr v1, v2

    int-to-float v2, p2

    div-float/2addr v1, v2

    cmpg-float v1, v0, v1

    if-gez v1, :cond_1

    .line 102
    iput p2, p0, Lcom/tkay/basead/a/b/g$a;->b:I

    .line 103
    iget p1, p0, Lcom/tkay/basead/a/b/g$a;->b:I

    int-to-float p1, p1

    mul-float/2addr p1, v0

    float-to-int p1, p1

    iput p1, p0, Lcom/tkay/basead/a/b/g$a;->a:I

    goto :goto_0

    .line 106
    :cond_1
    iput p1, p0, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 107
    iget p1, p0, Lcom/tkay/basead/a/b/g$a;->a:I

    int-to-float p1, p1

    div-float/2addr p1, v0

    float-to-int p1, p1

    iput p1, p0, Lcom/tkay/basead/a/b/g$a;->b:I

    :goto_0
    return-object p0
.end method
