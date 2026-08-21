.class public Lcom/bianfeng/fastvo/action/DownloadTask;
.super Landroid/os/AsyncTask;
.source "DownloadTask.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Lcom/bianfeng/fastvo/action/DownloadFile;",
        "Ljava/lang/Integer;",
        "Ljava/lang/Integer;",
        ">;"
    }
.end annotation


# static fields
.field public static final ERROR_CONTENT_LENGTH_INVALID:I = 0x192

.field public static final ERROR_OPEN_CONNECTION_FAIL:I = 0x191

.field public static final ERROR_PAUSE:I = 0x193

.field public static final ERROR_UNKNOW:I = 0x190

.field public static RW_BUF_SIZE:I = 0x400

.field public static final SUCCESS_NORMAL:I = 0xc8

.field public static final SUCCESS_ON_CHECK:I = 0xc9


# instance fields
.field private context:Landroid/content/Context;

.field public fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

.field private lastProgress:I

.field private listener:Lcom/bianfeng/fastvo/action/DownloadListener;

.field private pause:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/bianfeng/fastvo/action/DownloadListener;)V
    .locals 0

    .line 46
    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    .line 47
    iput-object p1, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->context:Landroid/content/Context;

    .line 48
    iput-object p2, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->listener:Lcom/bianfeng/fastvo/action/DownloadListener;

    return-void
.end method

.method private getHttpConnection(Ljava/lang/String;I)Ljava/net/HttpURLConnection;
    .locals 3

    .line 160
    :try_start_0
    new-instance v0, Ljava/net/URL;

    invoke-direct {v0, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 171
    iget-object p1, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->context:Landroid/content/Context;

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object p1

    if-nez p1, :cond_0

    .line 173
    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;

    :cond_0
    const/4 v0, 0x1

    .line 175
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setAllowUserInteraction(Z)V

    const-string v0, "GET"

    .line 176
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    const/16 v0, 0x1388

    .line 177
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const-string v0, "Range"

    .line 178
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "bytes="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "-"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v0, p2}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 182
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method


# virtual methods
.method public cancel()V
    .locals 2

    const/4 v0, 0x1

    .line 229
    iput-boolean v0, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->pause:Z

    .line 230
    iget-object v0, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    .line 231
    iput v1, v0, Lcom/bianfeng/fastvo/action/DownloadFile;->status:I

    :cond_0
    return-void
.end method

