.class public Lcom/bianfeng/netlibsdk/HurlStack;
.super Ljava/lang/Object;
.source "HurlStack.java"

# interfaces
.implements Lcom/bianfeng/netlibsdk/HttpStack;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/netlibsdk/HurlStack$UrlConnectionInputStream;
    }
.end annotation


# static fields
.field private static final HTTP_CONTINUE:I = 0x64


# instance fields
.field private final mSslSocketFactory:Ljavax/net/ssl/SSLSocketFactory;


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    .line 26
    invoke-direct {p0, v0}, Lcom/bianfeng/netlibsdk/HurlStack;-><init>(Ljavax/net/ssl/SSLSocketFactory;)V

    return-void
.end method

.method public constructor <init>(Ljavax/net/ssl/SSLSocketFactory;)V
    .locals 0

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 30
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/HurlStack;->mSslSocketFactory:Ljavax/net/ssl/SSLSocketFactory;

    return-void
.end method

.method static synthetic access$000(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;
    .locals 0

    .line 19
    invoke-static {p0}, Lcom/bianfeng/netlibsdk/HurlStack;->inputStreamFromConnection(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;

    move-result-object p0

    return-object p0
.end method

.method private addBody(Ljava/net/HttpURLConnection;Lcom/bianfeng/netlibsdk/Request;[B)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/net/HttpURLConnection;",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;[B)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const/4 v0, 0x1

    .line 162
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 163
    new-instance v0, Ljava/io/DataOutputStream;

    array-length v1, p3

    invoke-virtual {p0, p2, p1, v1}, Lcom/bianfeng/netlibsdk/HurlStack;->createOutputStream(Lcom/bianfeng/netlibsdk/Request;Ljava/net/HttpURLConnection;I)Ljava/io/OutputStream;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    .line 164
    invoke-virtual {v0, p3}, Ljava/io/DataOutputStream;->write([B)V

    .line 165
    invoke-virtual {v0}, Ljava/io/DataOutputStream;->close()V

    return-void
.end method

.method private addBodyIfExists(Ljava/net/HttpURLConnection;Lcom/bianfeng/netlibsdk/Request;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/net/HttpURLConnection;",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 154
    invoke-virtual {p2}, Lcom/bianfeng/netlibsdk/Request;->getBody()[B

    move-result-object v0

    if-eqz v0, :cond_0

    .line 156
    invoke-direct {p0, p1, p2, v0}, Lcom/bianfeng/netlibsdk/HurlStack;->addBody(Ljava/net/HttpURLConnection;Lcom/bianfeng/netlibsdk/Request;[B)V

    :cond_0
    return-void
.end method

.method static convertHeaders(Ljava/util/Map;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;)",
            "Ljava/util/List<",
            "Lcom/bianfeng/netlibsdk/Header;",
            ">;"
        }
    .end annotation

    .line 72
    new-instance v0, Ljava/util/ArrayList;

    invoke-interface {p0}, Ljava/util/Map;->size()I

    move-result v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 73
    invoke-interface {p0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 74
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 75
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 76
    new-instance v4, Lcom/bianfeng/netlibsdk/Header;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-direct {v4, v5, v3}, Lcom/bianfeng/netlibsdk/Header;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private static hasResponseBody(II)Z
    .locals 0

    const/16 p0, 0x64

    if-gt p0, p1, :cond_0

    const/16 p0, 0xc8

    if-lt p1, p0, :cond_1

    :cond_0
    const/16 p0, 0xcc

    if-eq p1, p0, :cond_1

    const/16 p0, 0x130

    if-eq p1, p0, :cond_1

    const/4 p0, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method private static inputStreamFromConnection(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;
    .locals 0

    .line 112
    :try_start_0
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object p0
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 114
    :catch_0
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getErrorStream()Ljava/io/InputStream;

    move-result-object p0

    :goto_0
    return-object p0
.end method

.method private openConnection(Ljava/net/URL;Lcom/bianfeng/netlibsdk/Request;)Ljava/net/HttpURLConnection;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/net/URL;",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)",
            "Ljava/net/HttpURLConnection;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 126
    invoke-virtual {p0, p1}, Lcom/bianfeng/netlibsdk/HurlStack;->createConnection(Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v0

    .line 127
    invoke-virtual {p2}, Lcom/bianfeng/netlibsdk/Request;->getTimeoutMs()I

    move-result p2

    .line 128
    invoke-virtual {v0, p2}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 129
    invoke-virtual {v0, p2}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const/4 p2, 0x0

    .line 130
    invoke-virtual {v0, p2}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const/4 p2, 0x1

    .line 131
    invoke-virtual {v0, p2}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 132
    invoke-virtual {p1}, Ljava/net/URL;->getProtocol()Ljava/lang/String;

    move-result-object p1

    const-string p2, "https"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/bianfeng/netlibsdk/HurlStack;->mSslSocketFactory:Ljavax/net/ssl/SSLSocketFactory;

    if-eqz p1, :cond_0

    .line 133
    move-object p2, v0

    check-cast p2, Ljavax/net/ssl/HttpsURLConnection;

    invoke-virtual {p2, p1}, Ljavax/net/ssl/HttpsURLConnection;->setSSLSocketFactory(Ljavax/net/ssl/SSLSocketFactory;)V

    :cond_0
    return-object v0
.end method


# virtual methods
.method protected createConnection(Ljava/net/URL;)Ljava/net/HttpURLConnection;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 120
    invoke-virtual {p1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;

    .line 121
    invoke-static {}, Ljava/net/HttpURLConnection;->getFollowRedirects()Z

    move-result v0

    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    return-object p1
.end method

.method protected createInputStream(Lcom/bianfeng/netlibsdk/Request;Ljava/net/HttpURLConnection;)Ljava/io/InputStream;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;",
            "Ljava/net/HttpURLConnection;",
            ")",
            "Ljava/io/InputStream;"
        }
    .end annotation

    .line 106
    new-instance p1, Lcom/bianfeng/netlibsdk/HurlStack$UrlConnectionInputStream;

    invoke-direct {p1, p2}, Lcom/bianfeng/netlibsdk/HurlStack$UrlConnectionInputStream;-><init>(Ljava/net/HttpURLConnection;)V

    return-object p1
.end method

.method protected createOutputStream(Lcom/bianfeng/netlibsdk/Request;Ljava/net/HttpURLConnection;I)Ljava/io/OutputStream;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;",
            "Ljava/net/HttpURLConnection;",
            "I)",
            "Ljava/io/OutputStream;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 169
    invoke-virtual {p2}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object p1

    return-object p1
.end method

.method public executeRequest(Lcom/bianfeng/netlibsdk/Request;)Lcom/bianfeng/netlibsdk/HttpResponse;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)",
            "Lcom/bianfeng/netlibsdk/HttpResponse;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 35
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 36
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->getHeaders()Ljava/util/Map;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->putAll(Ljava/util/Map;)V

    .line 37
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->getUrl()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    const/4 v3, 0x0

    .line 41
    :try_start_0
    new-instance v4, Ljava/net/URL;

    invoke-direct {v4, v1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 42
    invoke-direct {p0, v4, p1}, Lcom/bianfeng/netlibsdk/HurlStack;->openConnection(Ljava/net/URL;Lcom/bianfeng/netlibsdk/Request;)Ljava/net/HttpURLConnection;

    move-result-object v3

    .line 43
    invoke-virtual {v0}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 44
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v3, v4, v1}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 46
    :cond_0
    invoke-virtual {p0, v3, p1}, Lcom/bianfeng/netlibsdk/HurlStack;->setConnectionParametersForRequest(Ljava/net/HttpURLConnection;Lcom/bianfeng/netlibsdk/Request;)V

    .line 47
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_3

    .line 51
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->getMethod()I

    move-result v1

    invoke-static {v1, v0}, Lcom/bianfeng/netlibsdk/HurlStack;->hasResponseBody(II)Z

    move-result v1

    if-nez v1, :cond_2

    .line 52
    new-instance p1, Lcom/bianfeng/netlibsdk/HttpResponse;

    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/netlibsdk/HurlStack;->convertHeaders(Ljava/util/Map;)Ljava/util/List;

    move-result-object v1

    invoke-direct {p1, v0, v1}, Lcom/bianfeng/netlibsdk/HttpResponse;-><init>(ILjava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v3, :cond_1

    .line 63
    :try_start_1
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_1
    return-object p1

    :cond_2
    const/4 v2, 0x1

    .line 55
    :try_start_2
    new-instance v1, Lcom/bianfeng/netlibsdk/HttpResponse;

    .line 57
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/netlibsdk/HurlStack;->convertHeaders(Ljava/util/Map;)Ljava/util/List;

    move-result-object v4

    .line 58
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getContentLength()I

    move-result v5

    .line 59
    invoke-virtual {p0, p1, v3}, Lcom/bianfeng/netlibsdk/HurlStack;->createInputStream(Lcom/bianfeng/netlibsdk/Request;Ljava/net/HttpURLConnection;)Ljava/io/InputStream;

    move-result-object p1

    invoke-direct {v1, v0, v4, v5, p1}, Lcom/bianfeng/netlibsdk/HttpResponse;-><init>(ILjava/util/List;ILjava/io/InputStream;)V

    return-object v1

    .line 49
    :cond_3
    new-instance p1, Ljava/io/IOException;

    const-string v0, "Could not retrieve response code from HttpUrlConnection."

    invoke-direct {p1, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    move-exception p1

    if-nez v2, :cond_4

    if-eqz v3, :cond_4

    .line 63
    :try_start_3
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    .line 68
    :catch_1
    :cond_4
    throw p1
.end method

.method setConnectionParametersForRequest(Ljava/net/HttpURLConnection;Lcom/bianfeng/netlibsdk/Request;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/net/HttpURLConnection;",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 139
    invoke-virtual {p2}, Lcom/bianfeng/netlibsdk/Request;->getMethod()I

    move-result v0

    if-eqz v0, :cond_1

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    const-string v0, "POST"

    .line 144
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    .line 145
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/netlibsdk/HurlStack;->addBodyIfExists(Ljava/net/HttpURLConnection;Lcom/bianfeng/netlibsdk/Request;)V

    goto :goto_0

    .line 148
    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "Unknown method type."

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_1
    const-string p2, "GET"

    .line 141
    invoke-virtual {p1, p2}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    :goto_0
    return-void
.end method
