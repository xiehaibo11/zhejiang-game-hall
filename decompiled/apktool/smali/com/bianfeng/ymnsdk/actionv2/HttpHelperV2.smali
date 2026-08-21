.class public Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;
.super Ljava/lang/Object;
.source "HttpHelperV2.java"


# static fields
.field public static final CODE_NOT_NETWORK:I = 0x25c

.field public static final CODE_REQ_TIME_OUT:I = 0x258

.field public static final CODE_RES_SUCCESS:I = 0x0

.field public static final CODE_SERVER_ERROR:I = 0x25a

.field public static final CODE_THRIDSERVER_ERROR:I = 0x25b

.field public static final CODE_UNKNOW_ERROR:I = 0x259

.field public static final CODE_UNSET:I = 0x3e7

.field public static final HTTP_METHOD_GET:I = 0x1

.field public static final HTTP_METHOD_POST:I = 0x2

.field public static final HTTP_REQ_LIMIT_TIME:I = 0x3a98

.field public static final HTTP_RES_LIMIT_TIME:I = 0x61a8

.field public static final VERSION_SERVER:Ljava/lang/String; = "v1"

.field public static final VERSION_SERVER_V2:Ljava/lang/String; = "v2"


# instance fields
.field private context:Landroid/content/Context;

.field private errorCode:I

.field private errorMsg:Ljava/lang/String;

.field private headersMap:Ljava/util/TreeMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private method:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 65
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 66
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->context:Landroid/content/Context;

    .line 67
    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->headersMap:Ljava/util/TreeMap;

    .line 68
    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # Ljava/lang/String;
    .param p3, "x3"    # Ljava/lang/String;
    .param p4, "x4"    # Ljava/lang/String;

    .line 25
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$100(Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;Ljava/net/HttpURLConnection;Lcom/bianfeng/ymnsdk/action/HttpListener;)Z
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;
    .param p1, "x1"    # Ljava/net/HttpURLConnection;
    .param p2, "x2"    # Lcom/bianfeng/ymnsdk/action/HttpListener;

    .line 25
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->openUrl(Ljava/net/HttpURLConnection;Lcom/bianfeng/ymnsdk/action/HttpListener;)Z

    move-result v0

    return v0
.end method

.method static synthetic access$200(Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;)I
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    .line 25
    iget v0, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorCode:I

    return v0
.end method

