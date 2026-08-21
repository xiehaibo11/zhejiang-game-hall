.class public Lcom/bianfeng/paylib/ui/AliWebPayActivty;
.super Lcom/bianfeng/baselib/BaseActivity;
.source "AliWebPayActivty.java"


# instance fields
.field private url:Ljava/lang/String;

.field private urlStartsWith:Ljava/lang/String;

.field private webOpenType:I

.field private webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 26
    invoke-direct {p0}, Lcom/bianfeng/baselib/BaseActivity;-><init>()V

    const-string v0, ""

    .line 30
    iput-object v0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->urlStartsWith:Ljava/lang/String;

    const/4 v0, 0x0

    .line 31
    iput v0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webOpenType:I

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/paylib/ui/AliWebPayActivty;)Ljava/lang/String;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->urlStartsWith:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/paylib/ui/AliWebPayActivty;)I
    .locals 0

    .line 26
    iget p0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webOpenType:I

    return p0
.end method

.method private initData()V
    .locals 8

    .line 71
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x1

    .line 72
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 73
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    const/4 v2, 0x0

    .line 74
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setBlockNetworkImage(Z)V

    .line 75
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 76
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setLoadsImagesAutomatically(Z)V

    .line 78
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Landroid/webkit/WebChromeClient;

    invoke-direct {v1}, Landroid/webkit/WebChromeClient;-><init>()V

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    .line 79
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setTextZoom(I)V

    .line 81
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/paylib/ui/AliWebPayActivty$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty$1;-><init>(Lcom/bianfeng/paylib/ui/AliWebPayActivty;)V

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 122
    iget-object v2, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iget-object v4, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->url:Ljava/lang/String;

    const/4 v3, 0x0

    const-string v5, "text/html"

    const-string v6, "utf-8"

    const/4 v7, 0x0

    invoke-virtual/range {v2 .. v7}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 124
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/paylib/ui/AliWebPayActivty$2;

    invoke-direct {v1, p0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty$2;-><init>(Lcom/bianfeng/paylib/ui/AliWebPayActivty;)V

    const-string v2, "closePayResultWindow"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private initView()V
    .locals 2

    .line 67
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v0

    const-string v1, "R.id.webpaypay_webview"

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iput-object v0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    return-void
.end method

.method public static start(Landroid/content/Context;Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;)V
    .locals 3

    .line 40
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 41
    invoke-virtual {p1}, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;->getBase64_html()Ljava/lang/String;

    move-result-object v1

    const-string v2, "h5url"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 42
    invoke-virtual {p1}, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;->getUrl_starts_with()Ljava/lang/String;

    move-result-object v1

    const-string v2, "url_starts_with"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 43
    invoke-virtual {p1}, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;->getWeb_open_type()I

    move-result p1

    const-string v1, "web_open_type"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 44
    invoke-virtual {v0, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 45
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method public static start(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 33
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v1, "h5url"

    .line 34
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 35
    invoke-virtual {v0, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 36
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    .line 50
    invoke-super {p0, p1}, Lcom/bianfeng/baselib/BaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 51
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->getWindow()Landroid/view/Window;

    move-result-object p1

    const/4 v0, 0x1

    .line 53
    invoke-virtual {p0, v0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->requestWindowFeature(I)Z

    const/16 v0, 0x400

    .line 57
    invoke-virtual {p1, v0, v0}, Landroid/view/Window;->setFlags(II)V

    .line 58
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.layout.activity_webpaysdk_ali"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->setContentView(I)V

    .line 59
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "h5url"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->url:Ljava/lang/String;

    .line 60
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "url_starts_with"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->getIntent()Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->urlStartsWith:Ljava/lang/String;

    .line 61
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "web_open_type"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webOpenType:I

    .line 62
    :cond_1
    invoke-direct {p0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->initView()V

    .line 63
    invoke-direct {p0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->initData()V

    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 139
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    if-eqz v0, :cond_0

    .line 140
    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->removeAllViews()V

    .line 141
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->destroy()V

    .line 143
    :cond_0
    invoke-super {p0}, Lcom/bianfeng/baselib/BaseActivity;->onDestroy()V

    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1

    const/4 v0, 0x4

    if-ne p1, v0, :cond_0

    .line 149
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->canGoBack()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 150
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {p1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->goBack()V

    .line 151
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->finish()V

    const/4 p1, 0x1

    return p1

    .line 154
    :cond_0
    invoke-super {p0, p1, p2}, Lcom/bianfeng/baselib/BaseActivity;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method
