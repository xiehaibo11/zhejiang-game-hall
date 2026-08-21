.class public Lcom/bianfeng/paylib/ui/WxWebPayActivty;
.super Landroid/app/Activity;
.source "WxWebPayActivty.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/paylib/ui/WxWebPayActivty$CloseListner;
    }
.end annotation


# instance fields
.field private firstVisitWXH5PayUrl:Z

.field private linearLayout:Landroid/widget/LinearLayout;

.field private url:Ljava/lang/String;

.field private urlStartsWith:Ljava/lang/String;

.field private webOpenType:I

.field private webView:Landroid/webkit/WebView;

.field private wxUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 32
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const-string v0, ""

    .line 36
    iput-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->urlStartsWith:Ljava/lang/String;

    const/4 v0, 0x0

    .line 37
    iput v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webOpenType:I

    const-string v0, "http://ipay.bianfeng.com"

    .line 38
    iput-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->wxUrl:Ljava/lang/String;

    const/4 v0, 0x1

    .line 39
    iput-boolean v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->firstVisitWXH5PayUrl:Z

    return-void
.end method

.method static synthetic access$100(Lcom/bianfeng/paylib/ui/WxWebPayActivty;Ljava/lang/String;)V
    .locals 0

    .line 32
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->toPay(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$200(Lcom/bianfeng/paylib/ui/WxWebPayActivty;)Ljava/lang/String;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->url:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$202(Lcom/bianfeng/paylib/ui/WxWebPayActivty;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->url:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$300(Lcom/bianfeng/paylib/ui/WxWebPayActivty;)Landroid/widget/LinearLayout;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->linearLayout:Landroid/widget/LinearLayout;

    return-object p0
.end method

.method private initData()V
    .locals 3

    .line 83
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webView:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x1

    .line 84
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 85
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    const/4 v2, 0x0

    .line 86
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setBlockNetworkImage(Z)V

    .line 87
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 88
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setLoadsImagesAutomatically(Z)V

    .line 89
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webView:Landroid/webkit/WebView;

    new-instance v1, Landroid/webkit/WebChromeClient;

    invoke-direct {v1}, Landroid/webkit/WebChromeClient;-><init>()V

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    .line 91
    invoke-direct {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->loadData()V

    .line 92
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webView:Landroid/webkit/WebView;

    new-instance v1, Lcom/bianfeng/paylib/ui/WxWebPayActivty$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty$1;-><init>(Lcom/bianfeng/paylib/ui/WxWebPayActivty;)V

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    return-void
.end method

.method private initView()V
    .locals 2

    .line 79
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v0

    const-string v1, "R.id.webpaypay_webview_wx"

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/webkit/WebView;

    iput-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webView:Landroid/webkit/WebView;

    return-void
.end method

.method private loadData()V
    .locals 7

    .line 116
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->url:Ljava/lang/String;

    const-string v1, "http"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->url:Ljava/lang/String;

    const-string v1, "https"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 126
    :cond_0
    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    const-string v1, "4.4.3"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    const-string v1, "4.4.4"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 139
    :cond_1
    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    .line 140
    iget-object v1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->wxUrl:Ljava/lang/String;

    const-string v2, "Referer"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 141
    iget-object v1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webView:Landroid/webkit/WebView;

    iget-object v2, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->url:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;Ljava/util/Map;)V

    return-void

    .line 128
    :cond_2
    :goto_0
    iget-boolean v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->firstVisitWXH5PayUrl:Z

    if-eqz v0, :cond_3

    .line 129
    iget-object v1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webView:Landroid/webkit/WebView;

    iget-object v2, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->wxUrl:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "<script>window.location.href=\""

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->url:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\";</script>"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v6, 0x0

    const-string v4, "text/html"

    const-string v5, "utf-8"

    invoke-virtual/range {v1 .. v6}, Landroid/webkit/WebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 133
    iput-boolean v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->firstVisitWXH5PayUrl:Z

    :cond_3
    return-void
.end method

.method public static start(Landroid/content/Context;Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;)V
    .locals 3

    .line 50
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/paylib/ui/WxWebPayActivty;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 51
    invoke-virtual {p1}, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;->getRedirect_url()Ljava/lang/String;

    move-result-object v1

    const-string v2, "h5url"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 52
    invoke-virtual {p1}, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;->getUrl_starts_with()Ljava/lang/String;

    move-result-object v1

    const-string v2, "url_starts_with"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 53
    invoke-virtual {p1}, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;->getWeb_open_type()I

    move-result p1

    const-string v1, "web_open_type"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 54
    invoke-virtual {v0, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 55
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method public static start(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 43
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/paylib/ui/WxWebPayActivty;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v1, "h5url"

    .line 44
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 45
    invoke-virtual {v0, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 46
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method private toPay(Ljava/lang/String;)V
    .locals 3

    .line 148
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->urlStartsWith:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 149
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webView:Landroid/webkit/WebView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setVisibility(I)V

    .line 150
    invoke-static {}, Lcom/bianfeng/paylib/YmnWebpaySdk;->getInstance()Lcom/bianfeng/paylib/YmnWebpaySdk;

    move-result-object v0

    const-string v1, "type_request_order"

    const-string v2, "\u4e0b\u5355\u54cd\u5e94"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payCallback(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 152
    :try_start_0
    iget v1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webOpenType:I

    if-eqz v1, :cond_1

    if-eq v1, v0, :cond_0

    goto :goto_0

    .line 162
    :cond_0
    invoke-static {p1, v0}, Landroid/content/Intent;->parseUri(Ljava/lang/String;I)Landroid/content/Intent;

    move-result-object p1

    const/high16 v1, 0x10200000

    .line 163
    invoke-virtual {p1, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 164
    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->startActivity(Landroid/content/Intent;)V

    .line 165
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->finish()V

    goto :goto_0

    .line 155
    :cond_1
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 156
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {v1, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const-string p1, "android.intent.action.VIEW"

    .line 157
    invoke-virtual {v1, p1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 158
    invoke-virtual {p0, v1}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->startActivity(Landroid/content/Intent;)V

    .line 159
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->finish()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p1, "\u8bf7\u5b89\u88c5\u5fae\u4fe1\u6216\u652f\u4ed8\u5b9d"

    .line 169
    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    .line 170
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->finish()V

    :cond_2
    :goto_0
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    .line 60
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 61
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->getWindow()Landroid/view/Window;

    move-result-object p1

    const/4 v0, 0x1

    .line 63
    invoke-virtual {p0, v0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->requestWindowFeature(I)Z

    const/16 v0, 0x400

    .line 67
    invoke-virtual {p1, v0, v0}, Landroid/view/Window;->setFlags(II)V

    .line 68
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.layout.activity_webpaysdk_wx"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->setContentView(I)V

    .line 69
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "h5url"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->url:Ljava/lang/String;

    .line 70
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "url_starts_with"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->getIntent()Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->urlStartsWith:Ljava/lang/String;

    .line 71
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "web_open_type"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webOpenType:I

    .line 72
    :cond_1
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.id.webpaypay_webview_wx_dialog"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/LinearLayout;

    iput-object p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->linearLayout:Landroid/widget/LinearLayout;

    .line 73
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.id.webpaypay_webview_wx_close"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->findViewById(I)Landroid/view/View;

    move-result-object p1

    new-instance v0, Lcom/bianfeng/paylib/ui/WxWebPayActivty$CloseListner;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/bianfeng/paylib/ui/WxWebPayActivty$CloseListner;-><init>(Lcom/bianfeng/paylib/ui/WxWebPayActivty;Lcom/bianfeng/paylib/ui/WxWebPayActivty$1;)V

    invoke-virtual {p1, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 74
    invoke-direct {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->initView()V

    .line 75
    invoke-direct {p0}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->initData()V

    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 177
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webView:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 178
    invoke-virtual {v0}, Landroid/webkit/WebView;->removeAllViews()V

    .line 179
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->webView:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->destroy()V

    .line 181
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method
