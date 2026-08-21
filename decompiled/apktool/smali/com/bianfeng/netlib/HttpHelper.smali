.class public Lcom/bianfeng/netlib/HttpHelper;
.super Ljava/lang/Object;
.source "HttpHelper.java"


# static fields
.field public static final CODE_JSONERROR_ERROR:I = 0x25b

.field public static final CODE_NOT_NETWORK:I = 0x25c

.field public static final CODE_RES_SUCCESS:I = 0x0

.field public static final CODE_SERVER_ERROR:I = 0x25a

.field public static final CODE_UNKNOW_ERROR:I = 0x259

.field public static final CODE_UNSET:I = 0x3e7

.field public static final HTTP_METHOD_GET:I = 0x1

.field public static final HTTP_REQ_LIMIT_TIME:I = 0x3a98

.field public static final HTTP_RES_LIMIT_TIME:I = 0x61a8


# instance fields
.field private final TAG:Ljava/lang/String;

.field private context:Landroid/app/Activity;

.field private errorCode:I

.field private errorMsg:Ljava/lang/String;

.field private mUrl:Ljava/lang/String;

.field private method:I


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1

    .line 64
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "HttpHelper"

    .line 31
    iput-object v0, p0, Lcom/bianfeng/netlib/HttpHelper;->TAG:Ljava/lang/String;

    .line 65
    iput-object p1, p0, Lcom/bianfeng/netlib/HttpHelper;->context:Landroid/app/Activity;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/netlib/HttpHelper;Ljava/net/HttpURLConnection;Lcom/bianfeng/netlib/HttpListener;)Z
    .locals 0

    .line 28
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/netlib/HttpHelper;->openUrl(Ljava/net/HttpURLConnection;Lcom/bianfeng/netlib/HttpListener;)Z

    move-result p0

    return p0
.end method

.method static synthetic access$100(Lcom/bianfeng/netlib/HttpHelper;)I
    .locals 0

    .line 28
    iget p0, p0, Lcom/bianfeng/netlib/HttpHelper;->errorCode:I

    return p0
.end method

