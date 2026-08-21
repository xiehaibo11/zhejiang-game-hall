.class public final Lcom/bianfeng/ymnsdk/gongxiang/a;
.super Ljava/lang/Object;
.source "ApkUtil.java"


# direct methods
.method public static a(Ljava/nio/channels/FileChannel;)Lcom/bianfeng/ymnsdk/gongxiang/d;
    .locals 3
    .param p0, "fileChannel"    # Ljava/nio/channels/FileChannel;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/nio/channels/FileChannel;",
            ")",
            "Lcom/bianfeng/ymnsdk/gongxiang/d<",
            "Ljava/nio/ByteBuffer;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    .line 126
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/gongxiang/a;->b(Ljava/nio/channels/FileChannel;)J

    move-result-wide v0

    .line 127
    .local v0, "centralDirOffset":J
    invoke-static {p0, v0, v1}, Lcom/bianfeng/ymnsdk/gongxiang/a;->a(Ljava/nio/channels/FileChannel;J)Lcom/bianfeng/ymnsdk/gongxiang/d;

    move-result-object v2

    return-object v2
.end method

.method public static a(Ljava/nio/channels/FileChannel;J)Lcom/bianfeng/ymnsdk/gongxiang/d;
    .locals 12
    .param p0, "fileChannel"    # Ljava/nio/channels/FileChannel;
    .param p1, "centralDirOffset"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/nio/channels/FileChannel;",
            "J)",
            "Lcom/bianfeng/ymnsdk/gongxiang/d<",
            "Ljava/nio/ByteBuffer;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    .line 142
    const-wide/16 v0, 0x20

    cmp-long v2, p1, v0

    if-ltz v2, :cond_4

    .line 150
    const-wide/16 v0, 0x18

    sub-long v0, p1, v0

    invoke-virtual {p0, v0, v1}, Ljava/nio/channels/FileChannel;->position(J)Ljava/nio/channels/FileChannel;

    .line 151
    const/16 v0, 0x18

    invoke-static {v0}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 152
    .local v0, "footer":Ljava/nio/ByteBuffer;
    invoke-virtual {p0, v0}, Ljava/nio/channels/FileChannel;->read(Ljava/nio/ByteBuffer;)I

    .line 153
    sget-object v1, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 154
    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->getLong(I)J

    move-result-wide v1

    const-wide v3, 0x20676953204b5041L

    cmp-long v5, v1, v3

    if-nez v5, :cond_3

    const/16 v1, 0x10

    .line 155
    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->getLong(I)J

    move-result-wide v1

    const-wide v3, 0x3234206b636f6c42L    # 7.465385175170059E-67

    cmp-long v5, v1, v3

    if-nez v5, :cond_3

    .line 160
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->getLong(I)J

    move-result-wide v2

    .line 161
    .local v2, "apkSigBlockSizeInFooter":J
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->capacity()I

    move-result v4

    int-to-long v4, v4

    cmp-long v6, v2, v4

    if-ltz v6, :cond_2

    const-wide/32 v4, 0x7ffffff7

    cmp-long v6, v2, v4

    if-gtz v6, :cond_2

    .line 166
    const-wide/16 v4, 0x8

    add-long/2addr v4, v2

    long-to-int v5, v4

    .line 167
    .local v5, "totalSize":I
    int-to-long v6, v5

    sub-long v6, p1, v6

    .line 168
    .local v6, "apkSigBlockOffset":J
    const-wide/16 v8, 0x0

    cmp-long v4, v6, v8

    if-ltz v4, :cond_1

    .line 172
    invoke-virtual {p0, v6, v7}, Ljava/nio/channels/FileChannel;->position(J)Ljava/nio/channels/FileChannel;

    .line 173
    invoke-static {v5}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v4

    .line 174
    .local v4, "apkSigBlock":Ljava/nio/ByteBuffer;
    invoke-virtual {p0, v4}, Ljava/nio/channels/FileChannel;->read(Ljava/nio/ByteBuffer;)I

    .line 175
    sget-object v8, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v4, v8}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 176
    invoke-virtual {v4, v1}, Ljava/nio/ByteBuffer;->getLong(I)J

    move-result-wide v8

    .line 177
    .local v8, "apkSigBlockSizeInHeader":J
    cmp-long v1, v8, v2

    if-nez v1, :cond_0

    .line 182
    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-static {v4, v1}, Lcom/bianfeng/ymnsdk/gongxiang/d;->a(Ljava/lang/Object;Ljava/lang/Object;)Lcom/bianfeng/ymnsdk/gongxiang/d;

    move-result-object v1

    return-object v1

    .line 178
    :cond_0
    new-instance v1, Lcom/bianfeng/ymnsdk/gongxiang/f;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "APK Signing Block sizes in header and footer do not match: "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8, v9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v11, " vs "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-direct {v1, v10}, Lcom/bianfeng/ymnsdk/gongxiang/f;-><init>(Ljava/lang/String;)V

    throw v1

    .line 169
    .end local v4    # "apkSigBlock":Ljava/nio/ByteBuffer;
    .end local v8    # "apkSigBlockSizeInHeader":J
    :cond_1
    new-instance v1, Lcom/bianfeng/ymnsdk/gongxiang/f;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "APK Signing Block offset out of range: "

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v1, v4}, Lcom/bianfeng/ymnsdk/gongxiang/f;-><init>(Ljava/lang/String;)V

    throw v1

    .line 163
    .end local v5    # "totalSize":I
    .end local v6    # "apkSigBlockOffset":J
    :cond_2
    new-instance v1, Lcom/bianfeng/ymnsdk/gongxiang/f;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "APK Signing Block size out of range: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v1, v4}, Lcom/bianfeng/ymnsdk/gongxiang/f;-><init>(Ljava/lang/String;)V

    throw v1

    .line 156
    .end local v2    # "apkSigBlockSizeInFooter":J
    :cond_3
    new-instance v1, Lcom/bianfeng/ymnsdk/gongxiang/f;

    const-string v2, "No APK Signing Block before ZIP Central Directory"

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/gongxiang/f;-><init>(Ljava/lang/String;)V

    throw v1

    .line 143
    .end local v0    # "footer":Ljava/nio/ByteBuffer;
    :cond_4
    new-instance v0, Lcom/bianfeng/ymnsdk/gongxiang/f;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "APK too small for APK Signing Block. ZIP Central Directory offset: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/gongxiang/f;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private static a(Ljava/nio/ByteBuffer;I)Ljava/nio/ByteBuffer;
    .locals 5
    .param p0, "source"    # Ljava/nio/ByteBuffer;
    .param p1, "size"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/nio/BufferUnderflowException;
        }
    .end annotation

    .line 270
    if-ltz p1, :cond_1

    .line 273
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->limit()I

    move-result v0

    .line 274
    .local v0, "originalLimit":I
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->position()I

    move-result v1

    .line 275
    .local v1, "position":I
    add-int v2, v1, p1

    .line 276
    .local v2, "limit":I
    if-lt v2, v1, :cond_0

    if-gt v2, v0, :cond_0

    .line 279
    invoke-virtual {p0, v2}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 281
    :try_start_0
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->slice()Ljava/nio/ByteBuffer;

    move-result-object v3

    .line 282
    .local v3, "result":Ljava/nio/ByteBuffer;
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->order()Ljava/nio/ByteOrder;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 283
    invoke-virtual {p0, v2}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 284
    nop

    .line 286
    invoke-virtual {p0, v0}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 284
    return-object v3

    .line 286
    .end local v3    # "result":Ljava/nio/ByteBuffer;
    :catchall_0
    move-exception v3

    invoke-virtual {p0, v0}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 287
    throw v3

    .line 277
    :cond_0
    new-instance v3, Ljava/nio/BufferUnderflowException;

    invoke-direct {v3}, Ljava/nio/BufferUnderflowException;-><init>()V

    throw v3

    .line 271
    .end local v0    # "originalLimit":I
    .end local v1    # "position":I
    .end local v2    # "limit":I
    :cond_1
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "size: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private static a(Ljava/nio/ByteBuffer;II)Ljava/nio/ByteBuffer;
    .locals 6
    .param p0, "source"    # Ljava/nio/ByteBuffer;
    .param p1, "start"    # I
    .param p2, "end"    # I

    .line 233
    if-ltz p1, :cond_2

    .line 236
    if-lt p2, p1, :cond_1

    .line 239
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->capacity()I

    move-result v0

    .line 240
    .local v0, "capacity":I
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->capacity()I

    move-result v1

    if-gt p2, v1, :cond_0

    .line 243
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->limit()I

    move-result v1

    .line 244
    .local v1, "originalLimit":I
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->position()I

    move-result v2

    .line 246
    .local v2, "originalPosition":I
    const/4 v3, 0x0

    :try_start_0
    invoke-virtual {p0, v3}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 247
    invoke-virtual {p0, p2}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 248
    invoke-virtual {p0, p1}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 249
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->slice()Ljava/nio/ByteBuffer;

    move-result-object v4

    .line 250
    .local v4, "result":Ljava/nio/ByteBuffer;
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->order()Ljava/nio/ByteOrder;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 251
    nop

    .line 253
    invoke-virtual {p0, v3}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 254
    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 255
    invoke-virtual {p0, v2}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 251
    return-object v4

    .line 253
    .end local v4    # "result":Ljava/nio/ByteBuffer;
    :catchall_0
    move-exception v4

    invoke-virtual {p0, v3}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 254
    invoke-virtual {p0, v1}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 255
    invoke-virtual {p0, v2}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 256
    throw v4

    .line 241
    .end local v1    # "originalLimit":I
    .end local v2    # "originalPosition":I
    :cond_0
    new-instance v1, Ljava/lang/IllegalArgumentException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "end > capacity: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " > "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 237
    .end local v0    # "capacity":I
    :cond_1
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "end < start: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " < "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 234
    :cond_2
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "start: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private static a(Ljava/nio/ByteBuffer;)V
    .locals 2
    .param p0, "buffer"    # Ljava/nio/ByteBuffer;

    .line 291
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->order()Ljava/nio/ByteOrder;

    move-result-object v0

    sget-object v1, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    if-ne v0, v1, :cond_0

    .line 294
    return-void

    .line 292
    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "ByteBuffer byte order must be little endian"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public static b(Ljava/nio/channels/FileChannel;)J
    .locals 2
    .param p0, "fileChannel"    # Ljava/nio/channels/FileChannel;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 97
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/gongxiang/a;->c(Ljava/nio/channels/FileChannel;)J

    move-result-wide v0

    invoke-static {p0, v0, v1}, Lcom/bianfeng/ymnsdk/gongxiang/a;->b(Ljava/nio/channels/FileChannel;J)J

    move-result-wide v0

    return-wide v0
