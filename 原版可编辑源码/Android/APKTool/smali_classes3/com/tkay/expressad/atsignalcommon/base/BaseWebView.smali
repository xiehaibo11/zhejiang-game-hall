.class public Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;
.super Landroid/webkit/WebView;


# instance fields
.field private a:Landroid/view/View$OnTouchListener;

.field private b:Landroid/view/View$OnTouchListener;

.field protected e:Landroid/content/Context;

.field public lastTouchTime:J

.field public mWebViewClient:Lcom/tkay/expressad/atsignalcommon/base/b;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 46
    invoke-direct {p0, p1}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    const-wide/16 v0, 0x0

    .line 29
    iput-wide v0, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->lastTouchTime:J

    .line 30
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView$1;-><init>(Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;)V

    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->a:Landroid/view/View$OnTouchListener;

    .line 47
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->e:Landroid/content/Context;

    .line 48
    invoke-virtual {p0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 2

    .line 52
    invoke-direct {p0, p1, p2}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-wide/16 v0, 0x0

    .line 29
    iput-wide v0, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->lastTouchTime:J

    .line 30
    new-instance p2, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView$1;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView$1;-><init>(Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;)V

    iput-object p2, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->a:Landroid/view/View$OnTouchListener;

    .line 53
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->e:Landroid/content/Context;

    .line 54
    invoke-virtual {p0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 58
    invoke-direct {p0, p1, p2, p3}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const-wide/16 p2, 0x0

    .line 29
    iput-wide p2, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->lastTouchTime:J

    .line 30
    new-instance p2, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView$1;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView$1;-><init>(Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;)V

    iput-object p2, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->a:Landroid/view/View$OnTouchListener;

    .line 59
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->e:Landroid/content/Context;

    .line 60
    invoke-virtual {p0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->a()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;)Landroid/view/View$OnTouchListener;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->b:Landroid/view/View$OnTouchListener;

    return-object p0
.end method


# virtual methods
.method protected a(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    .line 192
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_2

    const-string v0, "../"

    .line 194
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    :cond_0
    :goto_0
    move v1, v2

    goto :goto_1

    :cond_1
    const-string v0, "file"

    .line 197
    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 199
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 200
    invoke-virtual {v0}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v0

    .line 202
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    invoke-static {}, Lcom/tkay/expressad/foundation/h/r;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    goto :goto_0

    :cond_2
    :goto_1
    if-eqz v1, :cond_3

    .line 207
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "illegal URL: "

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "tkay_express"

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-string p1, "about:blank"

    :cond_3
    return-object p1
.end method

.method protected a()V
    .locals 7

    .line 70
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->mWebViewClient:Lcom/tkay/expressad/atsignalcommon/base/b;

    if-nez v0, :cond_0

    .line 71
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/base/b;

    invoke-direct {v0}, Lcom/tkay/expressad/atsignalcommon/base/b;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->mWebViewClient:Lcom/tkay/expressad/atsignalcommon/base/b;

    .line 72
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    :cond_0
    const/4 v0, 0x0

    .line 74
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->setHorizontalScrollBarEnabled(Z)V

    .line 75
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->setVerticalScrollBarEnabled(Z)V

    .line 76
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->setVerticalScrollBarEnabled(Z)V

    .line 77
    invoke-virtual {p0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->requestFocus()Z

    .line 79
    invoke-virtual {p0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v1

    const/4 v2, 0x1

    .line 80
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 81
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    const-wide/32 v3, 0x500000

    .line 82
    invoke-virtual {v1, v3, v4}, Landroid/webkit/WebSettings;->setAppCacheMaxSize(J)V

    .line 83
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 84
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 85
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 86
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 87
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 88
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 89
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 90
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 91
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 92
    sget-object v3, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 93
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1a

    if-lt v3, v4, :cond_1

    .line 95
    :try_start_0
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setSafeBrowsingEnabled(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v3

    .line 97
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    .line 100
    :cond_1
    :goto_0
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x11

    if-lt v3, v4, :cond_2

    .line 101
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setMediaPlaybackRequiresUserGesture(Z)V

    .line 104
    :cond_2
    :try_start_1
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x10

    if-lt v3, v4, :cond_3

    .line 105
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v3

    .line 108
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    .line 111
    :cond_3
    :goto_1
    :try_start_2
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x15

    if-lt v3, v4, :cond_4

    .line 112
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setMixedContentMode(I)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_2

    :catch_0
    move-exception v3

    .line 115
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 118
    :cond_4
    :goto_2
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 119
    iget-object v3, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->e:Landroid/content/Context;

    const-string v4, "database"

    invoke-virtual {v3, v4, v0}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v3

    invoke-virtual {v3}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v3

    .line 120
    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setDatabasePath(Ljava/lang/String;)V

    .line 122
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    .line 123
    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setGeolocationDatabasePath(Ljava/lang/String;)V

    .line 127
    :try_start_3
    const-class v3, Landroid/webkit/WebSettings;

    const-string v4, "setDisplayZoomControls"

    new-array v5, v2, [Ljava/lang/Class;

    sget-object v6, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v6, v5, v0

    invoke-virtual {v3, v4, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    .line 128
    invoke-virtual {v3, v2}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v4, v2, [Ljava/lang/Object;

    .line 129
    sget-object v5, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    aput-object v5, v4, v0

    invoke-virtual {v3, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    .line 135
    :catch_1
    :try_start_4
    const-class v3, Landroid/webkit/WebSettings;

    const-string v4, "c2V0QWxsb3dVbml2ZXJzYWxBY2Nlc3NGcm9tRmlsZVVSTHM="

    invoke-static {v4}, Lcom/tkay/core/common/l/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    new-array v5, v2, [Ljava/lang/Class;

    sget-object v6, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v6, v5, v0

    invoke-virtual {v3, v4, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    .line 136
    invoke-virtual {v3, v2}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v2, v2, [Ljava/lang/Object;

    .line 137
    sget-object v4, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    aput-object v4, v2, v0

    invoke-virtual {v3, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    .line 142
    :catchall_2
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->a:Landroid/view/View$OnTouchListener;

    invoke-super {p0, v0}, Landroid/webkit/WebView;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    return-void
.end method

.method public getBaseWebViewClient()Lcom/tkay/expressad/atsignalcommon/base/b;
    .locals 1

    .line 170
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->mWebViewClient:Lcom/tkay/expressad/atsignalcommon/base/b;

    return-object v0
.end method

.method public loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    .line 186
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    move-object v0, p0

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    invoke-super/range {v0 .. v5}, Landroid/webkit/WebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public loadUrl(Ljava/lang/String;)V
    .locals 0

    .line 175
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-super {p0, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method public loadUrl(Ljava/lang/String;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 181
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-super {p0, p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public reload()V
    .locals 0

    .line 158
    invoke-super {p0}, Landroid/webkit/WebView;->reload()V

    return-void
.end method

.method public setFilter(Lcom/tkay/expressad/atsignalcommon/base/a;)V
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->mWebViewClient:Lcom/tkay/expressad/atsignalcommon/base/b;

    if-eqz v0, :cond_0

    .line 65
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/base/b;->a(Lcom/tkay/expressad/atsignalcommon/base/a;)V

    :cond_0
    return-void
.end method

.method public setOnTouchListener(Landroid/view/View$OnTouchListener;)V
    .locals 0

    .line 148
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->b:Landroid/view/View$OnTouchListener;

    return-void
.end method

.method public setTransparent()V
    .locals 2

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 152
    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->setLayerType(ILandroid/graphics/Paint;)V

    const/4 v0, 0x0

    .line 153
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->setBackgroundColor(I)V

    return-void
.end method

.method public setWebViewClient(Landroid/webkit/WebViewClient;)V
    .locals 1

    .line 163
    invoke-super {p0, p1}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 164
    instance-of v0, p1, Lcom/tkay/expressad/atsignalcommon/base/b;

    if-eqz v0, :cond_0

    .line 165
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/base/b;

    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->mWebViewClient:Lcom/tkay/expressad/atsignalcommon/base/b;

    :cond_0
    return-void
.end method