.method static synthetic access$200(Lcom/bianfeng/netlib/HttpHelper;)Ljava/lang/String;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/bianfeng/netlib/HttpHelper;->errorMsg:Ljava/lang/String;

    return-object p0
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

    .line 171
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

    .line 172
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 173
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/List;

    .line 174
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/CharSequence;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const-string v0, "X-Error-Code"

    .line 177
    invoke-virtual {v2, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 179
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 180
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-object v1

    :cond_2
    return-object p1

    :cond_3
    return-object v1
.end method

.method private getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 153
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const/high16 v1, 0x100000

    new-array v1, v1, [B

    .line 156
    :goto_0
    invoke-virtual {p1, v1}, Ljava/io/InputStream;->read([B)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_0

    .line 157
    new-instance v3, Ljava/lang/String;

    const/4 v4, 0x0

    invoke-direct {v3, v1, v4, v2}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 159
    :cond_0
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V

    .line 160
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public static getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    const-string v1, "connectivity"

    .line 214
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    .line 216
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    if-eqz p0, :cond_2

    .line 217
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getType()I

    move-result p0

    if-eqz p0, :cond_1

    goto :goto_0

    .line 220
    :cond_1
    invoke-static {}, Landroid/net/Proxy;->getDefaultHost()Ljava/lang/String;

    move-result-object p0

    .line 221
    invoke-static {}, Landroid/net/Proxy;->getDefaultPort()I

    move-result v1

    if-eqz p0, :cond_2

    const/4 v2, -0x1

    if-eq v1, v2, :cond_2

    .line 224
    :try_start_0
    new-instance v2, Ljava/net/InetSocketAddress;

    invoke-direct {v2, p0, v1}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    .line 225
    new-instance p0, Ljava/net/Proxy;

    sget-object v1, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    invoke-direct {p0, v1, v2}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 226
    invoke-virtual {p1, p0}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 228
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_2
    :goto_0
    return-object v0
.end method

.method private openUrl(Ljava/net/HttpURLConnection;Lcom/bianfeng/netlib/HttpListener;)Z
    .locals 5

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 115
    :try_start_0
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v2
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v3, 0xc8

    if-ne v2, v3, :cond_3

    .line 117
    :try_start_1
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    .line 118
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/bianfeng/netlib/HttpHelper;->checkReasonCode(Ljava/util/Map;)Ljava/lang/String;

    move-result-object p1

    .line 119
    invoke-direct {p0, v1}, Lcom/bianfeng/netlib/HttpHelper;->getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "0"

    .line 120
    invoke-virtual {v4, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 121
    invoke-interface {p2, v3}, Lcom/bianfeng/netlib/HttpListener;->onComplete(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 p1, 0x1

    if-eqz v1, :cond_0

    .line 144
    :try_start_2
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 146
    invoke-virtual {p2}, Ljava/io/IOException;->printStackTrace()V

    :cond_0
    :goto_0
    return p1

    .line 124
    :cond_1
    :try_start_3
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/netlib/HttpHelper;->errorCode:I

    .line 125
    iput-object v3, p0, Lcom/bianfeng/netlib/HttpHelper;->errorMsg:Ljava/lang/String;

    .line 126
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "openUrl: "

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_2

    .line 144
    :try_start_4
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 146
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :cond_2
    :goto_1
    return v0

    .line 130
    :cond_3
    :try_start_5
    iput v2, p0, Lcom/bianfeng/netlib/HttpHelper;->errorCode:I

    .line 131
    invoke-virtual {p1}, Ljava/net/HttpURLConnection;->getErrorStream()Ljava/io/InputStream;

    move-result-object v1

    .line 132
    invoke-direct {p0, v1}, Lcom/bianfeng/netlib/HttpHelper;->getInputStreamString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/netlib/HttpHelper;->errorMsg:Ljava/lang/String;

    .line 133
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string p2, "\u63a5\u6536\u5230\u7684\u9519\u8bef\u4fe1\u606f\uff1a"

    iget-object v3, p0, Lcom/bianfeng/netlib/HttpHelper;->errorMsg:Ljava/lang/String;

    invoke-virtual {p1, p2, v3}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_3
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    if-eqz v1, :cond_4

    .line 144
    :try_start_6
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_2

    :catch_2
    move-exception p1

    .line 146
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

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

    .line 137
    :goto_3
    :try_start_7
    iput v2, p0, Lcom/bianfeng/netlib/HttpHelper;->errorCode:I

    .line 138
    invoke-virtual {p1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/netlib/HttpHelper;->errorMsg:Ljava/lang/String;

    .line 139
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string p2, "\u63a5\u6536\u5230\u7684\u9519\u8bef\u4fe1\u606f\uff1aopenUrl IOException"

    iget-object v2, p0, Lcom/bianfeng/netlib/HttpHelper;->errorMsg:Ljava/lang/String;

    invoke-virtual {p1, p2, v2}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    if-eqz v1, :cond_5

    .line 144
    :try_start_8
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_5

    goto :goto_4

    :catch_5
    move-exception p1

    .line 146
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :cond_5
    :goto_4
    return v0

    :goto_5
    if-eqz v1, :cond_6

    .line 144
    :try_start_9
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_6

    goto :goto_6

    :catch_6
    move-exception p2

    .line 146
    invoke-virtual {p2}, Ljava/io/IOException;->printStackTrace()V

    .line 147
    :cond_6
    :goto_6
    throw p1
.end method


# virtual methods
.method public createHttpRequest(Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 5

    .line 78
    iput-object p1, p0, Lcom/bianfeng/netlib/HttpHelper;->mUrl:Ljava/lang/String;

    const/4 v0, 0x0

    .line 83
    :try_start_0
    new-instance v1, Ljava/net/URL;

    invoke-direct {v1, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 84
    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 85
    :try_start_1
    iget-object v0, p0, Lcom/bianfeng/netlib/HttpHelper;->context:Landroid/app/Activity;

    invoke-static {v0, v1}, Lcom/bianfeng/netlib/HttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 86
    iget-object v0, p0, Lcom/bianfeng/netlib/HttpHelper;->context:Landroid/app/Activity;

    invoke-static {v0, v1}, Lcom/bianfeng/netlib/HttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object p1
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_0
    move-object v0, p1

    const/16 p1, 0x61a8

    .line 88
    :try_start_2
    invoke-virtual {v0, p1}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const/16 p1, 0x3a98

    .line 89
    invoke-virtual {v0, p1}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    const/4 p1, 0x0

    .line 90
    invoke-virtual {v0, p1}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const-string p1, "Content-Type"

    const-string v1, "application/json,charset=UTF-8"

    .line 91
    invoke-virtual {v0, p1, v1}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catch_0
    move-exception v0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_2

    :catch_1
    move-exception p1

    move-object v4, v0

    move-object v0, p1

    move-object p1, v4

    .line 94
    :goto_0
    :try_start_3
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    const/16 v1, 0x259

    .line 95
    iput v1, p0, Lcom/bianfeng/netlib/HttpHelper;->errorCode:I

    .line 96
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "request data error "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/netlib/HttpHelper;->errorMsg:Ljava/lang/String;

    const-string v1, "HttpHelper"

    .line 97
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "createHttpRequest: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    move-object v0, p1

    :goto_1
    return-object v0

    .line 105
    :goto_2
    throw p1
.end method

.method public isGetMethod()Z
    .locals 2

    .line 73
    iget v0, p0, Lcom/bianfeng/netlib/HttpHelper;->method:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public request(Ljava/lang/String;Lcom/bianfeng/netlib/HttpListener;)V
    .locals 1

    .line 193
    new-instance v0, Lcom/bianfeng/netlib/HttpHelper$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/bianfeng/netlib/HttpHelper$1;-><init>(Lcom/bianfeng/netlib/HttpHelper;Ljava/lang/String;Lcom/bianfeng/netlib/HttpListener;)V

    .line 207
    invoke-virtual {v0}, Lcom/bianfeng/netlib/HttpHelper$1;->start()V

    return-void
.end method

.method public setMethod(I)V
    .locals 0

    .line 69
    iput p1, p0, Lcom/bianfeng/netlib/HttpHelper;->method:I

    return-void
.end method
