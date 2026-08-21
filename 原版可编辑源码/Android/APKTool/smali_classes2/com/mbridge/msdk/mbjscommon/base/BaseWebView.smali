.class public Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;
.super Landroid/webkit/WebView;
.source "BaseWebView.java"


# instance fields
.field protected a:Landroid/content/Context;

.field private b:Landroid/view/View$OnTouchListener;

.field private c:Landroid/view/View$OnTouchListener;

.field public lastTouchTime:J

.field public mWebViewClient:Lcom/mbridge/msdk/mbjscommon/base/b;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 44
    invoke-direct {p0, p1}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    const-wide/16 v0, 0x0

    .line 27
    iput-wide v0, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->lastTouchTime:J

    .line 28
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView$1;-><init>(Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->b:Landroid/view/View$OnTouchListener;

    .line 45
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->a:Landroid/content/Context;

    .line 46
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 2

    .line 50
    invoke-direct {p0, p1, p2}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-wide/16 v0, 0x0

    .line 27
    iput-wide v0, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->lastTouchTime:J

    .line 28
    new-instance p2, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView$1;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView$1;-><init>(Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->b:Landroid/view/View$OnTouchListener;

    .line 51
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->a:Landroid/content/Context;

    .line 52
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 56
    invoke-direct {p0, p1, p2, p3}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const-wide/16 p2, 0x0

    .line 27
    iput-wide p2, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->lastTouchTime:J

    .line 28
    new-instance p2, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView$1;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView$1;-><init>(Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->b:Landroid/view/View$OnTouchListener;

    .line 57
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->a:Landroid/content/Context;

    .line 58
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->a()V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;)Landroid/view/View$OnTouchListener;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->c:Landroid/view/View$OnTouchListener;

    return-object p0
.end method


# virtual methods
.method protected a()V
    .locals 7

    .line 69
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->mWebViewClient:Lcom/mbridge/msdk/mbjscommon/base/b;

    if-nez v0, :cond_0

    .line 70
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/base/b;

    invoke-direct {v0}, Lcom/mbridge/msdk/mbjscommon/base/b;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->mWebViewClient:Lcom/mbridge/msdk/mbjscommon/base/b;

    .line 71
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    :cond_0
    const/4 v0, 0x0

    .line 73
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->setHorizontalScrollBarEnabled(Z)V

    .line 74
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->setVerticalScrollBarEnabled(Z)V

    .line 76
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->setVerticalScrollBarEnabled(Z)V

    .line 77
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->requestFocus()Z

    .line 79
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v1

    const/4 v2, 0x1

    .line 81
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 82
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    const-wide/32 v3, 0x500000

    .line 83
    invoke-virtual {v1, v3, v4}, Landroid/webkit/WebSettings;->setAppCacheMaxSize(J)V

    .line 84
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 85
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 86
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 87
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 88
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 90
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 91
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 92
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 93
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 94
    sget-object v3, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 95
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1a

    if-lt v3, v4, :cond_1

    .line 97
    :try_start_0
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setSafeBrowsingEnabled(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v3

    .line 99
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    .line 102
    :cond_1
    :goto_0
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x11

    if-lt v3, v4, :cond_2

    .line 103
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setMediaPlaybackRequiresUserGesture(Z)V

    .line 107
    :cond_2
    :try_start_1
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v3

    .line 109
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    .line 112
    :goto_1
    :try_start_2
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x15

    if-lt v3, v4, :cond_3

    .line 113
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setMixedContentMode(I)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_2

    :catch_0
    move-exception v3

    .line 116
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 123
    :cond_3
    :goto_2
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v4, 0x5

    if-lt v3, v4, :cond_4

    .line 124
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 125
    iget-object v3, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->a:Landroid/content/Context;

    const-string v4, "database"

    invoke-virtual {v3, v4, v0}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v3

    invoke-virtual {v3}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v3

    .line 126
    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setDatabasePath(Ljava/lang/String;)V

    .line 129
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    .line 130
    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setGeolocationDatabasePath(Ljava/lang/String;)V

    .line 133
    :cond_4
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0xb

    if-lt v3, v4, :cond_5

    .line 136
    :try_start_3
    const-class v3, Landroid/webkit/WebSettings;

    const-string v4, "setDisplayZoomControls"

    new-array v5, v2, [Ljava/lang/Class;

    sget-object v6, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v6, v5, v0

    invoke-virtual {v3, v4, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    .line 137
    invoke-virtual {v3, v2}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v2, v2, [Ljava/lang/Object;

    .line 138
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    aput-object v4, v2, v0

    invoke-virtual {v3, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    .line 142
    :catch_1
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->b:Landroid/view/View$OnTouchListener;

    invoke-super {p0, v0}, Landroid/webkit/WebView;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    return-void
.end method

.method public reload()V
    .locals 0

    .line 158
    invoke-super {p0}, Landroid/webkit/WebView;->reload()V

    return-void
.end method

.method public setFilter(Lcom/mbridge/msdk/mbjscommon/base/a;)V
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->mWebViewClient:Lcom/mbridge/msdk/mbjscommon/base/b;

    if-eqz v0, :cond_0

    .line 63
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/base/b;->a(Lcom/mbridge/msdk/mbjscommon/base/a;)V

    :cond_0
    return-void
.end method

.method public setOnTouchListener(Landroid/view/View$OnTouchListener;)V
    .locals 0

    .line 147
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->c:Landroid/view/View$OnTouchListener;

    return-void
.end method

.method public setTransparent()V
    .locals 2

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 151
    invoke-virtual {p0, v0, v1}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->setLayerType(ILandroid/graphics/Paint;)V

    const/4 v0, 0x0

    .line 152
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->setBackgroundColor(I)V

    return-void
.end method

.method public setWebViewClient(Landroid/webkit/WebViewClient;)V
    .locals 1

    .line 163
    invoke-super {p0, p1}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 164
    instance-of v0, p1, Lcom/mbridge/msdk/mbjscommon/base/b;

    if-eqz v0, :cond_0

    .line 165
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/base/b;

    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;->mWebViewClient:Lcom/mbridge/msdk/mbjscommon/base/b;

    :cond_0
    return-void
.end method
