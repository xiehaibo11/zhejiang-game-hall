.class public final Lcom/bianfeng/afext/read/PayloadReader;
.super Ljava/lang/Object;
.source "PayloadReader.java"


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static get(Ljava/io/File;I)[B
    .locals 1

    .line 34
    invoke-static {p0}, Lcom/bianfeng/afext/read/PayloadReader;->getAll(Ljava/io/File;)Ljava/util/Map;

    move-result-object p0

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 38
    :cond_0
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {p0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/nio/ByteBuffer;

    if-nez p0, :cond_1

    return-object v0

    .line 42
    :cond_1
    invoke-static {p0}, Lcom/bianfeng/afext/read/PayloadReader;->getBytes(Ljava/nio/ByteBuffer;)[B

    move-result-object p0

    return-object p0
.end method

.method private static getAll(Ljava/io/File;)Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/File;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/nio/ByteBuffer;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    .line 57
    :try_start_0
    new-instance v1, Ljava/io/RandomAccessFile;

    const-string v2, "r"

    invoke-direct {v1, p0, v2}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 58
    :try_start_1
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object p0
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 59
    :try_start_2
    invoke-static {p0}, Lcom/bianfeng/afext/read/ApkUtil;->findApkSigningBlock(Ljava/nio/channels/FileChannel;)Lcom/bianfeng/afext/read/Pair;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/afext/read/Pair;->getFirst()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/nio/ByteBuffer;

    .line 60
    invoke-static {v2}, Lcom/bianfeng/afext/read/ApkUtil;->findIdValues(Ljava/nio/ByteBuffer;)Ljava/util/Map;

    move-result-object v0
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_5
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz p0, :cond_0

    .line 65
    :try_start_3
    invoke-virtual {p0}, Ljava/nio/channels/FileChannel;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0
    .catch Lcom/bianfeng/afext/read/SignatureNotFoundException; {:try_start_3 .. :try_end_3} :catch_7

    .line 71
    :catch_0
    :cond_0
    :goto_0
    :try_start_4
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_7
    .catch Lcom/bianfeng/afext/read/SignatureNotFoundException; {:try_start_4 .. :try_end_4} :catch_7

    goto :goto_3

    :catchall_0
    move-exception v2

    goto :goto_1

    :catchall_1
    move-exception v2

    move-object p0, v0

    goto :goto_1

    :catch_1
    move-object p0, v0

    goto :goto_2

    :catchall_2
    move-exception v2

    move-object p0, v0

    move-object v1, p0

    :goto_1
    if-eqz p0, :cond_1

    .line 65
    :try_start_5
    invoke-virtual {p0}, Ljava/nio/channels/FileChannel;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_2
    .catch Lcom/bianfeng/afext/read/SignatureNotFoundException; {:try_start_5 .. :try_end_5} :catch_7

    :catch_2
    :cond_1
    if-eqz v1, :cond_2

    .line 71
    :try_start_6
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_3
    .catch Lcom/bianfeng/afext/read/SignatureNotFoundException; {:try_start_6 .. :try_end_6} :catch_7

    .line 75
    :catch_3
    :cond_2
    :try_start_7
    throw v2
    :try_end_7
    .catch Lcom/bianfeng/afext/read/SignatureNotFoundException; {:try_start_7 .. :try_end_7} :catch_7

    :catch_4
    move-object p0, v0

    move-object v1, p0

    :catch_5
    :goto_2
    if-eqz p0, :cond_3

    .line 65
    :try_start_8
    invoke-virtual {p0}, Ljava/nio/channels/FileChannel;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_6
    .catch Lcom/bianfeng/afext/read/SignatureNotFoundException; {:try_start_8 .. :try_end_8} :catch_7

    :catch_6
    :cond_3
    if-eqz v1, :cond_4

    goto :goto_0

    :catch_7
    :cond_4
    :goto_3
    return-object v0
.end method

.method private static getBytes(Ljava/nio/ByteBuffer;)[B
    .locals 3

    .line 46
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    .line 47
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->arrayOffset()I

    move-result v1

    .line 48
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->position()I

    move-result v2

    add-int/2addr v2, v1

    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->limit()I

    move-result p0

    add-int/2addr v1, p0

    invoke-static {v0, v2, v1}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object p0

    return-object p0
.end method

.method public static getString(Ljava/io/File;I)Ljava/lang/String;
    .locals 2

    .line 21
    invoke-static {p0, p1}, Lcom/bianfeng/afext/read/PayloadReader;->get(Ljava/io/File;I)[B

    move-result-object p0

    const/4 p1, 0x0

    if-nez p0, :cond_0

    return-object p1

    .line 26
    :cond_0
    :try_start_0
    new-instance v0, Ljava/lang/String;

    const-string v1, "UTF-8"

    invoke-direct {v0, p0, v1}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception p0

    .line 28
    invoke-virtual {p0}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V

    return-object p1
.end method
