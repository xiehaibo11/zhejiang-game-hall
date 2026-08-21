.class public Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;
.super Landroid/app/Activity;
.source "GameRoomWebActivity.java"


# instance fields
.field private cp:Ljava/lang/String;

.field private methodMaganer:Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;

.field private url:Ljava/lang/String;

.field private userid:Ljava/lang/String;

.field private webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method private initData()V
    .locals 5

    .line 64
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    .line 65
    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    .line 66
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1a

    if-lt v3, v4, :cond_0

    .line 67
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSafeBrowsingEnabled(Z)V

    .line 69
    :cond_0
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 70
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 71
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 72
    sget-object v3, Landroid/webkit/WebSettings$LayoutAlgorithm;->NARROW_COLUMNS:Landroid/webkit/WebSettings$LayoutAlgorithm;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setLayoutAlgorithm(Landroid/webkit/WebSettings$LayoutAlgorithm;)V

    .line 73
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 74
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 75
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 76
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setSupportMultipleWindows(Z)V

    .line 77
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 78
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    .line 79
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 80
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 81
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    const-wide v3, 0x7fffffffffffffffL

    .line 82
    invoke-virtual {v0, v3, v4}, Landroid/webkit/WebSettings;->setAppCacheMaxSize(J)V

    .line 83
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    .line 84
    sget-object v3, Landroid/webkit/WebSettings$PluginState;->ON_DEMAND:Landroid/webkit/WebSettings$PluginState;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    .line 85
    sget-object v3, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 87
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setBackgroundColor(I)V

    .line 88
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setTextZoom(I)V

    .line 89
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const/4 v1, 0x2

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setLayerType(ILandroid/graphics/Paint;)V

    .line 90
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0, v2}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setClickable(Z)V

    .line 91
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 92
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;

    iget-object v2, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-direct {v1, v2}, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;-><init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView;)V

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 95
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iget-object v1, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method private initView()V
    .locals 4

    .line 58
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v0

    const-string v1, "R.id.gameroom_web_bridge_webView"

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iput-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    .line 59
    new-instance v0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;

    iget-object v1, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iget-object v2, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->cp:Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->userid:Ljava/lang/String;

    invoke-direct {v0, v1, p0, v2, v3}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;-><init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->methodMaganer:Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;

    .line 60
    invoke-virtual {v0}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->reg()V

    return-void
.end method

.method public static start(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 24
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v1, "h5url"

    .line 25
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "cp"

    .line 26
    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "userid"

    .line 27
    invoke-virtual {v0, p1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 28
    invoke-virtual {v0, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 29
    invoke-virtual {p0, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 40
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 41
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getActivityHook()Lcom/bianfeng/utilslib/ActivityHookUtils;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/utilslib/ActivityHookUtils;->hookOrientation(Landroid/app/Activity;)V

    .line 42
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->setFullScreen(Landroid/app/Activity;)V

    .line 43
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getDensityUtils()Lcom/bianfeng/utilslib/DensityUtils;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/utilslib/DensityUtils;->setDefault(Landroid/app/Activity;)V

    .line 44
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.layout.activity_gameroom_web"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->setContentView(I)V

    .line 45
    invoke-virtual {p0}, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    if-eqz p1, :cond_0

    const-string v0, "h5url"

    .line 47
    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->url:Ljava/lang/String;

    const-string v0, "cp"

    .line 48
    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->cp:Ljava/lang/String;

    const-string v0, "userid"

    .line 49
    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->userid:Ljava/lang/String;

    .line 51
    :cond_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->hideBar(Landroid/app/Activity;)V

    .line 53
    invoke-direct {p0}, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->initView()V

    .line 54
    invoke-direct {p0}, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->initData()V

    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    if-eqz v0, :cond_0

    .line 101
    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->removeAllViews()V

    .line 102
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebActivity;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->destroy()V

    .line 104
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1

    const/4 v0, 0x4

    if-ne p1, v0, :cond_0

    .line 111
    invoke-static {}, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->getInstance()Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->getCallback()Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;->onClose()V

    .line 113
    :cond_0
    invoke-super {p0, p1, p2}, Landroid/app/Activity;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1
.end method
