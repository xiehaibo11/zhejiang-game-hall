.class public Lcom/kwad/sdk/core/webview/KsAdWebView;
.super Lcom/kwad/sdk/core/webview/c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/webview/KsAdWebView$c;,
        Lcom/kwad/sdk/core/webview/KsAdWebView$a;,
        Lcom/kwad/sdk/core/webview/KsAdWebView$b;,
        Lcom/kwad/sdk/core/webview/KsAdWebView$d;
    }
.end annotation


# instance fields
.field private ayl:Lcom/kwad/sdk/core/webview/a/c;

.field private aym:Ljava/lang/String;

.field private ayn:J

.field private ayo:Lcom/kwad/sdk/core/webview/d;

.field private jX:Lcom/kwad/sdk/core/webview/a/c$a;

.field private mUniqueId:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/webview/c;-><init>(Landroid/content/Context;)V

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/webview/c;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/core/webview/c;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;IZ)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/kwad/sdk/core/webview/c;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;IZ)V

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->init(Landroid/content/Context;)V

    return-void
.end method

.method private DZ()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "KSADSDK_V3.3.42_"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/k;->bQ(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic e(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/d;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->ayo:Lcom/kwad/sdk/core/webview/d;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getReadyClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p0

    return-object p0
.end method

.method private getReadyClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->ayl:Lcom/kwad/sdk/core/webview/a/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/a/c;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->ayl:Lcom/kwad/sdk/core/webview/a/c;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/a/c;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private init(Landroid/content/Context;)V
    .locals 3

    const-string v0, "KsAdWebView"

    const-string v1, "init"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setAccessibilityStateDisable(Landroid/content/Context;)V

    invoke-static {p0}, Lcom/kwad/sdk/utils/bo;->a(Landroid/webkit/WebView;)Landroid/webkit/WebSettings;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVerticalScrollBarEnabled(Z)V

    new-instance v1, Lcom/kwad/sdk/core/webview/KsAdWebView$1;

    invoke-direct {v1, p0}, Lcom/kwad/sdk/core/webview/KsAdWebView$1;-><init>(Lcom/kwad/sdk/core/webview/KsAdWebView;)V

    iput-object v1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->ayl:Lcom/kwad/sdk/core/webview/a/c;

    iget-object v2, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->mUniqueId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/webview/a/c;->dX(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->ayl:Lcom/kwad/sdk/core/webview/a/c;

    invoke-virtual {p0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    new-instance v1, Lcom/kwad/sdk/core/webview/a/b;

    invoke-direct {v1}, Lcom/kwad/sdk/core/webview/a/b;-><init>()V

    invoke-virtual {p0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    new-instance v1, Lcom/kwad/sdk/core/webview/KsAdWebView$a;

    invoke-direct {v1, p0, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView$a;-><init>(Lcom/kwad/sdk/core/webview/KsAdWebView;B)V

    invoke-virtual {p0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    invoke-virtual {p1}, Landroid/webkit/WebSettings;->getUserAgentString()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->DZ()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setUserAgentString(Ljava/lang/String;)V

    new-instance p1, Lcom/kwad/sdk/core/webview/a/c$a;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/kwad/sdk/core/webview/a/c$a;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->Ed()Z

    move-result p1

    if-eqz p1, :cond_0

    new-instance p1, Lcom/kwad/sdk/core/webview/d;

    invoke-direct {p1}, Lcom/kwad/sdk/core/webview/d;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->ayo:Lcom/kwad/sdk/core/webview/d;

    :cond_0
    return-void
.end method

.method private setAccessibilityStateDisable(Landroid/content/Context;)V
    .locals 4

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    if-ne v0, v1, :cond_1

    if-eqz p1, :cond_1

    :try_start_0
    const-string v0, "accessibility"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/view/accessibility/AccessibilityManager;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Landroid/view/accessibility/AccessibilityManager;->isEnabled()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "setState"

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    return-object v0
.end method

.method public getLoadTime()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->ayn:J

    return-wide v0
.end method

.method public getLoadUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->aym:Ljava/lang/String;

    return-object v0
.end method

.method public getUniqueId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->mUniqueId:Ljava/lang/String;

    return-object v0
.end method

.method public loadUrl(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->mUniqueId:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/sdk/core/webview/b/c/b;->ei(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->aym:Ljava/lang/String;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->ayn:J

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/webview/c;->loadUrl(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getBusinessType()Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CONVERT_H5WEB:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const-string v1, "h5WebLoadStart"

    invoke-virtual {v0, p1, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    return-void
.end method

.method public final onActivityCreate()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->ayo:Lcom/kwad/sdk/core/webview/d;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/d;->a(Lcom/kwad/sdk/core/webview/a/c$a;)V

    :cond_0
    return-void
.end method

.method public final onActivityDestroy()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->release()V

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->ayo:Lcom/kwad/sdk/core/webview/d;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/d;->b(Lcom/kwad/sdk/core/webview/a/c$a;)V

    :cond_0
    return-void
.end method

.method protected onScrollChanged(IIII)V
    .locals 0

    invoke-super {p0, p1, p2, p3, p4}, Lcom/kwad/sdk/core/webview/c;->onScrollChanged(IIII)V

    iget-object p1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->oR()Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->jX:Lcom/kwad/sdk/core/webview/a/c$a;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->oR()Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    move-result-object p1

    invoke-interface {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView$c;->oS()V

    :cond_0
    return-void
.end method

.method public setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/KsAdWebView;->ayl:Lcom/kwad/sdk/core/webview/a/c;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/a/c;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    return-void
.end method

.method public setWebChromeClient(Landroid/webkit/WebChromeClient;)V
    .locals 1

    sget-object v0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_1

    instance-of v0, p1, Lcom/kwad/sdk/core/webview/a/b;

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "client is not instanceof KSWebChromeClient"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_1
    :goto_0
    invoke-super {p0, p1}, Lcom/kwad/sdk/core/webview/c;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    return-void
.end method

.method public setWebViewClient(Landroid/webkit/WebViewClient;)V
    .locals 1

    sget-object v0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_1

    instance-of v0, p1, Lcom/kwad/sdk/core/webview/a/a;

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "Not supported set webViewClient, please check it"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_1
    :goto_0
    invoke-super {p0, p1}, Lcom/kwad/sdk/core/webview/c;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    return-void
.end method
