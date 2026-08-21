.class public Lcom/ymnsdk/replugin/action/HttpHelper;
.super Ljava/lang/Object;
.source "HttpHelper.java"


# static fields
.field public static final CODE_REQ_TIME_OUT:I = 0x258

.field public static final CODE_RES_ALLOW:I = 0x0

.field public static final CODE_RES_NOT_ALLOW:I = 0x1

.field public static final CODE_RES_SUCCESS:I = 0x0

.field public static final CODE_SERVER_ERROR:I = 0x25a

.field public static final CODE_UNKNOW_ERROR:I = 0x259

.field public static final CODE_UNSET:I = 0x3e7

.field public static final HTTP_METHOD_GET:I = 0x1

.field public static final HTTP_METHOD_POST:I = 0x2

.field public static final HTTP_REQ_LIMIT_TIME:I = 0x3a98

.field public static final HTTP_RES_LIMIT_TIME:I = 0x61a8

.field public static final VERSION_SERVER:Ljava/lang/String; = "v1"


# instance fields
.field private context:Landroid/content/Context;

.field private errorCode:I

.field private errorMsg:Ljava/lang/String;

.field private method:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 66
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "POST"

    .line 64
    iput-object v0, p0, Lcom/ymnsdk/replugin/action/HttpHelper;->method:Ljava/lang/String;

    .line 67
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/HttpHelper;->context:Landroid/content/Context;

    return-void
.end method

.method static synthetic access$000(Lcom/ymnsdk/replugin/action/HttpHelper;)Ljava/lang/String;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/ymnsdk/replugin/action/HttpHelper;->method:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$100(Lcom/ymnsdk/replugin/action/HttpHelper;)Landroid/content/Context;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/ymnsdk/replugin/action/HttpHelper;->context:Landroid/content/Context;

    return-object p0
.end method

.method public static getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;
    .locals 3

    const-string v0, "connectivity"

    .line 184
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    .line 186
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 187
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getType()I

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    .line 191
    :cond_0
    invoke-static {}, Landroid/net/Proxy;->getDefaultHost()Ljava/lang/String;

    move-result-object p0

    .line 192
    invoke-static {}, Landroid/net/Proxy;->getDefaultPort()I

    move-result v1

    if-eqz p0, :cond_1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_1

    .line 195
    :try_start_0
    new-instance v2, Ljava/net/InetSocketAddress;

    invoke-direct {v2, p0, v1}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    .line 196
    new-instance p0, Ljava/net/Proxy;

    sget-object v1, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    invoke-direct {p0, v1, v2}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 197
    invoke-virtual {p1, p0}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 199
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_1
    :goto_0
    return-object v0
.end method


# virtual methods
.method public createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/action/HttpListener;)V
    .locals 2

    .line 79
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/ymnsdk/replugin/action/HttpHelper$1;

    invoke-direct {v1, p0, p2, p1, p3}, Lcom/ymnsdk/replugin/action/HttpHelper$1;-><init>(Lcom/ymnsdk/replugin/action/HttpHelper;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/action/HttpListener;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 174
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public decode(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const-string v0, "%(?![0-9a-fA-F]{2})"

    const-string v1, "%25"

    .line 208
    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    :try_start_0
    const-string v0, "UTF-8"

    .line 210
    invoke-static {p1, v0}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 212
    new-instance v0, Ljava/lang/Exception;

    const-string v1, "ymn"

    invoke-direct {v0, v1, p1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v0
.end method

.method public isGetMethod()Z
    .locals 2

    .line 75
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/HttpHelper;->method:Ljava/lang/String;

    const-string v1, "GET"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public setMethod(I)V
    .locals 1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    const-string p1, "GET"

    goto :goto_0

    :cond_0
    const-string p1, "POST"

    .line 71
    :goto_0
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/HttpHelper;->method:Ljava/lang/String;

    return-void
.end method
