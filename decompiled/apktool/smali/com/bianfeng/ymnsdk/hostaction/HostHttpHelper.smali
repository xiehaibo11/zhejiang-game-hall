.class public Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;
.super Ljava/lang/Object;
.source "HostHttpHelper.java"


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

    .line 61
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 62
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->context:Landroid/content/Context;

    .line 63
    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->headersMap:Ljava/util/TreeMap;

    .line 64
    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # Ljava/lang/String;

    .line 24
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$100(Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;Ljava/net/HttpURLConnection;Lcom/bianfeng/ymnsdk/action/HttpListener;)Z
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;
    .param p1, "x1"    # Ljava/net/HttpURLConnection;
    .param p2, "x2"    # Lcom/bianfeng/ymnsdk/action/HttpListener;

    .line 24
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->openUrl(Ljava/net/HttpURLConnection;Lcom/bianfeng/ymnsdk/action/HttpListener;)Z

    move-result v0

    return v0
.end method

.method static synthetic access$200(Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;)I
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;

    .line 24
    iget v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->errorCode:I

    return v0
.end method

.method static synthetic access$300(Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;

    .line 24
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->errorMsg:Ljava/lang/String;

    return-object v0
.end method

.method private addHeader(Ljava/net/HttpURLConnection;)V
    .locals 4
    .param p1, "request"    # Ljava/net/HttpURLConnection;

    .line 156
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->headersMap:Ljava/util/TreeMap;

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

.method private checkReasonCode(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "response"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 243
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 244
    .local v0, "json":Lorg/json/JSONObject;
    const-string v1, "code"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "0"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 245
    return-object v2

    .line 247
    :cond_0
    const-string v1, "-1"

    return-object v1
.end method

.method private createHttpRequest(Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 6
    .param p1, "urlString"    # Ljava/lang/String;
    .param p2, "postContent"    # Ljava/lang/String;

    .line 110
    const/4 v0, 0x0

    .line 111
    .local v0, "connection":Ljava/net/HttpURLConnection;
    const/4 v1, 0x0

    .line 112
    .local v1, "outputStream":Ljava/io/DataOutputStream;
    const/4 v2, 0x0

    .line 115
    .local v2, "urls":Ljava/net/URL;
    :try_start_0
    new-instance v3, Ljava/net/URL;

    invoke-direct {v3, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    move-object v2, v3

    .line 116
    invoke-virtual {v2}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v3

    check-cast v3, Ljava/net/HttpURLConnection;

    move-object v0, v3

    .line 117
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->context:Landroid/content/Context;

    invoke-static {v3, v2}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 118
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->context:Landroid/content/Context;

    invoke-static {v3, v2}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v3

    move-object v0, v3

    .line 120
    :cond_0
    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->addHeader(Ljava/net/HttpURLConnection;)V

    .line 121
    const/16 v3, 0x61a8

    invoke-virtual {v0, v3}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 122
    const/16 v3, 0x3a98

    invoke-virtual {v0, v3}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 123
    const/4 v3, 0x0

    invoke-virtual {v0, v3}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    .line 124
    const-string v3, "Content-Type"

    const-string v4, "application/json,charset=UTF-8"

    invoke-virtual {v0, v3, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 125
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->method:Ljava/lang/String;

    const-string v4, "POST"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 126
    const/4 v3, 0x1

    invoke-virtual {v0, v3}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 127
    invoke-virtual {v0, v3}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 128
    new-instance v3, Ljava/io/DataOutputStream;

    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    move-object v1, v3

    .line 129
    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/io/DataOutputStream;->writeBytes(Ljava/lang/String;)V

    .line 130
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->flush()V

    .line 131
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 139
    :cond_1
    if-eqz v1, :cond_2

    .line 141
    :try_start_1
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 144
    :goto_0
    goto :goto_1

    .line 142
    :catch_0
    move-exception v3

    .line 143
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .end local v3    # "e":Ljava/io/IOException;
    goto :goto_0

    .line 139
    :catchall_0
    move-exception v3

    goto :goto_2

    .line 134
    :catch_1
    move-exception v3

    .line 135
    .restart local v3    # "e":Ljava/io/IOException;
    :try_start_2
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 136
    const/16 v4, 0x259

    iput v4, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->errorCode:I

    .line 137
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "request data error "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->errorMsg:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 139
    .end local v3    # "e":Ljava/io/IOException;
    if-eqz v1, :cond_2

    .line 141
    :try_start_3
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_0

    .line 147
    :cond_2
    :goto_1
    return-object v0

    .line 139
    :goto_2
    if-eqz v1, :cond_3

    .line 141
    :try_start_4
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2

    .line 144
    goto :goto_3

    .line 142
    :catch_2
    move-exception v4

    .line 143
    .local v4, "e":Ljava/io/IOException;
    invoke-virtual {v4}, Ljava/io/IOException;->printStackTrace()V

    .line 146
    .end local v4    # "e":Ljava/io/IOException;
    :cond_3
    :goto_3
    throw v3
.end method

.method private getErrorMsg(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p1, "response"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 252
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 253
    .local v0, "json":Lorg/json/JSONObject;
    const-string v1, "message"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method private getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 5
    .param p1, "inputStream"    # Ljava/io/InputStream;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 232
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 233
    .local v0, "jsonBuilder":Ljava/lang/StringBuilder;
    const/4 v1, 0x0

    .line 234
    .local v1, "len":I
    const/high16 v2, 0x100000

    new-array v2, v2, [B

    .line 235
    .local v2, "buf":[B
    :goto_0
    invoke-virtual {p1, v2}, Ljava/io/InputStream;->read([B)I

    move-result v3

    move v1, v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_0

    .line 236
    new-instance v3, Ljava/lang/String;

    const/4 v4, 0x0

    invoke-direct {v3, v2, v4, v1}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 238
    :cond_0
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V

    .line 239
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    return-object v3
.end method

.method public static getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;
    .locals 8
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "url"    # Ljava/net/URL;

    .line 86
    const/4 v0, 0x0

    :try_start_0
    const-string v1, "connectivity"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/ConnectivityManager;

    .line 88
    .local v1, "cm":Landroid/net/ConnectivityManager;
    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v2

    .line 89
    .local v2, "ni":Landroid/net/NetworkInfo;
    if-eqz v2, :cond_2

    invoke-virtual {v2}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-virtual {v2}, Landroid/net/NetworkInfo;->getType()I

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_0

    .line 93
    :cond_0
    invoke-static {}, Landroid/net/Proxy;->getDefaultHost()Ljava/lang/String;

    move-result-object v3

    .line 94
    .local v3, "proxyHost":Ljava/lang/String;
    invoke-static {}, Landroid/net/Proxy;->getDefaultPort()I

    move-result v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 95
    .local v4, "port":I
    if-eqz v3, :cond_1

    const/4 v5, -0x1

    if-eq v4, v5, :cond_1

    .line 97
    :try_start_1
    new-instance v5, Ljava/net/InetSocketAddress;

    invoke-direct {v5, v3, v4}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    .line 98
    .local v5, "sa":Ljava/net/SocketAddress;
    new-instance v6, Ljava/net/Proxy;

    sget-object v7, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    invoke-direct {v6, v7, v5}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 99
    .local v6, "proxy":Ljava/net/Proxy;
    invoke-virtual {p1, v6}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object v7

    check-cast v7, Ljava/net/HttpURLConnection;
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-object v7

    .line 100
    .end local v5    # "sa":Ljava/net/SocketAddress;
    .end local v6    # "proxy":Ljava/net/Proxy;
    :catch_0
    move-exception v5

    .line 101
    .local v5, "e":Ljava/io/IOException;
    :try_start_2
    invoke-virtual {v5}, Ljava/io/IOException;->printStackTrace()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    .line 105
    .end local v1    # "cm":Landroid/net/ConnectivityManager;
    .end local v2    # "ni":Landroid/net/NetworkInfo;
    .end local v3    # "proxyHost":Ljava/lang/String;
    .end local v4    # "port":I
    .end local v5    # "e":Ljava/io/IOException;
    :cond_1
    goto :goto_1

    .line 90
    .restart local v1    # "cm":Landroid/net/ConnectivityManager;
    .restart local v2    # "ni":Landroid/net/NetworkInfo;
    :cond_2
    :goto_0
    return-object v0

    .line 104
    .end local v1    # "cm":Landroid/net/ConnectivityManager;
    .end local v2    # "ni":Landroid/net/NetworkInfo;
    :catch_1
    move-exception v1

    .line 106
    :goto_1
    return-object v0
.end method

.method private openUrl(Ljava/net/HttpURLConnection;Lcom/bianfeng/ymnsdk/action/HttpListener;)Z
    .locals 7
    .param p1, "connection"    # Ljava/net/HttpURLConnection;
    .param p2, "listerner"    # Lcom/bianfeng/ymnsdk/action/HttpListener;

    .line 180
    const/16 v0, 0x25c

    .line 181
    .local v0, "code":I
    const/4 v1, 0x0

    .line 183
    .local v1, "inputStream":Ljava/io/InputStream;
    const/4 v2, 0x0

    if-eqz p1, :cond_7

    .line 184
    :try_start_0
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v3

    move v0, v3

    .line 185
    const/16 v3, 0xc8

    if-ne v0, v3, :cond_3

    .line 186
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v3

    move-object v1, v3

    .line 187
    invoke-direct {p0, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v3

    .line 188
    .local v3, "infoStr":Ljava/lang/String;
    invoke-direct {p0, v3}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->checkReasonCode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 189
    .local v4, "str":Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "code\u53c2\u6570"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 190
    const-string v5, "0"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 192
    invoke-interface {p2, v3}, Lcom/bianfeng/ymnsdk/action/HttpListener;->onComplete(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_4
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 193
    const/4 v2, 0x1

    .line 214
    if-eqz v1, :cond_0

    .line 216
    :try_start_1
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 219
    goto :goto_0

    .line 217
    :catch_0
    move-exception v5

    .line 218
    .local v5, "e":Ljava/io/IOException;
    invoke-virtual {v5}, Ljava/io/IOException;->printStackTrace()V

    .line 193
    .end local v5    # "e":Ljava/io/IOException;
    :cond_0
    :goto_0
    return v2

    .line 195
    :cond_1
    :try_start_2
    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    iput v5, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->errorCode:I

    .line 196
    invoke-direct {p0, v3}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->getErrorMsg(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->errorMsg:Ljava/lang/String;
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_4
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_3
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 197
    nop

    .line 214
    if-eqz v1, :cond_2

    .line 216
    :try_start_3
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1

    .line 219
    goto :goto_1

    .line 217
    :catch_1
    move-exception v5

    .line 218
    .restart local v5    # "e":Ljava/io/IOException;
    invoke-virtual {v5}, Ljava/io/IOException;->printStackTrace()V

    .line 197
    .end local v5    # "e":Ljava/io/IOException;
    :cond_2
    :goto_1
    return v2

    .line 200
    .end local v3    # "infoStr":Ljava/lang/String;
    .end local v4    # "str":Ljava/lang/String;
    :cond_3
    :try_start_4
    iput v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->errorCode:I

    .line 201
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getErrorStream()Ljava/io/InputStream;

    move-result-object v3

    move-object v1, v3

    .line 202
    invoke-direct {p0, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->errorMsg:Ljava/lang/String;
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_4
    .catch Lorg/json/JSONException; {:try_start_4 .. :try_end_4} :catch_3
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 204
    nop

    .line 214
    if-eqz v1, :cond_4

    .line 216
    :try_start_5
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_2

    .line 219
    goto :goto_2

    .line 217
    :catch_2
    move-exception v3

    .line 218
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 204
    .end local v3    # "e":Ljava/io/IOException;
    :cond_4
    :goto_2
    return v2

    .line 214
    :catchall_0
    move-exception v2

    goto :goto_5

    .line 209
    :catch_3
    move-exception v3

    goto :goto_3

    :catch_4
    move-exception v3

    .line 210
    .local v3, "e":Ljava/lang/Exception;
    :goto_3
    :try_start_6
    iput v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->errorCode:I

    .line 211
    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->errorMsg:Ljava/lang/String;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 212
    nop

    .line 214
    if-eqz v1, :cond_5

    .line 216
    :try_start_7
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_5

    .line 219
    goto :goto_4

    .line 217
    :catch_5
    move-exception v4

    .line 218
    .local v4, "e":Ljava/io/IOException;
    invoke-virtual {v4}, Ljava/io/IOException;->printStackTrace()V

    .line 212
    .end local v4    # "e":Ljava/io/IOException;
    :cond_5
    :goto_4
    return v2

    .line 214
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_5
    if-eqz v1, :cond_6

    .line 216
    :try_start_8
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_6

    .line 219
    goto :goto_6

    .line 217
    :catch_6
    move-exception v3

    .line 218
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 221
    .end local v3    # "e":Ljava/io/IOException;
    :cond_6
    :goto_6
    throw v2

    .line 207
    :cond_7
    nop

    .line 214
    if-eqz v1, :cond_8

    .line 216
    :try_start_9
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_7

    .line 219
    goto :goto_7

    .line 217
    :catch_7
    move-exception v3

    .line 218
    .restart local v3    # "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 207
    .end local v3    # "e":Ljava/io/IOException;
    :cond_8
    :goto_7
    return v2
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

    .line 71
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->headersMap:Ljava/util/TreeMap;

    return-object v0
.end method

.method public isGetMethod()Z
    .locals 2

    .line 75
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->method:Ljava/lang/String;

    const-string v1, "GET"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public request(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V
    .locals 1
    .param p1, "requestUrl"    # Ljava/lang/String;
    .param p2, "postContent"    # Ljava/lang/String;
    .param p3, "listerner"    # Lcom/bianfeng/ymnsdk/action/HttpListener;

    .line 163
    new-instance v0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;-><init>(Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V

    .line 175
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    .line 177
    return-void
.end method

.method public setMethod(I)V
    .locals 1
    .param p1, "method"    # I

    .line 67
    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    const-string v0, "GET"

    goto :goto_0

    :cond_0
    const-string v0, "POST"

    :goto_0
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->method:Ljava/lang/String;

    .line 68
    return-void
.end method
