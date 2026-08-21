.class public Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;
.super Ljava/lang/Object;
.source "MBResourceManager.java"


# static fields
.field private static volatile MBResourceManager:Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;
    .locals 1

    .line 29
    sget-object v0, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;->MBResourceManager:Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;

    return-object v0
.end method

.method public static getInstance()Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;
    .locals 2

    .line 36
    sget-object v0, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;->MBResourceManager:Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;

    if-nez v0, :cond_1

    .line 37
    const-class v0, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;

    monitor-enter v0

    .line 38
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;->MBResourceManager:Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;

    if-nez v1, :cond_0

    .line 39
    new-instance v1, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;->MBResourceManager:Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;

    .line 41
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 43
    :cond_1
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;->MBResourceManager:Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;

    return-object v0
.end method


# virtual methods
.method public deleteFile(Ljava/io/File;)V
    .locals 5

    if-eqz p1, :cond_3

    .line 115
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 118
    :cond_0
    invoke-virtual {p1}, Ljava/io/File;->isFile()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 120
    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    goto :goto_1

    .line 122
    :cond_1
    invoke-virtual {p1}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v0

    .line 123
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_2

    aget-object v3, v0, v2

    .line 125
    new-instance v4, Ljava/io/File;

    invoke-virtual {v3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v4, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;->deleteFile(Ljava/io/File;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 128
    :cond_2
    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    :cond_3
    :goto_1
    return-void
.end method

.method public deleteFile(Ljava/lang/String;)V
    .locals 1

    .line 154
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;->deleteFile(Ljava/io/File;)V

    return-void
.end method

.method public executeResourceStrategy(Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig;)V
    .locals 4

    if-eqz p1, :cond_1

    .line 189
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig;->getResourceStrategyQueue()Ljava/util/Queue;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig;->getResourceStrategyQueue()Ljava/util/Queue;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Queue;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    .line 190
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig;->getResourceStrategyQueue()Ljava/util/Queue;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 191
    invoke-interface {v0}, Ljava/util/Queue;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 194
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;->getInstance()Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/download/core/GlobalComponent;->getLogger()Lcom/mbridge/msdk/foundation/download/utils/ILogger;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u914d\u7f6e\u7684\u8d44\u6e90\u7ba1\u7406\u7b56\u7565\u6570\u91cf\uff1a "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0}, Ljava/util/Queue;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "ResourceStrategy"

    invoke-interface {v1, v3, v2}, Lcom/mbridge/msdk/foundation/download/utils/ILogger;->log(Ljava/lang/String;Ljava/lang/String;)V

    .line 195
    new-instance v1, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager$1;

    invoke-direct {v1, p0, v0, p1}, Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager$1;-><init>(Lcom/mbridge/msdk/foundation/download/resource/MBResourceManager;Ljava/util/Queue;Lcom/mbridge/msdk/foundation/download/resource/ResourceConfig;)V

    .line 206
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/core/ExecutorManager;->getInstance()Lcom/mbridge/msdk/foundation/download/core/ExecutorManager;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/core/ExecutorManager;->getExecutorSupplier()Lcom/mbridge/msdk/foundation/download/core/ExecutorSupplier;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/foundation/download/core/ExecutorSupplier;->getLruCacheThreadTasks()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    invoke-interface {p1, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    nop

    :cond_1
    :goto_0
    return-void
.end method

.method public getDownloadFileOutputStream(Ljava/io/File;)Lcom/mbridge/msdk/foundation/download/resource/stream/DownloadFileOutputStream;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    if-eqz p1, :cond_1

    .line 174
    invoke-virtual {p1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    .line 175
    invoke-virtual {p1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 178
    :cond_0
    invoke-virtual {p1}, Ljava/io/File;->createNewFile()Z

    .line 179
    new-instance v0, Lcom/mbridge/msdk/foundation/download/resource/stream/FileDownloadRandomAccessDownloadFile;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/foundation/download/resource/stream/FileDownloadRandomAccessDownloadFile;-><init>(Ljava/io/File;)V

    return-object v0

    .line 171
    :cond_1
    new-instance p1, Ljava/io/IOException;

    const-string v0, "file is null"

    invoke-direct {p1, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public getDownloadId(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 136
    :try_start_0
    new-instance v0, Ljava/net/URL;

    invoke-direct {v0, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/net/MalformedURLException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_1

    goto :goto_0

    :catch_0
    const/4 p1, 0x0

    :goto_0
    :try_start_1
    const-string v0, "MD5"

    .line 140
    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    const-string v1, "UTF-8"

    .line 141
    invoke-virtual {p1, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/security/MessageDigest;->update([B)V

    .line 142
    new-instance p1, Ljava/math/BigInteger;

    const/4 v1, 0x1

    invoke-virtual {v0}, Ljava/security/MessageDigest;->digest()[B

    move-result-object v0

    invoke-direct {p1, v1, v0}, Ljava/math/BigInteger;-><init>(I[B)V

    const/16 v0, 0x10

    invoke-virtual {p1, v0}, Ljava/math/BigInteger;->toString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_1 .. :try_end_1} :catch_1

    return-object p1

    :catch_1
    const-string p1, ""

    return-object p1
.end method

.method public getFileSize(Ljava/io/File;Ljava/lang/String;Ljava/lang/String;)J
    .locals 2

    .line 159
    invoke-static {p1, p2, p3}, Lcom/mbridge/msdk/foundation/download/utils/Objects;->exists(Ljava/io/File;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p2

    const-wide/16 v0, 0x0

    if-eqz p2, :cond_0

    .line 161
    :try_start_0
    invoke-virtual {p1}, Ljava/io/File;->length()J

    move-result-wide p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-wide p1

    :catch_0
    :cond_0
    return-wide v0
.end method

.method public unZip(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 47
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 50
    new-instance v0, Lcom/mbridge/msdk/foundation/download/utils/UnzipUtility;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/download/utils/UnzipUtility;-><init>()V

    .line 51
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/foundation/download/utils/UnzipUtility;->unzip(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 48
    :cond_0
    new-instance p1, Ljava/io/IOException;

    const-string p2, "zipFilePath or destDirectory is null"

    invoke-direct {p1, p2}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1
.end method
