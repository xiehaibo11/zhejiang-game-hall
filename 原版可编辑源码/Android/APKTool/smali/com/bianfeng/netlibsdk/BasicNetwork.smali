.class public Lcom/bianfeng/netlibsdk/BasicNetwork;
.super Ljava/lang/Object;
.source "BasicNetwork.java"

# interfaces
.implements Lcom/bianfeng/netlibsdk/Network;


# static fields
.field private static final DEFAULT_POOL_SIZE:I = 0x1000


# instance fields
.field private final mBaseHttpStack:Lcom/bianfeng/netlibsdk/HttpStack;

.field protected final mHttpStack:Lcom/bianfeng/netlibsdk/HttpStack;

.field protected final mPool:Lcom/bianfeng/netlibsdk/ByteArrayPool;


# direct methods
.method public constructor <init>(Lcom/bianfeng/netlibsdk/HttpStack;)V
    .locals 2

    .line 24
    new-instance v0, Lcom/bianfeng/netlibsdk/ByteArrayPool;

    const/16 v1, 0x1000

    invoke-direct {v0, v1}, Lcom/bianfeng/netlibsdk/ByteArrayPool;-><init>(I)V

    invoke-direct {p0, p1, v0}, Lcom/bianfeng/netlibsdk/BasicNetwork;-><init>(Lcom/bianfeng/netlibsdk/HttpStack;Lcom/bianfeng/netlibsdk/ByteArrayPool;)V

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/netlibsdk/HttpStack;Lcom/bianfeng/netlibsdk/ByteArrayPool;)V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 28
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/BasicNetwork;->mHttpStack:Lcom/bianfeng/netlibsdk/HttpStack;

    .line 29
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/BasicNetwork;->mBaseHttpStack:Lcom/bianfeng/netlibsdk/HttpStack;

    .line 30
    iput-object p2, p0, Lcom/bianfeng/netlibsdk/BasicNetwork;->mPool:Lcom/bianfeng/netlibsdk/ByteArrayPool;

    return-void
.end method

