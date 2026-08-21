.class final Lcom/kwad/sdk/api/loader/b;
.super Ljava/lang/Object;


# direct methods
.method private static D(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    new-instance v0, Ljava/io/FileInputStream;

    invoke-direct {v0, p0}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V

    new-instance p0, Ljava/io/FileOutputStream;

    invoke-direct {p0, p1}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V

    invoke-static {v0, p0}, Lcom/kwad/sdk/api/loader/b;->d(Ljava/io/InputStream;Ljava/io/OutputStream;)V

    return-void
.end method

.method private static E(Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    invoke-static {}, Lcom/kwad/sdk/api/loader/w;->is64Bit()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "lib/arm64-v8a/"

    goto :goto_0

    :cond_0
    const-string v0, "lib/armeabi-v7a/"

    :goto_0
    const/4 v1, 0x0

    :try_start_0
    new-instance v2, Ljava/util/zip/ZipFile;

    invoke-direct {v2, p0}, Ljava/util/zip/ZipFile;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {v2}, Ljava/util/zip/ZipFile;->entries()Ljava/util/Enumeration;

    move-result-object p0

    :cond_1
    :goto_1
    invoke-interface {p0}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {p0}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/zip/ZipEntry;

    invoke-virtual {v1}, Ljava/util/zip/ZipEntry;->isDirectory()Z

    move-result v3

    if-nez v3, :cond_1

    invoke-virtual {v1}, Ljava/util/zip/ZipEntry;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    const-string v4, "../"

    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    const-string v4, ".so"

    invoke-virtual {v3, v4}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-virtual {v3, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    new-instance v4, Ljava/io/File;

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v3, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v4, p1, v3}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, v1}, Ljava/util/zip/ZipFile;->getInputStream(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;

    move-result-object v1

    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-static {v1, v3}, Lcom/kwad/sdk/api/loader/b;->d(Ljava/io/InputStream;Ljava/io/OutputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :cond_2
    :try_start_2
    invoke-virtual {v2}, Ljava/util/zip/ZipFile;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    return-void

    :catchall_0
    move-exception p0

    move-object v1, v2

    goto :goto_2

    :catchall_1
    move-exception p0

    :goto_2
    if-eqz v1, :cond_3

    :try_start_3
    invoke-virtual {v1}, Ljava/util/zip/ZipFile;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    :catch_1
    :cond_3
    throw p0
.end method

.method static a(Landroid/content/Context;Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 3

    invoke-static {p0, p3}, Lcom/kwad/sdk/api/loader/h;->o(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v1}, Lcom/kwad/sdk/api/loader/b;->h(Ljava/io/File;)V

    invoke-static {p0, p3}, Lcom/kwad/sdk/api/loader/h;->q(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, p3}, Lcom/kwad/sdk/api/loader/h;->r(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {p0, p3}, Lcom/kwad/sdk/api/loader/h;->s(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    :try_start_0
    invoke-static {p2, v1}, Lcom/kwad/sdk/api/loader/b;->D(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p2, p3}, Lcom/kwad/sdk/api/loader/b;->E(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p0, p1, v1, v2, p3}, Lcom/kwad/sdk/api/loader/k;->b(Landroid/content/Context;Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/api/loader/k;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/api/loader/k;->ys()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0

    :catch_0
    move-exception p0

    new-instance p1, Ljava/io/File;

    invoke-direct {p1, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/b;->h(Ljava/io/File;)V

    new-instance p1, Ljava/io/File;

    invoke-direct {p1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/b;->h(Ljava/io/File;)V

    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/b;->h(Ljava/io/File;)V

    new-instance p1, Ljava/io/File;

    invoke-direct {p1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/b;->h(Ljava/io/File;)V

    throw p0
.end method

.method private static c(Ljava/io/InputStream;Ljava/io/OutputStream;)V
    .locals 3

    const/16 v0, 0x2000

    new-array v0, v0, [B

    :goto_0
    invoke-virtual {p0, v0}, Ljava/io/InputStream;->read([B)I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_0

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v2, v1}, Ljava/io/OutputStream;->write([BII)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private static d(Ljava/io/InputStream;Ljava/io/OutputStream;)V
    .locals 1

    :try_start_0
    invoke-static {p0, p1}, Lcom/kwad/sdk/api/loader/b;->c(Ljava/io/InputStream;Ljava/io/OutputStream;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_0

    :try_start_1
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_0
    :try_start_2
    invoke-virtual {p1}, Ljava/io/OutputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :catch_1
    return-void

    :catchall_0
    move-exception v0

    if-eqz p0, :cond_1

    :try_start_3
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    :catch_2
    :cond_1
    :try_start_4
    invoke-virtual {p1}, Ljava/io/OutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    :catch_3
    throw v0
.end method

.method private static h(Ljava/io/File;)V
    .locals 3

    invoke-virtual {p0}, Ljava/io/File;->isFile()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Ljava/io/File;->delete()Z

    return-void

    :cond_0
    invoke-virtual {p0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object p0

    if-eqz p0, :cond_1

    array-length v0, p0

    if-lez v0, :cond_1

    array-length v0, p0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    aget-object v2, p0, v1

    invoke-static {v2}, Lcom/kwad/sdk/api/loader/b;->h(Ljava/io/File;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method
