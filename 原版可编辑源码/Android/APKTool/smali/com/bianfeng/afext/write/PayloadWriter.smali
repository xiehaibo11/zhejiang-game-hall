.class public final Lcom/bianfeng/afext/write/PayloadWriter;
.super Ljava/lang/Object;
.source "PayloadWriter.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/afext/write/PayloadWriter$ApkSigningBlockHandler;
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static handleApkSigningBlock(Ljava/io/File;Lcom/bianfeng/afext/write/PayloadWriter$ApkSigningBlockHandler;Z)V
    .locals 16
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/afext/read/SignatureNotFoundException;
        }
    .end annotation

    const/4 v1, 0x0

    .line 102
    :try_start_0
    new-instance v2, Ljava/io/RandomAccessFile;

    const-string v0, "rw"

    move-object/from16 v3, p0

    invoke-direct {v2, v3, v0}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_6

    .line 103
    :try_start_1
    invoke-virtual {v2}, Ljava/io/RandomAccessFile;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object v4
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_5

    .line 104
    :try_start_2
    invoke-static {v4}, Lcom/bianfeng/afext/read/ApkUtil;->getCommentLength(Ljava/nio/channels/FileChannel;)J

    move-result-wide v5

    .line 105
    invoke-static {v4, v5, v6}, Lcom/bianfeng/afext/read/ApkUtil;->findCentralDirStartOffset(Ljava/nio/channels/FileChannel;J)J

    move-result-wide v7

    .line 107
    invoke-static {v4, v7, v8}, Lcom/bianfeng/afext/read/ApkUtil;->findApkSigningBlock(Ljava/nio/channels/FileChannel;J)Lcom/bianfeng/afext/read/Pair;

    move-result-object v0

    .line 108
    invoke-virtual {v0}, Lcom/bianfeng/afext/read/Pair;->getFirst()Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/nio/ByteBuffer;

    .line 109
    invoke-virtual {v0}, Lcom/bianfeng/afext/read/Pair;->getSecond()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v10

    .line 111
    invoke-static {v9}, Lcom/bianfeng/afext/read/ApkUtil;->findIdValues(Ljava/nio/ByteBuffer;)Ljava/util/Map;

    move-result-object v0

    const v9, 0x7109871a

    .line 113
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-interface {v0, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/nio/ByteBuffer;

    if-eqz v9, :cond_8

    move-object/from16 v9, p1

    .line 121
    invoke-interface {v9, v0}, Lcom/bianfeng/afext/write/PayloadWriter$ApkSigningBlockHandler;->handle(Ljava/util/Map;)Lcom/bianfeng/afext/write/ApkSigningBlock;

    move-result-object v0

    const-wide/16 v12, 0x0

    cmp-long v9, v10, v12

    if-eqz v9, :cond_6

    cmp-long v9, v7, v12

    if-eqz v9, :cond_6

    .line 126
    invoke-virtual {v2, v7, v8}, Ljava/io/RandomAccessFile;->seek(J)V

    const/4 v9, 0x0

    const/16 v12, 0x400

    if-eqz p2, :cond_2

    .line 132
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

    .line 135
    :try_start_3
    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, v13}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 136
    :try_start_4
    new-array v14, v12, [B

    .line 139
    :goto_0
    invoke-virtual {v2, v14}, Ljava/io/RandomAccessFile;->read([B)I

    move-result v15

    if-lez v15, :cond_0

    .line 140
    invoke-virtual {v3, v14, v9, v15}, Ljava/io/FileOutputStream;->write([BII)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_0

    .line 144
    :cond_0
    :try_start_5
    invoke-virtual {v3}, Ljava/io/FileOutputStream;->close()V

    move-object v3, v1

    goto :goto_2

    :catchall_0
    move-exception v0

    goto :goto_1

    :catchall_1
    move-exception v0

    move-object v3, v1

    :goto_1
    if-eqz v3, :cond_1

    invoke-virtual {v3}, Ljava/io/FileOutputStream;->close()V

    .line 146
    :cond_1
    throw v0

    .line 148
    :cond_2
    invoke-virtual {v4}, Ljava/nio/channels/FileChannel;->size()J

    move-result-wide v13

    sub-long/2addr v13, v7

    long-to-int v3, v13

    new-array v3, v3, [B

    .line 149
    invoke-virtual {v2, v3}, Ljava/io/RandomAccessFile;->read([B)I

    move-object v13, v1

    .line 153
    :goto_2
    invoke-virtual {v4, v10, v11}, Ljava/nio/channels/FileChannel;->position(J)Ljava/nio/channels/FileChannel;

    .line 154
    invoke-virtual {v0, v2}, Lcom/bianfeng/afext/write/ApkSigningBlock;->writeApkSigningBlock(Ljava/io/DataOutput;)J

    move-result-wide v14
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    if-eqz p2, :cond_5

    .line 160
    :try_start_6
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v13}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    .line 161
    :try_start_7
    new-array v0, v12, [B

    .line 164
    :goto_3
    invoke-virtual {v3, v0}, Ljava/io/FileInputStream;->read([B)I

    move-result v1

    if-lez v1, :cond_3

    .line 165
    invoke-virtual {v2, v0, v9, v1}, Ljava/io/RandomAccessFile;->write([BII)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    goto :goto_3

    .line 169
    :cond_3
    :try_start_8
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V

    .line 171
    invoke-virtual {v13}, Ljava/io/File;->delete()Z

    goto :goto_5

    :catchall_2
    move-exception v0

    goto :goto_4

    :catchall_3
    move-exception v0

    move-object v3, v1

    :goto_4
    if-eqz v3, :cond_4

    .line 169
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V

    .line 171
    :cond_4
    invoke-virtual {v13}, Ljava/io/File;->delete()Z

    .line 172
    throw v0

    .line 175
    :cond_5
    invoke-virtual {v2, v3}, Ljava/io/RandomAccessFile;->write([B)V

    .line 178
    :goto_5
    invoke-virtual {v2}, Ljava/io/RandomAccessFile;->getFilePointer()J

    move-result-wide v0

    invoke-virtual {v2, v0, v1}, Ljava/io/RandomAccessFile;->setLength(J)V

    .line 194
    invoke-virtual {v4}, Ljava/nio/channels/FileChannel;->size()J

    move-result-wide v0

    sub-long/2addr v0, v5

    const-wide/16 v5, 0x6

    sub-long/2addr v0, v5

    invoke-virtual {v2, v0, v1}, Ljava/io/RandomAccessFile;->seek(J)V

    const/4 v0, 0x4

    .line 196
    invoke-static {v0}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 197
    sget-object v1, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    add-long/2addr v14, v7

    const-wide/16 v5, 0x8

    add-long/2addr v14, v5

    sub-long/2addr v7, v10

    sub-long/2addr v14, v7

    long-to-int v1, v14

    .line 198
    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 200
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 201
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/io/RandomAccessFile;->write([B)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    :cond_6
    if-eqz v4, :cond_7

    .line 206
    invoke-virtual {v4}, Ljava/nio/channels/FileChannel;->close()V

    .line 209
    :cond_7
    invoke-virtual {v2}, Ljava/io/RandomAccessFile;->close()V

    return-void

    .line 116
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

    goto :goto_6

    :catchall_5
    move-exception v0

    move-object v4, v1

    goto :goto_6

    :catchall_6
    move-exception v0

    move-object v2, v1

    move-object v4, v2

    :goto_6
    if-eqz v4, :cond_9

    .line 206
    invoke-virtual {v4}, Ljava/nio/channels/FileChannel;->close()V

    :cond_9
    if-eqz v2, :cond_a

    .line 209
    invoke-virtual {v2}, Ljava/io/RandomAccessFile;->close()V

    .line 211
    :cond_a
    throw v0
.end method

.method public static put(Ljava/io/File;ILjava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/afext/read/SignatureNotFoundException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 29
    invoke-static {p0, p1, p2, v0}, Lcom/bianfeng/afext/write/PayloadWriter;->put(Ljava/io/File;ILjava/lang/String;Z)V

    return-void
.end method

.method public static put(Ljava/io/File;ILjava/lang/String;Z)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/afext/read/SignatureNotFoundException;
        }
    .end annotation

    const-string v0, "UTF-8"

    .line 33
    invoke-virtual {p2, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p2

    .line 34
    array-length v0, p2

    invoke-static {v0}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 35
    sget-object v1, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 36
    array-length v1, p2

    const/4 v2, 0x0

    invoke-virtual {v0, p2, v2, v1}, Ljava/nio/ByteBuffer;->put([BII)Ljava/nio/ByteBuffer;

    .line 37
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 38
    invoke-static {p0, p1, v0, p3}, Lcom/bianfeng/afext/write/PayloadWriter;->put(Ljava/io/File;ILjava/nio/ByteBuffer;Z)V

    return-void
.end method

.method public static put(Ljava/io/File;ILjava/nio/ByteBuffer;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/afext/read/SignatureNotFoundException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 42
    invoke-static {p0, p1, p2, v0}, Lcom/bianfeng/afext/write/PayloadWriter;->put(Ljava/io/File;ILjava/nio/ByteBuffer;Z)V

    return-void
.end method

.method public static put(Ljava/io/File;ILjava/nio/ByteBuffer;Z)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/afext/read/SignatureNotFoundException;
        }
    .end annotation

    .line 46
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 47
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 48
    invoke-static {p0, v0, p3}, Lcom/bianfeng/afext/write/PayloadWriter;->putAll(Ljava/io/File;Ljava/util/Map;Z)V

    return-void
.end method

.method public static putAll(Ljava/io/File;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/File;",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/nio/ByteBuffer;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/afext/read/SignatureNotFoundException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 52
    invoke-static {p0, p1, v0}, Lcom/bianfeng/afext/write/PayloadWriter;->putAll(Ljava/io/File;Ljava/util/Map;Z)V

    return-void
.end method

.method public static putAll(Ljava/io/File;Ljava/util/Map;Z)V
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
            Lcom/bianfeng/afext/read/SignatureNotFoundException;
        }
    .end annotation

    .line 56
    new-instance v0, Lcom/bianfeng/afext/write/PayloadWriter$1;

    invoke-direct {v0, p1}, Lcom/bianfeng/afext/write/PayloadWriter$1;-><init>(Ljava/util/Map;)V

    invoke-static {p0, v0, p2}, Lcom/bianfeng/afext/write/PayloadWriter;->handleApkSigningBlock(Ljava/io/File;Lcom/bianfeng/afext/write/PayloadWriter$ApkSigningBlockHandler;Z)V

    return-void
.end method

.method public static remove(Ljava/io/File;I)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/afext/read/SignatureNotFoundException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 74
    invoke-static {p0, p1, v0}, Lcom/bianfeng/afext/write/PayloadWriter;->remove(Ljava/io/File;IZ)V

    return-void
.end method

.method public static remove(Ljava/io/File;IZ)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/afext/read/SignatureNotFoundException;
        }
    .end annotation

    .line 78
    new-instance v0, Lcom/bianfeng/afext/write/PayloadWriter$2;

    invoke-direct {v0, p1}, Lcom/bianfeng/afext/write/PayloadWriter$2;-><init>(I)V

    invoke-static {p0, v0, p2}, Lcom/bianfeng/afext/write/PayloadWriter;->handleApkSigningBlock(Ljava/io/File;Lcom/bianfeng/afext/write/PayloadWriter$ApkSigningBlockHandler;Z)V

    return-void
.end method
