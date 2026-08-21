.class public Lcom/huawei/updatesdk/b/d/c;
.super Landroid/os/AsyncTask;
.source ""


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/huawei/updatesdk/b/d/c$b;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljavax/net/ssl/HttpsURLConnection;

.field private c:Z

.field private d:Lcom/huawei/updatesdk/b/d/b;

.field private e:Landroid/os/Handler;


# direct methods
.method public constructor <init>(Lcom/huawei/updatesdk/b/d/b;)V
    .locals 2

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/huawei/updatesdk/b/d/c;->c:Z

    new-instance v0, Lcom/huawei/updatesdk/b/d/c$b;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/huawei/updatesdk/b/d/c$b;-><init>(Lcom/huawei/updatesdk/b/d/c$a;)V

    iput-object v0, p0, Lcom/huawei/updatesdk/b/d/c;->e:Landroid/os/Handler;

    iput-object p1, p0, Lcom/huawei/updatesdk/b/d/c;->d:Lcom/huawei/updatesdk/b/d/b;

    invoke-virtual {p1}, Lcom/huawei/updatesdk/b/d/b;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p1}, Lcom/huawei/updatesdk/b/d/b;->c()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/huawei/updatesdk/b/d/c;->a:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/huawei/updatesdk/b/d/c;)Ljavax/net/ssl/HttpsURLConnection;
    .locals 0

    iget-object p0, p0, Lcom/huawei/updatesdk/b/d/c;->b:Ljavax/net/ssl/HttpsURLConnection;

    return-object p0
.end method

