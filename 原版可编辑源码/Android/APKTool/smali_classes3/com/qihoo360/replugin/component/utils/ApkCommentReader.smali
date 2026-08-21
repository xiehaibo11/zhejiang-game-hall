.class public Lcom/qihoo360/replugin/component/utils/ApkCommentReader;
.super Ljava/lang/Object;
.source "ApkCommentReader.java"


# static fields
.field private static final MAGIC:[B


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/16 v0, 0x8

    new-array v0, v0, [B

    .line 39
    fill-array-data v0, :array_0

    sput-object v0, Lcom/qihoo360/replugin/component/utils/ApkCommentReader;->MAGIC:[B

    return-void

    :array_0
    .array-data 1
        0x28t
        0x4dt
        0x53t
        0x2dt
        0x50t
        0x4ct
        0x47t
        0x29t
    .end array-data
.end method

.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static decompress([B)Ljava/lang/String;
    .locals 5

    const-string v0, ""

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    const/4 v1, 0x0

    .line 115
    :try_start_0
    new-instance v2, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v2}, Ljava/io/ByteArrayOutputStream;-><init>()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 116
    :try_start_1
    new-instance v1, Ljava/io/ByteArrayInputStream;

    invoke-direct {v1, p0}, Ljava/io/ByteArrayInputStream;-><init>([B)V

    .line 117
    new-instance p0, Ljava/util/zip/GZIPInputStream;

    invoke-direct {p0, v1}, Ljava/util/zip/GZIPInputStream;-><init>(Ljava/io/InputStream;)V

    const/16 v1, 0x100

    new-array v1, v1, [B

    .line 120
    :goto_0
    invoke-virtual {p0, v1}, Ljava/util/zip/GZIPInputStream;->read([B)I

    move-result v3

    if-ltz v3, :cond_1

    const/4 v4, 0x0

    .line 121
    invoke-virtual {v2, v1, v4, v3}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    :cond_1
    const-string p0, "utf-8"

    .line 123
    invoke-virtual {v2, p0}, Ljava/io/ByteArrayOutputStream;->toString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 129
    :try_start_2
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 131
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    :goto_1
    return-object p0

    :catchall_0
    move-exception p0

    move-object v1, v2

    goto :goto_4

    :catch_1
    move-exception p0

    move-object v1, v2

    goto :goto_2

    :catchall_1
    move-exception p0

    goto :goto_4

    :catch_2
    move-exception p0

    .line 125
    :goto_2
    :try_start_3
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v1, :cond_2

    .line 129
    :try_start_4
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_3

    :catch_3
    move-exception p0

    .line 131
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_2
    :goto_3
    return-object v0

    :goto_4
    if-eqz v1, :cond_3

    .line 129
    :try_start_5
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_5

    :catch_4
    move-exception v0

    .line 131
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 132
    :cond_3
    :goto_5
    throw p0
.end method

.method private static getComment(Ljava/io/RandomAccessFile;)[B
    .locals 6

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 76
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Ljava/io/RandomAccessFile;->length()J

    move-result-wide v1

    .line 77
    sget-object v3, Lcom/qihoo360/replugin/component/utils/ApkCommentReader;->MAGIC:[B

    array-length v3, v3

    int-to-long v3, v3

    sub-long/2addr v1, v3

    .line 78
    invoke-virtual {p0, v1, v2}, Ljava/io/RandomAccessFile;->seek(J)V

    .line 79
    sget-object v3, Lcom/qihoo360/replugin/component/utils/ApkCommentReader;->MAGIC:[B

    array-length v3, v3

    new-array v3, v3, [B

    .line 80
    invoke-virtual {p0, v3}, Ljava/io/RandomAccessFile;->readFully([B)V

    .line 81
    sget-object v4, Lcom/qihoo360/replugin/component/utils/ApkCommentReader;->MAGIC:[B

    invoke-static {v3, v4}, Ljava/util/Arrays;->equals([B[B)Z

    move-result v3

    if-nez v3, :cond_1

    return-object v0

    :cond_1
    const-wide/16 v3, 0x2

    sub-long/2addr v1, v3

    .line 87
    invoke-virtual {p0, v1, v2}, Ljava/io/RandomAccessFile;->seek(J)V

    const/4 v3, 0x2

    new-array v3, v3, [B

    .line 89
    invoke-virtual {p0, v3}, Ljava/io/RandomAccessFile;->readFully([B)V

    const/4 v4, 0x1

    .line 91
    aget-byte v4, v3, v4

    shl-int/lit8 v4, v4, 0x8

    const v5, 0xff00

    and-int/2addr v4, v5

    const/4 v5, 0x0

    aget-byte v3, v3, v5

    and-int/lit16 v3, v3, 0xff

    or-int/2addr v3, v4

    if-lez v3, :cond_2

    int-to-long v4, v3

    sub-long/2addr v1, v4

    .line 94
    invoke-virtual {p0, v1, v2}, Ljava/io/RandomAccessFile;->seek(J)V

    .line 95
    new-array v1, v3, [B

    .line 96
    invoke-virtual {p0, v1}, Ljava/io/RandomAccessFile;->readFully([B)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception p0

    .line 100
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_2
    return-object v0
.end method

.method public static readComment(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    .line 50
    :try_start_0
    new-instance v1, Ljava/io/RandomAccessFile;

    const-string v2, "r"

    invoke-direct {v1, p0, v2}, Ljava/io/RandomAccessFile;-><init>(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 51
    :try_start_1
    invoke-static {v1}, Lcom/qihoo360/replugin/component/utils/ApkCommentReader;->getComment(Ljava/io/RandomAccessFile;)[B

    move-result-object p0

    invoke-static {p0}, Lcom/qihoo360/replugin/component/utils/ApkCommentReader;->decompress([B)Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 57
    :try_start_2
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 59
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-object p0

    :catchall_0
    move-exception p0

    move-object v0, v1

    goto :goto_3

    :catch_1
    move-exception p0

    move-object v0, v1

    goto :goto_1

    :catchall_1
    move-exception p0

    goto :goto_3

    :catch_2
    move-exception p0

    .line 53
    :goto_1
    :try_start_3
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v0, :cond_0

    .line 57
    :try_start_4
    invoke-virtual {v0}, Ljava/io/RandomAccessFile;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_2

    :catch_3
    move-exception p0

    .line 59
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_0
    :goto_2
    const-string p0, ""

    return-object p0

    :goto_3
    if-eqz v0, :cond_1

    .line 57
    :try_start_5
    invoke-virtual {v0}, Ljava/io/RandomAccessFile;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_4

    :catch_4
    move-exception v0

    .line 59
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 60
    :cond_1
    :goto_4
    throw p0
.end method
