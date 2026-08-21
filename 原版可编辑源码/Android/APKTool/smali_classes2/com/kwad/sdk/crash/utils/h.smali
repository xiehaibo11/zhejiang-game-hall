.class public final Lcom/kwad/sdk/crash/utils/h;
.super Ljava/lang/Object;


# static fields
.field public static final aBU:C

.field public static final aBV:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 4

    sget-char v0, Ljava/io/File;->separatorChar:C

    sput-char v0, Lcom/kwad/sdk/crash/utils/h;->aBU:C

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Lcom/kwad/sdk/crash/utils/StringBuilderWriter;

    const/4 v2, 0x4

    invoke-direct {v1, v2}, Lcom/kwad/sdk/crash/utils/StringBuilderWriter;-><init>(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    new-instance v2, Ljava/io/PrintWriter;

    invoke-direct {v2, v1}, Ljava/io/PrintWriter;-><init>(Ljava/io/Writer;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    invoke-virtual {v2}, Ljava/io/PrintWriter;->println()V

    invoke-virtual {v1}, Lcom/kwad/sdk/crash/utils/StringBuilderWriter;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    invoke-static {v2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    goto :goto_1

    :catch_0
    move-exception v0

    goto :goto_0

    :catchall_0
    move-exception v2

    move-object v3, v2

    move-object v2, v0

    move-object v0, v3

    goto :goto_2

    :catch_1
    move-exception v2

    move-object v3, v2

    move-object v2, v0

    move-object v0, v3

    goto :goto_0

    :catchall_1
    move-exception v1

    move-object v2, v0

    move-object v0, v1

    move-object v1, v2

    goto :goto_2

    :catch_2
    move-exception v1

    move-object v2, v0

    move-object v0, v1

    move-object v1, v2

    :goto_0
    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    invoke-static {v2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    const-string v0, "\n"

    :goto_1
    sput-object v0, Lcom/kwad/sdk/crash/utils/h;->aBV:Ljava/lang/String;

    return-void

    :catchall_2
    move-exception v0

    :goto_2
    invoke-static {v2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw v0
.end method

.method public static F(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v0

    invoke-static {}, Ljava/nio/charset/Charset;->defaultCharset()Ljava/nio/charset/Charset;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/a;->a(Ljava/nio/charset/Charset;)Ljava/nio/charset/Charset;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/crash/utils/h;->a(Ljava/io/InputStream;Ljava/nio/charset/Charset;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return-object p0

    :catchall_0
    move-exception p0

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p0
.end method

.method public static I(Ljava/io/File;)Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/io/InputStreamReader;

    new-instance v1, Ljava/io/BufferedInputStream;

    new-instance v2, Ljava/io/FileInputStream;

    invoke-direct {v2, p0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v1, v2}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V

    sget-object p0, Lcom/kwad/sdk/crash/utils/a;->UTF_8:Ljava/nio/charset/Charset;

    invoke-direct {v0, v1, p0}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/h;->a(Ljava/io/Reader;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static J(Ljava/io/File;)J
    .locals 5

    :try_start_0
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    new-instance v0, Landroid/os/StatFs;

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Landroid/os/StatFs;-><init>(Ljava/lang/String;)V

    sget p0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x12

    if-ge p0, v1, :cond_0

    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockSize()I

    move-result p0

    int-to-long v1, p0

    invoke-virtual {v0}, Landroid/os/StatFs;->getAvailableBlocks()I

    move-result p0

    int-to-long v3, p0

    mul-long/2addr v1, v3

    return-wide v1

    :cond_0
    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockSizeLong()J

    move-result-wide v1

    invoke-virtual {v0}, Landroid/os/StatFs;->getAvailableBlocksLong()J

    move-result-wide v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    mul-long/2addr v1, v3

    return-wide v1

    :catch_0
    :cond_1
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public static K(Ljava/io/File;)J
    .locals 5

    :try_start_0
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    new-instance v0, Landroid/os/StatFs;

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Landroid/os/StatFs;-><init>(Ljava/lang/String;)V

    sget p0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x12

    if-ge p0, v1, :cond_0

    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockSize()I

    move-result p0

    int-to-long v1, p0

    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockCount()I

    move-result p0

    int-to-long v3, p0

    mul-long/2addr v1, v3

    return-wide v1

    :cond_0
    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockSizeLong()J

    move-result-wide v1

    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockCountLong()J

    move-result-wide v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    mul-long/2addr v1, v3

    return-wide v1

    :catch_0
    :cond_1
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method private static a(Ljava/io/Reader;Ljava/io/Writer;)I
    .locals 2

    invoke-static {p0, p1}, Lcom/kwad/sdk/crash/utils/h;->b(Ljava/io/Reader;Ljava/io/Writer;)J

    move-result-wide p0

    const-wide/32 v0, 0x7fffffff

    cmp-long v0, p0, v0

    if-lez v0, :cond_0

    const/4 p0, -0x1

    return p0

    :cond_0
    long-to-int p0, p0

    return p0
.end method

.method private static a(Ljava/io/InputStream;Ljava/io/OutputStream;[B)J
    .locals 4

    const-wide/16 v0, 0x0

    :goto_0
    const/4 v2, -0x1

    invoke-virtual {p0, p2}, Ljava/io/InputStream;->read([B)I

    move-result v3

    if-eq v2, v3, :cond_0

    const/4 v2, 0x0

    invoke-virtual {p1, p2, v2, v3}, Ljava/io/OutputStream;->write([BII)V

    int-to-long v2, v3

    add-long/2addr v0, v2

    goto :goto_0

    :cond_0
    return-wide v0
.end method

.method private static a(Ljava/io/Reader;Ljava/io/Writer;[C)J
    .locals 4

    const-wide/16 v0, 0x0

    :goto_0
    const/4 v2, -0x1

    invoke-virtual {p0, p2}, Ljava/io/Reader;->read([C)I

    move-result v3

    if-eq v2, v3, :cond_0

    const/4 v2, 0x0

    invoke-virtual {p1, p2, v2, v3}, Ljava/io/Writer;->write([CII)V

    int-to-long v2, v3

    add-long/2addr v0, v2

    goto :goto_0

    :cond_0
    return-wide v0
.end method

.method public static a(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    const/16 v1, 0x400

    new-array v1, v1, [B

    :goto_0
    :try_start_0
    invoke-virtual {p0, v1}, Ljava/io/InputStream;->read([B)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_0

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3, v2}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    :cond_0
    new-instance v1, Ljava/lang/String;

    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>([B)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return-object v1

    :catchall_0
    move-exception v1

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw v1

    :catch_0
    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Ljava/io/InputStream;Ljava/nio/charset/Charset;)Ljava/lang/String;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/crash/utils/StringBuilderWriter;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/utils/StringBuilderWriter;-><init>()V

    invoke-static {p0, v0, p1}, Lcom/kwad/sdk/crash/utils/h;->a(Ljava/io/InputStream;Ljava/io/Writer;Ljava/nio/charset/Charset;)V

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/utils/StringBuilderWriter;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(Ljava/io/Reader;)Ljava/lang/String;
    .locals 5

    new-instance v0, Ljava/io/StringWriter;

    invoke-direct {v0}, Ljava/io/StringWriter;-><init>()V

    :try_start_0
    new-instance v1, Ljava/io/StringWriter;

    invoke-direct {v1}, Ljava/io/StringWriter;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/16 v0, 0x400

    :try_start_1
    new-array v0, v0, [C

    :goto_0
    invoke-virtual {p0, v0}, Ljava/io/Reader;->read([C)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_0

    const/4 v3, 0x0

    invoke-virtual {v1, v0, v3, v2}, Ljava/io/StringWriter;->write([CII)V

    goto :goto_0

    :cond_0
    invoke-virtual {v1}, Ljava/io/StringWriter;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return-object v0

    :catchall_0
    move-exception v0

    goto :goto_1

    :catchall_1
    move-exception v1

    move-object v4, v1

    move-object v1, v0

    move-object v0, v4

    :goto_1
    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw v0
.end method

.method private static a(Ljava/io/InputStream;Ljava/io/Writer;Ljava/nio/charset/Charset;)V
    .locals 1

    new-instance v0, Ljava/io/InputStreamReader;

    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/a;->a(Ljava/nio/charset/Charset;)Ljava/nio/charset/Charset;

    move-result-object p2

    invoke-direct {v0, p0, p2}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V

    invoke-static {v0, p1}, Lcom/kwad/sdk/crash/utils/h;->a(Ljava/io/Reader;Ljava/io/Writer;)I

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V
    .locals 0

    if-eqz p0, :cond_0

    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/a;->a(Ljava/nio/charset/Charset;)Ljava/nio/charset/Charset;

    move-result-object p2

    invoke-virtual {p0, p2}, Ljava/lang/String;->getBytes(Ljava/nio/charset/Charset;)[B

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/io/OutputStream;->write([B)V

    :cond_0
    return-void
.end method

.method private static b(Ljava/io/Reader;Ljava/io/Writer;)J
    .locals 1

    const/16 v0, 0x1000

    new-array v0, v0, [C

    invoke-static {p0, p1, v0}, Lcom/kwad/sdk/crash/utils/h;->a(Ljava/io/Reader;Ljava/io/Writer;[C)J

    move-result-wide p0

    return-wide p0
.end method

.method public static b(Ljava/io/Reader;)Ljava/lang/String;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/crash/utils/StringBuilderWriter;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/utils/StringBuilderWriter;-><init>()V

    invoke-static {p0, v0}, Lcom/kwad/sdk/crash/utils/h;->a(Ljava/io/Reader;Ljava/io/Writer;)I

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/utils/StringBuilderWriter;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static c(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Ljava/io/InputStreamReader;

    invoke-direct {v1, p0}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    new-instance p0, Ljava/io/BufferedReader;

    const/16 v2, 0x400

    invoke-direct {p0, v1, v2}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;I)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/h;->a(Ljava/io/Reader;)Ljava/lang/String;

    move-result-object v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return-object v0

    :catchall_0
    move-exception v0

    goto :goto_0

    :catchall_1
    move-exception p0

    move-object v3, v0

    move-object v0, p0

    move-object p0, v3

    goto :goto_0

    :catchall_2
    move-exception p0

    move-object v1, v0

    move-object v0, p0

    move-object p0, v1

    :goto_0
    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw v0
.end method

.method public static d(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 1

    invoke-static {}, Ljava/nio/charset/Charset;->defaultCharset()Ljava/nio/charset/Charset;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/crash/utils/h;->a(Ljava/io/InputStream;Ljava/nio/charset/Charset;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static g(Ljava/io/InputStream;Ljava/io/OutputStream;)I
    .locals 2

    invoke-static {p0, p1}, Lcom/kwad/sdk/crash/utils/h;->h(Ljava/io/InputStream;Ljava/io/OutputStream;)J

    move-result-wide p0

    const-wide/32 v0, 0x7fffffff

    cmp-long v0, p0, v0

    if-lez v0, :cond_0

    const/4 p0, -0x1

    return p0

    :cond_0
    long-to-int p0, p0

    return p0
.end method

.method public static getAvailableBytes(Ljava/lang/String;)J
    .locals 2

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    :cond_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/h;->J(Ljava/io/File;)J

    move-result-wide v0

    return-wide v0
.end method

.method public static getTotalBytes(Ljava/lang/String;)J
    .locals 2

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    :cond_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/h;->K(Ljava/io/File;)J

    move-result-wide v0

    return-wide v0
.end method

.method private static h(Ljava/io/InputStream;Ljava/io/OutputStream;)J
    .locals 1

    const/16 v0, 0x1000

    new-array v0, v0, [B

    invoke-static {p0, p1, v0}, Lcom/kwad/sdk/crash/utils/h;->a(Ljava/io/InputStream;Ljava/io/OutputStream;[B)J

    move-result-wide p0

    return-wide p0
.end method

.method public static k(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 1

    :try_start_0
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p2}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    invoke-virtual {p2}, Ljava/io/File;->createNewFile()Z

    :cond_0
    new-instance p2, Ljava/io/FileWriter;

    const/4 v0, 0x0

    invoke-direct {p2, p0, v0}, Ljava/io/FileWriter;-><init>(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    invoke-virtual {p2, p1}, Ljava/io/FileWriter;->write(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/io/FileWriter;->flush()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return-void

    :catchall_0
    const/4 p2, 0x0

    :catchall_1
    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return-void
.end method
