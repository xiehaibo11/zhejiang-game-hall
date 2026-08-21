.class public Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;
.super Lcom/bianfeng/baselib/BaseActivity;
.source "YmnH5WebviewLandActivity.java"


# static fields
.field private static hostActivity:Landroid/app/Activity;


# instance fields
.field private methodMaganer:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

.field private url:Ljava/lang/String;

.field private webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Lcom/bianfeng/baselib/BaseActivity;-><init>()V

    return-void
.end method

.method private initData()V
    .locals 4

    .line 56
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 57
    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    .line 58
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 59
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 60
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 61
    sget-object v2, Landroid/webkit/WebSettings$LayoutAlgorithm;->NARROW_COLUMNS:Landroid/webkit/WebSettings$LayoutAlgorithm;

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setLayoutAlgorithm(Landroid/webkit/WebSettings$LayoutAlgorithm;)V

    const/4 v2, 0x0

    .line 62
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 63
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 64
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 65
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSupportMultipleWindows(Z)V

    .line 66
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 67
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    .line 68
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 69
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 70
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    const-wide v2, 0x7fffffffffffffffL

    .line 71
    invoke-virtual {v0, v2, v3}, Landroid/webkit/WebSettings;->setAppCacheMaxSize(J)V

    .line 72
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    .line 73
    sget-object v2, Landroid/webkit/WebSettings$PluginState;->ON_DEMAND:Landroid/webkit/WebSettings$PluginState;

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    .line 74
    sget-object v2, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 76
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const/4 v2, 0x2

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setLayerType(ILandroid/graphics/Paint;)V

    .line 77
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setClickable(Z)V

    .line 78
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 79
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;

    iget-object v2, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-direct {v1, v2}, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;-><init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView;)V

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 80
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->loadUrl(Ljava/lang/String;)V

    .line 81
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->methodMaganer:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->reg()V

    return-void
.end method

.method private initView()V
    .locals 3

    .line 51
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v0

    const-string v1, "R.id.ymnh5_sdk_bridge_webView"

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    .line 52
    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    sget-object v2, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->hostActivity:Landroid/app/Activity;

    invoke-direct {v0, v1, p0, v2}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;-><init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView;Landroid/app/Activity;Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->methodMaganer:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    return-void
.end method

.method public static start(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 2

    .line 30
    sput-object p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->hostActivity:Landroid/app/Activity;

    .line 31
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v1, "h5url"

    .line 32
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 33
    invoke-virtual {v0, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 34
    invoke-virtual {p0, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 39
    invoke-super {p0, p1}, Lcom/bianfeng/baselib/BaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 40
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->setFullScreen(Landroid/app/Activity;)V

    .line 41
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.layout.activity_ymnh5_sdk_webview"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->setContentView(I)V

    .line 42
    invoke-virtual {p0}, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    if-eqz p1, :cond_0

    const-string v0, "h5url"

    .line 44
    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->url:Ljava/lang/String;

    .line 46
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->initView()V

    .line 47
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->initData()V

    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 95
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    if-eqz v0, :cond_0

    .line 96
    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->removeAllViews()V

    .line 97
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->destroy()V

    .line 99
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->methodMaganer:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    if-eqz v0, :cond_1

    .line 100
    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->unReg()V

    .line 102
    :cond_1
    invoke-super {p0}, Lcom/bianfeng/baselib/BaseActivity;->onDestroy()V

    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1

    const/4 v0, 0x4

    if-ne p1, v0, :cond_0

    .line 86
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->canGoBack()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 87
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/YmnH5WebviewLandActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {p1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->goBack()V

    const/4 p1, 0x1

    return p1

    .line 90
    :cond_0
    invoke-super {p0, p1, p2}, Lcom/bianfeng/baselib/BaseActivity;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method

.method protected onStart()V
    .locals 1

    .line 107
    invoke-super {p0}, Lcom/bianfeng/baselib/BaseActivity;->onStart()V

    .line 108
    invoke-static {p0}, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->getInstance(Landroid/app/Activity;)Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->setListener()V

    return-void
.end method

.method protected onStop()V
    .locals 1

    .line 113
    invoke-super {p0}, Lcom/bianfeng/baselib/BaseActivity;->onStop()V

    .line 114
    invoke-static {p0}, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->getInstance(Landroid/app/Activity;)Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->removeListener()V

    return-void
.end method
