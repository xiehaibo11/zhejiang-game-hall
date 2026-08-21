.class public Lcom/bianfeng/ymnsdk/action/HttpHelper;
.super Ljava/lang/Object;
.source "HttpHelper.java"


# static fields
.field public static final CODE_REQ_TIME_OUT:I = 0x258

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
    .param p1, "context"    # Landroid/content/Context;

    .line 61
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 59
    const-string v0, "POST"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper;->method:Ljava/lang/String;

    .line 62
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper;->context:Landroid/content/Context;

    .line 63
    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/action/HttpHelper;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/action/HttpHelper;

    .line 28
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper;->method:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$100(Lcom/bianfeng/ymnsdk/action/HttpHelper;)Landroid/content/Context;
    .locals 1
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/action/HttpHelper;

    .line 28
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper;->context:Landroid/content/Context;

    return-object v0
.end method

.method public static getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;
    .locals 8
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "url"    # Ljava/net/URL;

    .line 180
    const-string v0, "connectivity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    .line 182
    .local v0, "cm":Landroid/net/ConnectivityManager;
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    .line 183
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

    .line 187
    :cond_0
    invoke-static {}, Landroid/net/Proxy;->getDefaultHost()Ljava/lang/String;

    move-result-object v3

    .line 188
    .local v3, "proxyHost":Ljava/lang/String;
    invoke-static {}, Landroid/net/Proxy;->getDefaultPort()I

    move-result v4

    .line 189
    .local v4, "port":I
    if-eqz v3, :cond_1

    const/4 v5, -0x1

    if-eq v4, v5, :cond_1

    .line 191
    :try_start_0
    new-instance v5, Ljava/net/InetSocketAddress;

    invoke-direct {v5, v3, v4}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    .line 192
    .local v5, "sa":Ljava/net/SocketAddress;
    new-instance v6, Ljava/net/Proxy;

    sget-object v7, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    invoke-direct {v6, v7, v5}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 193
    .local v6, "proxy":Ljava/net/Proxy;
    invoke-virtual {p1, v6}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object v7

    check-cast v7, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v7

    .line 194
    .end local v5    # "sa":Ljava/net/SocketAddress;
    .end local v6    # "proxy":Ljava/net/Proxy;
    :catch_0
    move-exception v5

    .line 195
    .local v5, "e":Ljava/io/IOException;
    invoke-virtual {v5}, Ljava/io/IOException;->printStackTrace()V

    .line 199
    .end local v5    # "e":Ljava/io/IOException;
    :cond_1
    return-object v2

    .line 184
    .end local v3    # "proxyHost":Ljava/lang/String;
    .end local v4    # "port":I
    :cond_2
    :goto_0
    return-object v2
.end method


# virtual methods
.method public createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V
    .locals 2
    .param p1, "urlString"    # Ljava/lang/String;
    .param p2, "params"    # Ljava/lang/String;
    .param p3, "listerner"    # Lcom/bianfeng/ymnsdk/action/HttpListener;

    .line 74
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;

    invoke-direct {v1, p0, p2, p1, p3}, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;-><init>(Lcom/bianfeng/ymnsdk/action/HttpHelper;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 170
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    .line 171
    return-void
.end method

.method public isGetMethod()Z
    .locals 2

    .line 70
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper;->method:Ljava/lang/String;

    const-string v1, "GET"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public setMethod(I)V
    .locals 1
    .param p1, "method"    # I

    .line 66
    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    const-string v0, "GET"

    goto :goto_0

    :cond_0
    const-string v0, "POST"

    :goto_0
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper;->method:Ljava/lang/String;

    .line 67
    return-void
.end method
