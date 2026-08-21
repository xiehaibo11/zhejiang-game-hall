.class public Lcom/bianfeng/paylib/ui/PaymentWebActivity;
.super Landroid/app/Activity;
.source "PaymentWebActivity.java"


# instance fields
.field private url:Ljava/lang/String;

.field private webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 27
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const-string v0, ""

    .line 31
    iput-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->url:Ljava/lang/String;

    return-void
.end method

.method private initData()V
    .locals 5

    .line 61
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    .line 62
    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    .line 63
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1a

    if-lt v3, v4, :cond_0

    .line 64
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSafeBrowsingEnabled(Z)V

    .line 66
    :cond_0
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 67
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 68
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 69
    sget-object v3, Landroid/webkit/WebSettings$LayoutAlgorithm;->NARROW_COLUMNS:Landroid/webkit/WebSettings$LayoutAlgorithm;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setLayoutAlgorithm(Landroid/webkit/WebSettings$LayoutAlgorithm;)V

    .line 70
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 71
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 72
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 73
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setSupportMultipleWindows(Z)V

    .line 74
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 75
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    .line 76
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 77
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 78
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    const-wide v3, 0x7fffffffffffffffL

    .line 79
    invoke-virtual {v0, v3, v4}, Landroid/webkit/WebSettings;->setAppCacheMaxSize(J)V

    .line 80
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    .line 81
    sget-object v3, Landroid/webkit/WebSettings$PluginState;->ON_DEMAND:Landroid/webkit/WebSettings$PluginState;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    .line 82
    sget-object v3, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 84
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setBackgroundColor(I)V

    .line 85
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const/4 v1, 0x2

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setLayerType(ILandroid/graphics/Paint;)V

    .line 86
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0, v2}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setClickable(Z)V

    .line 87
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 88
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setTextZoom(I)V

    .line 89
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;

    iget-object v2, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-direct {v1, v2}, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;-><init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView;)V

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 90
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iget-object v1, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->loadUrl(Ljava/lang/String;)V

    .line 93
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/paylib/ui/PaymentWebActivity$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/paylib/ui/PaymentWebActivity$1;-><init>(Lcom/bianfeng/paylib/ui/PaymentWebActivity;)V

    const-string v2, "payInH5"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    .line 110
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/bianfeng/paylib/ui/PaymentWebActivity$2;

    invoke-direct {v1, p0}, Lcom/bianfeng/paylib/ui/PaymentWebActivity$2;-><init>(Lcom/bianfeng/paylib/ui/PaymentWebActivity;)V

    const-string v2, "closePayWindow"

    invoke-virtual {v0, v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private initView()V
    .locals 2

    .line 57
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v0

    const-string v1, "R.id.payment_web_bridge_webView"

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iput-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    return-void
.end method

.method public static start(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 34
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/paylib/ui/PaymentWebActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 35
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v1, "h5url"

    .line 36
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 37
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    .line 42
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 43
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getActivityHook()Lcom/bianfeng/utilslib/ActivityHookUtils;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/utilslib/ActivityHookUtils;->hookOrientation(Landroid/app/Activity;)V

    .line 44
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->setFullScreen(Landroid/app/Activity;)V

    .line 45
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.layout.activity_payment_web"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->setContentView(I)V

    .line 46
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 48
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/paylib/utils/YmnURLManager;->getPaymentUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "h5url"

    invoke-virtual {p1, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->url:Ljava/lang/String;

    .line 49
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "url---"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 51
    :cond_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->hideBar(Landroid/app/Activity;)V

    .line 52
    invoke-direct {p0}, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->initView()V

    .line 53
    invoke-direct {p0}, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->initData()V

    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    if-eqz v0, :cond_0

    .line 141
    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->removeAllViews()V

    .line 142
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->destroy()V

    .line 144
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method