.method private static attemptRetryOnException(Ljava/lang/String;Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;",
            "Lcom/bianfeng/netlibsdk/utils/NetException;",
            ")V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/netlibsdk/utils/NetException;
        }
    .end annotation

    .line 116
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->getRetryPolicy()Lcom/bianfeng/netlibsdk/RetryPolicy;

    move-result-object v0

    .line 117
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->getTimeoutMs()I

    move-result v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    const/4 v4, 0x2

    .line 119
    :try_start_0
    invoke-interface {v0, p2}, Lcom/bianfeng/netlibsdk/RetryPolicy;->retry(Lcom/bianfeng/netlibsdk/utils/NetException;)V
    :try_end_0
    .catch Lcom/bianfeng/netlibsdk/utils/NetException; {:try_start_0 .. :try_end_0} :catch_0

    new-array p2, v4, [Ljava/lang/Object;

    aput-object p0, p2, v3

    .line 124
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, p2, v2

    const-string p0, "%s-retry [timeout=%s]"

    invoke-static {p0, p2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/bianfeng/netlibsdk/Request;->addMarker(Ljava/lang/String;)V

    return-void

    :catch_0
    move-exception p2

    new-array v0, v4, [Ljava/lang/Object;

    aput-object p0, v0, v3

    .line 121
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v0, v2

    const-string p0, "%s-timeout-giveup [timeout=%s]"

    invoke-static {p0, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/bianfeng/netlibsdk/Request;->addMarker(Ljava/lang/String;)V

    .line 122
    throw p2
.end method

.method private inputStreamToBytes(Ljava/io/InputStream;I)[B
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/netlibsdk/utils/NetException;
        }
    .end annotation

    .line 129
    new-instance v0, Lcom/bianfeng/netlibsdk/PoolingByteArrayOutputStream;

    iget-object v1, p0, Lcom/bianfeng/netlibsdk/BasicNetwork;->mPool:Lcom/bianfeng/netlibsdk/ByteArrayPool;

    invoke-direct {v0, v1, p2}, Lcom/bianfeng/netlibsdk/PoolingByteArrayOutputStream;-><init>(Lcom/bianfeng/netlibsdk/ByteArrayPool;I)V

    const-string p2, "Error occurred when closing InputStream"

    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 135
    :try_start_0
    iget-object v2, p0, Lcom/bianfeng/netlibsdk/BasicNetwork;->mPool:Lcom/bianfeng/netlibsdk/ByteArrayPool;

    const/16 v3, 0x400

    invoke-virtual {v2, v3}, Lcom/bianfeng/netlibsdk/ByteArrayPool;->getBuf(I)[B

    move-result-object v1

    .line 137
    :goto_0
    invoke-virtual {p1, v1}, Ljava/io/InputStream;->read([B)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_0

    const/4 v3, 0x0

    .line 138
    invoke-virtual {v0, v1, v3, v2}, Lcom/bianfeng/netlibsdk/PoolingByteArrayOutputStream;->write([BII)V

    goto :goto_0

    .line 140
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/netlibsdk/PoolingByteArrayOutputStream;->toByteArray()[B

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_1

    .line 146
    :try_start_1
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    .line 149
    :catch_0
    invoke-static {p2}, Lcom/bianfeng/netlibsdk/utils/NetLogger;->i(Ljava/lang/String;)V

    .line 151
    :cond_1
    :goto_1
    iget-object p1, p0, Lcom/bianfeng/netlibsdk/BasicNetwork;->mPool:Lcom/bianfeng/netlibsdk/ByteArrayPool;

    invoke-virtual {p1, v1}, Lcom/bianfeng/netlibsdk/ByteArrayPool;->returnBuf([B)V

    .line 153
    :try_start_2
    invoke-virtual {v0}, Lcom/bianfeng/netlibsdk/PoolingByteArrayOutputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    :catch_1
    move-exception p1

    .line 155
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    return-object v2

    :catchall_0
    move-exception v2

    goto :goto_4

    :catch_2
    move-exception v2

    goto :goto_3

    .line 133
    :cond_2
    :try_start_3
    new-instance v2, Lcom/bianfeng/netlibsdk/utils/NetException;

    const-string v3, " InputStream is null"

    invoke-direct {v2, v3}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/String;)V

    throw v2
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 142
    :goto_3
    :try_start_4
    new-instance v3, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {v3, v2}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/Throwable;)V

    throw v3
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    :goto_4
    if-eqz p1, :cond_3

    .line 146
    :try_start_5
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_5

    .line 149
    :catch_3
    invoke-static {p2}, Lcom/bianfeng/netlibsdk/utils/NetLogger;->i(Ljava/lang/String;)V

    .line 151
    :cond_3
    :goto_5
    iget-object p1, p0, Lcom/bianfeng/netlibsdk/BasicNetwork;->mPool:Lcom/bianfeng/netlibsdk/ByteArrayPool;

    invoke-virtual {p1, v1}, Lcom/bianfeng/netlibsdk/ByteArrayPool;->returnBuf([B)V

    .line 153
    :try_start_6
    invoke-virtual {v0}, Lcom/bianfeng/netlibsdk/PoolingByteArrayOutputStream;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_4

    goto :goto_6

    :catch_4
    move-exception p1

    .line 155
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 157
    :goto_6
    throw v2
.end method

.method private logSlowRequests(JLcom/bianfeng/netlibsdk/Request;[BI)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(J",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;[BI)V"
        }
    .end annotation

    .line 108
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "HTTP response for request=<%s> [lifetime=%d], [size=%s],[rc=%d], [retryCount=%s]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 109
    invoke-virtual {p3}, Lcom/bianfeng/netlibsdk/Request;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    if-eqz p4, :cond_0

    array-length p1, p4

    .line 111
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    goto :goto_0

    :cond_0
    const-string p1, "null"

    :goto_0
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/bianfeng/netlibsdk/Request;->getRetryPolicy()Lcom/bianfeng/netlibsdk/RetryPolicy;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/netlibsdk/RetryPolicy;->getCurrentRetryCount()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 108
    invoke-static {p1}, Lcom/bianfeng/netlibsdk/utils/NetLogger;->i(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public performRequest(Lcom/bianfeng/netlibsdk/Request;)Lcom/bianfeng/netlibsdk/NetworkResponse;
    .locals 13
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)",
            "Lcom/bianfeng/netlibsdk/NetworkResponse;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/netlibsdk/utils/NetException;
        }
    .end annotation

    .line 35
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    .line 39
    :goto_0
    invoke-static {}, Ljava/util/Collections;->emptyList()Ljava/util/List;

    move-result-object v2

    const/4 v3, 0x0

    .line 41
    :try_start_0
    iget-object v4, p0, Lcom/bianfeng/netlibsdk/BasicNetwork;->mBaseHttpStack:Lcom/bianfeng/netlibsdk/HttpStack;

    invoke-interface {v4, p1}, Lcom/bianfeng/netlibsdk/HttpStack;->executeRequest(Lcom/bianfeng/netlibsdk/Request;)Lcom/bianfeng/netlibsdk/HttpResponse;

    move-result-object v4
    :try_end_0
    .catch Ljava/net/SocketTimeoutException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/net/MalformedURLException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1

    .line 42
    :try_start_1
    invoke-virtual {v4}, Lcom/bianfeng/netlibsdk/HttpResponse;->getStatusCode()I

    move-result v11

    .line 43
    invoke-virtual {v4}, Lcom/bianfeng/netlibsdk/HttpResponse;->getHeaders()Ljava/util/List;

    move-result-object v2

    .line 44
    invoke-virtual {v4}, Lcom/bianfeng/netlibsdk/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v5

    if-eqz v5, :cond_0

    .line 46
    invoke-virtual {v4}, Lcom/bianfeng/netlibsdk/HttpResponse;->getContentLength()I

    move-result v6

    invoke-direct {p0, v5, v6}, Lcom/bianfeng/netlibsdk/BasicNetwork;->inputStreamToBytes(Ljava/io/InputStream;I)[B

    move-result-object v3

    goto :goto_1

    :cond_0
    const/4 v5, 0x0

    new-array v3, v5, [B

    .line 50
    :goto_1
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long v6, v5, v0

    move-object v5, p0

    move-object v8, p1

    move-object v9, v3

    move v10, v11

    .line 51
    invoke-direct/range {v5 .. v10}, Lcom/bianfeng/netlibsdk/BasicNetwork;->logSlowRequests(JLcom/bianfeng/netlibsdk/Request;[BI)V

    const/16 v5, 0xc8

    if-lt v11, v5, :cond_1

    const/16 v5, 0x12b

    if-gt v11, v5, :cond_1

    .line 55
    new-instance v12, Lcom/bianfeng/netlibsdk/NetworkResponse;

    const/4 v8, 0x0

    .line 59
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    sub-long v9, v5, v0

    move-object v5, v12

    move v6, v11

    move-object v7, v3

    move-object v11, v2

    invoke-direct/range {v5 .. v11}, Lcom/bianfeng/netlibsdk/NetworkResponse;-><init>(I[BZJLjava/util/List;)V

    return-object v12

    .line 53
    :cond_1
    new-instance v5, Ljava/io/IOException;

    invoke-direct {v5}, Ljava/io/IOException;-><init>()V

    throw v5
    :try_end_1
    .catch Ljava/net/SocketTimeoutException; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/net/MalformedURLException; {:try_start_1 .. :try_end_1} :catch_2
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    move-exception v5

    move-object v12, v2

    move-object v8, v3

    move-object v3, v4

    goto :goto_2

    :catch_1
    move-exception v5

    move-object v12, v2

    move-object v8, v3

    :goto_2
    if-eqz v3, :cond_9

    .line 68
    invoke-virtual {v3}, Lcom/bianfeng/netlibsdk/HttpResponse;->getStatusCode()I

    move-result v2

    .line 77
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Unexpected response code %d for %s"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->getUrl()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/netlibsdk/utils/NetLogger;->i(Ljava/lang/String;)V

    if-eqz v8, :cond_8

    .line 80
    new-instance v3, Lcom/bianfeng/netlibsdk/NetworkResponse;

    const/4 v9, 0x0

    .line 84
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    sub-long v10, v4, v0

    move-object v6, v3

    move v7, v2

    invoke-direct/range {v6 .. v12}, Lcom/bianfeng/netlibsdk/NetworkResponse;-><init>(I[BZJLjava/util/List;)V

    const/16 v4, 0x191

    if-eq v2, v4, :cond_7

    const/16 v4, 0x193

    if-ne v2, v4, :cond_2

    goto :goto_4

    :cond_2
    const/16 v4, 0x190

    if-lt v2, v4, :cond_4

    const/16 v4, 0x1f3

    if-le v2, v4, :cond_3

    goto :goto_3

    .line 89
    :cond_3
    new-instance p1, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {p1, v3}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Lcom/bianfeng/netlibsdk/NetworkResponse;)V

    throw p1

    :cond_4
    :goto_3
    const/16 v4, 0x1f4

    if-lt v2, v4, :cond_6

    const/16 v4, 0x257

    if-gt v2, v4, :cond_6

    .line 91
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->shouldRetryServerErrors()Z

    move-result v2

    if-eqz v2, :cond_5

    .line 92
    new-instance v2, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {v2, v3}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Lcom/bianfeng/netlibsdk/NetworkResponse;)V

    const-string v3, "server"

    invoke-static {v3, p1, v2}, Lcom/bianfeng/netlibsdk/BasicNetwork;->attemptRetryOnException(Ljava/lang/String;Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V

    goto/16 :goto_0

    .line 94
    :cond_5
    new-instance p1, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {p1, v3}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Lcom/bianfeng/netlibsdk/NetworkResponse;)V

    throw p1

    .line 97
    :cond_6
    new-instance p1, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {p1, v3}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Lcom/bianfeng/netlibsdk/NetworkResponse;)V

    throw p1

    .line 87
    :cond_7
    :goto_4
    new-instance v2, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {v2, v3}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Lcom/bianfeng/netlibsdk/NetworkResponse;)V

    const-string v3, "auth"

    invoke-static {v3, p1, v2}, Lcom/bianfeng/netlibsdk/BasicNetwork;->attemptRetryOnException(Ljava/lang/String;Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V

    goto/16 :goto_0

    .line 100
    :cond_8
    new-instance v2, Lcom/bianfeng/netlibsdk/utils/NetException;

    const-string v3, "responseContents is null"

    invoke-direct {v2, v3}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/String;)V

    const-string v3, "network"

    invoke-static {v3, p1, v2}, Lcom/bianfeng/netlibsdk/BasicNetwork;->attemptRetryOnException(Ljava/lang/String;Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V

    goto/16 :goto_0

    .line 70
    :cond_9
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->shouldRetryConnectionErrors()Z

    move-result v2

    if-eqz v2, :cond_a

    .line 71
    new-instance v2, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {v2, v5}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/Throwable;)V

    const-string v3, "connection"

    invoke-static {v3, p1, v2}, Lcom/bianfeng/netlibsdk/BasicNetwork;->attemptRetryOnException(Ljava/lang/String;Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V

    goto/16 :goto_0

    .line 74
    :cond_a
    new-instance p1, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {p1, v5}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/Throwable;)V

    throw p1

    :catch_2
    move-exception v0

    .line 64
    new-instance v1, Lcom/bianfeng/netlibsdk/utils/NetException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Bad URL "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->getUrl()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1, v0}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1

    :catch_3
    move-exception v2

    .line 62
    new-instance v3, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {v3, v2}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/Throwable;)V

    const-string v2, "socket"

    invoke-static {v2, p1, v3}, Lcom/bianfeng/netlibsdk/BasicNetwork;->attemptRetryOnException(Ljava/lang/String;Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V

    goto/16 :goto_0
.end method
