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
    .locals 4
    .param p0, "apkFile"    # Ljava/io/File;
    .param p1, "id"    # I
    .param p2, "string"    # Ljava/lang/String;
    .param p3, "lowMemory"    # Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    .line 33
    const-string v0, "UTF-8"

    invoke-virtual {p2, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0

    .line 34
    .local v0, "bytes":[B
    array-length v1, v0

    invoke-static {v1}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v1

    .line 35
    .local v1, "byteBuffer":Ljava/nio/ByteBuffer;
    sget-object v2, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v1, v2}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 36
    array-length v2, v0

    const/4 v3, 0x0

    invoke-virtual {v1, v0, v3, v2}, Ljava/nio/ByteBuffer;->put([BII)Ljava/nio/ByteBuffer;

    .line 37
    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 38
    invoke-static {p0, p1, v1, p3}, Lcom/bianfeng/ymnsdk/gongxiang/j;->a(Ljava/io/File;ILjava/nio/ByteBuffer;Z)V

    .line 39
    return-void
.end method

.method public static a(Ljava/io/File;ILjava/nio/ByteBuffer;Z)V
    .locals 2
    .param p0, "apkFile"    # Ljava/io/File;
    .param p1, "id"    # I
    .param p2, "buffer"    # Ljava/nio/ByteBuffer;
    .param p3, "lowMemory"    # Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    .line 46
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 47
    .local v0, "idValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 48
    invoke-static {p0, v0, p3}, Lcom/bianfeng/ymnsdk/gongxiang/j;->a(Ljava/io/File;Ljava/util/Map;Z)V

    .line 49
    return-void
.end method

.method static a(Ljava/io/File;Lcom/bianfeng/ymnsdk/gongxiang/j$b;Z)V
    .locals 24
    .param p0, "apkFile"    # Ljava/io/File;
    .param p1, "handler"    # Lcom/bianfeng/ymnsdk/gongxiang/j$b;
    .param p2, "lowMemory"    # Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    .line 99
    const/4 v1, 0x0

    .line 100
    .local v1, "fIn":Ljava/io/RandomAccessFile;
    const/4 v2, 0x0

    .line 102
    .local v2, "fileChannel":Ljava/nio/channels/FileChannel;
    :try_start_0
    new-instance v0, Ljava/io/RandomAccessFile;

    const-string v3, "rw"

    move-object/from16 v4, p0

    invoke-direct {v0, v4, v3}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V

    move-object v1, v0

    .line 103
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object v0

    move-object v2, v0

    .line 104
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/gongxiang/a;->c(Ljava/nio/channels/FileChannel;)J

    move-result-wide v5

    .line 105
    .local v5, "commentLength":J
    invoke-static {v2, v5, v6}, Lcom/bianfeng/ymnsdk/gongxiang/a;->b(Ljava/nio/channels/FileChannel;J)J

    move-result-wide v7

    .line 107
    .local v7, "centralDirStartOffset":J
    invoke-static {v2, v7, v8}, Lcom/bianfeng/ymnsdk/gongxiang/a;->a(Ljava/nio/channels/FileChannel;J)Lcom/bianfeng/ymnsdk/gongxiang/d;

    move-result-object v0

    move-object v3, v0

    .line 108
    .local v3, "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/gongxiang/d;->a()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/nio/ByteBuffer;

    move-object v9, v0

    .line 109
    .local v9, "apkSigningBlock2":Ljava/nio/ByteBuffer;
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/gongxiang/d;->b()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v10

    .line 111
    .local v10, "apkSigningBlockOffset":J
    invoke-static {v9}, Lcom/bianfeng/ymnsdk/gongxiang/a;->b(Ljava/nio/ByteBuffer;)Ljava/util/Map;

    move-result-object v0

    move-object v12, v0

    .line 113
    .local v12, "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    const v0, 0x7109871a

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-interface {v12, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/nio/ByteBuffer;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_6

    move-object v13, v0

    .line 115
    .local v13, "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    if-eqz v13, :cond_8

    .line 121
    move-object/from16 v14, p1

    :try_start_1
    invoke-interface {v14, v12}, Lcom/bianfeng/ymnsdk/gongxiang/j$b;->a(Ljava/util/Map;)Lcom/bianfeng/ymnsdk/gongxiang/g;

    move-result-object v0

    move-object v15, v0

    .line 123
    .local v15, "apkSigningBlock":Lcom/bianfeng/ymnsdk/gongxiang/g;
    const-wide/16 v16, 0x0

    cmp-long v0, v10, v16

    if-eqz v0, :cond_6

    cmp-long v0, v7, v16

    if-eqz v0, :cond_6

    .line 126
    invoke-virtual {v1, v7, v8}, Ljava/io/RandomAccessFile;->seek(J)V

    .line 128
    const/16 v16, 0x0

    .line 129
    .local v16, "centralDirBytes":[B
    const/4 v0, 0x0

    .line 131
    .local v0, "tempCentralBytesFile":Ljava/io/File;
    move-object/from16 v17, v0

    .end local v0    # "tempCentralBytesFile":Ljava/io/File;
    .local v17, "tempCentralBytesFile":Ljava/io/File;
    if-eqz p2, :cond_2

    .line 132
    new-instance v0, Ljava/io/File;

    move-object/from16 v20, v3

    .end local v3    # "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .local v20, "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->getParent()Ljava/lang/String;

    move-result-object v3

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v21

    invoke-virtual/range {v21 .. v21}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v3, v4}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_5

    move-object v3, v0

    .line 133
    .end local v17    # "tempCentralBytesFile":Ljava/io/File;
    .local v3, "tempCentralBytesFile":Ljava/io/File;
    const/4 v4, 0x0

    .line 135
    .local v4, "outStream":Ljava/io/FileOutputStream;
    :try_start_2
    new-instance v0, Ljava/io/FileOutputStream;

    invoke-direct {v0, v3}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    move-object v4, v0

    .line 136
    move-object/from16 v17, v3

    const/16 v0, 0x400

    .end local v3    # "tempCentralBytesFile":Ljava/io/File;
    .restart local v17    # "tempCentralBytesFile":Ljava/io/File;
    :try_start_3
    new-array v3, v0, [B

    move-object v0, v3

    .line 139
    .local v0, "buffer":[B
    :goto_0
    invoke-virtual {v1, v0}, Ljava/io/RandomAccessFile;->read([B)I

    move-result v3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    move/from16 v21, v3

    .local v21, "len":I
    if-lez v3, :cond_0

    .line 140
    move/from16 v3, v21

    move-object/from16 v21, v9

    const/4 v9, 0x0

    .end local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .local v3, "len":I
    .local v21, "apkSigningBlock2":Ljava/nio/ByteBuffer;
    :try_start_4
    invoke-virtual {v4, v0, v9, v3}, Ljava/io/FileOutputStream;->write([BII)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    move-object/from16 v9, v21

    goto :goto_0

    .line 143
    .end local v0    # "buffer":[B
    .end local v3    # "len":I
    :catchall_0
    move-exception v0

    goto :goto_1

    .line 139
    .restart local v0    # "buffer":[B
    .restart local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .local v21, "len":I
    :cond_0
    move/from16 v3, v21

    move-object/from16 v21, v9

    .line 143
    .end local v0    # "buffer":[B
    .end local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .local v21, "apkSigningBlock2":Ljava/nio/ByteBuffer;
    nop

    .line 144
    :try_start_5
    invoke-virtual {v4}, Ljava/io/FileOutputStream;->close()V

    .line 147
    .end local v4    # "outStream":Ljava/io/FileOutputStream;
    move-object/from16 v3, v16

    move-object/from16 v4, v17

    goto :goto_2

    .line 143
    .end local v21    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .restart local v4    # "outStream":Ljava/io/FileOutputStream;
    .restart local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    :catchall_1
    move-exception v0

    move-object/from16 v21, v9

    .end local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .restart local v21    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    goto :goto_1

    .end local v17    # "tempCentralBytesFile":Ljava/io/File;
    .end local v21    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .local v3, "tempCentralBytesFile":Ljava/io/File;
    .restart local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    :catchall_2
    move-exception v0

    move-object/from16 v17, v3

    move-object/from16 v21, v9

    .end local v3    # "tempCentralBytesFile":Ljava/io/File;
    .end local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .restart local v17    # "tempCentralBytesFile":Ljava/io/File;
    .restart local v21    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    :goto_1
    if-eqz v4, :cond_1

    .line 144
    invoke-virtual {v4}, Ljava/io/FileOutputStream;->close()V

    .line 146
    :cond_1
    nop

    .end local v1    # "fIn":Ljava/io/RandomAccessFile;
    .end local v2    # "fileChannel":Ljava/nio/channels/FileChannel;
    .end local p0    # "apkFile":Ljava/io/File;
    .end local p1    # "handler":Lcom/bianfeng/ymnsdk/gongxiang/j$b;
    .end local p2    # "lowMemory":Z
    throw v0

    .line 148
    .end local v4    # "outStream":Ljava/io/FileOutputStream;
    .end local v20    # "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .end local v21    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .restart local v1    # "fIn":Ljava/io/RandomAccessFile;
    .restart local v2    # "fileChannel":Ljava/nio/channels/FileChannel;
    .local v3, "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .restart local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .restart local p0    # "apkFile":Ljava/io/File;
    .restart local p1    # "handler":Lcom/bianfeng/ymnsdk/gongxiang/j$b;
    .restart local p2    # "lowMemory":Z
    :cond_2
    move-object/from16 v20, v3

    move-object/from16 v21, v9

    .end local v3    # "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .end local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .restart local v20    # "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .restart local v21    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    invoke-virtual {v2}, Ljava/nio/channels/FileChannel;->size()J

    move-result-wide v3

    sub-long/2addr v3, v7

    long-to-int v0, v3

    new-array v0, v0, [B

    .line 149
    .end local v16    # "centralDirBytes":[B
    .local v0, "centralDirBytes":[B
    invoke-virtual {v1, v0}, Ljava/io/RandomAccessFile;->read([B)I

    move-object v3, v0

    move-object/from16 v4, v17

    .line 153
    .end local v0    # "centralDirBytes":[B
    .end local v17    # "tempCentralBytesFile":Ljava/io/File;
    .local v3, "centralDirBytes":[B
    .local v4, "tempCentralBytesFile":Ljava/io/File;
    :goto_2
    invoke-virtual {v2, v10, v11}, Ljava/nio/channels/FileChannel;->position(J)Ljava/nio/channels/FileChannel;

    .line 154
    invoke-virtual {v15, v1}, Lcom/bianfeng/ymnsdk/gongxiang/g;->a(Ljava/io/DataOutput;)J

    move-result-wide v16
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_5

    .line 157
    .local v16, "length":J
    if-eqz p2, :cond_5

    .line 158
    const/4 v9, 0x0

    .line 160
    .local v9, "inputStream":Ljava/io/FileInputStream;
    :try_start_6
    new-instance v0, Ljava/io/FileInputStream;

    invoke-direct {v0, v4}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    move-object v9, v0

    .line 161
    const/16 v0, 0x400

    new-array v0, v0, [B

    .line 164
    .local v0, "buffer":[B
    :goto_3
    invoke-virtual {v9, v0}, Ljava/io/FileInputStream;->read([B)I

    move-result v19
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    move/from16 v22, v19

    .local v22, "len":I
    if-lez v19, :cond_3

    .line 165
    move-object/from16 v19, v12

    move-object/from16 v18, v13

    move/from16 v12, v22

    const/4 v13, 0x0

    .end local v13    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .end local v22    # "len":I
    .local v12, "len":I
    .local v18, "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .local v19, "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    :try_start_7
    invoke-virtual {v1, v0, v13, v12}, Ljava/io/RandomAccessFile;->write([BII)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    move-object/from16 v13, v18

    move-object/from16 v12, v19

    goto :goto_3

    .line 168
    .end local v0    # "buffer":[B
    .end local v12    # "len":I
    :catchall_3
    move-exception v0

    goto :goto_4

    .line 164
    .end local v18    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .end local v19    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .restart local v0    # "buffer":[B
    .local v12, "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .restart local v13    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .restart local v22    # "len":I
    :cond_3
    move-object/from16 v19, v12

    move-object/from16 v18, v13

    move/from16 v12, v22

    .line 168
    .end local v0    # "buffer":[B
    .end local v12    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .end local v13    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .end local v22    # "len":I
    .restart local v18    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .restart local v19    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    nop

    .line 169
    :try_start_8
    invoke-virtual {v9}, Ljava/io/FileInputStream;->close()V

    .line 171
    invoke-virtual {v4}, Ljava/io/File;->delete()Z

    .line 172
    nop

    .line 173
    .end local v9    # "inputStream":Ljava/io/FileInputStream;
    goto :goto_5

    .line 168
    .end local v18    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .end local v19    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .restart local v9    # "inputStream":Ljava/io/FileInputStream;
    .restart local v12    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .restart local v13    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    :catchall_4
    move-exception v0

    move-object/from16 v19, v12

    move-object/from16 v18, v13

    .end local v12    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .end local v13    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .restart local v18    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .restart local v19    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    :goto_4
    if-eqz v9, :cond_4

    .line 169
    invoke-virtual {v9}, Ljava/io/FileInputStream;->close()V

    .line 171
    :cond_4
    invoke-virtual {v4}, Ljava/io/File;->delete()Z

    .line 172
    nop

    .end local v1    # "fIn":Ljava/io/RandomAccessFile;
    .end local v2    # "fileChannel":Ljava/nio/channels/FileChannel;
    .end local p0    # "apkFile":Ljava/io/File;
    .end local p1    # "handler":Lcom/bianfeng/ymnsdk/gongxiang/j$b;
    .end local p2    # "lowMemory":Z
    throw v0

    .line 175
    .end local v9    # "inputStream":Ljava/io/FileInputStream;
    .end local v18    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .end local v19    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .restart local v1    # "fIn":Ljava/io/RandomAccessFile;
    .restart local v2    # "fileChannel":Ljava/nio/channels/FileChannel;
    .restart local v12    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .restart local v13    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .restart local p0    # "apkFile":Ljava/io/File;
    .restart local p1    # "handler":Lcom/bianfeng/ymnsdk/gongxiang/j$b;
    .restart local p2    # "lowMemory":Z
    :cond_5
    move-object/from16 v19, v12

    move-object/from16 v18, v13

    .end local v12    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .end local v13    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .restart local v18    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .restart local v19    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    invoke-virtual {v1, v3}, Ljava/io/RandomAccessFile;->write([B)V

    .line 178
    :goto_5
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->getFilePointer()J

    move-result-wide v12

    invoke-virtual {v1, v12, v13}, Ljava/io/RandomAccessFile;->setLength(J)V

    .line 194
    invoke-virtual {v2}, Ljava/nio/channels/FileChannel;->size()J

    move-result-wide v12

    sub-long/2addr v12, v5

    const-wide/16 v22, 0x6

    sub-long v12, v12, v22

    invoke-virtual {v1, v12, v13}, Ljava/io/RandomAccessFile;->seek(J)V

    .line 196
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 197
    .local v0, "temp":Ljava/nio/ByteBuffer;
    sget-object v9, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v0, v9}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 198
    add-long v12, v7, v16

    const-wide/16 v22, 0x8

    add-long v12, v12, v22

    sub-long v22, v7, v10

    sub-long v12, v12, v22

    long-to-int v9, v12

    invoke-virtual {v0, v9}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 200
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 201
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v9

    invoke-virtual {v1, v9}, Ljava/io/RandomAccessFile;->write([B)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_5

    goto :goto_6

    .line 123
    .end local v0    # "temp":Ljava/nio/ByteBuffer;
    .end local v4    # "tempCentralBytesFile":Ljava/io/File;
    .end local v16    # "length":J
    .end local v18    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .end local v19    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .end local v20    # "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .end local v21    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .local v3, "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .local v9, "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .restart local v12    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .restart local v13    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    :cond_6
    move-object/from16 v20, v3

    move-object/from16 v21, v9

    move-object/from16 v19, v12

    move-object/from16 v18, v13

    .line 205
    .end local v3    # "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .end local v5    # "commentLength":J
    .end local v7    # "centralDirStartOffset":J
    .end local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .end local v10    # "apkSigningBlockOffset":J
    .end local v12    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .end local v13    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .end local v15    # "apkSigningBlock":Lcom/bianfeng/ymnsdk/gongxiang/g;
    :goto_6
    if-eqz v2, :cond_7

    .line 206
    invoke-virtual {v2}, Ljava/nio/channels/FileChannel;->close()V

    .line 208
    :cond_7
    nop

    .line 209
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->close()V

    .line 212
    return-void

    .line 205
    :catchall_5
    move-exception v0

    goto :goto_7

    .line 116
    .restart local v3    # "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .restart local v5    # "commentLength":J
    .restart local v7    # "centralDirStartOffset":J
    .restart local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .restart local v10    # "apkSigningBlockOffset":J
    .restart local v12    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .restart local v13    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    :cond_8
    move-object/from16 v14, p1

    move-object/from16 v20, v3

    move-object/from16 v21, v9

    move-object/from16 v19, v12

    move-object/from16 v18, v13

    .end local v3    # "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .end local v9    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .end local v12    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .end local v13    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .restart local v18    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .restart local v19    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .restart local v20    # "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .restart local v21    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    :try_start_9
    new-instance v0, Ljava/io/IOException;

    const-string v3, "No APK Signature Scheme v2 block in APK Signing Block"

    invoke-direct {v0, v3}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    .end local v1    # "fIn":Ljava/io/RandomAccessFile;
    .end local v2    # "fileChannel":Ljava/nio/channels/FileChannel;
    .end local p0    # "apkFile":Ljava/io/File;
    .end local p1    # "handler":Lcom/bianfeng/ymnsdk/gongxiang/j$b;
    .end local p2    # "lowMemory":Z
    throw v0
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_5

    .line 205
    .end local v5    # "commentLength":J
    .end local v7    # "centralDirStartOffset":J
    .end local v10    # "apkSigningBlockOffset":J
    .end local v18    # "apkSignatureSchemeV2Block":Ljava/nio/ByteBuffer;
    .end local v19    # "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .end local v20    # "apkSigningBlockAndOffset":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<Ljava/nio/ByteBuffer;Ljava/lang/Long;>;"
    .end local v21    # "apkSigningBlock2":Ljava/nio/ByteBuffer;
    .restart local v1    # "fIn":Ljava/io/RandomAccessFile;
    .restart local v2    # "fileChannel":Ljava/nio/channels/FileChannel;
    .restart local p0    # "apkFile":Ljava/io/File;
    .restart local p1    # "handler":Lcom/bianfeng/ymnsdk/gongxiang/j$b;
    .restart local p2    # "lowMemory":Z
    :catchall_6
    move-exception v0

    move-object/from16 v14, p1

    :goto_7
    if-eqz v2, :cond_9

    .line 206
    invoke-virtual {v2}, Ljava/nio/channels/FileChannel;->close()V

    .line 208
    :cond_9
    if-eqz v1, :cond_a

    .line 209
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->close()V

    .line 211
    :cond_a
    throw v0
.end method

.method public static a(Ljava/io/File;Ljava/util/Map;Z)V
    .locals 1
    .param p0, "apkFile"    # Ljava/io/File;
    .param p2, "lowMemory"    # Z
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

    .line 56
    .local p1, "idValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    new-instance v0, Lcom/bianfeng/ymnsdk/gongxiang/j$a;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/gongxiang/j$a;-><init>(Ljava/util/Map;)V

    invoke-static {p0, v0, p2}, Lcom/bianfeng/ymnsdk/gongxiang/j;->a(Ljava/io/File;Lcom/bianfeng/ymnsdk/gongxiang/j$b;Z)V

    .line 71
    return-void
.end method