.method static synthetic access$300(Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    .line 25
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorMsg:Ljava/lang/String;

    return-object v0
.end method

.method private addHeader(Ljava/net/HttpURLConnection;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4
    .param p1, "request"    # Ljava/net/HttpURLConnection;
    .param p2, "postContent"    # Ljava/lang/String;
    .param p3, "trace"    # Ljava/lang/String;

    .line 155
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->headersMap:Ljava/util/TreeMap;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v1

    invoke-virtual {v1, p2, p3}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getPaySignatue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "X-Signature"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 156
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->headersMap:Ljava/util/TreeMap;

    invoke-virtual {v0}, Ljava/util/TreeMap;->entrySet()Ljava/util/Set;

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

    .line 157
    .local v1, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 158
    .end local v1    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    goto :goto_0

    .line 159
    :cond_0
    return-void
.end method

.method private checkReasonCode(Ljava/util/Map;)Ljava/lang/String;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 248
    .local p1, "response":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;"
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    const-string v2, "1"

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 249
    .local v1, "h":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;"
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 250
    .local v3, "key":Ljava/lang/String;
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/List;

    .line 251
    .local v4, "values":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/CharSequence;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 252
    goto :goto_0

    .line 254
    :cond_0
    const-string v5, "X-Error-Code"

    invoke-virtual {v3, v5}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 256
    invoke-interface {v4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v5

    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 257
    .local v0, "str":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 258
    return-object v2

    .line 260
    :cond_1
    return-object v0

    .line 264
    .end local v0    # "str":Ljava/lang/String;
    .end local v1    # "h":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;"
    .end local v3    # "key":Ljava/lang/String;
    .end local v4    # "values":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    :cond_2
    goto :goto_0

    .line 265
    :cond_3
    return-object v2
.end method

.method private createHttpRequest(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 6
    .param p1, "urlString"    # Ljava/lang/String;
    .param p2, "postContent"    # Ljava/lang/String;
    .param p3, "token"    # Ljava/lang/String;
    .param p4, "trace"    # Ljava/lang/String;

    .line 109
    const/4 v0, 0x0

    .line 110
    .local v0, "connection":Ljava/net/HttpURLConnection;
    const/4 v1, 0x0

    .line 111
    .local v1, "outputStream":Ljava/io/DataOutputStream;
    const/4 v2, 0x0

    .line 113
    .local v2, "urls":Ljava/net/URL;
    :try_start_0
    new-instance v3, Ljava/net/URL;

    invoke-direct {v3, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    move-object v2, v3

    .line 114
    invoke-virtual {v2}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v3

    check-cast v3, Ljava/net/HttpURLConnection;

    move-object v0, v3

    .line 115
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->context:Landroid/content/Context;

    invoke-static {v3, v2}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 116
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->context:Landroid/content/Context;

    invoke-static {v3, v2}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v3

    move-object v0, v3

    .line 118
    :cond_0
    const-string v3, "Authorization"

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "BEARER "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 119
    invoke-direct {p0, v0, p2, p4}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->addHeader(Ljava/net/HttpURLConnection;Ljava/lang/String;Ljava/lang/String;)V

    .line 120
    const/16 v3, 0x61a8

    invoke-virtual {v0, v3}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 121
    const/16 v3, 0x3a98

    invoke-virtual {v0, v3}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 122
    const/4 v3, 0x0

    invoke-virtual {v0, v3}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    .line 123
    const-string v3, "Content-Type"

    const-string v4, "application/json,charset=UTF-8"

    invoke-virtual {v0, v3, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 124
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->method:Ljava/lang/String;

    const-string v4, "POST"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 125
    const/4 v3, 0x1

    invoke-virtual {v0, v3}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 126
    invoke-virtual {v0, v3}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 128
    :cond_1
    new-instance v3, Ljava/io/DataOutputStream;

    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    move-object v1, v3

    .line 129
    const-string v3, "UTF-8"

    invoke-virtual {p2, v3}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v3

    .line 130
    .local v3, "bytes":[B
    invoke-virtual {v1, v3}, Ljava/io/DataOutputStream;->write([B)V

    .line 131
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->flush()V

    .line 132
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 138
    .end local v3    # "bytes":[B
    nop

    .line 140
    :try_start_1
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 143
    :goto_0
    goto :goto_1

    .line 141
    :catch_0
    move-exception v3

    .line 142
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .end local v3    # "e":Ljava/io/IOException;
    goto :goto_0

    .line 138
    :catchall_0
    move-exception v3

    goto :goto_2

    .line 133
    :catch_1
    move-exception v3

    .line 134
    .local v3, "e":Ljava/lang/Exception;
    :try_start_2
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 135
    const/16 v4, 0x259

    iput v4, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorCode:I

    .line 136
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "request data error "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorMsg:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 138
    .end local v3    # "e":Ljava/lang/Exception;
    if-eqz v1, :cond_2

    .line 140
    :try_start_3
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_0

    .line 146
    :cond_2
    :goto_1
    return-object v0

    .line 138
    :goto_2
    if-eqz v1, :cond_3

    .line 140
    :try_start_4
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2

    .line 143
    goto :goto_3

    .line 141
    :catch_2
    move-exception v4

    .line 142
    .local v4, "e":Ljava/io/IOException;
    invoke-virtual {v4}, Ljava/io/IOException;->printStackTrace()V

    .line 145
    .end local v4    # "e":Ljava/io/IOException;
    :cond_3
    :goto_3
    throw v3
.end method

.method private getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 5
    .param p1, "inputStream"    # Ljava/io/InputStream;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 237
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 238
    .local v0, "jsonBuilder":Ljava/lang/StringBuilder;
    const/4 v1, 0x0

    .line 239
    .local v1, "len":I
    const/high16 v2, 0x100000

    new-array v2, v2, [B

    .line 240
    .local v2, "buf":[B
    :goto_0
    invoke-virtual {p1, v2}, Ljava/io/InputStream;->read([B)I

    move-result v3

    move v1, v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_0

    .line 241
    new-instance v3, Ljava/lang/String;

    const/4 v4, 0x0

    invoke-direct {v3, v2, v4, v1}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 243
    :cond_0
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V

    .line 244
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    return-object v3
.end method

.method public static getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;
    .locals 8
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "url"    # Ljava/net/URL;

    .line 89
    const-string v0, "connectivity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    .line 90
    .local v0, "cm":Landroid/net/ConnectivityManager;
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    .line 91
    .local v1, "ni":Landroid/net/NetworkInfo;
    const/4 v2, 0x0

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getType()I

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_0

    .line 94
    :cond_0
    invoke-static {}, Landroid/net/Proxy;->getDefaultHost()Ljava/lang/String;

    move-result-object v3

    .line 95
    .local v3, "proxyHost":Ljava/lang/String;
    invoke-static {}, Landroid/net/Proxy;->getDefaultPort()I

    move-result v4

    .line 96
    .local v4, "port":I
    if-eqz v3, :cond_1

    const/4 v5, -0x1

    if-eq v4, v5, :cond_1

    .line 98
    :try_start_0
    new-instance v5, Ljava/net/InetSocketAddress;

    invoke-direct {v5, v3, v4}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    .line 99
    .local v5, "sa":Ljava/net/SocketAddress;
    new-instance v6, Ljava/net/Proxy;

    sget-object v7, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    invoke-direct {v6, v7, v5}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 100
    .local v6, "proxy":Ljava/net/Proxy;
    invoke-virtual {p1, v6}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object v7

    check-cast v7, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v7

    .line 101
    .end local v5    # "sa":Ljava/net/SocketAddress;
    .end local v6    # "proxy":Ljava/net/Proxy;
    :catch_0
    move-exception v5

    .line 102
    .local v5, "e":Ljava/io/IOException;
    invoke-virtual {v5}, Ljava/io/IOException;->printStackTrace()V

    .line 105
    .end local v5    # "e":Ljava/io/IOException;
    :cond_1
    return-object v2

    .line 92
    .end local v3    # "proxyHost":Ljava/lang/String;
    .end local v4    # "port":I
    :cond_2
    :goto_0
    return-object v2
.end method

.method private openUrl(Ljava/net/HttpURLConnection;Lcom/bianfeng/ymnsdk/action/HttpListener;)Z
    .locals 9
    .param p1, "connection"    # Ljava/net/HttpURLConnection;
    .param p2, "listerner"    # Lcom/bianfeng/ymnsdk/action/HttpListener;

    .line 188
    const-string v0, "|"

    const-string v1, "\u9519\u8bef\u4fe1\u606f\uff1a"

    const/16 v2, 0x25c

    .line 189
    .local v2, "code":I
    const/4 v3, 0x0

    .line 191
    .local v3, "inputStream":Ljava/io/InputStream;
    const/4 v4, 0x0

    :try_start_0
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v5

    move v2, v5

    .line 192
    const/16 v5, 0xc8

    if-ne v2, v5, :cond_3

    .line 193
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v5

    move-object v3, v5

    .line 194
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object v5

    invoke-direct {p0, v5}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->checkReasonCode(Ljava/util/Map;)Ljava/lang/String;

    move-result-object v5

    .line 195
    .local v5, "str":Ljava/lang/String;
    invoke-direct {p0, v3}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v6

    .line 197
    .local v6, "infoStr":Ljava/lang/String;
    const-string v7, "0"

    invoke-virtual {v7, v5}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_1

    .line 198
    invoke-interface {p2, v6}, Lcom/bianfeng/ymnsdk/action/HttpListener;->onComplete(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 199
    const/4 v0, 0x1

    .line 219
    if-eqz v3, :cond_0

    .line 221
    :try_start_1
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 224
    goto :goto_0

    .line 222
    :catch_0
    move-exception v1

    .line 223
    .local v1, "e":Ljava/io/IOException;
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    .line 199
    .end local v1    # "e":Ljava/io/IOException;
    :cond_0
    :goto_0
    return v0

    .line 201
    :cond_1
    :try_start_2
    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v7

    iput v7, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorCode:I

    .line 202
    iput-object v6, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorMsg:Ljava/lang/String;

    .line 203
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorMsg:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 204
    nop

    .line 219
    if-eqz v3, :cond_2

    .line 221
    :try_start_3
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1

    .line 224
    goto :goto_1

    .line 222
    :catch_1
    move-exception v0

    .line 223
    .local v0, "e":Ljava/io/IOException;
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 204
    .end local v0    # "e":Ljava/io/IOException;
    :cond_2
    :goto_1
    return v4

    .line 207
    .end local v5    # "str":Ljava/lang/String;
    .end local v6    # "infoStr":Ljava/lang/String;
    :cond_3
    :try_start_4
    iput v2, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorCode:I

    .line 208
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getErrorStream()Ljava/io/InputStream;

    move-result-object v5

    move-object v3, v5

    .line 209
    invoke-direct {p0, v3}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorMsg:Ljava/lang/String;

    .line 210
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorCode:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorMsg:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 211
    nop

    .line 219
    if-eqz v3, :cond_4

    .line 221
    :try_start_5
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_2

    .line 224
    goto :goto_2

    .line 222
    :catch_2
    move-exception v0

    .line 223
    .restart local v0    # "e":Ljava/io/IOException;
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 211
    .end local v0    # "e":Ljava/io/IOException;
    :cond_4
    :goto_2
    return v4

    .line 219
    :catchall_0
    move-exception v0

    goto :goto_4

    .line 213
    :catch_3
    move-exception v5

    .line 214
    .local v5, "e":Ljava/lang/Exception;
    :try_start_6
    iput v2, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorCode:I

    .line 215
    invoke-virtual {v5}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v6

    iput-object v6, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorMsg:Ljava/lang/String;

    .line 216
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget v7, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorCode:I

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->errorMsg:Ljava/lang/String;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 217
    nop

    .line 219
    if-eqz v3, :cond_5

    .line 221
    :try_start_7
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_4

    .line 224
    goto :goto_3

    .line 222
    :catch_4
    move-exception v0

    .line 223
    .restart local v0    # "e":Ljava/io/IOException;
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 217
    .end local v0    # "e":Ljava/io/IOException;
    :cond_5
    :goto_3
    return v4

    .line 219
    .end local v5    # "e":Ljava/lang/Exception;
    :goto_4
    if-eqz v3, :cond_6

    .line 221
    :try_start_8
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_5

    .line 224
    goto :goto_5

    .line 222
    :catch_5
    move-exception v1

    .line 223
    .restart local v1    # "e":Ljava/io/IOException;
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    .line 226
    .end local v1    # "e":Ljava/io/IOException;
    :cond_6
    :goto_5
    throw v0
.end method


# virtual methods
.method public getHeadersMap()Ljava/util/TreeMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 75
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->headersMap:Ljava/util/TreeMap;

    return-object v0
.end method

.method public isGetMethod()Z
    .locals 2

    .line 79
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->method:Ljava/lang/String;

    const-string v1, "GET"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public request(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V
    .locals 8
    .param p1, "url"    # Ljava/lang/String;
    .param p2, "postContent"    # Ljava/lang/String;
    .param p3, "payloadEntity"    # Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;
    .param p4, "trace"    # Ljava/lang/String;
    .param p5, "listerner"    # Lcom/bianfeng/ymnsdk/action/HttpListener;

    .line 164
    if-nez p3, :cond_0

    .line 165
    const-string v0, "  ---------  payloadEntity is null --------- "

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 166
    return-void

    .line 168
    :cond_0
    new-instance v0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;

    move-object v1, v0

    move-object v2, p0

    move-object v3, p3

    move-object v4, p1

    move-object v5, p2

    move-object v6, p4

    move-object v7, p5

    invoke-direct/range {v1 .. v7}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;-><init>(Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V

    .line 183
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    .line 185
    return-void
.end method

.method public setMethod(I)V
    .locals 1
    .param p1, "method"    # I

    .line 71
    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    const-string v0, "GET"

    goto :goto_0

    :cond_0
    const-string v0, "POST"

    :goto_0
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->method:Ljava/lang/String;

    .line 72
    return-void
.end method
