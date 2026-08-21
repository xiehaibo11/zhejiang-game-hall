.class public final Lcom/bianfeng/ymnsdk/gongxiang/e;
.super Ljava/lang/Object;
.source "PayloadReader.java"


# direct methods
.method private static a(Ljava/io/File;)Ljava/util/Map;
    .locals 5
    .param p0, "apkFile"    # Ljava/io/File;
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

    .line 52
    const/4 v0, 0x0

    .line 54
    .local v0, "idValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    const/4 v1, 0x0

    .line 55
    .local v1, "randomAccessFile":Ljava/io/RandomAccessFile;
    const/4 v2, 0x0

    .line 57
    .local v2, "fileChannel":Ljava/nio/channels/FileChannel;
    :try_start_0
    new-instance v3, Ljava/io/RandomAccessFile;

    const-string v4, "r"

    invoke-direct {v3, p0, v4}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V

    move-object v1, v3

    .line 58
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object v3

    move-object v2, v3

    .line 59
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/gongxiang/a;->a(Ljava/nio/channels/FileChannel;)Lcom/bianfeng/ymnsdk/gongxiang/d;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/gongxiang/d;->a()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/nio/ByteBuffer;

    .line 60
    .local v3, "apkSigningBlock2":Ljava/nio/ByteBuffer;
    invoke-static {v3}, Lcom/bianfeng/ymnsdk/gongxiang/a;->b(Ljava/nio/ByteBuffer;)Ljava/util/Map;

    move-result-object v4
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, v4

    .line 64
    .end local v3    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    if-eqz v2, :cond_0

    .line 65
    :try_start_1
    invoke-virtual {v2}, Ljava/nio/channels/FileChannel;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Lcom/bianfeng/ymnsdk/gongxiang/f; {:try_start_1 .. :try_end_1} :catch_5

    goto :goto_0

    .line 67
    :catch_0
    move-exception v3

    goto :goto_1

    .line 68
    :cond_0
    :goto_0
    nop

    .line 70
    :goto_1
    nop

    .line 71
    :try_start_2
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_1
    .catch Lcom/bianfeng/ymnsdk/gongxiang/f; {:try_start_2 .. :try_end_2} :catch_5

    .line 74
    :cond_1
    :goto_2
    goto :goto_9

    .line 73
    :catch_1
    move-exception v3

    .line 75
    goto :goto_9

    .line 63
    :catchall_0
    move-exception v3

    .line 64
    if-eqz v2, :cond_2

    .line 65
    :try_start_3
    invoke-virtual {v2}, Ljava/nio/channels/FileChannel;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2
    .catch Lcom/bianfeng/ymnsdk/gongxiang/f; {:try_start_3 .. :try_end_3} :catch_5

    goto :goto_3

    .line 67
    :catch_2
    move-exception v4

    goto :goto_4

    .line 68
    :cond_2
    :goto_3
    nop

    .line 70
    :goto_4
    if-eqz v1, :cond_3

    .line 71
    :try_start_4
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_3
    .catch Lcom/bianfeng/ymnsdk/gongxiang/f; {:try_start_4 .. :try_end_4} :catch_5

    goto :goto_5

    .line 73
    :catch_3
    move-exception v4

    goto :goto_6

    .line 74
    :cond_3
    :goto_5
    nop

    .line 75
    :goto_6
    nop

    .end local v0    # "idValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .end local p0    # "apkFile":Ljava/io/File;
    :try_start_5
    throw v3
    :try_end_5
    .catch Lcom/bianfeng/ymnsdk/gongxiang/f; {:try_start_5 .. :try_end_5} :catch_5

    .line 61
    .restart local v0    # "idValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .restart local p0    # "apkFile":Ljava/io/File;
    :catch_4
    move-exception v3

    .line 64
    if-eqz v2, :cond_4

    .line 65
    :try_start_6
    invoke-virtual {v2}, Ljava/nio/channels/FileChannel;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_6
    .catch Lcom/bianfeng/ymnsdk/gongxiang/f; {:try_start_6 .. :try_end_6} :catch_5

    goto :goto_7

    .line 76
    .end local v1    # "randomAccessFile":Ljava/io/RandomAccessFile;
    .end local v2    # "fileChannel":Ljava/nio/channels/FileChannel;
    :catch_5
    move-exception v1

    goto :goto_a

    .line 67
    .restart local v1    # "randomAccessFile":Ljava/io/RandomAccessFile;
    .restart local v2    # "fileChannel":Ljava/nio/channels/FileChannel;
    :catch_6
    move-exception v3

    goto :goto_8

    .line 68
    :cond_4
    :goto_7
    nop

    .line 70
    :goto_8
    if-eqz v1, :cond_1

    .line 71
    :try_start_7
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_1
    .catch Lcom/bianfeng/ymnsdk/gongxiang/f; {:try_start_7 .. :try_end_7} :catch_5

    goto :goto_2

    .line 77
    .end local v1    # "randomAccessFile":Ljava/io/RandomAccessFile;
    .end local v2    # "fileChannel":Ljava/nio/channels/FileChannel;
    :goto_9
    nop

    .line 79
    :goto_a
    return-object v0
.end method

.method public static a(Ljava/io/File;I)[B
    .locals 3
    .param p0, "apkFile"    # Ljava/io/File;
    .param p1, "id"    # I

    .line 34
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/gongxiang/e;->a(Ljava/io/File;)Ljava/util/Map;

    move-result-object v0

    .line 35
    .local v0, "idValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 36
    return-object v1

    .line 38
    :cond_0
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/nio/ByteBuffer;

    .line 39
    .local v2, "byteBuffer":Ljava/nio/ByteBuffer;
    if-nez v2, :cond_1

    .line 40
    return-object v1

    .line 42
    :cond_1
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/gongxiang/e;->a(Ljava/nio/ByteBuffer;)[B

    move-result-object v1

    return-object v1
.end method

.method private static a(Ljava/nio/ByteBuffer;)[B
    .locals 4
    .param p0, "byteBuffer"    # Ljava/nio/ByteBuffer;

    .line 46
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    .line 47
    .local v0, "array":[B
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->arrayOffset()I

    move-result v1

    .line 48
    .local v1, "arrayOffset":I
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->position()I

    move-result v2

    add-int/2addr v2, v1

    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->limit()I

    move-result v3

    add-int/2addr v3, v1

    invoke-static {v0, v2, v3}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object v2

    return-object v2
.end method

.method public static b(Ljava/io/File;I)Ljava/lang/String;
    .locals 4
    .param p0, "apkFile"    # Ljava/io/File;
    .param p1, "id"    # I

    .line 21
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/gongxiang/e;->a(Ljava/io/File;I)[B

    move-result-object v0

    .line 22
    .local v0, "bytes":[B
    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 23
    return-object v1

    .line 26
    :cond_0
    :try_start_0
    new-instance v2, Ljava/lang/String;

    const-string v3, "UTF-8"

    invoke-direct {v2, v0, v3}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v2

    .line 27
    :catch_0
    move-exception v2

    .line 28
    .local v2, "e":Ljava/io/UnsupportedEncodingException;
    invoke-virtual {v2}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V

    .line 30
    .end local v2    # "e":Ljava/io/UnsupportedEncodingException;
    return-object v1
.end method