.method private a(IJLjava/lang/String;I)V
    .locals 1

    new-instance v0, Lcom/huawei/updatesdk/b/d/b;

    invoke-direct {v0}, Lcom/huawei/updatesdk/b/d/b;-><init>()V

    invoke-virtual {v0, p1}, Lcom/huawei/updatesdk/b/d/b;->a(I)V

    invoke-virtual {v0, p2, p3}, Lcom/huawei/updatesdk/b/d/b;->a(J)V

    invoke-virtual {v0, p4}, Lcom/huawei/updatesdk/b/d/b;->a(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/huawei/updatesdk/b/d/c;->e:Landroid/os/Handler;

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1, p5, v0}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private a(Lcom/huawei/updatesdk/b/d/b;Ljava/lang/String;)V
    .locals 5

    const-string v0, "Close FileOutputStream failed!"

    const-string v1, "DownloadMarketTask"

    if-eqz p1, :cond_4

    invoke-virtual {p1}, Lcom/huawei/updatesdk/b/d/b;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto/16 :goto_6

    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "/appmarket.apk"

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-instance v2, Ljava/io/File;

    invoke-direct {v2, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const/4 v3, 0x0

    :try_start_0
    new-instance v4, Ljava/io/FileOutputStream;

    invoke-direct {v4, v2}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-direct {p0, p1, v4, p2}, Lcom/huawei/updatesdk/b/d/c;->a(Lcom/huawei/updatesdk/b/d/b;Ljava/io/OutputStream;Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_1

    new-instance p1, Ljava/io/File;

    invoke-static {}, Lcom/huawei/updatesdk/b/d/c;->e()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/huawei/updatesdk/a/a/d/d;->a(Ljava/io/File;)Z
    :try_end_1
    .catch Ljava/io/FileNotFoundException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_1
    :try_start_2
    invoke-virtual {v4}, Ljava/io/FileOutputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_4

    goto :goto_3

    :catchall_0
    move-exception p1

    move-object v3, v4

    goto :goto_4

    :catch_0
    move-exception p1

    move-object v3, v4

    goto :goto_0

    :catch_1
    move-exception p1

    move-object v3, v4

    goto :goto_2

    :catchall_1
    move-exception p1

    goto :goto_4

    :catch_2
    move-exception p1

    :goto_0
    :try_start_3
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "DOWNLOAD market package Exception error:"

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/huawei/updatesdk/a/a/c/a/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v3, :cond_2

    :goto_1
    :try_start_4
    invoke-virtual {v3}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_4

    goto :goto_3

    :catch_3
    move-exception p1

    :goto_2
    :try_start_5
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "DOWNLOAD market package FileNotFoundException error:"

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/io/FileNotFoundException;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/huawei/updatesdk/a/a/c/a/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    if-eqz v3, :cond_2

    goto :goto_1

    :catch_4
    invoke-static {v1, v0}, Lcom/huawei/updatesdk/a/a/c/a/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_3
    return-void

    :goto_4
    if-eqz v3, :cond_3

    :try_start_6
    invoke-virtual {v3}, Ljava/io/FileOutputStream;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_5

    goto :goto_5

    :catch_5
    invoke-static {v1, v0}, Lcom/huawei/updatesdk/a/a/c/a/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_5
    throw p1

    :cond_4
    :goto_6
    return-void
.end method

.method private a(Ljava/io/InputStream;Ljava/io/OutputStream;)V
    .locals 3

    const-string v0, "DownloadMarketTask"

    const-string v1, "downloadUrlToStream(String urlString,OutputStream outputStream) "

    if-eqz p1, :cond_0

    :try_start_0
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/io/IOException;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/huawei/updatesdk/a/a/c/a/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    if-eqz p2, :cond_1

    :try_start_1
    invoke-virtual {p2}, Ljava/io/OutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/io/IOException;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/huawei/updatesdk/a/a/c/a/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_1
    return-void
.end method

.method private a(Lcom/huawei/updatesdk/b/d/b;Ljava/io/OutputStream;Ljava/lang/String;)Z
    .locals 20

    move-object/from16 v7, p0

    const/4 v8, 0x0

    const/4 v9, 0x0

    const-wide/16 v3, -0x1

    const/4 v2, 0x0

    :try_start_0
    invoke-static {}, Lcom/huawei/updatesdk/b/d/d;->a()Lcom/huawei/updatesdk/b/d/d;

    move-result-object v0

    invoke-virtual/range {p1 .. p1}, Lcom/huawei/updatesdk/b/d/b;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/huawei/updatesdk/b/d/d;->a(Ljava/lang/String;)Ljavax/net/ssl/HttpsURLConnection;

    move-result-object v0

    iput-object v0, v7, Lcom/huawei/updatesdk/b/d/c;->b:Ljavax/net/ssl/HttpsURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_6
    .catchall {:try_start_0 .. :try_end_0} :catchall_c

    if-nez v0, :cond_1

    iget-boolean v0, v7, Lcom/huawei/updatesdk/b/d/c;->c:Z

    iget-object v5, v7, Lcom/huawei/updatesdk/b/d/c;->a:Ljava/lang/String;

    const/4 v2, 0x0

    const-wide/16 v3, -0x1

    if-eqz v0, :cond_0

    const/4 v6, 0x3

    goto :goto_0

    :cond_0
    const/4 v6, 0x5

    :goto_0
    move-object/from16 v1, p0

    invoke-direct/range {v1 .. v6}, Lcom/huawei/updatesdk/b/d/c;->a(IJLjava/lang/String;I)V

    invoke-direct {v7, v9, v9}, Lcom/huawei/updatesdk/b/d/c;->a(Ljava/io/InputStream;Ljava/io/OutputStream;)V

    :goto_1
    invoke-static {}, Lcom/huawei/updatesdk/b/g/b;->a()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v7}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    invoke-direct/range {p0 .. p0}, Lcom/huawei/updatesdk/b/d/c;->d()V

    return v8

    :cond_1
    :try_start_1
    invoke-virtual {v0}, Ljavax/net/ssl/HttpsURLConnection;->connect()V

    iget-object v0, v7, Lcom/huawei/updatesdk/b/d/c;->b:Ljavax/net/ssl/HttpsURLConnection;

    invoke-virtual {v0}, Ljavax/net/ssl/HttpsURLConnection;->getResponseCode()I

    move-result v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_6
    .catchall {:try_start_1 .. :try_end_1} :catchall_c

    const/16 v1, 0xc8

    if-eq v1, v0, :cond_3

    const/16 v1, 0xce

    if-eq v1, v0, :cond_3

    iget-boolean v0, v7, Lcom/huawei/updatesdk/b/d/c;->c:Z

    iget-object v5, v7, Lcom/huawei/updatesdk/b/d/c;->a:Ljava/lang/String;

    if-eqz v0, :cond_2

    const/4 v6, 0x3

    goto :goto_0

    :cond_2
    const/4 v2, 0x0

    const-wide/16 v3, -0x1

    const/4 v6, 0x5

    goto :goto_0

    :cond_3
    :try_start_2
    invoke-virtual/range {p1 .. p1}, Lcom/huawei/updatesdk/b/d/b;->e()J

    move-result-wide v10
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_6
    .catchall {:try_start_2 .. :try_end_2} :catchall_c

    :try_start_3
    new-instance v12, Ljava/io/BufferedInputStream;

    iget-object v0, v7, Lcom/huawei/updatesdk/b/d/c;->b:Ljavax/net/ssl/HttpsURLConnection;

    invoke-virtual {v0}, Ljavax/net/ssl/HttpsURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v0

    const/16 v1, 0x2000

    invoke-direct {v12, v0, v1}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;I)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_9

    :try_start_4
    new-instance v13, Ljava/io/BufferedOutputStream;

    move-object/from16 v0, p2

    invoke-direct {v13, v0, v1}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;I)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_8

    :try_start_5
    new-array v0, v1, [B
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_7

    const-wide/16 v14, 0x0

    move v6, v2

    move-wide v1, v14

    :goto_2
    :try_start_6
    invoke-virtual {v12, v0}, Ljava/io/BufferedInputStream;->read([B)I

    move-result v3
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_6

    const/4 v4, -0x1

    if-eq v3, v4, :cond_6

    :try_start_7
    invoke-virtual {v13, v0, v8, v3}, Ljava/io/BufferedOutputStream;->write([BII)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    add-int/2addr v6, v3

    :try_start_8
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long/2addr v3, v1

    invoke-static {v3, v4}, Ljava/lang/Math;->abs(J)J

    move-result-wide v3

    const-wide/16 v16, 0x3e8

    cmp-long v3, v3, v16

    if-lez v3, :cond_5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v16

    int-to-long v1, v6

    cmp-long v1, v1, v10

    if-eqz v1, :cond_4

    iget-object v5, v7, Lcom/huawei/updatesdk/b/d/c;->a:Ljava/lang/String;
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_6

    const/16 v18, 0x2

    move-object/from16 v1, p0

    move v2, v6

    move-wide v3, v10

    move/from16 v19, v6

    move/from16 v6, v18

    :try_start_9
    invoke-direct/range {v1 .. v6}, Lcom/huawei/updatesdk/b/d/c;->a(IJLjava/lang/String;I)V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v0

    goto/16 :goto_9

    :cond_4
    move/from16 v19, v6

    :goto_3
    move-wide/from16 v1, v16

    move/from16 v6, v19

    goto :goto_2

    :cond_5
    move/from16 v19, v6

    goto :goto_2

    :catchall_1
    move-exception v0

    move v2, v6

    goto/16 :goto_a

    :cond_6
    :try_start_a
    invoke-direct {v7, v12, v13}, Lcom/huawei/updatesdk/b/d/c;->a(Ljava/io/InputStream;Ljava/io/OutputStream;)V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_3
    .catchall {:try_start_a .. :try_end_a} :catchall_5

    int-to-long v0, v6

    cmp-long v0, v0, v10

    if-nez v0, :cond_7

    cmp-long v0, v10, v14

    if-lez v0, :cond_7

    :try_start_b
    invoke-virtual/range {p1 .. p1}, Lcom/huawei/updatesdk/b/d/b;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    invoke-virtual/range {p1 .. p1}, Lcom/huawei/updatesdk/b/d/b;->d()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SHA-256"

    move-object/from16 v2, p3

    invoke-static {v2, v1}, Lcom/huawei/updatesdk/a/a/d/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_0
    .catchall {:try_start_b .. :try_end_b} :catchall_2

    if-eqz v0, :cond_7

    const/4 v0, 0x1

    move v12, v0

    goto :goto_4

    :catchall_2
    move-exception v0

    move v2, v6

    move-object v12, v9

    goto/16 :goto_13

    :catch_0
    move-exception v0

    move v2, v6

    move v1, v8

    move-object v12, v9

    goto/16 :goto_e

    :cond_7
    move v12, v8

    :goto_4
    if-eqz v12, :cond_8

    :try_start_c
    iget-object v5, v7, Lcom/huawei/updatesdk/b/d/c;->a:Ljava/lang/String;
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_2
    .catchall {:try_start_c .. :try_end_c} :catchall_4

    const/4 v0, 0x4

    move-object/from16 v1, p0

    move v2, v6

    move-wide v3, v10

    move/from16 v19, v6

    move v6, v0

    :try_start_d
    invoke-direct/range {v1 .. v6}, Lcom/huawei/updatesdk/b/d/c;->a(IJLjava/lang/String;I)V
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_1
    .catchall {:try_start_d .. :try_end_d} :catchall_3

    goto :goto_7

    :catchall_3
    move-exception v0

    move v8, v12

    move/from16 v6, v19

    goto :goto_5

    :catch_1
    move-exception v0

    goto :goto_6

    :catchall_4
    move-exception v0

    move/from16 v19, v6

    move v8, v12

    :goto_5
    move-object v12, v9

    goto/16 :goto_12

    :catch_2
    move-exception v0

    move/from16 v19, v6

    :goto_6
    move-wide v3, v10

    move v1, v12

    move/from16 v2, v19

    goto/16 :goto_f

    :cond_8
    move/from16 v19, v6

    :goto_7
    if-nez v12, :cond_a

    iget-boolean v0, v7, Lcom/huawei/updatesdk/b/d/c;->c:Z

    iget-object v5, v7, Lcom/huawei/updatesdk/b/d/c;->a:Ljava/lang/String;

    if-eqz v0, :cond_9

    const/4 v6, 0x3

    goto :goto_8

    :cond_9
    const/4 v6, 0x5

    :goto_8
    move-object/from16 v1, p0

    move/from16 v2, v19

    move-wide v3, v10

    invoke-direct/range {v1 .. v6}, Lcom/huawei/updatesdk/b/d/c;->a(IJLjava/lang/String;I)V

    :cond_a
    invoke-direct {v7, v9, v9}, Lcom/huawei/updatesdk/b/d/c;->a(Ljava/io/InputStream;Ljava/io/OutputStream;)V

    invoke-static {}, Lcom/huawei/updatesdk/b/g/b;->a()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v7}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    invoke-direct/range {p0 .. p0}, Lcom/huawei/updatesdk/b/d/c;->d()V

    return v12

    :catchall_5
    move-exception v0

    move/from16 v19, v6

    goto :goto_b

    :catch_3
    move-exception v0

    move/from16 v19, v6

    goto :goto_c

    :catchall_6
    move-exception v0

    move/from16 v19, v6

    :goto_9
    move/from16 v2, v19

    goto :goto_a

    :catchall_7
    move-exception v0

    goto :goto_a

    :catchall_8
    move-exception v0

    move-object v13, v9

    goto :goto_a

    :catchall_9
    move-exception v0

    move-object v12, v9

    move-object v13, v12

    :goto_a
    :try_start_e
    invoke-direct {v7, v12, v13}, Lcom/huawei/updatesdk/b/d/c;->a(Ljava/io/InputStream;Ljava/io/OutputStream;)V
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_5
    .catchall {:try_start_e .. :try_end_e} :catchall_b

    :try_start_f
    throw v0
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_4
    .catchall {:try_start_f .. :try_end_f} :catchall_a

    :catchall_a
    move-exception v0

    move v6, v2

    goto :goto_5

    :catch_4
    move-exception v0

    move v6, v2

    move-object v12, v9

    goto :goto_d

    :catchall_b
    move-exception v0

    move v6, v2

    :goto_b
    move-object v9, v13

    goto :goto_12

    :catch_5
    move-exception v0

    move v6, v2

    :goto_c
    move-object v9, v13

    :goto_d
    move v2, v6

    move v1, v8

    :goto_e
    move-wide v3, v10

    goto :goto_10

    :catchall_c
    move-exception v0

    move-object v12, v9

    goto :goto_14

    :catch_6
    move-exception v0

    move v1, v8

    :goto_f
    move-object v12, v9

    :goto_10
    const-string v5, "DownloadMarketTask"

    :try_start_10
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "downloadUrlToStream(String urlString,OutputStream outputStream) "

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/huawei/updatesdk/a/a/c/a/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_d

    if-nez v1, :cond_c

    iget-boolean v0, v7, Lcom/huawei/updatesdk/b/d/c;->c:Z

    iget-object v5, v7, Lcom/huawei/updatesdk/b/d/c;->a:Ljava/lang/String;

    if-eqz v0, :cond_b

    const/4 v6, 0x3

    goto :goto_11

    :cond_b
    const/4 v6, 0x5

    :goto_11
    move-object/from16 v1, p0

    invoke-direct/range {v1 .. v6}, Lcom/huawei/updatesdk/b/d/c;->a(IJLjava/lang/String;I)V

    :cond_c
    invoke-direct {v7, v12, v9}, Lcom/huawei/updatesdk/b/d/c;->a(Ljava/io/InputStream;Ljava/io/OutputStream;)V

    goto/16 :goto_1

    :catchall_d
    move-exception v0

    move v8, v1

    move v6, v2

    move-wide v10, v3

    :goto_12
    move v2, v6

    :goto_13
    move-wide v3, v10

    :goto_14
    if-nez v8, :cond_e

    iget-boolean v1, v7, Lcom/huawei/updatesdk/b/d/c;->c:Z

    iget-object v5, v7, Lcom/huawei/updatesdk/b/d/c;->a:Ljava/lang/String;

    if-eqz v1, :cond_d

    const/4 v6, 0x3

    goto :goto_15

    :cond_d
    const/4 v6, 0x5

    :goto_15
    move-object/from16 v1, p0

    invoke-direct/range {v1 .. v6}, Lcom/huawei/updatesdk/b/d/c;->a(IJLjava/lang/String;I)V

    :cond_e
    invoke-direct {v7, v12, v9}, Lcom/huawei/updatesdk/b/d/c;->a(Ljava/io/InputStream;Ljava/io/OutputStream;)V

    invoke-static {}, Lcom/huawei/updatesdk/b/g/b;->a()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v7}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    invoke-direct/range {p0 .. p0}, Lcom/huawei/updatesdk/b/d/c;->d()V

    throw v0
.end method

.method static synthetic a(Lcom/huawei/updatesdk/b/d/c;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/huawei/updatesdk/b/d/c;->c:Z

    return p1
.end method

.method static synthetic c()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/huawei/updatesdk/b/d/c;->e()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private d()V
    .locals 1

    iget-object v0, p0, Lcom/huawei/updatesdk/b/d/c;->b:Ljavax/net/ssl/HttpsURLConnection;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljavax/net/ssl/HttpsURLConnection;->disconnect()V

    :cond_0
    return-void
.end method

.method private static e()Ljava/lang/String;
    .locals 4

    invoke-static {}, Lcom/huawei/updatesdk/a/b/a/a;->c()Lcom/huawei/updatesdk/a/b/a/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/huawei/updatesdk/a/b/a/a;->b()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, ""

    if-eqz v1, :cond_0

    return-object v2

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "/updatesdk"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v3

    if-nez v3, :cond_1

    invoke-virtual {v1}, Ljava/io/File;->mkdirs()Z

    move-result v1

    if-nez v1, :cond_1

    return-object v2

    :cond_1
    return-object v0
.end method


# virtual methods
.method protected varargs a([Ljava/lang/Void;)Ljava/lang/Void;
    .locals 1

    invoke-static {p0}, Lcom/huawei/updatesdk/b/g/b;->a(Landroid/os/AsyncTask;)V

    iget-object p1, p0, Lcom/huawei/updatesdk/b/d/c;->d:Lcom/huawei/updatesdk/b/d/b;

    invoke-static {}, Lcom/huawei/updatesdk/b/d/c;->e()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/huawei/updatesdk/b/d/c;->a(Lcom/huawei/updatesdk/b/d/b;Ljava/lang/String;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public a()V
    .locals 2

    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/huawei/updatesdk/b/d/c$a;

    invoke-direct {v1, p0}, Lcom/huawei/updatesdk/b/d/c$a;-><init>(Lcom/huawei/updatesdk/b/d/c;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public b()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/huawei/updatesdk/b/d/c;->e:Landroid/os/Handler;

    return-void
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, [Ljava/lang/Void;

    invoke-virtual {p0, p1}, Lcom/huawei/updatesdk/b/d/c;->a([Ljava/lang/Void;)Ljava/lang/Void;

    move-result-object p1

    return-object p1
.end method

.method protected onCancelled()V
    .locals 0

    invoke-super {p0}, Landroid/os/AsyncTask;->onCancelled()V

    invoke-virtual {p0}, Lcom/huawei/updatesdk/b/d/c;->a()V

    return-void
.end method
