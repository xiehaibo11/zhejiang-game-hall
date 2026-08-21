.class public Lcom/bianfeng/paylib/action/HttpHelper;
.super Ljava/lang/Object;
.source "HttpHelper.java"


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

.field public static final VERSION_SERVER_V2:Ljava/lang/String; = "v2"


# instance fields
.field private final TAG:Ljava/lang/String;

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

    .line 64
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "HttpHelper"

    .line 28
    iput-object v0, p0, Lcom/bianfeng/paylib/action/HttpHelper;->TAG:Ljava/lang/String;

    .line 65
    iput-object p1, p0, Lcom/bianfeng/paylib/action/HttpHelper;->context:Landroid/content/Context;

    .line 66
    new-instance p1, Ljava/util/TreeMap;

    invoke-direct {p1}, Ljava/util/TreeMap;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/paylib/action/HttpHelper;->headersMap:Ljava/util/TreeMap;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/paylib/action/HttpHelper;Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 0

    .line 25
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/paylib/action/HttpHelper;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/paylib/action/HttpHelper;Ljava/net/HttpURLConnection;Lcom/bianfeng/paylib/action/HttpListener;)Z
    .locals 0

    .line 25
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/paylib/action/HttpHelper;->openUrl(Ljava/net/HttpURLConnection;Lcom/bianfeng/paylib/action/HttpListener;)Z

    move-result p0

    return p0
.end method

.method static synthetic access$200(Lcom/bianfeng/paylib/action/HttpHelper;)Ljava/lang/String;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorMsg:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$300(Lcom/bianfeng/paylib/action/HttpHelper;)I
    .locals 0

    .line 25
    iget p0, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorCode:I

    return p0
.end method

.method private addHeader(Ljava/net/HttpURLConnection;)V
    .locals 5

    .line 156
    iget-object v0, p0, Lcom/bianfeng/paylib/action/HttpHelper;->headersMap:Ljava/util/TreeMap;

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
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u5b57\u7b26\u4e32----"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "---"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 158
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {p1, v2, v1}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private checkReasonCode(Ljava/util/Map;)Ljava/lang/String;
    .locals 4
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
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    const-string v1, "1"

    if-eqz v0, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 249
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 250
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/List;

    .line 251
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/CharSequence;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const-string v0, "X-Error-Code"

    .line 254
    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 256
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 257
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-object v1

    :cond_2
    return-object p1

    :cond_3
    return-object v1
.end method