.end method

.method public static b(Ljava/nio/channels/FileChannel;J)J
    .locals 5
    .param p0, "fileChannel"    # Ljava/nio/channels/FileChannel;
    .param p1, "commentLength"    # J
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 116
    const/4 v0, 0x4

    invoke-static {v0}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 117
    .local v0, "zipCentralDirectoryStart":Ljava/nio/ByteBuffer;
    sget-object v1, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 118
    invoke-virtual {p0}, Ljava/nio/channels/FileChannel;->size()J

    move-result-wide v1

    sub-long/2addr v1, p1

    const-wide/16 v3, 0x6

    sub-long/2addr v1, v3

    invoke-virtual {p0, v1, v2}, Ljava/nio/channels/FileChannel;->position(J)Ljava/nio/channels/FileChannel;

    .line 119
    invoke-virtual {p0, v0}, Ljava/nio/channels/FileChannel;->read(Ljava/nio/ByteBuffer;)I

    .line 120
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->getInt(I)I

    move-result v1

    int-to-long v1, v1

    .line 121
    .local v1, "centralDirStartOffset":J
    return-wide v1
.end method

.method public static b(Ljava/nio/ByteBuffer;)Ljava/util/Map;
    .locals 11
    .param p0, "apkSigningBlock"    # Ljava/nio/ByteBuffer;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/nio/ByteBuffer;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/nio/ByteBuffer;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    .line 186
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/gongxiang/a;->a(Ljava/nio/ByteBuffer;)V

    .line 193
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->capacity()I

    move-result v0

    add-int/lit8 v0, v0, -0x18

    const/16 v1, 0x8

    invoke-static {p0, v1, v0}, Lcom/bianfeng/ymnsdk/gongxiang/a;->a(Ljava/nio/ByteBuffer;II)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 195
    .local v0, "pairs":Ljava/nio/ByteBuffer;
    new-instance v2, Ljava/util/LinkedHashMap;

    invoke-direct {v2}, Ljava/util/LinkedHashMap;-><init>()V

    .line 197
    .local v2, "idValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    const/4 v3, 0x0

    .line 198
    .local v3, "entryCount":I
    :goto_0
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->hasRemaining()Z

    move-result v4

    if-eqz v4, :cond_3

    .line 199
    add-int/lit8 v3, v3, 0x1

    .line 200
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v4

    if-lt v4, v1, :cond_2

    .line 204
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->getLong()J

    move-result-wide v4

    .line 205
    .local v4, "lenLong":J
    const-wide/16 v6, 0x4

    const-string v8, " size out of range: "

    const-string v9, "APK Signing Block entry #"

    cmp-long v10, v4, v6

    if-ltz v10, :cond_1

    const-wide/32 v6, 0x7fffffff

    cmp-long v10, v4, v6

    if-gtz v10, :cond_1

    .line 210
    long-to-int v6, v4

    .line 211
    .local v6, "len":I
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->position()I

    move-result v7

    add-int/2addr v7, v6

    .line 212
    .local v7, "nextEntryPos":I
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v10

    if-gt v6, v10, :cond_0

    .line 217
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v8

    .line 218
    .local v8, "id":I
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    add-int/lit8 v10, v6, -0x4

    invoke-static {v0, v10}, Lcom/bianfeng/ymnsdk/gongxiang/a;->a(Ljava/nio/ByteBuffer;I)Ljava/nio/ByteBuffer;

    move-result-object v10

    invoke-interface {v2, v9, v10}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 220
    invoke-virtual {v0, v7}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 221
    .end local v4    # "lenLong":J
    .end local v6    # "len":I
    .end local v7    # "nextEntryPos":I
    .end local v8    # "id":I
    goto :goto_0

    .line 213
    .restart local v4    # "lenLong":J
    .restart local v6    # "len":I
    .restart local v7    # "nextEntryPos":I
    :cond_0
    new-instance v1, Lcom/bianfeng/ymnsdk/gongxiang/f;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", available: "

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 215
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->remaining()I

    move-result v8

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-direct {v1, v8}, Lcom/bianfeng/ymnsdk/gongxiang/f;-><init>(Ljava/lang/String;)V

    throw v1

    .line 206
    .end local v6    # "len":I
    .end local v7    # "nextEntryPos":I
    :cond_1
    new-instance v1, Lcom/bianfeng/ymnsdk/gongxiang/f;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v1, v6}, Lcom/bianfeng/ymnsdk/gongxiang/f;-><init>(Ljava/lang/String;)V

    throw v1

    .line 201
    .end local v4    # "lenLong":J
    :cond_2
    new-instance v1, Lcom/bianfeng/ymnsdk/gongxiang/f;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Insufficient data to read size of APK Signing Block entry #"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v1, v4}, Lcom/bianfeng/ymnsdk/gongxiang/f;-><init>(Ljava/lang/String;)V

    throw v1

    .line 223
    :cond_3
    return-object v2
