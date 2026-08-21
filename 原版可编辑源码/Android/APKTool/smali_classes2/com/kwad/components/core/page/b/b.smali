.class public final Lcom/kwad/components/core/page/b/b;
.super Lcom/kwad/sdk/mvp/Presenter;


# instance fields
.field private cD:Lcom/kwad/components/core/webview/a;

.field private cE:Lcom/kwad/sdk/core/webview/b;

.field private cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    new-instance v0, Lcom/kwad/components/core/page/b/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/b$1;-><init>(Lcom/kwad/components/core/page/b/b;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/b;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    return-void
.end method

.method private a(Lcom/kwad/components/core/webview/a;)V
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/x;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/x;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ah;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/b;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    iget-object v2, p0, Lcom/kwad/components/core/page/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ab;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/b;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method private av()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/b;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 v1, 0x0

    iput v1, v0, Lcom/kwad/sdk/core/webview/b;->mScreenOrientation:I

    iget-object v0, p0, Lcom/kwad/components/core/page/b/b;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    return-void
.end method

.method private ax()V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/b;->ay()V

    new-instance v0, Lcom/kwad/components/core/webview/a;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/b;->cD:Lcom/kwad/components/core/webview/a;

    invoke-direct {p0, v0}, Lcom/kwad/components/core/page/b/b;->a(Lcom/kwad/components/core/webview/a;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/b;->cD:Lcom/kwad/components/core/webview/a;

    const-string v2, "KwaiAd"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method private ay()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/b;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/page/b/b;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/core/page/b/b;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/page/recycle/e;

    iget-object v0, v0, Lcom/kwad/components/core/page/recycle/e;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0}, Lcom/kwad/components/core/page/b/b;->getRootView()Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_webView:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->bm(Z)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/b/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/b;->av()V

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/b;->ax()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->onActivityCreate()V

    return-void
.end method

.method public final onDestroy()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->onDestroy()V

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/b;->ay()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->onActivityDestroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/page/b/b;->mAdWebView:Lcom/kwad/sdk/core/webview/KsAdWebView;

    :cond_0
    return-void
.end method
