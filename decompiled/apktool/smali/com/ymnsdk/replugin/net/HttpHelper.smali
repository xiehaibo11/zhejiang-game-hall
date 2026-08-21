.class public Lcom/ymnsdk/replugin/net/HttpHelper;
.super Ljava/lang/Object;
.source "HttpHelper.java"


# static fields
.field public static final HTTP_METHOD_GET:I = 0x1

.field public static final HTTP_METHOD_POST:I = 0x2

.field public static final HTTP_REQ_LIMIT_TIME:I = 0x3a98

.field public static final HTTP_RES_LIMIT_TIME:I = 0x61a8


# instance fields
.field private context:Landroid/content/Context;

.field private errorCode:I

.field private errorMsg:Ljava/lang/String;

.field private method:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 56
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 57
    iput-object p1, p0, Lcom/ymnsdk/replugin/net/HttpHelper;->context:Landroid/content/Context;

    return-void
.end method

.method static synthetic access$000(Lcom/ymnsdk/replugin/net/HttpHelper;)Ljava/lang/String;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/ymnsdk/replugin/net/HttpHelper;->method:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$100(Lcom/ymnsdk/replugin/net/HttpHelper;)Landroid/content/Context;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/ymnsdk/replugin/net/HttpHelper;->context:Landroid/content/Context;

    return-object p0
.end method

.method public static getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;
    .locals 3

    const-string v0, "connectivity"

    .line 159
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    .line 161
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 162
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getType()I

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    .line 166
    :cond_0
    invoke-static {}, Landroid/net/Proxy;->getDefaultHost()Ljava/lang/String;

    move-result-object p0

    .line 167
    invoke-static {}, Landroid/net/Proxy;->getDefaultPort()I

    move-result v1

    if-eqz p0, :cond_1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_1

    .line 170
    :try_start_0
    new-instance v2, Ljava/net/InetSocketAddress;

    invoke-direct {v2, p0, v1}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    .line 171
    new-instance p0, Ljava/net/Proxy;

    sget-object v1, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    invoke-direct {p0, v1, v2}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 172
    invoke-virtual {p1, p0}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 174
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_1
    :goto_0
    return-object v0
.end method


# virtual methods
.method public createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/net/HttpListener;)V
    .locals 2

    .line 70
    :try_start_0
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/ymnsdk/replugin/net/HttpHelper$1;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/ymnsdk/replugin/net/HttpHelper$1;-><init>(Lcom/ymnsdk/replugin/net/HttpHelper;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/net/HttpListener;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 146
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 149
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
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

    .line 61
    :goto_0
    iput-object p1, p0, Lcom/ymnsdk/replugin/net/HttpHelper;->method:Ljava/lang/String;

    return-void
.end method
