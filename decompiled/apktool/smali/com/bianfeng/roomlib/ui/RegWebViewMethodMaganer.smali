.class public Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;
.super Ljava/lang/Object;
.source "RegWebViewMethodMaganer.java"


# instance fields
.field private activity:Landroid/app/Activity;

.field private cp:Ljava/lang/String;

.field private userid:Ljava/lang/String;

.field private webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;


# direct methods
.method public constructor <init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 30
    iput-object p1, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    .line 31
    iput-object p2, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->activity:Landroid/app/Activity;

    .line 32
    iput-object p3, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->cp:Ljava/lang/String;

    .line 33
    iput-object p4, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->userid:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)Landroid/app/Activity;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->activity:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)Ljava/lang/String;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->cp:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$200(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)Ljava/lang/String;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->userid:Ljava/lang/String;

    return-object p0
.end method

.method private closeGameRoom()V
    .locals 3

    .line 119
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$3;

    invoke-direct {v1, p0}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$3;-><init>(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)V

    const-string v2, "closeGameRoom"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private currencyInterface()V
    .locals 3

    .line 47
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$1;-><init>(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)V

    const-string v2, "currencyInterface"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private encryptionParameters()V
    .locals 3

    .line 87
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$2;

    invoke-direct {v1, p0}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$2;-><init>(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)V

    const-string v2, "encryptionParameters"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private openWebGame()V
    .locals 3

    .line 131
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$4;

    invoke-direct {v1, p0}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$4;-><init>(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)V

    const-string v2, "openWebGame"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method


# virtual methods
.method public copyContentToClipboard()V
    .locals 3

    .line 153
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$5;

    invoke-direct {v1, p0}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$5;-><init>(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)V

    const-string v2, "copyPasteboard"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method public reg()V
    .locals 0

    .line 38
    invoke-direct {p0}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->openWebGame()V

    .line 39
    invoke-direct {p0}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->closeGameRoom()V

    .line 40
    invoke-direct {p0}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->encryptionParameters()V

    .line 41
    invoke-direct {p0}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->currencyInterface()V

    .line 42
    invoke-virtual {p0}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->copyContentToClipboard()V

    return-void
.end method
