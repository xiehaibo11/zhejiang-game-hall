.class public final Lcom/kwad/sdk/utils/m;
.super Ljava/lang/Object;


# direct methods
.method public static a([Ljava/io/File;Ljava/lang/String;)V
    .locals 1

    const/4 v0, -0x1

    invoke-static {p0, p1, v0}, Lcom/kwad/sdk/utils/m;->a([Ljava/io/File;Ljava/lang/String;I)V

    return-void
.end method

.method private static a([Ljava/io/File;Ljava/lang/String;I)V
    .locals 7

    const/4 p2, 0x0

    :try_start_0
    new-instance v0, Ljava/io/FileOutputStream;

    invoke-direct {v0, p1}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V

    new-instance p1, Ljava/util/zip/ZipOutputStream;

    new-instance v1, Ljava/io/BufferedOutputStream;

    invoke-direct {v1, v0}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    invoke-direct {p1, v1}, Ljava/util/zip/ZipOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/16 v0, 0x1000

    :try_start_1
    new-array v1, v0, [B

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    array-length v4, p0

    if-ge v3, v4, :cond_1

    new-instance v4, Ljava/io/FileInputStream;

    aget-object v5, p0, v3

    invoke-direct {v4, v5}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    new-instance v5, Ljava/io/BufferedInputStream;

    invoke-direct {v5, v4, v0}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :try_start_2
    aget-object p2, p0, v3

    invoke-virtual {p2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p2

    new-instance v4, Ljava/util/zip/ZipEntry;

    const-string v6, "/"

    invoke-virtual {p2, v6}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v6

    add-int/lit8 v6, v6, 0x1

    invoke-virtual {p2, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p2

    invoke-direct {v4, p2}, Ljava/util/zip/ZipEntry;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v4}, Ljava/util/zip/ZipOutputStream;->putNextEntry(Ljava/util/zip/ZipEntry;)V

    :goto_1
    invoke-virtual {v5, v1, v2, v0}, Ljava/io/BufferedInputStream;->read([BII)I

    move-result p2

    const/4 v4, -0x1

    if-eq p2, v4, :cond_0

    invoke-virtual {p1, v1, v2, p2}, Ljava/util/zip/ZipOutputStream;->write([BII)V

    goto :goto_1

    :cond_0
    invoke-virtual {v5}, Ljava/io/BufferedInputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    add-int/lit8 v3, v3, 0x1

    move-object p2, v5

    goto :goto_0

    :catchall_0
    move-exception p0

    move-object p2, v5

    goto :goto_4

    :catch_0
    move-exception p0

    move-object p2, v5

    goto :goto_3

    :cond_1
    :goto_2
    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {p1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return-void

    :catch_1
    move-exception p0

    goto :goto_3

    :catchall_1
    move-exception p0

    move-object p1, p2

    goto :goto_4

    :catch_2
    move-exception p0

    move-object p1, p2

    :goto_3
    :try_start_3
    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception p0

    :goto_4
    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {p1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p0
.end method

.method public static k([B)[B
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    :try_start_0
    new-instance v1, Ljava/io/ByteArrayOutputStream;

    array-length v2, p0

    invoke-direct {v1, v2}, Ljava/io/ByteArrayOutputStream;-><init>(I)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    new-instance v2, Ljava/util/zip/GZIPOutputStream;

    invoke-direct {v2, v1}, Ljava/util/zip/GZIPOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    :try_start_2
    invoke-virtual {v2, p0}, Ljava/util/zip/GZIPOutputStream;->write([B)V

    invoke-virtual {v2}, Ljava/util/zip/GZIPOutputStream;->flush()V

    invoke-virtual {v2}, Ljava/util/zip/GZIPOutputStream;->close()V

    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->flush()V

    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V

    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :try_start_3
    invoke-virtual {v2}, Ljava/util/zip/GZIPOutputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    :try_start_4
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_0

    goto :goto_2

    :catchall_0
    move-exception p0

    :try_start_5
    throw p0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :catchall_1
    move-exception v3

    :try_start_6
    invoke-virtual {v2}, Ljava/util/zip/GZIPOutputStream;->close()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    goto :goto_0

    :catchall_2
    move-exception v2

    :try_start_7
    invoke-virtual {p0, v2}, Ljava/lang/Throwable;->addSuppressed(Ljava/lang/Throwable;)V

    :goto_0
    throw v3
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    :catchall_3
    move-exception p0

    :try_start_8
    throw p0
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    :catchall_4
    move-exception v2

    :try_start_9
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_5

    goto :goto_1

    :catchall_5
    move-exception v1

    :try_start_a
    invoke-virtual {p0, v1}, Ljava/lang/Throwable;->addSuppressed(Ljava/lang/Throwable;)V

    :goto_1
    throw v2
    :try_end_a
    .catch Ljava/io/IOException; {:try_start_a .. :try_end_a} :catch_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_0
    :goto_2
    return-object v0
.end method
