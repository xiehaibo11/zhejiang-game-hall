.class public final Lcom/bianfeng/ymnsdk/gongxiang/j;
.super Ljava/lang/Object;
.source "PayloadWriter.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/gongxiang/j$b;
    }
.end annotation


# direct methods
.method public static a(Ljava/io/File;ILjava/lang/String;Z)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    const-string v0, "UTF-8"

    .line 1
    invoke-virtual {p2, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p2

    .line 2
    array-length v0, p2

    invoke-static {v0}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 3
    sget-object v1, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 4
    array-length v1, p2

    const/4 v2, 0x0

    invoke-virtual {v0, p2, v2, v1}, Ljava/nio/ByteBuffer;->put([BII)Ljava/nio/ByteBuffer;

    .line 5
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 6
    invoke-static {p0, p1, v0, p3}, Lcom/bianfeng/ymnsdk/gongxiang/j;->a(Ljava/io/File;ILjava/nio/ByteBuffer;Z)V

    return-void
.end method

.method public static a(Ljava/io/File;ILjava/nio/ByteBuffer;Z)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    .line 7
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 8
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 9
    invoke-static {p0, v0, p3}, Lcom/bianfeng/ymnsdk/gongxiang/j;->a(Ljava/io/File;Ljava/util/Map;Z)V

    return-void
.end method

.method static a(Ljava/io/File;Lcom/bianfeng/ymnsdk/gongxiang/j$b;Z)V
    .locals 16
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    const/4 v1, 0x0

    .line 11
    :try_start_0
    new-instance v2, Ljava/io/RandomAccessFile;

    const-string v0, "rw"

    move-object/from16 v3, p0

    invoke-direct {v2, v3, v0}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_6

    .line 12
    :try_start_1
    invoke-virtual {v2}, Ljava/io/RandomAccessFile;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object v4
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_5

    .line 13
    :try_start_2
    invoke-static {v4}, Lcom/bianfeng/ymnsdk/gongxiang/a;->c(Ljava/nio/channels/FileChannel;)J

    move-result-wide v5

    .line 14
    invoke-static {v4, v5, v6}, Lcom/bianfeng/ymnsdk/gongxiang/a;->b(Ljava/nio/channels/FileChannel;J)J

    move-result-wide v7

    .line 16
    invoke-static {v4, v7, v8}, Lcom/bianfeng/ymnsdk/gongxiang/a;->a(Ljava/nio/channels/FileChannel;J)Lcom/bianfeng/ymnsdk/gongxiang/d;

    move-result-object v0

    .line 17
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/gongxiang/d;->a()Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/nio/ByteBuffer;

    .line 18
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/gongxiang/d;->b()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v10

    .line 20
    invoke-static {v9}, Lcom/bianfeng/ymnsdk/gongxiang/a;->b(Ljava/nio/ByteBuffer;)Ljava/util/Map;

    move-result-object v0

    const v9, 0x7109871a

    .line 22
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-interface {v0, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/nio/ByteBuffer;

    if-eqz v9, :cond_8

    move-object/from16 v9, p1

    .line 30
    invoke-interface {v9, v0}, Lcom/bianfeng/ymnsdk/gongxiang/j$b;->a(Ljava/util/Map;)Lcom/bianfeng/ymnsdk/gongxiang/g;

    move-result-object v0

    const-wide/16 v12, 0x0

    cmp-long v9, v10, v12

    if-eqz v9, :cond_6

    cmp-long v9, v7, v12

    if-eqz v9, :cond_6

    .line 35
    invoke-virtual {v2, v7, v8}, Ljava/io/RandomAccessFile;->seek(J)V

    const/4 v9, 0x0

    const/16 v12, 0x400

    if-eqz p2, :cond_2

    .line 41
    new-instance v13, Ljava/io/File;

    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->getParent()Ljava/lang/String;

    move-result-object v3

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v14

    invoke-virtual {v14}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-direct {v13, v3, v14}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_4

    .line 44
    :try_start_3
    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, v13}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 45
    :try_start_4
    new-array v14, v12, [B

    .line 48
    :goto_0
    invoke-virtual {v2, v14}, Ljava/io/RandomAccessFile;->read([B)I

    move-result v15

    if-lez v15, :cond_0

    .line 49
    invoke-virtual {v3, v14, v9, v15}, Ljava/io/FileOutputStream;->write([BII)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_0

    .line 53
    :cond_0
    :try_start_5
    invoke-virtual {v3}, Ljava/io/FileOutputStream;->close()V

    move-object v3, v1

    goto :goto_2

    :catchall_0
    move-exception v0

    move-object v1, v3

    goto :goto_1

    :catchall_1
    move-exception v0

    :goto_1
    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V

    .line 55
    :cond_1
    throw v0

    .line 57
    :cond_2
    invoke-virtual {v4}, Ljava/nio/channels/FileChannel;->size()J

    move-result-wide v13

    sub-long/2addr v13, v7

    long-to-int v3, v13

    new-array v3, v3, [B

    .line 58
    invoke-virtual {v2, v3}, Ljava/io/RandomAccessFile;->read([B)I

    move-object v13, v1

    .line 62
    :goto_2
    invoke-virtual {v4, v10, v11}, Ljava/nio/channels/FileChannel;->position(J)Ljava/nio/channels/FileChannel;

    .line 63
    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnsdk/gongxiang/g;->a(Ljava/io/DataOutput;)J

    move-result-wide v14
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    if-eqz p2, :cond_5

    .line 69
    :try_start_6
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v13}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    .line 70
    :try_start_7
    new-array v0, v12, [B

    .line 73
    :goto_3
    invoke-virtual {v3, v0}, Ljava/io/FileInputStream;->read([B)I

    move-result v1

    if-lez v1, :cond_3

    .line 74
    invoke-virtual {v2, v0, v9, v1}, Ljava/io/RandomAccessFile;->write([BII)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    goto :goto_3

    .line 78
    :cond_3
    :try_start_8
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V

    .line 80
    invoke-virtual {v13}, Ljava/io/File;->delete()Z

    goto :goto_5

    :catchall_2
    move-exception v0

    move-object v1, v3

    goto :goto_4

    :catchall_3
    move-exception v0

    :goto_4
    if-eqz v1, :cond_4

    .line 81
    invoke-virtual {v1}, Ljava/io/FileInputStream;->close()V

    .line 83
    :cond_4
    invoke-virtual {v13}, Ljava/io/File;->delete()Z

    .line 84
    throw v0

    .line 87
    :cond_5
    invoke-virtual {v2, v3}, Ljava/io/RandomAccessFile;->write([B)V

    .line 90
    :goto_5
    invoke-virtual {v2}, Ljava/io/RandomAccessFile;->getFilePointer()J

    move-result-wide v0

    invoke-virtual {v2, v0, v1}, Ljava/io/RandomAccessFile;->setLength(J)V

    .line 106
    invoke-virtual {v4}, Ljava/nio/channels/FileChannel;->size()J

    move-result-wide v0

    sub-long/2addr v0, v5

    const-wide/16 v5, 0x6

    sub-long/2addr v0, v5

    invoke-virtual {v2, v0, v1}, Ljava/io/RandomAccessFile;->seek(J)V

    const/4 v0, 0x4

    .line 108
    invoke-static {v0}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 109
    sget-object v1, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    add-long/2addr v14, v7

    const-wide/16 v5, 0x8

    add-long/2addr v14, v5

    sub-long/2addr v7, v10

    sub-long/2addr v14, v7

    long-to-int v1, v14

    .line 110
    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 112
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 113
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/io/RandomAccessFile;->write([B)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    :cond_6
    if-eqz v4, :cond_7

    .line 118
    invoke-virtual {v4}, Ljava/nio/channels/FileChannel;->close()V

    .line 121
    :cond_7
    invoke-virtual {v2}, Ljava/io/RandomAccessFile;->close()V

    return-void

    .line 122
    :cond_8
    :try_start_9
    new-instance v0, Ljava/io/IOException;

    const-string v1, "No APK Signature Scheme v2 block in APK Signing Block"

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_4

    :catchall_4
    move-exception v0

    move-object v1, v4

    goto :goto_6

    :catchall_5
    move-exception v0

    goto :goto_6

    :catchall_6
    move-exception v0

    move-object v2, v1

    :goto_6
    if-eqz v1, :cond_9

    .line 212
    invoke-virtual {v1}, Ljava/nio/channels/FileChannel;->close()V

    :cond_9
    if-eqz v2, :cond_a

    .line 215
    invoke-virtual {v2}, Ljava/io/RandomAccessFile;->close()V

    .line 217
    :cond_a
    throw v0
.end method

.method public static a(Ljava/io/File;Ljava/util/Map;Z)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/File;",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/nio/ByteBuffer;",
            ">;Z)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    .line 10
    new-instance v0, Lcom/bianfeng/ymnsdk/gongxiang/j$a;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/gongxiang/j$a;-><init>(Ljava/util/Map;)V

    invoke-static {p0, v0, p2}, Lcom/bianfeng/ymnsdk/gongxiang/j;->a(Ljava/io/File;Lcom/bianfeng/ymnsdk/gongxiang/j$b;Z)V

    return-void
.end method