.end method

.method public static c(Ljava/nio/channels/FileChannel;)J
    .locals 14
    .param p0, "fileChannel"    # Ljava/nio/channels/FileChannel;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 57
    invoke-virtual {p0}, Ljava/nio/channels/FileChannel;->size()J

    move-result-wide v0

    .line 58
    .local v0, "archiveSize":J
    const-wide/16 v2, 0x16

    cmp-long v4, v0, v2

    if-ltz v4, :cond_2

    .line 70
    sub-long v4, v0, v2

    const-wide/32 v6, 0xffff

    invoke-static {v4, v5, v6, v7}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v4

    .line 71
    .local v4, "maxCommentLength":J
    sub-long v2, v0, v2

    .line 72
    .local v2, "eocdWithEmptyCommentStartPosition":J
    const/4 v6, 0x0

    .local v6, "expectedCommentLength":I
    :goto_0
    int-to-long v7, v6

    cmp-long v9, v7, v4

    if-gtz v9, :cond_1

    .line 74
    int-to-long v7, v6

    sub-long v7, v2, v7

    .line 76
    .local v7, "eocdStartPos":J
    const/4 v9, 0x4

    invoke-static {v9}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v9

    .line 77
    .local v9, "byteBuffer":Ljava/nio/ByteBuffer;
    invoke-virtual {p0, v7, v8}, Ljava/nio/channels/FileChannel;->position(J)Ljava/nio/channels/FileChannel;

    .line 78
    invoke-virtual {p0, v9}, Ljava/nio/channels/FileChannel;->read(Ljava/nio/ByteBuffer;)I

    .line 79
    sget-object v10, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v9, v10}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 81
    const/4 v10, 0x0

    invoke-virtual {v9, v10}, Ljava/nio/ByteBuffer;->getInt(I)I

    move-result v11

    const v12, 0x6054b50

    if-ne v11, v12, :cond_0

    .line 82
    const/4 v11, 0x2

    invoke-static {v11}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v11

    .line 83
    .local v11, "commentLengthByteBuffer":Ljava/nio/ByteBuffer;
    const-wide/16 v12, 0x14

    add-long/2addr v12, v7

    invoke-virtual {p0, v12, v13}, Ljava/nio/channels/FileChannel;->position(J)Ljava/nio/channels/FileChannel;

    .line 84
    invoke-virtual {p0, v11}, Ljava/nio/channels/FileChannel;->read(Ljava/nio/ByteBuffer;)I

    .line 85
    sget-object v12, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v11, v12}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 87
    invoke-virtual {v11, v10}, Ljava/nio/ByteBuffer;->getShort(I)S

    move-result v10

    .line 88
    .local v10, "actualCommentLength":I
    if-ne v10, v6, :cond_0

    .line 89
    int-to-long v12, v10

    return-wide v12

    .line 73
    .end local v7    # "eocdStartPos":J
    .end local v9    # "byteBuffer":Ljava/nio/ByteBuffer;
    .end local v10    # "actualCommentLength":I
    .end local v11    # "commentLengthByteBuffer":Ljava/nio/ByteBuffer;
    :cond_0
    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    .line 93
    .end local v6    # "expectedCommentLength":I
    :cond_1
    new-instance v6, Ljava/io/IOException;

    const-string v7, "ZIP End of Central Directory (EOCD) record not found"

    invoke-direct {v6, v7}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v6

    .line 59
    .end local v2    # "eocdWithEmptyCommentStartPosition":J
    .end local v4    # "maxCommentLength":J
    :cond_2
    new-instance v2, Ljava/io/IOException;

    const-string v3, "APK too small for ZIP End of Central Directory (EOCD) record"

    invoke-direct {v2, v3}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v2
.end method
