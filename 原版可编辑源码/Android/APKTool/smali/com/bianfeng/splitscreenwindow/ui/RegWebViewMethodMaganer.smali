.class public Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;
.super Ljava/lang/Object;
.source "RegWebViewMethodMaganer.java"


# instance fields
.field private activity:Landroid/app/Activity;

.field private hostActivity:Landroid/app/Activity;

.field private webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;


# direct methods
.method public constructor <init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView;Landroid/app/Activity;Landroid/app/Activity;)V
    .locals 0

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 33
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    .line 34
    iput-object p2, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->activity:Landroid/app/Activity;

    .line 35
    iput-object p3, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->hostActivity:Landroid/app/Activity;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)Landroid/app/Activity;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->hostActivity:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)Landroid/app/Activity;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->activity:Landroid/app/Activity;

    return-object p0
.end method

.method private closeH5Game()V
    .locals 3

    .line 80
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$3;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$3;-><init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V

    const-string v2, "closeH5Game"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private downLoadApp()V
    .locals 3

    .line 139
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$9;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$9;-><init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V

    const-string v2, "downLoadApp"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private getBottomHeight()V
    .locals 3

    .line 117
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$7;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$7;-><init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V

    const-string v2, "getBottomHeight"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private getHeight()V
    .locals 3

    .line 104
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$6;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$6;-><init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V

    const-string v2, "getHeight"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private getVersion()V
    .locals 3

    .line 157
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$10;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$10;-><init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V

    const-string v2, "getVersion"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private isSupportDownload()V
    .locals 3

    .line 129
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$8;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$8;-><init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V

    const-string v2, "isSupportDownLoadApp"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private payActionFromWeb()V
    .locals 3

    .line 57
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$1;-><init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V

    const-string v2, "payActionFromWeb"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private sendError()V
    .locals 3

    .line 89
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$4;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$4;-><init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V

    const-string v2, "sendError"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private sendResource()V
    .locals 3

    .line 96
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$5;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$5;-><init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V

    const-string v2, "sendResource"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private transUserData()V
    .locals 3

    .line 70
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$2;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$2;-><init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V

    const-string v2, "transUserData"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method


# virtual methods
.method public reg()V
    .locals 0

    .line 39
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->payActionFromWeb()V

    .line 40
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->transUserData()V

    .line 41
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->closeH5Game()V

    .line 42
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->sendError()V

    .line 43
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->sendResource()V

    .line 44
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->getBottomHeight()V

    .line 45
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->getHeight()V

    .line 46
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->isSupportDownload()V

    .line 47
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->downLoadApp()V

    .line 48
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->getVersion()V

    return-void
.end method

.method public unReg()V
    .locals 1

    const/4 v0, 0x0

    .line 52
    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    .line 53
    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->activity:Landroid/app/Activity;

    return-void
.end method
