.class public final Lcom/kwad/components/core/offline/init/d/a;
.super Lcom/kwad/components/offline/api/core/webview/BaseKsWebView;


# instance fields
.field private Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private enableScroll:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/api/core/webview/BaseKsWebView;-><init>(Landroid/content/Context;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/core/offline/init/d/a;->init(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/offline/init/d/a;)Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$DeepLinkListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/d/a;->mDeeplinkListener:Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$DeepLinkListener;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/core/offline/init/d/a;)Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$DeepLinkListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/d/a;->mDeeplinkListener:Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$DeepLinkListener;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/core/offline/init/d/a;)Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$DeepLinkListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/d/a;->mDeeplinkListener:Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$DeepLinkListener;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/core/offline/init/d/a;)Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$DeepLinkListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/d/a;->mDeeplinkListener:Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$DeepLinkListener;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/core/offline/init/d/a;)Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/d/a;->mWebLoadListener:Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/core/offline/init/d/a;)Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/d/a;->mWebLoadListener:Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/core/offline/init/d/a;)Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/d/a;->mWebLoadListener:Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/core/offline/init/d/a;)Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/d/a;->mWebLoadListener:Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/core/offline/init/d/a;)Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/d/a;->mWebLoadListener:Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;

    return-object p0
.end method

.method private init(Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/offline/init/d/a;->setBackgroundColor(I)V

    new-instance v1, Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {v1, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    new-instance p1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {p1, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    iget-object v1, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setBackgroundColor(I)V

    iget-object p1, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/core/offline/init/d/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/offline/init/d/a$2;-><init>(Lcom/kwad/components/core/offline/init/d/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/core/offline/init/d/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/offline/init/d/a$1;-><init>(Lcom/kwad/components/core/offline/init/d/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/a/c$a;->a(Lcom/kwad/sdk/core/webview/KsAdWebView$b;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    iget-object p1, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/offline/init/d/a;->addView(Landroid/view/View;)V

    return-void
.end method

.method static synthetic j(Lcom/kwad/components/core/offline/init/d/a;)Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/d/a;->mWebLoadListener:Lcom/kwad/components/offline/api/core/webview/BaseKsWebView$WebLoadListener;

    return-object p0
.end method


# virtual methods
.method public final addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public final callJs(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/utils/bp;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final callJs(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/bp;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final destroy()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->destroy()V

    return-void
.end method

.method public final loadUrl(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method public final scrollBy(II)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/offline/init/d/a;->enableScroll:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->scrollBy(II)V

    :cond_0
    return-void
.end method

.method public final scrollTo(II)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/offline/init/d/a;->enableScroll:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->scrollTo(II)V

    :cond_0
    return-void
.end method

.method public final setAcceptThirdPartyCookies(Z)V
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, v1, p1}, Landroid/webkit/CookieManager;->setAcceptThirdPartyCookies(Landroid/webkit/WebView;Z)V

    :cond_0
    return-void
.end method

.method public final setAllowContentAccess(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/webkit/WebSettings;->setAllowContentAccess(Z)V

    return-void
.end method

.method public final setAllowFileAccess(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    return-void
.end method

.method public final setAllowFileAccessFromFileURLs(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/webkit/WebSettings;->setAllowFileAccessFromFileURLs(Z)V

    return-void
.end method

.method public final setAllowUniversalAccessFromFileURLs(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V

    return-void
.end method

.method public final setCacheMode(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    return-void
.end method

.method public final setContextUniqId(I)V
    .locals 1

    invoke-static {p1}, Lcom/kwad/components/core/offline/api/b/a/a;->au(I)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    :cond_0
    return-void
.end method

.method public final setDebugEnabled(Z)V
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    invoke-static {p1}, Landroid/webkit/WebView;->setWebContentsDebuggingEnabled(Z)V

    :cond_0
    return-void
.end method

.method public final setDeeplinkEnabled(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/a/c$a;->bk(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    return-void
.end method

.method public final setEnableScroll(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/offline/init/d/a;->enableScroll:Z

    return-void
.end method

.method public final setEnableWebCache(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setNeedHybridLoad(Z)V

    return-void
.end method

.method public final setInnerDownloadEnabled(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/a/c$a;->bl(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    return-void
.end method

.method public final setJavaScriptEnabled(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    return-void
.end method

.method public final setMixedContentMode(I)V
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/webkit/WebSettings;->setMixedContentMode(I)V

    :cond_0
    return-void
.end method

.method public final setSavePassword(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    return-void
.end method

.method public final setTextZoom(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/d/a;->Mp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/webkit/WebSettings;->setTextZoom(I)V

    return-void
.end method
