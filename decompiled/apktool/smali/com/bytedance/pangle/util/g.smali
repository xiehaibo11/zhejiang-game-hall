.class public final Lcom/bytedance/pangle/util/g;
.super Ljava/lang/Object;


# static fields
.field public static a:Ljava/lang/String;

.field static b:Ljava/lang/String;


# direct methods
.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 238
    sget-object v0, Lcom/bytedance/pangle/util/g;->b:Ljava/lang/String;

    if-nez v0, :cond_0

    .line 239
    invoke-virtual {p0}, Landroid/content/Context;->getCacheDir()Ljava/io/File;

    move-result-object p0

    invoke-virtual {p0}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 242
    :try_start_0
    invoke-virtual {p0}, Ljava/io/File;->getCanonicalPath()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bytedance/pangle/util/g;->b:Ljava/lang/String;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 244
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    .line 248
    :cond_0
    :goto_0
    sget-object p0, Lcom/bytedance/pangle/util/g;->b:Ljava/lang/String;

    return-object p0
.end method

.method public static a(Ljava/io/Closeable;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 88
    :try_start_0
    invoke-interface {p0}, Ljava/io/Closeable;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method public static a(Ljava/io/File;)V
    .locals 3

    if-eqz p0, :cond_3

    .line 32
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 35
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1a

    const/4 v2, 0x0

    if-lt v0, v1, :cond_1

    .line 36
    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    :try_start_0
    new-array v0, v2, [Ljava/lang/String;

    .line 1127
    invoke-static {p0, v0}, Ljava/nio/file/Paths;->get(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;

    move-result-object p0

    new-instance v0, Lcom/bytedance/pangle/util/h$1;

    invoke-direct {v0}, Lcom/bytedance/pangle/util/h$1;-><init>()V

    invoke-static {p0, v0}, Ljava/nio/file/Files;->walkFileTree(Ljava/nio/file/Path;Ljava/nio/file/FileVisitor;)Ljava/nio/file/Path;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void

    .line 38
    :cond_1
    invoke-virtual {p0}, Ljava/io/File;->isDirectory()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 39
    invoke-virtual {p0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 41
    :goto_0
    array-length v1, v0

    if-ge v2, v1, :cond_2

    .line 42
    aget-object v1, v0, v2

    invoke-static {v1}, Lcom/bytedance/pangle/util/g;->a(Ljava/io/File;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 46
    :cond_2
    invoke-virtual {p0}, Ljava/io/File;->delete()Z

    :cond_3
    :goto_1
    return-void
.end method

.method public static a(Ljava/io/InputStream;Ljava/io/OutputStream;)V
    .locals 0

    .line 51
    invoke-static {p0, p1}, Lcom/bytedance/pangle/util/g;->b(Ljava/io/InputStream;Ljava/io/OutputStream;)V

    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 1

    .line 28
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bytedance/pangle/util/g;->a(Ljava/io/File;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 259
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 261
    new-instance p0, Ljava/io/File;

    invoke-direct {p0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 263
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_8

    .line 266
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result p1

    if-eqz p1, :cond_7

    .line 269
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_0

    .line 270
    invoke-virtual {p0}, Ljava/io/File;->mkdirs()Z

    .line 272
    :cond_0
    invoke-virtual {p0}, Ljava/io/File;->isDirectory()Z

    move-result p1

    if-eqz p1, :cond_6

    .line 276
    invoke-virtual {v0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 277
    array-length v0, p1

    if-nez v0, :cond_1

    goto :goto_3

    .line 281
    :cond_1
    array-length v0, p1

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_5

    aget-object v3, p1, v2

    .line 283
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    sget-object v5, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 284
    invoke-virtual {v3}, Ljava/io/File;->isDirectory()Z

    move-result v5

    if-eqz v5, :cond_2

    .line 286
    invoke-virtual {v3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, v4}, Lcom/bytedance/pangle/util/g;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 289
    :cond_2
    new-instance v5, Ljava/io/File;

    invoke-direct {v5, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 291
    invoke-virtual {v5}, Ljava/io/File;->exists()Z

    move-result v5

    if-nez v5, :cond_4

    .line 294
    new-instance v5, Ljava/io/BufferedInputStream;

    new-instance v6, Ljava/io/FileInputStream;

    invoke-direct {v6, v3}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v5, v6}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V

    .line 295
    new-instance v3, Ljava/io/BufferedOutputStream;

    new-instance v6, Ljava/io/FileOutputStream;

    invoke-direct {v6, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V

    invoke-direct {v3, v6}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    const/16 v4, 0x2000

    new-array v4, v4, [B

    .line 299
    :goto_1
    invoke-virtual {v5, v4}, Ljava/io/BufferedInputStream;->read([B)I

    move-result v6

    const/4 v7, -0x1

    if-eq v6, v7, :cond_3

    .line 300
    invoke-virtual {v3, v4, v1, v6}, Ljava/io/BufferedOutputStream;->write([BII)V

    goto :goto_1

    .line 302
    :cond_3
    invoke-virtual {v3}, Ljava/io/BufferedOutputStream;->close()V

    .line 303
    invoke-virtual {v5}, Ljava/io/BufferedInputStream;->close()V

    :cond_4
    :goto_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_5
    :goto_3
    return-void

    .line 273
    :cond_6
    new-instance p0, Ljava/lang/Exception;

    const-string p1, "\u76ee\u6807\u6587\u4ef6\u5939\u4e0d\u662f\u76ee\u5f55"

    invoke-direct {p0, p1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p0

    .line 267
    :cond_7
    new-instance p0, Ljava/lang/Exception;

    const-string p1, "\u6e90\u6587\u4ef6\u5939\u4e0d\u662f\u76ee\u5f55"

    invoke-direct {p0, p1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p0

    .line 264
    :cond_8
    new-instance p0, Ljava/lang/Exception;

    const-string p1, "\u6587\u4ef6\u5939\u4e0d\u5b58\u5728"

    invoke-direct {p0, p1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static a(Ljava/util/zip/ZipFile;)V
    .locals 0

    if-eqz p0, :cond_0

    .line 101
    :try_start_0
    invoke-virtual {p0}, Ljava/util/zip/ZipFile;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method private static b(Ljava/io/InputStream;Ljava/io/OutputStream;)V
    .locals 3

    if-eqz p0, :cond_2

    if-nez p1, :cond_0

    goto :goto_1

    .line 59
    :cond_0
    new-instance v0, Ljava/io/BufferedInputStream;

    invoke-direct {v0, p0}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V

    .line 60
    new-instance p0, Ljava/io/BufferedOutputStream;

    invoke-direct {p0, p1}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    const/high16 p1, 0x100000

    :try_start_0
    new-array p1, p1, [B

    .line 66
    :goto_0
    invoke-virtual {v0, p1}, Ljava/io/BufferedInputStream;->read([B)I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_1

    const/4 v2, 0x0

    .line 67
    invoke-virtual {p0, p1, v2, v1}, Ljava/io/BufferedOutputStream;->write([BII)V

    goto :goto_0

    .line 70
    :cond_1
    invoke-virtual {p0}, Ljava/io/BufferedOutputStream;->flush()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 76
    invoke-virtual {v0}, Ljava/io/BufferedInputStream;->close()V

    .line 80
    invoke-virtual {p0}, Ljava/io/BufferedOutputStream;->close()V

    return-void

    :catchall_0
    move-exception p1

    .line 76
    invoke-virtual {v0}, Ljava/io/BufferedInputStream;->close()V

    .line 80
    invoke-virtual {p0}, Ljava/io/BufferedOutputStream;->close()V

    .line 82
    throw p1

    :cond_2
    :goto_1
    return-void
.end method
