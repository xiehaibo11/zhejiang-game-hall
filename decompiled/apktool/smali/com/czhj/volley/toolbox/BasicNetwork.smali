.class public Lcom/czhj/volley/toolbox/BasicNetwork;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/Network;


# static fields
.field protected static final DEBUG:Z

.field private static final a:I = 0xbb8

.field private static final b:I = 0x1000


# instance fields
.field private final c:Lcom/czhj/volley/toolbox/BaseHttpStack;

.field protected final mPool:Lcom/czhj/volley/toolbox/ByteArrayPool;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    sget-boolean v0, Lcom/czhj/volley/VolleyLog;->DEBUG:Z

    sput-boolean v0, Lcom/czhj/volley/toolbox/BasicNetwork;->DEBUG:Z

    return-void
.end method

.method public constructor <init>(Lcom/czhj/volley/toolbox/BaseHttpStack;)V
    .locals 2

    new-instance v0, Lcom/czhj/volley/toolbox/ByteArrayPool;

    const/16 v1, 0x1000

    invoke-direct {v0, v1}, Lcom/czhj/volley/toolbox/ByteArrayPool;-><init>(I)V

    invoke-direct {p0, p1, v0}, Lcom/czhj/volley/toolbox/BasicNetwork;-><init>(Lcom/czhj/volley/toolbox/BaseHttpStack;Lcom/czhj/volley/toolbox/ByteArrayPool;)V

    return-void
.end method