.method protected varargs doInBackground([Lcom/bianfeng/fastvo/action/DownloadFile;)Ljava/lang/Integer;
    .locals 13

    .line 53
    iget-object v0, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 54
    aget-object p1, p1, v1

    iput-object p1, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    .line 59
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    iget-object p1, p1, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    invoke-static {p1}, Lcom/bianfeng/fastvo/util/FileUtil;->getFolder(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 60
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 61
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_1

    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    :cond_1
    const/16 p1, 0x190

    const/4 v0, 0x0

    .line 67
    :try_start_0
    new-instance v2, Ljava/io/File;

    iget-object v3, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    iget-object v3, v3, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 68
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_3

    .line 69
    iget-object v1, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    iget-object v3, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    invoke-virtual {v2}, Ljava/io/File;->length()J

    move-result-wide v4

    long-to-int v2, v4

    iput v2, v3, Lcom/bianfeng/fastvo/action/DownloadFile;->totalSize:I

    iput v2, v1, Lcom/bianfeng/fastvo/action/DownloadFile;->downedSize:I

    .line 70
    iget-object v1, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->listener:Lcom/bianfeng/fastvo/action/DownloadListener;

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->listener:Lcom/bianfeng/fastvo/action/DownloadListener;

    iget-object v2, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    invoke-interface {v1, v2}, Lcom/bianfeng/fastvo/action/DownloadListener;->onBegin(Lcom/bianfeng/fastvo/action/DownloadFile;)V

    :cond_2
    const/16 v1, 0xc9

    .line 71
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    return-object p1

    .line 74
    :cond_3
    new-instance v2, Ljava/io/File;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    iget-object v4, v4, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".tmp"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 75
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_5

    .line 76
    invoke-virtual {v2}, Ljava/io/File;->isFile()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-virtual {v2}, Ljava/io/File;->length()J

    move-result-wide v3

    long-to-int v4, v3

    goto :goto_1

    .line 77
    :cond_4
    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    goto :goto_0

    .line 79
    :cond_5
    invoke-virtual {v2}, Ljava/io/File;->createNewFile()Z

    :goto_0
    const/4 v4, 0x0

    .line 82
    :goto_1
    new-instance v3, Ljava/io/RandomAccessFile;

    const-string v5, "rw"

    invoke-direct {v3, v2, v5}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_11
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    int-to-long v5, v4

    .line 83
    :try_start_1
    invoke-virtual {v3, v5, v6}, Ljava/io/RandomAccessFile;->seek(J)V

    .line 85
    iget-object v5, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->listener:Lcom/bianfeng/fastvo/action/DownloadListener;

    if-eqz v5, :cond_6

    iget-object v5, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->listener:Lcom/bianfeng/fastvo/action/DownloadListener;

    iget-object v6, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    invoke-interface {v5, v6}, Lcom/bianfeng/fastvo/action/DownloadListener;->onBegin(Lcom/bianfeng/fastvo/action/DownloadFile;)V

    .line 88
    :cond_6
    iget-object v5, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    iget-object v5, v5, Lcom/bianfeng/fastvo/action/DownloadFile;->url:Ljava/lang/String;

    const-string v6, "NOTE"

    .line 90
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "target url is "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 92
    invoke-direct {p0, v5, v4}, Lcom/bianfeng/fastvo/action/DownloadTask;->getHttpConnection(Ljava/lang/String;I)Ljava/net/HttpURLConnection;

    move-result-object v5
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_10
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    const/16 v6, 0x191

    if-nez v5, :cond_8

    .line 93
    :try_start_2
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_f
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 138
    :try_start_3
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    :catch_0
    if-eqz v5, :cond_7

    .line 144
    :try_start_4
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    :catch_1
    :cond_7
    return-object p1

    .line 95
    :cond_8
    :try_start_5
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->connect()V

    .line 97
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v7

    const/16 v8, 0xc8

    if-eq v7, v8, :cond_a

    const/16 v9, 0xce

    if-eq v7, v9, :cond_a

    .line 99
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_f
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 138
    :try_start_6
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    :catch_2
    if-eqz v5, :cond_9

    .line 144
    :try_start_7
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_3

    :catch_3
    :cond_9
    return-object p1

    .line 101
    :cond_a
    :try_start_8
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->getContentLength()I

    move-result v6

    add-int v7, v4, v6

    const/4 v9, -0x1

    if-ne v6, v9, :cond_c

    const/16 v1, 0x192

    .line 103
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_f
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    .line 138
    :try_start_9
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_4

    :catch_4
    if-eqz v5, :cond_b

    .line 144
    :try_start_a
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_5

    :catch_5
    :cond_b
    return-object p1

    .line 104
    :cond_c
    :try_start_b
    iget-object v6, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    iput v7, v6, Lcom/bianfeng/fastvo/action/DownloadFile;->totalSize:I

    .line 107
    sget v6, Lcom/bianfeng/fastvo/action/DownloadTask;->RW_BUF_SIZE:I

    new-array v6, v6, [B

    .line 111
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v0

    .line 113
    :cond_d
    invoke-virtual {v0, v6}, Ljava/io/InputStream;->read([B)I

    move-result v10

    if-eq v10, v9, :cond_10

    .line 114
    invoke-virtual {v3, v6, v1, v10}, Ljava/io/RandomAccessFile;->write([BII)V

    add-int/2addr v4, v10

    .line 117
    iget-object v10, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    iput v4, v10, Lcom/bianfeng/fastvo/action/DownloadFile;->downedSize:I

    const/4 v10, 0x2

    new-array v10, v10, [Ljava/lang/Integer;

    .line 118
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    aput-object v11, v10, v1

    const/4 v11, 0x1

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v12

    aput-object v12, v10, v11

    invoke-virtual {p0, v10}, Lcom/bianfeng/fastvo/action/DownloadTask;->publishProgress([Ljava/lang/Object;)V

    .line 120
    iget-boolean v10, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->pause:Z

    if-eqz v10, :cond_d

    .line 121
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V

    .line 122
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V

    const/16 v1, 0x193

    .line 123
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_f
    .catchall {:try_start_b .. :try_end_b} :catchall_0

    .line 138
    :try_start_c
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_6

    goto :goto_2

    :catch_6
    nop

    :goto_2
    if-eqz v0, :cond_e

    .line 141
    :try_start_d
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_7

    goto :goto_3

    :catch_7
    nop

    :cond_e
    :goto_3
    if-eqz v5, :cond_f

    .line 144
    :try_start_e
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_8

    :catch_8
    :cond_f
    return-object p1

    :cond_10
    if-gtz v10, :cond_13

    .line 128
    :try_start_f
    iget-object v1, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    const/4 v4, 0x4

    iput v4, v1, Lcom/bianfeng/fastvo/action/DownloadFile;->status:I

    .line 129
    new-instance v1, Ljava/io/File;

    iget-object v4, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    iget-object v4, v4, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    invoke-direct {v1, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v1}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    .line 130
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_f
    .catchall {:try_start_f .. :try_end_f} :catchall_0

    .line 138
    :try_start_10
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V
    :try_end_10
    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_10} :catch_9

    goto :goto_4

    :catch_9
    nop

    :goto_4
    if-eqz v0, :cond_11

    .line 141
    :try_start_11
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_11
    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_11} :catch_a

    goto :goto_5

    :catch_a
    nop

    :cond_11
    :goto_5
    if-eqz v5, :cond_12

    .line 144
    :try_start_12
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_12
    .catch Ljava/lang/Exception; {:try_start_12 .. :try_end_12} :catch_b

    :catch_b
    :cond_12
    return-object p1

    .line 133
    :cond_13
    :try_start_13
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1
    :try_end_13
    .catch Ljava/lang/Exception; {:try_start_13 .. :try_end_13} :catch_f
    .catchall {:try_start_13 .. :try_end_13} :catchall_0

    .line 138
    :try_start_14
    invoke-virtual {v3}, Ljava/io/RandomAccessFile;->close()V
    :try_end_14
    .catch Ljava/lang/Exception; {:try_start_14 .. :try_end_14} :catch_c

    goto :goto_6

    :catch_c
    nop

    :goto_6
    if-eqz v0, :cond_14

    .line 141
    :try_start_15
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_15
    .catch Ljava/lang/Exception; {:try_start_15 .. :try_end_15} :catch_d

    goto :goto_7

    :catch_d
    nop

    :cond_14
    :goto_7
    if-eqz v5, :cond_15

    .line 144
    :try_start_16
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_16
    .catch Ljava/lang/Exception; {:try_start_16 .. :try_end_16} :catch_e

    :catch_e
    :cond_15
    return-object p1

    :catchall_0
    move-exception p1

    move-object v1, v0

    goto :goto_8

    :catch_f
    move-exception v1

    move-object v2, v1

    move-object v1, v0

    goto :goto_9

    :catchall_1
    move-exception p1

    move-object v1, v0

    move-object v5, v1

    :goto_8
    move-object v0, v3

    goto :goto_d

    :catch_10
    move-exception v1

    move-object v5, v0

    move-object v2, v1

    move-object v1, v5

    :goto_9
    move-object v0, v3

    goto :goto_a

    :catchall_2
    move-exception p1

    move-object v1, v0

    move-object v5, v1

    goto :goto_d

    :catch_11
    move-exception v1

    move-object v5, v0

    move-object v2, v1

    move-object v1, v5

    .line 135
    :goto_a
    :try_start_17
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_17
    .catchall {:try_start_17 .. :try_end_17} :catchall_3

    if-eqz v0, :cond_16

    .line 138
    :try_start_18
    invoke-virtual {v0}, Ljava/io/RandomAccessFile;->close()V
    :try_end_18
    .catch Ljava/lang/Exception; {:try_start_18 .. :try_end_18} :catch_12

    goto :goto_b

    :catch_12
    nop

    :cond_16
    :goto_b
    if-eqz v1, :cond_17

    .line 141
    :try_start_19
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_19
    .catch Ljava/lang/Exception; {:try_start_19 .. :try_end_19} :catch_13

    goto :goto_c

    :catch_13
    nop

    :cond_17
    :goto_c
    if-eqz v5, :cond_18

    .line 144
    :try_start_1a
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_1a
    .catch Ljava/lang/Exception; {:try_start_1a .. :try_end_1a} :catch_14

    .line 147
    :catch_14
    :cond_18
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    return-object p1

    :catchall_3
    move-exception p1

    :goto_d
    if-eqz v0, :cond_19

    .line 138
    :try_start_1b
    invoke-virtual {v0}, Ljava/io/RandomAccessFile;->close()V
    :try_end_1b
    .catch Ljava/lang/Exception; {:try_start_1b .. :try_end_1b} :catch_15

    goto :goto_e

    :catch_15
    nop

    :cond_19
    :goto_e
    if-eqz v1, :cond_1a

    .line 141
    :try_start_1c
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_1c
    .catch Ljava/lang/Exception; {:try_start_1c .. :try_end_1c} :catch_16

    goto :goto_f

    :catch_16
    nop

    :cond_1a
    :goto_f
    if-eqz v5, :cond_1b

    .line 144
    :try_start_1d
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_1d
    .catch Ljava/lang/Exception; {:try_start_1d .. :try_end_1d} :catch_17

    .line 146
    :catch_17
    :cond_1b
    goto :goto_11

    :goto_10
    throw p1

    :goto_11
    goto :goto_10
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 21
    check-cast p1, [Lcom/bianfeng/fastvo/action/DownloadFile;

    invoke-virtual {p0, p1}, Lcom/bianfeng/fastvo/action/DownloadTask;->doInBackground([Lcom/bianfeng/fastvo/action/DownloadFile;)Ljava/lang/Integer;

    move-result-object p1

    return-object p1
.end method

.method public downLoadIsPause()Z
    .locals 1

    .line 236
    iget-boolean v0, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->pause:Z

    return v0
.end method

.method protected onPostExecute(Ljava/lang/Integer;)V
    .locals 3

    .line 195
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/16 v1, 0xc8

    if-eq v0, v1, :cond_0

    const/16 v1, 0xc9

    if-eq v0, v1, :cond_0

    packed-switch v0, :pswitch_data_0

    goto :goto_0

    .line 204
    :pswitch_0
    iget-object v0, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->listener:Lcom/bianfeng/fastvo/action/DownloadListener;

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-object v2, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    invoke-interface {v0, v1, v2}, Lcom/bianfeng/fastvo/action/DownloadListener;->onError(ILcom/bianfeng/fastvo/action/DownloadFile;)V

    goto :goto_0

    .line 198
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->listener:Lcom/bianfeng/fastvo/action/DownloadListener;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    invoke-interface {v0, v1}, Lcom/bianfeng/fastvo/action/DownloadListener;->onComplete(Lcom/bianfeng/fastvo/action/DownloadFile;)V

    .line 208
    :cond_1
    :goto_0
    invoke-super {p0, p1}, Landroid/os/AsyncTask;->onPostExecute(Ljava/lang/Object;)V

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x190
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 21
    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p0, p1}, Lcom/bianfeng/fastvo/action/DownloadTask;->onPostExecute(Ljava/lang/Integer;)V

    return-void
.end method

.method protected onPreExecute()V
    .locals 1

    const/4 v0, 0x0

    .line 189
    iput-boolean v0, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->pause:Z

    .line 190
    invoke-super {p0}, Landroid/os/AsyncTask;->onPreExecute()V

    return-void
.end method

.method protected varargs onProgressUpdate([Ljava/lang/Integer;)V
    .locals 4

    .line 213
    iget-object v0, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    iget v0, v0, Lcom/bianfeng/fastvo/action/DownloadFile;->downedSize:I

    int-to-double v0, v0

    const-wide/high16 v2, 0x4059000000000000L    # 100.0

    invoke-static {v0, v1}, Ljava/lang/Double;->isNaN(D)Z

    mul-double v0, v0, v2

    iget-object v2, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    iget v2, v2, Lcom/bianfeng/fastvo/action/DownloadFile;->totalSize:I

    int-to-double v2, v2

    invoke-static {v2, v3}, Ljava/lang/Double;->isNaN(D)Z

    div-double/2addr v0, v2

    double-to-int v0, v0

    .line 214
    iget v1, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->lastProgress:I

    if-gt v0, v1, :cond_0

    return-void

    .line 215
    :cond_0
    iput v0, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->lastProgress:I

    .line 216
    iget-object v0, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->listener:Lcom/bianfeng/fastvo/action/DownloadListener;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/bianfeng/fastvo/action/DownloadTask;->fileInfo:Lcom/bianfeng/fastvo/action/DownloadFile;

    invoke-interface {v0, v1}, Lcom/bianfeng/fastvo/action/DownloadListener;->onUpdate(Lcom/bianfeng/fastvo/action/DownloadFile;)V

    .line 217
    :cond_1
    invoke-super {p0, p1}, Landroid/os/AsyncTask;->onProgressUpdate([Ljava/lang/Object;)V

    return-void
.end method

.method protected bridge synthetic onProgressUpdate([Ljava/lang/Object;)V
    .locals 0

    .line 21
    check-cast p1, [Ljava/lang/Integer;

    invoke-virtual {p0, p1}, Lcom/bianfeng/fastvo/action/DownloadTask;->onProgressUpdate([Ljava/lang/Integer;)V

    return-void
.end method

.method public sleep()V
    .locals 2

    const-wide/16 v0, 0xa

    .line 152
    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 154
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public start()V
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/bianfeng/fastvo/action/DownloadFile;

    .line 225
    invoke-virtual {p0, v0}, Lcom/bianfeng/fastvo/action/DownloadTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    return-void
.end method

.method public start(Lcom/bianfeng/fastvo/action/DownloadFile;)V
    .locals 2

    const/4 v0, 0x1

    new-array v0, v0, [Lcom/bianfeng/fastvo/action/DownloadFile;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    .line 221
    invoke-virtual {p0, v0}, Lcom/bianfeng/fastvo/action/DownloadTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    return-void
.end method
