.class public Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;
.super Landroid/app/Activity;
.source "HuodongActivity.java"


# instance fields
.field private url:Ljava/lang/String;

.field private webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 18
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const-string v0, "https://www.baidu.com"

    .line 20
    iput-object v0, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->url:Ljava/lang/String;

    return-void
.end method

.method private initData()V
    .locals 5

    .line 41
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getCallback()Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    .line 42
    iget-object v0, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 43
    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    .line 44
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1a

    const/4 v4, 0x0

    if-lt v2, v3, :cond_0

    .line 45
    invoke-virtual {v0, v4}, Landroid/webkit/WebSettings;->setSafeBrowsingEnabled(Z)V

    .line 47
    :cond_0
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 48
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 49
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 50
    sget-object v2, Landroid/webkit/WebSettings$LayoutAlgorithm;->NARROW_COLUMNS:Landroid/webkit/WebSettings$LayoutAlgorithm;

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setLayoutAlgorithm(Landroid/webkit/WebSettings$LayoutAlgorithm;)V

    .line 51
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 52
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 53
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 54
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSupportMultipleWindows(Z)V

    .line 55
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 56
    invoke-virtual {v0, v4}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    .line 57
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 58
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 59
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    const-wide v2, 0x7fffffffffffffffL

    .line 60
    invoke-virtual {v0, v2, v3}, Landroid/webkit/WebSettings;->setAppCacheMaxSize(J)V

    .line 61
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    .line 62
    sget-object v2, Landroid/webkit/WebSettings$PluginState;->ON_DEMAND:Landroid/webkit/WebSettings$PluginState;

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    .line 63
    sget-object v2, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 65
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setLayerType(ILandroid/graphics/Paint;)V

    .line 66
    iget-object v0, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setClickable(Z)V

    .line 67
    iget-object v0, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 68
    iget-object v0, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;

    iget-object v2, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-direct {v1, v2}, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;-><init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView;)V

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 69
    iget-object v0, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iget-object v1, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method private initView()V
    .locals 2

    .line 37
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v0

    const-string v1, "R.id.ymnh5_sdk_bridge_webView"

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iput-object v0, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    return-void
.end method

.method public static start(Landroid/content/Context;)V
    .locals 2

    .line 22
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 23
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 28
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 29
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->setFullScreen(Landroid/app/Activity;)V

    .line 30
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.layout.activity_ymnh5_sdk_webview"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->setContentView(I)V

    .line 31
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->hideBar(Landroid/app/Activity;)V

    .line 32
    invoke-direct {p0}, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->initView()V

    .line 33
    invoke-direct {p0}, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->initData()V

    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    if-eqz v0, :cond_0

    .line 85
    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->removeAllViews()V

    .line 86
    iget-object v0, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->destroy()V

    .line 88
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method

.method protected onPause()V
    .locals 2

    .line 78
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 79
    iget-object v0, p0, Lcom/bianfeng/splitscreenlib/huodong/HuodongActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const-string v1, "about:blank"

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method
