.class public Lcom/igexin/push/util/c;
.super Ljava/lang/Object;


# direct methods
.method public static a()V
    .locals 7

    const-string v0, "|"

    const/4 v1, 0x0

    const/4 v2, 0x0

    :try_start_0
    new-instance v3, Ljava/io/File;

    sget-object v4, Lcom/igexin/push/core/d;->R:Ljava/lang/String;

    invoke-direct {v3, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v4

    if-nez v4, :cond_0

    invoke-virtual {v3}, Ljava/io/File;->createNewFile()Z

    move-result v4

    if-nez v4, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "FileUtils | create file : "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " failed !!!"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    invoke-static {v2}, Lcom/igexin/push/util/h;->a(Ljava/io/Closeable;)V

    return-void

    :cond_0
    :try_start_1
    new-instance v3, Ljava/io/FileOutputStream;

    sget-object v4, Lcom/igexin/push/core/d;->R:Ljava/lang/String;

    invoke-direct {v3, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "v01"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/igexin/push/core/d;->z:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-wide v5, Lcom/igexin/push/core/d;->t:J

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0, v2}, Lcom/igexin/push/core/x;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    sget-object v2, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-static {v0, v2}, Lcom/igexin/b/a/a/a;->d([BLjava/lang/String;)[B

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/io/FileOutputStream;->write([B)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    invoke-static {v3}, Lcom/igexin/push/util/h;->a(Ljava/io/Closeable;)V

    goto :goto_1

    :catchall_0
    move-exception v0

    move-object v2, v3

    goto :goto_2

    :catch_0
    move-exception v0

    move-object v2, v3

    goto :goto_0

    :catchall_1
    move-exception v0

    goto :goto_2

    :catch_1
    move-exception v0

    :goto_0
    :try_start_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "FileUtils | "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    invoke-static {v2}, Lcom/igexin/push/util/h;->a(Ljava/io/Closeable;)V

    :goto_1
    return-void

    :goto_2
    invoke-static {v2}, Lcom/igexin/push/util/h;->a(Ljava/io/Closeable;)V

    throw v0
.end method

.method public static varargs a(Ljava/io/File;[Ljava/lang/String;)V
    .locals 4

    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-virtual {p0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object p0

    if-eqz p0, :cond_3

    array-length v0, p0

    if-lez v0, :cond_3

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    invoke-static {p1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    :cond_0
    array-length p1, p0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, p1, :cond_3

    aget-object v2, p0, v1

    if-eqz v0, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_2

    :cond_1
    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_3
    return-void
.end method

.method public static a([BLjava/lang/String;Z)V
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Ljava/io/FileOutputStream;

    new-instance v2, Ljava/io/File;

    invoke-direct {v2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-direct {v1, v2, p2}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {v1, p0}, Ljava/io/FileOutputStream;->write([B)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3

    goto :goto_2

    :catchall_0
    move-exception p0

    move-object v0, v1

    goto :goto_0

    :catch_0
    move-object v0, v1

    goto :goto_1

    :catchall_1
    move-exception p0

    :goto_0
    if-eqz v0, :cond_0

    :try_start_3
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    :catch_1
    :cond_0
    throw p0

    :catch_2
    :goto_1
    if-eqz v0, :cond_1

    :try_start_4
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    :catch_3
    :cond_1
    :goto_2
    return-void
.end method

.method public static a(Landroid/content/Context;)Z
    .locals 1

    new-instance v0, Lcom/igexin/sdk/a/c;

    invoke-direct {v0, p0}, Lcom/igexin/sdk/a/c;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/igexin/sdk/a/c;->b()Z

    move-result p0

    xor-int/lit8 p0, p0, 0x1

    return p0
.end method

.method public static a(Ljava/lang/String;)[B
    .locals 6

    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "FileUtils|get data from file = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " file not exist ######"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    new-array v0, v1, [Ljava/lang/Object;

    invoke-static {p0, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-object v2

    :cond_0
    const/16 v0, 0x400

    new-array v0, v0, [B

    :try_start_0
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, p0}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    new-instance p0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {p0}, Ljava/io/ByteArrayOutputStream;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :goto_0
    :try_start_2
    invoke-virtual {v3, v0}, Ljava/io/FileInputStream;->read([B)I

    move-result v4

    const/4 v5, -0x1

    if-eq v4, v5, :cond_1

    invoke-virtual {p0, v0, v1, v4}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v2
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :try_start_3
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    :catch_0
    :goto_1
    :try_start_4
    invoke-virtual {p0}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_5

    goto :goto_3

    :catch_1
    move-exception v0

    goto :goto_2

    :catchall_0
    move-exception v0

    move-object p0, v2

    goto :goto_4

    :catch_2
    move-exception v0

    move-object p0, v2

    goto :goto_2

    :catchall_1
    move-exception v0

    move-object p0, v2

    goto :goto_5

    :catch_3
    move-exception v0

    move-object p0, v2

    move-object v3, p0

    :goto_2
    :try_start_5
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "FileUtils|"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    if-eqz v3, :cond_2

    :try_start_6
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_4

    :catch_4
    :cond_2
    if-eqz p0, :cond_3

    goto :goto_1

    :catch_5
    :cond_3
    :goto_3
    return-object v2

    :catchall_2
    move-exception v0

    :goto_4
    move-object v2, v3

    :goto_5
    if-eqz v2, :cond_4

    :try_start_7
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_6

    :catch_6
    :cond_4
    if-eqz p0, :cond_5

    :try_start_8
    invoke-virtual {p0}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_7

    :catch_7
    :cond_5
    throw v0
.end method

.method public static b()Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/igexin/push/core/d/d;->a()Lcom/igexin/push/core/d/d;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/d/d;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 8

    const/4 v0, 0x0

    const/4 v1, 0x0

    :try_start_0
    new-instance v2, Ljava/io/RandomAccessFile;

    new-instance v3, Ljava/io/File;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object p0

    invoke-virtual {p0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "/"

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "gt_safe.pid"

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v3, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const-string p0, "rw"

    invoke-direct {v2, v3, p0}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    invoke-virtual {v2}, Ljava/io/RandomAccessFile;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object p0

    invoke-virtual {p0}, Ljava/nio/channels/FileChannel;->lock()Ljava/nio/channels/FileLock;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    invoke-virtual {p0}, Ljava/nio/channels/FileLock;->isValid()Z

    move-result v3

    if-eqz v3, :cond_2

    const/16 v3, 0x80

    new-array v3, v3, [B

    new-instance v4, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v4}, Ljava/io/ByteArrayOutputStream;-><init>()V

    :goto_0
    invoke-virtual {v2, v3}, Ljava/io/RandomAccessFile;->read([B)I

    move-result v5

    const/4 v6, -0x1

    if-eq v5, v6, :cond_0

    invoke-virtual {v4, v3, v1, v5}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    :cond_0
    new-instance v3, Ljava/lang/String;

    invoke-virtual {v4}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/lang/String;-><init>([B)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :try_start_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "FileUtils|old safeCode = "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v4, v1, [Ljava/lang/Object;

    invoke-static {v0, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v0, 0x10

    invoke-static {v0}, Lcom/igexin/push/util/l;->a(I)Ljava/lang/String;

    move-result-object v0
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "FileUtils|new safeCode = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    new-array v4, v1, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v3, "utf-8"

    invoke-virtual {v0, v3}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/io/RandomAccessFile;->write([B)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_1

    :cond_1
    move-object v0, v3

    goto :goto_1

    :catch_0
    move-exception v0

    move-object v7, v2

    move-object v2, v0

    move-object v0, v7

    goto :goto_3

    :cond_2
    :goto_1
    invoke-static {v2}, Lcom/igexin/push/util/h;->a(Ljava/io/Closeable;)V

    if-eqz p0, :cond_4

    invoke-virtual {p0}, Ljava/nio/channels/FileLock;->isValid()Z

    move-result v1

    if-eqz v1, :cond_4

    :try_start_5
    invoke-virtual {p0}, Ljava/nio/channels/FileLock;->release()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_5

    goto :goto_4

    :catchall_0
    move-exception v0

    goto :goto_5

    :catch_1
    move-exception v3

    move-object v7, v3

    move-object v3, v0

    move-object v0, v2

    move-object v2, v7

    goto :goto_3

    :catchall_1
    move-exception p0

    move-object v7, v0

    move-object v0, p0

    move-object p0, v7

    goto :goto_5

    :catch_2
    move-exception v3

    move-object p0, v0

    move-object v0, v2

    goto :goto_2

    :catchall_2
    move-exception p0

    move-object v2, v0

    move-object v0, p0

    move-object p0, v2

    goto :goto_5

    :catch_3
    move-exception v3

    move-object p0, v0

    :goto_2
    move-object v2, v3

    move-object v3, p0

    :goto_3
    :try_start_6
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "FileUtils|get safeCode err = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    invoke-static {v0}, Lcom/igexin/push/util/h;->a(Ljava/io/Closeable;)V

    if-eqz p0, :cond_3

    invoke-virtual {p0}, Ljava/nio/channels/FileLock;->isValid()Z

    move-result v0

    if-eqz v0, :cond_3

    :try_start_7
    invoke-virtual {p0}, Ljava/nio/channels/FileLock;->release()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_4

    :catch_4
    :cond_3
    move-object v0, v3

    :catch_5
    :cond_4
    :goto_4
    return-object v0

    :catchall_3
    move-exception v1

    move-object v2, v0

    move-object v0, v1

    :goto_5
    invoke-static {v2}, Lcom/igexin/push/util/h;->a(Ljava/io/Closeable;)V

    if-eqz p0, :cond_5

    invoke-virtual {p0}, Ljava/nio/channels/FileLock;->isValid()Z

    move-result v1

    if-eqz v1, :cond_5

    :try_start_8
    invoke-virtual {p0}, Ljava/nio/channels/FileLock;->release()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_6

    :catch_6
    :cond_5
    throw v0
.end method

.method public static c()Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/igexin/push/core/d/d;->a()Lcom/igexin/push/core/d/d;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/d/d;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "gtpush"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p0, "/log/"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static d()J
    .locals 2

    invoke-static {}, Lcom/igexin/push/core/d/d;->a()Lcom/igexin/push/core/d/d;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/d/d;->c(Landroid/content/Context;)J

    move-result-wide v0

    return-wide v0
.end method

.method public static e()V
    .locals 3

    invoke-static {}, Lcom/igexin/push/core/d/d;->a()Lcom/igexin/push/core/d/d;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    sget-object v2, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/igexin/push/core/d/d;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public static f()V
    .locals 8

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/init.pid"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    :try_start_0
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_1

    sget-object v3, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v3}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    array-length v4, v3

    new-array v4, v4, [B

    move v5, v1

    :goto_0
    array-length v6, v3

    if-ge v5, v6, :cond_0

    aget-byte v6, v3, v5

    sget-object v7, Lcom/igexin/push/core/d;->V:[B

    aget-byte v7, v7, v5

    xor-int/2addr v6, v7

    int-to-byte v6, v6

    aput-byte v6, v4, v5

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_0
    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, v0}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {v3, v4}, Ljava/io/FileOutputStream;->write([B)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v2, v3

    goto :goto_1

    :catchall_0
    move-exception v0

    move-object v2, v3

    goto :goto_5

    :catch_0
    move-exception v0

    move-object v2, v3

    goto :goto_3

    :cond_1
    :goto_1
    if-eqz v2, :cond_2

    :goto_2
    :try_start_2
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_4

    :catchall_1
    move-exception v0

    goto :goto_5

    :catch_1
    move-exception v0

    :goto_3
    :try_start_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "FileUtils|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v2, :cond_2

    goto :goto_2

    :catch_2
    :cond_2
    :goto_4
    return-void

    :goto_5
    if-eqz v2, :cond_3

    :try_start_4
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    :catch_3
    :cond_3
    throw v0
.end method
