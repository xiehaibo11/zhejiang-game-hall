.class public final Lcom/kwad/sdk/k;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/a/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/k$a;
    }
.end annotation


# instance fields
.field private final ahg:Lokhttp3/OkHttpClient;

.field private final ahh:Lokhttp3/Request$Builder;

.field private ahi:Lokhttp3/Request;

.field private ahj:Lokhttp3/Response;


# direct methods
.method private constructor <init>(Ljava/lang/String;Lokhttp3/OkHttpClient;)V
    .locals 1

    new-instance v0, Lokhttp3/Request$Builder;

    invoke-direct {v0}, Lokhttp3/Request$Builder;-><init>()V

    invoke-virtual {v0, p1}, Lokhttp3/Request$Builder;->url(Ljava/lang/String;)Lokhttp3/Request$Builder;

    move-result-object p1

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/k;-><init>(Lokhttp3/Request$Builder;Lokhttp3/OkHttpClient;)V

    return-void
.end method

.method synthetic constructor <init>(Ljava/lang/String;Lokhttp3/OkHttpClient;B)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/k;-><init>(Ljava/lang/String;Lokhttp3/OkHttpClient;)V

    return-void
.end method

.method private constructor <init>(Lokhttp3/Request$Builder;Lokhttp3/OkHttpClient;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/k;->ahh:Lokhttp3/Request$Builder;

    iput-object p2, p0, Lcom/kwad/sdk/k;->ahg:Lokhttp3/OkHttpClient;

    return-void
.end method

.method private bT(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string v0, "Content-Type"

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/k;->aY(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/utils/q;->getExtension(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v3, ".apk"

    if-nez v2, :cond_2

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-static {}, Landroid/webkit/MimeTypeMap;->getSingleton()Landroid/webkit/MimeTypeMap;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/webkit/MimeTypeMap;->getExtensionFromMimeType(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_0

    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "."

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    :goto_0
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_2
    :goto_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    :cond_3
    return-object p1
.end method

.method private static xO()Lokhttp3/OkHttpClient$Builder;
    .locals 6

    new-instance v0, Lokhttp3/OkHttpClient$Builder;

    invoke-direct {v0}, Lokhttp3/OkHttpClient$Builder;-><init>()V

    sget-object v1, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v2, 0x2710

    invoke-virtual {v0, v2, v3, v1}, Lokhttp3/OkHttpClient$Builder;->connectTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/j/a;

    invoke-direct {v1}, Lcom/kwad/sdk/j/a;-><init>()V

    invoke-virtual {v0, v1}, Lokhttp3/OkHttpClient$Builder;->addInterceptor(Lokhttp3/Interceptor;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    sget-object v1, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v2, 0x0

    invoke-virtual {v0, v2, v3, v1}, Lokhttp3/OkHttpClient$Builder;->readTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    new-instance v1, Lokhttp3/ConnectionPool;

    sget-object v2, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    const/4 v3, 0x6

    const-wide/32 v4, 0xea60

    invoke-direct {v1, v3, v4, v5, v2}, Lokhttp3/ConnectionPool;-><init>(IJLjava/util/concurrent/TimeUnit;)V

    invoke-virtual {v0, v1}, Lokhttp3/OkHttpClient$Builder;->connectionPool(Lokhttp3/ConnectionPool;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lokhttp3/OkHttpClient$Builder;->retryOnConnectionFailure(Z)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    return-object v0
.end method

.method private static xP()Lokhttp3/OkHttpClient$Builder;
    .locals 7

    new-instance v0, Lokhttp3/OkHttpClient$Builder;

    invoke-direct {v0}, Lokhttp3/OkHttpClient$Builder;-><init>()V

    sget-object v1, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v2, 0x2710

    invoke-virtual {v0, v2, v3, v1}, Lokhttp3/OkHttpClient$Builder;->connectTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/j/a;

    invoke-direct {v1}, Lcom/kwad/sdk/j/a;-><init>()V

    invoke-virtual {v0, v1}, Lokhttp3/OkHttpClient$Builder;->addInterceptor(Lokhttp3/Interceptor;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    const/4 v1, 0x1

    new-array v2, v1, [Lokhttp3/Protocol;

    sget-object v3, Lokhttp3/Protocol;->HTTP_1_1:Lokhttp3/Protocol;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-static {v2}, Lokhttp3/internal/Util;->immutableList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v2

    invoke-virtual {v0, v2}, Lokhttp3/OkHttpClient$Builder;->protocols(Ljava/util/List;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    sget-object v2, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v3, 0x0

    invoke-virtual {v0, v3, v4, v2}, Lokhttp3/OkHttpClient$Builder;->readTimeout(JLjava/util/concurrent/TimeUnit;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    new-instance v2, Lokhttp3/ConnectionPool;

    sget-object v3, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    const/4 v4, 0x6

    const-wide/32 v5, 0xea60

    invoke-direct {v2, v4, v5, v6, v3}, Lokhttp3/ConnectionPool;-><init>(IJLjava/util/concurrent/TimeUnit;)V

    invoke-virtual {v0, v2}, Lokhttp3/OkHttpClient$Builder;->connectionPool(Lokhttp3/ConnectionPool;)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    invoke-virtual {v0, v1}, Lokhttp3/OkHttpClient$Builder;->retryOnConnectionFailure(Z)Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    return-object v0
.end method

.method static synthetic xQ()Lokhttp3/OkHttpClient$Builder;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/k;->xP()Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    return-object v0
.end method

.method static synthetic xR()Lokhttp3/OkHttpClient$Builder;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/k;->xO()Lokhttp3/OkHttpClient$Builder;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final aY(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, "Content-Disposition"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/k;->ahj:Lokhttp3/Response;

    invoke-virtual {v0, p1}, Lokhttp3/Response;->header(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/f/f;->bq(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/k;->ahj:Lokhttp3/Response;

    invoke-virtual {p1}, Lokhttp3/Response;->request()Lokhttp3/Request;

    move-result-object p1

    invoke-virtual {p1}, Lokhttp3/Request;->url()Lokhttp3/HttpUrl;

    move-result-object p1

    invoke-virtual {p1}, Lokhttp3/HttpUrl;->pathSegments()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/k;->ahj:Lokhttp3/Response;

    invoke-virtual {v0, p1}, Lokhttp3/Response;->header(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    const-string p1, ""

    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "attachment; filename=\""

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-direct {p0, p1}, Lcom/kwad/sdk/k;->bT(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\""

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/k;->ahj:Lokhttp3/Response;

    if-nez v0, :cond_2

    const/4 p1, 0x0

    return-object p1

    :cond_2
    invoke-virtual {v0, p1}, Lokhttp3/Response;->header(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final addHeader(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/k;->ahh:Lokhttp3/Request$Builder;

    invoke-virtual {v0, p1, p2}, Lokhttp3/Request$Builder;->addHeader(Ljava/lang/String;Ljava/lang/String;)Lokhttp3/Request$Builder;

    return-void
.end method

.method public final execute()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/k;->ahi:Lokhttp3/Request;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/k;->ahh:Lokhttp3/Request$Builder;

    invoke-virtual {v0}, Lokhttp3/Request$Builder;->build()Lokhttp3/Request;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/k;->ahi:Lokhttp3/Request;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/k;->ahg:Lokhttp3/OkHttpClient;

    iget-object v1, p0, Lcom/kwad/sdk/k;->ahi:Lokhttp3/Request;

    invoke-virtual {v0, v1}, Lokhttp3/OkHttpClient;->newCall(Lokhttp3/Request;)Lokhttp3/Call;

    move-result-object v0

    invoke-interface {v0}, Lokhttp3/Call;->execute()Lokhttp3/Response;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/k;->ahj:Lokhttp3/Response;

    return-void
.end method

.method public final getInputStream()Ljava/io/InputStream;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/k;->ahj:Lokhttp3/Response;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lokhttp3/Response;->body()Lokhttp3/ResponseBody;

    move-result-object v0

    invoke-virtual {v0}, Lokhttp3/ResponseBody;->byteStream()Ljava/io/InputStream;

    move-result-object v0

    const-class v1, Lcom/kwad/sdk/service/a/h;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/h;

    invoke-interface {v1, v0}, Lcom/kwad/sdk/service/a/h;->wrapInputStream(Ljava/io/InputStream;)Ljava/io/InputStream;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "Please invoke #execute first!"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final getResponseCode()I
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/k;->ahj:Lokhttp3/Response;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lokhttp3/Response;->code()I

    move-result v0

    return v0

    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "Please invoke #execute first!"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final ue()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/k;->ahi:Lokhttp3/Request;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/k;->ahh:Lokhttp3/Request$Builder;

    invoke-virtual {v0}, Lokhttp3/Request$Builder;->build()Lokhttp3/Request;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/k;->ahi:Lokhttp3/Request;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/k;->ahi:Lokhttp3/Request;

    invoke-virtual {v0}, Lokhttp3/Request;->headers()Lokhttp3/Headers;

    move-result-object v0

    invoke-virtual {v0}, Lokhttp3/Headers;->toMultimap()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public final uf()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/k;->ahj:Lokhttp3/Response;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-virtual {v0}, Lokhttp3/Response;->headers()Lokhttp3/Headers;

    move-result-object v0

    invoke-virtual {v0}, Lokhttp3/Headers;->toMultimap()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public final ug()V
    .locals 2

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/k;->ahi:Lokhttp3/Request;

    iget-object v1, p0, Lcom/kwad/sdk/k;->ahj:Lokhttp3/Response;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lokhttp3/Response;->body()Lokhttp3/ResponseBody;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/k;->ahj:Lokhttp3/Response;

    invoke-virtual {v1}, Lokhttp3/Response;->body()Lokhttp3/ResponseBody;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    :cond_0
    iput-object v0, p0, Lcom/kwad/sdk/k;->ahj:Lokhttp3/Response;

    return-void
.end method