.method private createHttpRequest(Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 4

    const-string v0, "UTF-8"

    const/4 v1, 0x0

    .line 114
    :try_start_0
    new-instance v2, Ljava/net/URL;

    invoke-direct {v2, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 115
    invoke-virtual {v2}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 116
    :try_start_1
    iget-object v3, p0, Lcom/bianfeng/paylib/action/HttpHelper;->context:Landroid/content/Context;

    invoke-static {v3, v2}, Lcom/bianfeng/paylib/action/HttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 117
    iget-object v3, p0, Lcom/bianfeng/paylib/action/HttpHelper;->context:Landroid/content/Context;

    invoke-static {v3, v2}, Lcom/bianfeng/paylib/action/HttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object p1

    :cond_0
    const/16 v2, 0x61a8

    .line 119
    invoke-virtual {p1, v2}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const/16 v2, 0x3a98

    .line 120
    invoke-virtual {p1, v2}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    const/4 v2, 0x0

    .line 121
    invoke-virtual {p1, v2}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const-string v2, "encoding"

    .line 123
    invoke-virtual {p1, v2, v0}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "Accept-Charset"

    .line 124
    invoke-virtual {p1, v2, v0}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "Content-Type"

    const-string v3, "application/json;charset=UTF-8"

    .line 125
    invoke-virtual {p1, v2, v3}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 126
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/action/HttpHelper;->addHeader(Ljava/net/HttpURLConnection;)V

    .line 127
    iget-object v2, p0, Lcom/bianfeng/paylib/action/HttpHelper;->method:Ljava/lang/String;

    const-string v3, "POST"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/4 v2, 0x1

    .line 128
    invoke-virtual {p1, v2}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 129
    invoke-virtual {p1, v2}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 130
    new-instance v2, Ljava/io/DataOutputStream;

    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 131
    :try_start_2
    invoke-virtual {p2, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p2

    invoke-virtual {v2, p2}, Ljava/io/DataOutputStream;->write([B)V

    .line 132
    invoke-virtual {v2}, Ljava/io/DataOutputStream;->flush()V

    .line 133
    invoke-virtual {v2}, Ljava/io/DataOutputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move-object v1, v2

    goto :goto_0

    :catchall_0
    move-exception p1

    move-object v1, v2

    goto :goto_3

    :catch_0
    move-exception p2

    move-object v1, v2

    goto :goto_1

    :cond_1
    :goto_0
    if-eqz v1, :cond_2

    .line 143
    :try_start_3
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_2

    :catch_1
    move-exception p2

    .line 145
    invoke-virtual {p2}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_2

    :catch_2
    move-exception p2

    goto :goto_1

    :catchall_1
    move-exception p1

    goto :goto_3

    :catch_3
    move-exception p2

    move-object p1, v1

    .line 136
    :goto_1
    :try_start_4
    invoke-virtual {p2}, Ljava/io/IOException;->printStackTrace()V

    const/16 v0, 0x259

    .line 137
    iput v0, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorCode:I

    .line 138
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "request data error "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorMsg:Ljava/lang/String;

    const-string p2, "HttpHelper"

    .line 139
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "createHttpRequest: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorMsg:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v1, :cond_2

    .line 143
    :try_start_5
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_1

    :cond_2
    :goto_2
    return-object p1

    :goto_3
    if-eqz v1, :cond_3

    :try_start_6
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_4

    goto :goto_4

    :catch_4
    move-exception p2

    .line 145
    invoke-virtual {p2}, Ljava/io/IOException;->printStackTrace()V

    .line 146
    :cond_3
    :goto_4
    throw p1
.end method

.method private getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 237
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const/high16 v1, 0x100000

    new-array v1, v1, [B

    .line 240
    :goto_0
    invoke-virtual {p1, v1}, Ljava/io/InputStream;->read([B)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_0

    .line 241
    new-instance v3, Ljava/lang/String;

    const/4 v4, 0x0

    invoke-direct {v3, v1, v4, v2}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 243
    :cond_0
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V

    .line 244
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public static getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;
    .locals 3

    const-string v0, "connectivity"

    .line 88
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    .line 90
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 91
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getType()I

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    .line 95
    :cond_0
    invoke-static {}, Landroid/net/Proxy;->getDefaultHost()Ljava/lang/String;

    move-result-object p0

    .line 96
    invoke-static {}, Landroid/net/Proxy;->getDefaultPort()I

    move-result v1

    if-eqz p0, :cond_1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_1

    .line 99
    :try_start_0
    new-instance v2, Ljava/net/InetSocketAddress;

    invoke-direct {v2, p0, v1}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    .line 100
    new-instance p0, Ljava/net/Proxy;

    sget-object v1, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    invoke-direct {p0, v1, v2}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 101
    invoke-virtual {p1, p0}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 103
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_1
    :goto_0
    return-object v0
.end method

.method private openUrl(Ljava/net/HttpURLConnection;Lcom/bianfeng/paylib/action/HttpListener;)Z
    .locals 8

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 189
    :try_start_0
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v2
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v3, 0xc8

    const-string v4, "HttpHelper"

    if-ne v2, v3, :cond_3

    .line 191
    :try_start_1
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    .line 192
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/action/HttpHelper;->checkReasonCode(Ljava/util/Map;)Ljava/lang/String;

    move-result-object p1

    .line 193
    invoke-direct {p0, v1}, Lcom/bianfeng/paylib/action/HttpHelper;->getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v3

    .line 194
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v5

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "code\u53c2\u6570"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    const-string v5, "0"

    .line 195
    invoke-virtual {v5, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 197
    invoke-interface {p2, v3}, Lcom/bianfeng/paylib/action/HttpListener;->onComplete(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 p1, 0x1

    if-eqz v1, :cond_0

    .line 221
    :try_start_2
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 223
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return p1

    .line 200
    :cond_1
    :try_start_3
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorCode:I

    .line 201
    iput-object v3, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorMsg:Ljava/lang/String;

    .line 202
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "createHttpRequest: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorMsg:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_2

    .line 221
    :try_start_4
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 223
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    return v0

    .line 206
    :cond_3
    :try_start_5
    iput v2, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorCode:I

    .line 207
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getErrorStream()Ljava/io/InputStream;

    move-result-object v1

    .line 208
    invoke-direct {p0, v1}, Lcom/bianfeng/paylib/action/HttpHelper;->getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorMsg:Ljava/lang/String;

    .line 210
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "\u63a5\u6536\u5230\u7684\u9519\u8bef\u4fe1\u606f: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorMsg:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_3
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    if-eqz v1, :cond_4

    .line 221
    :try_start_6
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_2

    :catch_2
    move-exception p1

    .line 223
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_2
    return v0

    :catch_3
    move-exception p1

    goto :goto_3

    :catchall_0
    move-exception p1

    goto :goto_5

    :catch_4
    move-exception p1

    const/16 v2, 0x25c

    .line 214
    :goto_3
    :try_start_7
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    .line 215
    iput v2, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorCode:I

    .line 216
    invoke-virtual {p1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/paylib/action/HttpHelper;->errorMsg:Ljava/lang/String;
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    if-eqz v1, :cond_5

    .line 221
    :try_start_8
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_5

    goto :goto_4

    :catch_5
    move-exception p1

    .line 223
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_5
    :goto_4
    return v0

    :goto_5
    if-eqz v1, :cond_6

    .line 221
    :try_start_9
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_6

    goto :goto_6

    :catch_6
    move-exception p2

    .line 223
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    .line 224
    :cond_6
    :goto_6
    throw p1
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

    .line 74
    iget-object v0, p0, Lcom/bianfeng/paylib/action/HttpHelper;->headersMap:Ljava/util/TreeMap;

    return-object v0
.end method

.method public isGetMethod()Z
    .locals 2

    .line 78
    iget-object v0, p0, Lcom/bianfeng/paylib/action/HttpHelper;->method:Ljava/lang/String;

    const-string v1, "GET"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public request(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/paylib/action/HttpListener;)V
    .locals 1

    .line 164
    new-instance v0, Lcom/bianfeng/paylib/action/HttpHelper$1;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/bianfeng/paylib/action/HttpHelper$1;-><init>(Lcom/bianfeng/paylib/action/HttpHelper;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/paylib/action/HttpListener;)V

    .line 181
    invoke-virtual {v0}, Lcom/bianfeng/paylib/action/HttpHelper$1;->start()V

    return-void
.end method

.method public setMethod(I)V
    .locals 1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    const-string p1, "GET"

    goto :goto_0

    :cond_0
    const-string p1, "POST"

    .line 70
    :goto_0
    iput-object p1, p0, Lcom/bianfeng/paylib/action/HttpHelper;->method:Ljava/lang/String;

    return-void
.end method