.method public constructor <init>(Lcom/czhj/volley/toolbox/BaseHttpStack;Lcom/czhj/volley/toolbox/ByteArrayPool;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/czhj/volley/toolbox/BasicNetwork;->c:Lcom/czhj/volley/toolbox/BaseHttpStack;

    iput-object p2, p0, Lcom/czhj/volley/toolbox/BasicNetwork;->mPool:Lcom/czhj/volley/toolbox/ByteArrayPool;

    return-void
.end method

.method private static a(Ljava/util/List;Lcom/czhj/volley/Cache$Entry;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/volley/Header;",
            ">;",
            "Lcom/czhj/volley/Cache$Entry;",
            ")",
            "Ljava/util/List<",
            "Lcom/czhj/volley/Header;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/TreeSet;

    sget-object v1, Ljava/lang/String;->CASE_INSENSITIVE_ORDER:Ljava/util/Comparator;

    invoke-direct {v0, v1}, Ljava/util/TreeSet;-><init>(Ljava/util/Comparator;)V

    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/czhj/volley/Header;

    invoke-virtual {v2}, Lcom/czhj/volley/Header;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1, p0}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    iget-object p0, p1, Lcom/czhj/volley/Cache$Entry;->allResponseHeaders:Ljava/util/List;

    if-eqz p0, :cond_2

    iget-object p0, p1, Lcom/czhj/volley/Cache$Entry;->allResponseHeaders:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result p0

    if-nez p0, :cond_4

    iget-object p0, p1, Lcom/czhj/volley/Cache$Entry;->allResponseHeaders:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p1

    if-eqz p1, :cond_4

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/czhj/volley/Header;

    invoke-virtual {p1}, Lcom/czhj/volley/Header;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_2
    iget-object p0, p1, Lcom/czhj/volley/Cache$Entry;->responseHeaders:Ljava/util/Map;

    invoke-interface {p0}, Ljava/util/Map;->isEmpty()Z

    move-result p0

    if-nez p0, :cond_4

    iget-object p0, p1, Lcom/czhj/volley/Cache$Entry;->responseHeaders:Ljava/util/Map;

    invoke-interface {p0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_3
    :goto_2
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p1

    if-eqz p1, :cond_4

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map$Entry;

    invoke-interface {p1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_3

    new-instance v2, Lcom/czhj/volley/Header;

    invoke-interface {p1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-interface {p1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-direct {v2, v3, p1}, Lcom/czhj/volley/Header;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_4
    return-object v1
.end method

.method private a(Lcom/czhj/volley/Cache$Entry;)Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Cache$Entry;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    if-nez p1, :cond_0

    invoke-static {}, Ljava/util/Collections;->emptyMap()Ljava/util/Map;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iget-object v1, p1, Lcom/czhj/volley/Cache$Entry;->etag:Ljava/lang/String;

    if-eqz v1, :cond_1

    iget-object v1, p1, Lcom/czhj/volley/Cache$Entry;->etag:Ljava/lang/String;

    const-string v2, "If-None-Match"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    iget-wide v1, p1, Lcom/czhj/volley/Cache$Entry;->lastModified:J

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-lez v1, :cond_2

    iget-wide v1, p1, Lcom/czhj/volley/Cache$Entry;->lastModified:J

    invoke-static {v1, v2}, Lcom/czhj/volley/toolbox/HttpHeaderParser;->a(J)Ljava/lang/String;

    move-result-object p1

    const-string v1, "If-Modified-Since"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    return-object v0
.end method

.method private a(JLcom/czhj/volley/Request;[BI)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(J",
            "Lcom/czhj/volley/Request<",
            "*>;[BI)V"
        }
    .end annotation

    sget-boolean v0, Lcom/czhj/volley/toolbox/BasicNetwork;->DEBUG:Z

    if-nez v0, :cond_0

    const-wide/16 v0, 0xbb8

    cmp-long v0, p1, v0

    if-lez v0, :cond_2

    :cond_0
    const/4 v0, 0x5

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p3, v0, v1

    const/4 v1, 0x1

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    aput-object p1, v0, v1

    const/4 p1, 0x2

    if-eqz p4, :cond_1

    array-length p2, p4

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    goto :goto_0

    :cond_1
    const-string p2, "null"

    :goto_0
    aput-object p2, v0, p1

    const/4 p1, 0x3

    invoke-static {p5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, v0, p1

    const/4 p1, 0x4

    invoke-virtual {p3}, Lcom/czhj/volley/Request;->getRetryPolicy()Lcom/czhj/volley/RetryPolicy;

    move-result-object p2

    invoke-interface {p2}, Lcom/czhj/volley/RetryPolicy;->getCurrentRetryCount()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, v0, p1

    const-string p1, "HTTP response for request=<%s> [lifetime=%d], [size=%s], [rc=%d], [retryCount=%s]"

    invoke-static {p1, v0}, Lcom/czhj/volley/VolleyLog;->d(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    return-void
.end method

.method private static a(Ljava/lang/String;Lcom/czhj/volley/Request;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Lcom/czhj/volley/Request<",
            "*>;)V"
        }
    .end annotation

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->getTimeoutMs()I

    move-result v0

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p0, v1, v2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const/4 v0, 0x1

    aput-object p0, v1, v0

    const-string p0, "%s-Redirect [timeout=%s]"

    invoke-static {p0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    return-void
.end method

.method private static a(Ljava/lang/String;Lcom/czhj/volley/Request;Lcom/czhj/volley/VolleyError;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Lcom/czhj/volley/VolleyError;",
            ")V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/volley/VolleyError;
        }
    .end annotation

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->getRetryPolicy()Lcom/czhj/volley/RetryPolicy;

    move-result-object v0

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->getTimeoutMs()I

    move-result v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    const/4 v4, 0x2

    :try_start_0
    invoke-interface {v0, p2}, Lcom/czhj/volley/RetryPolicy;->retry(Lcom/czhj/volley/VolleyError;)V
    :try_end_0
    .catch Lcom/czhj/volley/VolleyError; {:try_start_0 .. :try_end_0} :catch_0

    new-array p2, v4, [Ljava/lang/Object;

    aput-object p0, p2, v3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, p2, v2

    const-string p0, "%s-retry [timeout=%s]"

    invoke-static {p0, p2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    return-void

    :catch_0
    move-exception p2

    new-array v0, v4, [Ljava/lang/Object;

    aput-object p0, v0, v3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v0, v2

    const-string p0, "%s-timeout-giveup [timeout=%s]"

    invoke-static {p0, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    throw p2
.end method

.method private a(Ljava/io/InputStream;I)[B
    .locals 11
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "Error occurred when closing InputStream"

    new-instance v1, Lcom/czhj/volley/toolbox/PoolingByteArrayOutputStream;

    iget-object v2, p0, Lcom/czhj/volley/toolbox/BasicNetwork;->mPool:Lcom/czhj/volley/toolbox/ByteArrayPool;

    invoke-direct {v1, v2, p2}, Lcom/czhj/volley/toolbox/PoolingByteArrayOutputStream;-><init>(Lcom/czhj/volley/toolbox/ByteArrayPool;I)V

    const/16 v2, 0x400

    if-lez p2, :cond_0

    if-ge p2, v2, :cond_0

    move v2, p2

    :cond_0
    const/4 v3, 0x1

    const/4 v4, 0x0

    const/4 v5, 0x0

    :try_start_0
    iget-object v6, p0, Lcom/czhj/volley/toolbox/BasicNetwork;->mPool:Lcom/czhj/volley/toolbox/ByteArrayPool;

    invoke-virtual {v6, v2}, Lcom/czhj/volley/toolbox/ByteArrayPool;->getBuf(I)[B

    move-result-object v5

    const-wide/16 v6, 0x0

    :goto_0
    invoke-virtual {p1, v5, v4, v2}, Ljava/io/InputStream;->read([BII)I

    move-result v8

    const/4 v9, -0x1

    if-eq v8, v9, :cond_2

    if-lt p2, v3, :cond_1

    int-to-long v9, p2

    cmp-long v9, v6, v9

    if-gez v9, :cond_2

    :cond_1
    invoke-virtual {v1, v5, v4, v8}, Lcom/czhj/volley/toolbox/PoolingByteArrayOutputStream;->write([BII)V

    int-to-long v8, v8

    add-long/2addr v6, v8

    goto :goto_0

    :cond_2
    invoke-virtual {v1}, Lcom/czhj/volley/toolbox/PoolingByteArrayOutputStream;->toByteArray()[B

    move-result-object p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_3

    :try_start_1
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    new-array p1, v4, [Ljava/lang/Object;

    invoke-static {v0, p1}, Lcom/czhj/volley/VolleyLog;->v(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_3
    :goto_1
    iget-object p1, p0, Lcom/czhj/volley/toolbox/BasicNetwork;->mPool:Lcom/czhj/volley/toolbox/ByteArrayPool;

    invoke-virtual {p1, v5}, Lcom/czhj/volley/toolbox/ByteArrayPool;->returnBuf([B)V

    :goto_2
    invoke-virtual {v1}, Lcom/czhj/volley/toolbox/PoolingByteArrayOutputStream;->close()V

    return-object p2

    :catchall_0
    move-exception p2

    :try_start_2
    const-string v2, "readError"

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    aput-object p2, v3, v4

    invoke-static {v2, v3}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {v1}, Lcom/czhj/volley/toolbox/PoolingByteArrayOutputStream;->toByteArray()[B

    move-result-object p2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    if-eqz p1, :cond_4

    :try_start_3
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_3

    :catch_1
    new-array p1, v4, [Ljava/lang/Object;

    invoke-static {v0, p1}, Lcom/czhj/volley/VolleyLog;->v(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_4
    :goto_3
    iget-object p1, p0, Lcom/czhj/volley/toolbox/BasicNetwork;->mPool:Lcom/czhj/volley/toolbox/ByteArrayPool;

    invoke-virtual {p1, v5}, Lcom/czhj/volley/toolbox/ByteArrayPool;->returnBuf([B)V

    goto :goto_2

    :catchall_1
    move-exception p2

    if-eqz p1, :cond_5

    :try_start_4
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_4

    :catch_2
    new-array p1, v4, [Ljava/lang/Object;

    invoke-static {v0, p1}, Lcom/czhj/volley/VolleyLog;->v(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_5
    :goto_4
    iget-object p1, p0, Lcom/czhj/volley/toolbox/BasicNetwork;->mPool:Lcom/czhj/volley/toolbox/ByteArrayPool;

    invoke-virtual {p1, v5}, Lcom/czhj/volley/toolbox/ByteArrayPool;->returnBuf([B)V

    invoke-virtual {v1}, Lcom/czhj/volley/toolbox/PoolingByteArrayOutputStream;->close()V

    throw p2
.end method

.method protected static convertHeaders(Ljava/util/List;)Ljava/util/Map;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/volley/Header;",
            ">;)",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/TreeMap;

    sget-object v1, Ljava/lang/String;->CASE_INSENSITIVE_ORDER:Ljava/util/Comparator;

    invoke-direct {v0, v1}, Ljava/util/TreeMap;-><init>(Ljava/util/Comparator;)V

    const/4 v1, 0x0

    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/czhj/volley/Header;

    invoke-virtual {v2}, Lcom/czhj/volley/Header;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2}, Lcom/czhj/volley/Header;->getValue()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0
.end method


# virtual methods
.method protected logError(Ljava/lang/String;Ljava/lang/String;J)V
    .locals 4

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    sub-long/2addr v0, p3

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    const/4 p3, 0x1

    aput-object p1, v2, p3

    const/4 p1, 0x2

    aput-object p2, v2, p1

    const-string p1, "HTTP ERROR(%s) %d ms to fetch %s"

    invoke-static {p1, v2}, Lcom/czhj/volley/VolleyLog;->v(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method

.method public performRequest(Lcom/czhj/volley/Request;)Lcom/czhj/volley/NetworkResponse;
    .locals 24
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;)",
            "Lcom/czhj/volley/NetworkResponse;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/czhj/volley/VolleyError;
        }
    .end annotation

    move-object/from16 v7, p0

    move-object/from16 v8, p1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v9

    :cond_0
    :goto_0
    invoke-static {}, Ljava/util/Collections;->emptyList()Ljava/util/List;

    move-result-object v1

    const/16 v11, 0x12e

    const/16 v12, 0x12d

    const/4 v2, 0x0

    const/4 v13, 0x0

    :try_start_0
    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/Request;->getCacheEntry()Lcom/czhj/volley/Cache$Entry;

    move-result-object v0

    invoke-direct {v7, v0}, Lcom/czhj/volley/toolbox/BasicNetwork;->a(Lcom/czhj/volley/Cache$Entry;)Ljava/util/Map;

    move-result-object v0

    iget-object v3, v7, Lcom/czhj/volley/toolbox/BasicNetwork;->c:Lcom/czhj/volley/toolbox/BaseHttpStack;

    invoke-virtual {v3, v8, v0}, Lcom/czhj/volley/toolbox/BaseHttpStack;->executeRequest(Lcom/czhj/volley/Request;Ljava/util/Map;)Lcom/czhj/volley/toolbox/HttpResponse;

    move-result-object v14
    :try_end_0
    .catch Ljava/net/SocketTimeoutException; {:try_start_0 .. :try_end_0} :catch_d
    .catch Ljava/net/MalformedURLException; {:try_start_0 .. :try_end_0} :catch_c
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_a
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {v14}, Lcom/czhj/volley/toolbox/HttpResponse;->getStatusCode()I

    move-result v0

    invoke-virtual {v14}, Lcom/czhj/volley/toolbox/HttpResponse;->getHeaders()Ljava/util/List;

    move-result-object v6
    :try_end_1
    .catch Ljava/net/SocketTimeoutException; {:try_start_1 .. :try_end_1} :catch_9
    .catch Ljava/net/MalformedURLException; {:try_start_1 .. :try_end_1} :catch_8
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_7
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/16 v1, 0x130

    if-ne v0, v1, :cond_4

    :try_start_2
    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/Request;->getCacheEntry()Lcom/czhj/volley/Cache$Entry;

    move-result-object v0

    if-nez v0, :cond_2

    new-instance v1, Lcom/czhj/volley/NetworkResponse;

    const/16 v16, 0x130

    const/16 v17, 0x0

    const/16 v18, 0x1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    sub-long v19, v3, v9

    move-object v15, v1

    move-object/from16 v21, v6

    invoke-direct/range {v15 .. v21}, Lcom/czhj/volley/NetworkResponse;-><init>(I[BZJLjava/util/List;)V
    :try_end_2
    .catch Ljava/net/SocketTimeoutException; {:try_start_2 .. :try_end_2} :catch_9
    .catch Ljava/net/MalformedURLException; {:try_start_2 .. :try_end_2} :catch_8
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v14, :cond_1

    invoke-virtual {v14}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    if-eqz v0, :cond_1

    :try_start_3
    invoke-virtual {v14}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array v2, v13, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    :goto_1
    return-object v1

    :cond_2
    :try_start_4
    invoke-static {v6, v0}, Lcom/czhj/volley/toolbox/BasicNetwork;->a(Ljava/util/List;Lcom/czhj/volley/Cache$Entry;)Ljava/util/List;

    move-result-object v21

    new-instance v1, Lcom/czhj/volley/NetworkResponse;

    const/16 v16, 0x130

    iget-object v0, v0, Lcom/czhj/volley/Cache$Entry;->data:[B

    const/16 v18, 0x1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    sub-long v19, v3, v9

    move-object v15, v1

    move-object/from16 v17, v0

    invoke-direct/range {v15 .. v21}, Lcom/czhj/volley/NetworkResponse;-><init>(I[BZJLjava/util/List;)V
    :try_end_4
    .catch Ljava/net/SocketTimeoutException; {:try_start_4 .. :try_end_4} :catch_9
    .catch Ljava/net/MalformedURLException; {:try_start_4 .. :try_end_4} :catch_8
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    if-eqz v14, :cond_3

    invoke-virtual {v14}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    if-eqz v0, :cond_3

    :try_start_5
    invoke-virtual {v14}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_1

    goto :goto_2

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array v2, v13, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_3
    :goto_2
    return-object v1

    :catch_2
    move-exception v0

    move-object/from16 v17, v2

    move-object/from16 v21, v6

    goto/16 :goto_8

    :cond_4
    if-eq v0, v12, :cond_5

    if-ne v0, v11, :cond_6

    :cond_5
    :try_start_6
    invoke-static {v6}, Lcom/czhj/volley/toolbox/BasicNetwork;->convertHeaders(Ljava/util/List;)Ljava/util/Map;

    move-result-object v1

    const-string v3, "Location"

    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v8, v1}, Lcom/czhj/volley/Request;->setRedirectURL(Ljava/lang/String;)V

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "redirectURL: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v8, v1}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    :cond_6
    invoke-virtual {v14}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v1
    :try_end_6
    .catch Ljava/net/SocketTimeoutException; {:try_start_6 .. :try_end_6} :catch_9
    .catch Ljava/net/MalformedURLException; {:try_start_6 .. :try_end_6} :catch_8
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    if-eqz v1, :cond_8

    :try_start_7
    invoke-virtual {v14}, Lcom/czhj/volley/toolbox/HttpResponse;->getContentLength()I

    move-result v3

    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/Request;->getMaxLength()I

    move-result v4

    if-gez v4, :cond_7

    goto :goto_3

    :cond_7
    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/Request;->getMaxLength()I

    move-result v3

    :goto_3
    invoke-direct {v7, v1, v3}, Lcom/czhj/volley/toolbox/BasicNetwork;->a(Ljava/io/InputStream;I)[B

    move-result-object v1
    :try_end_7
    .catch Ljava/net/SocketTimeoutException; {:try_start_7 .. :try_end_7} :catch_9
    .catch Ljava/net/MalformedURLException; {:try_start_7 .. :try_end_7} :catch_8
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_2
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    goto :goto_4

    :cond_8
    :try_start_8
    new-array v1, v13, [B
    :try_end_8
    .catch Ljava/net/SocketTimeoutException; {:try_start_8 .. :try_end_8} :catch_9
    .catch Ljava/net/MalformedURLException; {:try_start_8 .. :try_end_8} :catch_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_6
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    :goto_4
    move-object/from16 v22, v1

    :try_start_9
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1
    :try_end_9
    .catch Ljava/net/SocketTimeoutException; {:try_start_9 .. :try_end_9} :catch_9
    .catch Ljava/net/MalformedURLException; {:try_start_9 .. :try_end_9} :catch_8
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_5
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    sub-long v2, v1, v9

    move-object/from16 v1, p0

    move-object/from16 v4, p1

    move-object/from16 v5, v22

    move-object/from16 v23, v6

    move v6, v0

    :try_start_a
    invoke-direct/range {v1 .. v6}, Lcom/czhj/volley/toolbox/BasicNetwork;->a(JLcom/czhj/volley/Request;[BI)V

    const/16 v1, 0xc8

    if-lt v0, v1, :cond_a

    const/16 v1, 0x12b

    if-gt v0, v1, :cond_a

    new-instance v1, Lcom/czhj/volley/NetworkResponse;

    const/16 v18, 0x0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    sub-long v19, v2, v9

    move-object v15, v1

    move/from16 v16, v0

    move-object/from16 v17, v22

    move-object/from16 v21, v23

    invoke-direct/range {v15 .. v21}, Lcom/czhj/volley/NetworkResponse;-><init>(I[BZJLjava/util/List;)V
    :try_end_a
    .catch Ljava/net/SocketTimeoutException; {:try_start_a .. :try_end_a} :catch_9
    .catch Ljava/net/MalformedURLException; {:try_start_a .. :try_end_a} :catch_8
    .catch Ljava/io/IOException; {:try_start_a .. :try_end_a} :catch_4
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    if-eqz v14, :cond_9

    invoke-virtual {v14}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    if-eqz v0, :cond_9

    :try_start_b
    invoke-virtual {v14}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_b
    .catch Ljava/io/IOException; {:try_start_b .. :try_end_b} :catch_3

    goto :goto_5

    :catch_3
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array v2, v13, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_9
    :goto_5
    return-object v1

    :cond_a
    :try_start_c
    new-instance v0, Ljava/io/IOException;

    invoke-direct {v0}, Ljava/io/IOException;-><init>()V

    throw v0
    :try_end_c
    .catch Ljava/net/SocketTimeoutException; {:try_start_c .. :try_end_c} :catch_9
    .catch Ljava/net/MalformedURLException; {:try_start_c .. :try_end_c} :catch_8
    .catch Ljava/io/IOException; {:try_start_c .. :try_end_c} :catch_4
    .catchall {:try_start_c .. :try_end_c} :catchall_0

    :catch_4
    move-exception v0

    goto :goto_6

    :catch_5
    move-exception v0

    move-object/from16 v23, v6

    :goto_6
    move-object v2, v14

    move-object/from16 v17, v22

    goto :goto_7

    :catch_6
    move-exception v0

    move-object/from16 v23, v6

    move-object/from16 v17, v2

    move-object v2, v14

    :goto_7
    move-object/from16 v21, v23

    goto :goto_9

    :catchall_0
    move-exception v0

    move-object v1, v0

    move-object v2, v14

    goto/16 :goto_11

    :catch_7
    move-exception v0

    move-object/from16 v21, v1

    move-object/from16 v17, v2

    :goto_8
    move-object v2, v14

    goto :goto_9

    :catch_8
    move-exception v0

    move-object v2, v14

    goto/16 :goto_f

    :catch_9
    move-object v2, v14

    goto/16 :goto_10

    :catchall_1
    move-exception v0

    move-object v1, v0

    goto/16 :goto_11

    :catch_a
    move-exception v0

    move-object/from16 v21, v1

    move-object/from16 v17, v2

    :goto_9
    if-eqz v2, :cond_16

    :try_start_d
    invoke-virtual {v2}, Lcom/czhj/volley/toolbox/HttpResponse;->getStatusCode()I

    move-result v1

    const-string v3, "Unexpected response code %d for %s"

    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/Object;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v4, v13

    const/4 v5, 0x1

    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/Request;->getUrl()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v4, v5

    invoke-static {v3, v4}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz v17, :cond_15

    new-instance v0, Lcom/czhj/volley/NetworkResponse;

    const/16 v18, 0x0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    sub-long v19, v3, v9

    move-object v15, v0

    move/from16 v16, v1

    invoke-direct/range {v15 .. v21}, Lcom/czhj/volley/NetworkResponse;-><init>(I[BZJLjava/util/List;)V
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_1

    if-eq v1, v12, :cond_14

    if-ne v1, v11, :cond_b

    goto :goto_d

    :cond_b
    const/16 v3, 0x191

    if-eq v1, v3, :cond_13

    const/16 v3, 0x193

    if-ne v1, v3, :cond_c

    goto :goto_b

    :cond_c
    const/16 v3, 0x190

    const-string v4, "server"

    if-lt v1, v3, :cond_e

    const/16 v3, 0x1f3

    if-gt v1, v3, :cond_e

    :try_start_e
    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/Request;->shouldRetryServerErrors()Z

    move-result v1

    if-eqz v1, :cond_d

    new-instance v1, Lcom/czhj/volley/ServerError;

    invoke-direct {v1, v0}, Lcom/czhj/volley/ServerError;-><init>(Lcom/czhj/volley/NetworkResponse;)V

    :goto_a
    invoke-static {v4, v8, v1}, Lcom/czhj/volley/toolbox/BasicNetwork;->a(Ljava/lang/String;Lcom/czhj/volley/Request;Lcom/czhj/volley/VolleyError;)V

    goto :goto_e

    :cond_d
    new-instance v1, Lcom/czhj/volley/ServerError;

    invoke-direct {v1, v0}, Lcom/czhj/volley/ServerError;-><init>(Lcom/czhj/volley/NetworkResponse;)V

    throw v1

    :cond_e
    const/16 v3, 0x1f4

    const/16 v5, 0x257

    if-lt v1, v3, :cond_10

    if-gt v1, v5, :cond_10

    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/Request;->shouldRetryServerErrors()Z

    move-result v1

    if-eqz v1, :cond_f

    new-instance v1, Lcom/czhj/volley/ServerError;

    invoke-direct {v1, v0}, Lcom/czhj/volley/ServerError;-><init>(Lcom/czhj/volley/NetworkResponse;)V

    goto :goto_a

    :cond_f
    new-instance v1, Lcom/czhj/volley/ServerError;

    invoke-direct {v1, v0}, Lcom/czhj/volley/ServerError;-><init>(Lcom/czhj/volley/NetworkResponse;)V

    throw v1

    :cond_10
    if-le v1, v5, :cond_12

    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/Request;->shouldRetryServerErrors()Z

    move-result v1

    if-eqz v1, :cond_11

    new-instance v1, Lcom/czhj/volley/ServerError;

    invoke-direct {v1, v0}, Lcom/czhj/volley/ServerError;-><init>(Lcom/czhj/volley/NetworkResponse;)V

    goto :goto_a

    :cond_11
    new-instance v1, Lcom/czhj/volley/ServerError;

    invoke-direct {v1, v0}, Lcom/czhj/volley/ServerError;-><init>(Lcom/czhj/volley/NetworkResponse;)V

    throw v1

    :cond_12
    new-instance v1, Lcom/czhj/volley/ServerError;

    invoke-direct {v1, v0}, Lcom/czhj/volley/ServerError;-><init>(Lcom/czhj/volley/NetworkResponse;)V

    throw v1

    :cond_13
    :goto_b
    const-string v1, "auth"

    new-instance v3, Lcom/czhj/volley/AuthFailureError;

    invoke-direct {v3, v0}, Lcom/czhj/volley/AuthFailureError;-><init>(Lcom/czhj/volley/NetworkResponse;)V

    :goto_c
    invoke-static {v1, v8, v3}, Lcom/czhj/volley/toolbox/BasicNetwork;->a(Ljava/lang/String;Lcom/czhj/volley/Request;Lcom/czhj/volley/VolleyError;)V

    goto :goto_e

    :cond_14
    :goto_d
    const-string v0, "redirect"

    invoke-static {v0, v8}, Lcom/czhj/volley/toolbox/BasicNetwork;->a(Ljava/lang/String;Lcom/czhj/volley/Request;)V

    goto :goto_e

    :cond_15
    const-string v1, "network"

    new-instance v3, Lcom/czhj/volley/NetworkError;

    invoke-direct {v3, v0}, Lcom/czhj/volley/NetworkError;-><init>(Ljava/lang/Throwable;)V
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_1

    goto :goto_c

    :goto_e
    if-eqz v2, :cond_0

    invoke-virtual {v2}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_f
    invoke-virtual {v2}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_f
    .catch Ljava/io/IOException; {:try_start_f .. :try_end_f} :catch_b

    goto/16 :goto_0

    :catch_b
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array v1, v13, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_0

    :cond_16
    :try_start_10
    new-instance v1, Lcom/czhj/volley/NoConnectionError;

    invoke-direct {v1, v0}, Lcom/czhj/volley/NoConnectionError;-><init>(Ljava/lang/Throwable;)V

    throw v1

    :catch_c
    move-exception v0

    :goto_f
    new-instance v1, Ljava/lang/RuntimeException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Bad URL "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/czhj/volley/Request;->getUrl()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v3, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1

    :catch_d
    :goto_10
    const-string v0, "socket"

    new-instance v1, Lcom/czhj/volley/TimeoutError;

    invoke-direct {v1}, Lcom/czhj/volley/TimeoutError;-><init>()V

    invoke-static {v0, v8, v1}, Lcom/czhj/volley/toolbox/BasicNetwork;->a(Ljava/lang/String;Lcom/czhj/volley/Request;Lcom/czhj/volley/VolleyError;)V
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_1

    if-eqz v2, :cond_0

    invoke-virtual {v2}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    if-eqz v0, :cond_0

    :try_start_11
    invoke-virtual {v2}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_11
    .catch Ljava/io/IOException; {:try_start_11 .. :try_end_11} :catch_e

    goto/16 :goto_0

    :catch_e
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array v1, v13, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_0

    :goto_11
    if-eqz v2, :cond_17

    invoke-virtual {v2}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    if-eqz v0, :cond_17

    :try_start_12
    invoke-virtual {v2}, Lcom/czhj/volley/toolbox/HttpResponse;->getContent()Ljava/io/InputStream;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_12
    .catch Ljava/io/IOException; {:try_start_12 .. :try_end_12} :catch_f

    goto :goto_12

    :catch_f
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-array v2, v13, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_17
    :goto_12
    throw v1
.end method
