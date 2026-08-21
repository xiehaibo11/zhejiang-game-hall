.class public final Lcom/bytedance/pangle/util/a/a;
.super Ljava/lang/Object;


# direct methods
.method public static a(Ljava/io/File;)[Ljava/lang/String;
    .locals 11

    const-string v0, ""

    const/4 v1, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x0

    .line 43
    :try_start_0
    new-instance v4, Ljava/util/zip/ZipFile;

    invoke-direct {v4, p0}, Ljava/util/zip/ZipFile;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 44
    :try_start_1
    invoke-virtual {v4}, Ljava/util/zip/ZipFile;->entries()Ljava/util/Enumeration;

    move-result-object p0

    .line 45
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    move v5, v2

    move v6, v5

    move v7, v6

    .line 47
    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v8

    if-eqz v8, :cond_4

    .line 48
    invoke-interface {p0}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/util/zip/ZipEntry;

    .line 49
    invoke-virtual {v8}, Ljava/util/zip/ZipEntry;->getName()Ljava/lang/String;

    move-result-object v9

    const-string v10, "META-INF/"

    invoke-virtual {v9, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_0

    .line 51
    invoke-virtual {v8}, Ljava/util/zip/ZipEntry;->getName()Ljava/lang/String;

    move-result-object v9

    const-string v10, "MANIFEST.MF"

    invoke-virtual {v9, v10}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_1

    move v7, v1

    goto :goto_1

    .line 53
    :cond_1
    invoke-virtual {v8}, Ljava/util/zip/ZipEntry;->getName()Ljava/lang/String;

    move-result-object v9

    const-string v10, ".SF"

    invoke-virtual {v9, v10}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_2

    move v5, v1

    goto :goto_1

    .line 55
    :cond_2
    invoke-virtual {v8}, Ljava/util/zip/ZipEntry;->getName()Ljava/lang/String;

    move-result-object v9

    const-string v10, ".RSA"

    invoke-virtual {v9, v10}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_3

    move v6, v1

    .line 58
    :cond_3
    :goto_1
    invoke-virtual {v8}, Ljava/util/zip/ZipEntry;->getCrc()J

    move-result-wide v8

    invoke-static {v8, v9}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v8

    invoke-interface {v3, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 63
    :cond_4
    invoke-static {}, Ljava/util/Collections;->reverseOrder()Ljava/util/Comparator;

    move-result-object p0

    invoke-static {v3, p0}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    .line 66
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    .line 67
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_2
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v8

    if-eqz v8, :cond_5

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/Long;

    .line 68
    invoke-virtual {p0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_5
    if-eqz v7, :cond_6

    if-eqz v5, :cond_6

    if-eqz v6, :cond_6

    .line 71
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bytedance/pangle/util/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    move-object v3, v0

    goto :goto_3

    :cond_6
    const-string p0, "without v1 signature."
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v3, p0

    move-object p0, v0

    .line 78
    :goto_3
    invoke-static {v4}, Lcom/bytedance/pangle/util/a/c;->a(Ljava/util/zip/ZipFile;)V

    goto :goto_6

    :catchall_0
    move-exception p0

    move-object v3, v4

    goto :goto_4

    :catch_0
    move-object v3, v4

    goto :goto_5

    :catchall_1
    move-exception p0

    :goto_4
    invoke-static {v3}, Lcom/bytedance/pangle/util/a/c;->a(Ljava/util/zip/ZipFile;)V

    .line 79
    throw p0

    .line 78
    :catch_1
    :goto_5
    invoke-static {v3}, Lcom/bytedance/pangle/util/a/c;->a(Ljava/util/zip/ZipFile;)V

    move-object p0, v0

    move-object v3, p0

    :goto_6
    const/4 v4, 0x3

    new-array v4, v4, [Ljava/lang/String;

    aput-object p0, v4, v2

    .line 82
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_7

    goto :goto_7

    :cond_7
    const-string v0, "V1"

    :goto_7
    aput-object v0, v4, v1

    const/4 p0, 0x2

    aput-object v3, v4, p0

    return-object v4
.end method
