.class public final Lcom/mbridge/msdk/optimize/a;
.super Ljava/lang/Object;
.source "SimpleDownload.java"


# direct methods
.method public static a(Ljava/io/File;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/optimize/b;)V
    .locals 10

    const/4 v0, 0x0

    .line 20
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".apk"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 21
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p0, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 23
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_0

    .line 24
    invoke-virtual {v1}, Ljava/io/File;->delete()Z

    :cond_0
    if-eqz p3, :cond_1

    .line 27
    invoke-interface {p3}, Lcom/mbridge/msdk/optimize/b;->a()V

    .line 30
    :cond_1
    new-instance p0, Ljava/net/URL;

    invoke-direct {p0, p2}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 32
    invoke-virtual {p0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p0

    const/16 p1, 0x1f40

    .line 33
    invoke-virtual {p0, p1}, Ljava/net/URLConnection;->setConnectTimeout(I)V

    .line 35
    invoke-virtual {p0}, Ljava/net/URLConnection;->getContentLength()I

    move-result p1

    const-wide/high16 v2, 0x4059000000000000L    # 100.0

    int-to-double v4, p1

    div-double/2addr v2, v4

    .line 40
    invoke-virtual {p0}, Ljava/net/URLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/16 p2, 0x400

    :try_start_1
    new-array p2, p2, [B

    .line 46
    new-instance v4, Ljava/io/FileOutputStream;

    const/4 v5, 0x1

    invoke-direct {v4, v1, v5}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    const/4 v0, 0x0

    move v6, v0

    move v7, v6

    .line 48
    :goto_0
    :try_start_2
    invoke-virtual {p0, p2}, Ljava/io/InputStream;->read([B)I

    move-result v8

    const/4 v9, -0x1

    if-eq v8, v9, :cond_5

    .line 49
    invoke-virtual {v4, p2, v0, v8}, Ljava/io/OutputStream;->write([BII)V

    add-int/2addr v6, v8

    int-to-double v8, v6

    mul-double/2addr v8, v2

    double-to-int v8, v8

    const/16 v9, 0x200

    if-ge v7, v9, :cond_2

    const/16 v9, 0x64

    if-ne v8, v9, :cond_4

    :cond_2
    if-eqz p3, :cond_3

    .line 54
    invoke-interface {p3, v8}, Lcom/mbridge/msdk/optimize/b;->a(I)V

    :cond_3
    move v7, v0

    :cond_4
    add-int/2addr v7, v5

    goto :goto_0

    :cond_5
    if-ne v6, p1, :cond_6

    if-eqz p3, :cond_6

    .line 63
    invoke-interface {p3, v1}, Lcom/mbridge/msdk/optimize/b;->a(Ljava/io/File;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 74
    :cond_6
    :try_start_3
    invoke-virtual {v4}, Ljava/io/OutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 77
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :goto_1
    if-eqz p0, :cond_b

    .line 81
    :try_start_4
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_4

    goto :goto_7

    :catchall_0
    move-object v0, v4

    goto :goto_2

    :catchall_1
    move-object p0, v0

    :catchall_2
    :goto_2
    if-eqz p3, :cond_9

    .line 68
    :try_start_5
    invoke-interface {p3}, Lcom/mbridge/msdk/optimize/b;->b()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    goto :goto_5

    :catchall_3
    move-exception p1

    if-eqz v0, :cond_7

    .line 74
    :try_start_6
    invoke-virtual {v0}, Ljava/io/OutputStream;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_1

    goto :goto_3

    :catch_1
    move-exception p2

    .line 77
    invoke-virtual {p2}, Ljava/io/IOException;->printStackTrace()V

    :cond_7
    :goto_3
    if-eqz p0, :cond_8

    .line 81
    :try_start_7
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_2

    goto :goto_4

    :catch_2
    move-exception p0

    .line 84
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    .line 87
    :cond_8
    :goto_4
    throw p1

    :cond_9
    :goto_5
    if-eqz v0, :cond_a

    .line 74
    :try_start_8
    invoke-virtual {v0}, Ljava/io/OutputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_3

    goto :goto_6

    :catch_3
    move-exception p1

    .line 77
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :cond_a
    :goto_6
    if-eqz p0, :cond_b

    .line 81
    :try_start_9
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_4

    goto :goto_7

    :catch_4
    move-exception p0

    .line 84
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_b
    :goto_7
    return-void
.end method
