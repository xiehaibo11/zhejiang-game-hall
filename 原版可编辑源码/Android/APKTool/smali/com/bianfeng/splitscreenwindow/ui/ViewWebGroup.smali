.class public Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;
.super Ljava/lang/Object;
.source "ViewWebGroup.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;
    }
.end annotation


# instance fields
.field private iconView:Lcom/bianfeng/customwidgetlib/SuspendIconView;

.field private mFloatLayout:Landroid/widget/RelativeLayout;

.field private mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

.field private webInterface:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 3

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 32
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    .line 33
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v1

    const-string v2, "R.layout.activity_screen"

    invoke-virtual {v1, p1, v2}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout;

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mFloatLayout:Landroid/widget/RelativeLayout;

    .line 34
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v1

    const-string v2, "R.id.screen_webview"

    invoke-virtual {v1, p1, v2}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    .line 35
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mFloatLayout:Landroid/widget/RelativeLayout;

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v1

    const-string v2, "R.id.screen_game_icon"

    invoke-virtual {v1, p1, v2}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/customwidgetlib/SuspendIconView;

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->iconView:Lcom/bianfeng/customwidgetlib/SuspendIconView;

    .line 36
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mFloatLayout:Landroid/widget/RelativeLayout;

    const/4 v1, 0x0

    invoke-static {v1, v1}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v2

    .line 37
    invoke-static {v1, v1}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v1

    .line 36
    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout;->measure(II)V

    .line 38
    invoke-direct {p0, p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->setupView(Landroid/app/Activity;)V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)Lcom/bianfeng/customwidgetlib/SuspendIconView;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->iconView:Lcom/bianfeng/customwidgetlib/SuspendIconView;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->webInterface:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;

    return-object p0
.end method

.method private registerHandler(Landroid/app/Activity;)V
    .locals 2

    .line 86
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$2;

    invoke-direct {v0, p0}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$2;-><init>(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)V

    const-string v1, "payActionFromWeb"

    invoke-virtual {p1, v1, v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    .line 93
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$3;

    invoke-direct {v0, p0}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$3;-><init>(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)V

    const-string v1, "transUserData"

    invoke-virtual {p1, v1, v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    .line 99
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$4;

    invoke-direct {v0, p0}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$4;-><init>(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)V

    const-string v1, "closeH5Game"

    invoke-virtual {p1, v1, v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->registerHandler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/BridgeHandler;)V

    return-void
.end method

.method private setupView(Landroid/app/Activity;)V
    .locals 5

    .line 45
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 46
    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    .line 47
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1a

    const/4 v4, 0x0

    if-lt v2, v3, :cond_0

    .line 48
    invoke-virtual {v0, v4}, Landroid/webkit/WebSettings;->setSafeBrowsingEnabled(Z)V

    .line 50
    :cond_0
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 51
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 52
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 53
    sget-object v2, Landroid/webkit/WebSettings$LayoutAlgorithm;->NARROW_COLUMNS:Landroid/webkit/WebSettings$LayoutAlgorithm;

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setLayoutAlgorithm(Landroid/webkit/WebSettings$LayoutAlgorithm;)V

    .line 54
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 55
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 56
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 57
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSupportMultipleWindows(Z)V

    .line 58
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 59
    invoke-virtual {v0, v4}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    .line 60
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 61
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 62
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    const-wide v2, 0x7fffffffffffffffL

    .line 63
    invoke-virtual {v0, v2, v3}, Landroid/webkit/WebSettings;->setAppCacheMaxSize(J)V

    .line 64
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    .line 65
    sget-object v2, Landroid/webkit/WebSettings$PluginState;->ON_DEMAND:Landroid/webkit/WebSettings$PluginState;

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    .line 66
    sget-object v2, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 68
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const/4 v2, 0x2

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setLayerType(ILandroid/graphics/Paint;)V

    .line 69
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setClickable(Z)V

    .line 70
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 71
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    new-instance v1, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;

    iget-object v2, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-direct {v1, v2}, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;-><init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView;)V

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 72
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->iconView:Lcom/bianfeng/customwidgetlib/SuspendIconView;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$1;-><init>(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 82
    invoke-direct {p0, p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->registerHandler(Landroid/app/Activity;)V

    return-void
.end method


# virtual methods
.method public getFloatLayout()Landroid/widget/RelativeLayout;
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mFloatLayout:Landroid/widget/RelativeLayout;

    return-object v0
.end method

.method public setIconViewRotation(F)V
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->iconView:Lcom/bianfeng/customwidgetlib/SuspendIconView;

    invoke-virtual {v0, p1}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->setRotation(F)V

    return-void
.end method

.method public setIconViewTag(Ljava/lang/String;)V
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->iconView:Lcom/bianfeng/customwidgetlib/SuspendIconView;

    invoke-virtual {v0, p1}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->setTag(Ljava/lang/Object;)V

    return-void
.end method

.method public setIconViewVisibility()V
    .locals 2

    .line 127
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->iconView:Lcom/bianfeng/customwidgetlib/SuspendIconView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/bianfeng/customwidgetlib/SuspendIconView;->setVisibility(I)V

    return-void
.end method

.method public setWebInterface(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->webInterface:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;

    return-void
.end method

.method public show(Ljava/lang/String;)V
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->mWebView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0, p1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method
