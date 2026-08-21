.class public Lcom/tkay/expressad/foundation/webview/BrowserView;
.super Landroid/widget/LinearLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/foundation/webview/BrowserView$a;,
        Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "BrowserView"


# instance fields
.field private b:Ljava/lang/String;

.field private c:Lcom/tkay/expressad/foundation/webview/ProgressBar;

.field private d:Landroid/webkit/WebView;

.field private e:Lcom/tkay/expressad/foundation/webview/ToolBar;

.field private f:Lcom/tkay/expressad/foundation/webview/BrowserView$a;

.field private g:Lcom/tkay/expressad/foundation/d/c;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 49
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 50
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 54
    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 56
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 43
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 44
    iput-object p2, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->g:Lcom/tkay/expressad/foundation/d/c;

    .line 45
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->init()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/foundation/webview/BrowserView;)Landroid/webkit/WebView;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/expressad/foundation/webview/BrowserView;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->b:Ljava/lang/String;

    return-object p1
.end method

.method private a()V
    .locals 4

    .line 120
    new-instance v0, Lcom/tkay/expressad/foundation/webview/ProgressBar;

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/foundation/webview/ProgressBar;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->c:Lcom/tkay/expressad/foundation/webview/ProgressBar;

    .line 121
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v2, -0x1

    const/4 v3, 0x4

    invoke-direct {v1, v2, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 123
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    if-nez v0, :cond_0

    .line 124
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->b()Landroid/webkit/WebView;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    .line 126
    :cond_0
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v0, v2, v2}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    const/high16 v1, 0x3f800000    # 1.0f

    .line 127
    iput v1, v0, Landroid/widget/LinearLayout$LayoutParams;->weight:F

    .line 128
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    invoke-virtual {v1, v0}, Landroid/webkit/WebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 133
    :catchall_0
    new-instance v0, Lcom/tkay/expressad/foundation/webview/ToolBar;

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/foundation/webview/ToolBar;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    .line 134
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x42200000    # 40.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    .line 135
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    new-instance v3, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v3, v2, v0}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/foundation/webview/ToolBar;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 136
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/foundation/webview/ToolBar;->setBackgroundColor(I)V

    .line 138
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->c:Lcom/tkay/expressad/foundation/webview/ProgressBar;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->addView(Landroid/view/View;)V

    .line 139
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    if-eqz v0, :cond_1

    .line 140
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->addView(Landroid/view/View;)V

    .line 142
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->addView(Landroid/view/View;)V

    return-void
.end method

.method private b()Landroid/webkit/WebView;
    .locals 8

    .line 146
    new-instance v0, Landroid/webkit/WebView;

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    .line 148
    :try_start_0
    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v1

    const/4 v2, 0x1

    .line 149
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 150
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    const-wide/32 v3, 0x500000

    .line 151
    invoke-virtual {v1, v3, v4}, Landroid/webkit/WebSettings;->setAppCacheMaxSize(J)V

    .line 152
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 153
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 154
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 155
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    const/4 v3, 0x0

    .line 156
    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 157
    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 158
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 159
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 160
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 161
    sget-object v4, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v1, v4}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 162
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/16 v5, 0x1a

    if-lt v4, v5, :cond_0

    .line 164
    :try_start_1
    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setSafeBrowsingEnabled(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v4

    .line 166
    :try_start_2
    invoke-virtual {v4}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 170
    :cond_0
    :goto_0
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x11

    if-lt v4, v5, :cond_1

    .line 171
    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setMediaPlaybackRequiresUserGesture(Z)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 175
    :cond_1
    :try_start_3
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x10

    if-lt v4, v5, :cond_2

    .line 176
    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v4

    .line 179
    :try_start_4
    invoke-virtual {v4}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    .line 183
    :cond_2
    :goto_1
    :try_start_5
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x15

    if-lt v4, v5, :cond_3

    .line 184
    invoke-virtual {v1, v3}, Landroid/webkit/WebSettings;->setMixedContentMode(I)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    goto :goto_2

    :catch_0
    move-exception v4

    .line 187
    :try_start_6
    invoke-virtual {v4}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 191
    :cond_3
    :goto_2
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 192
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "database"

    invoke-virtual {v4, v5, v3}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v4

    invoke-virtual {v4}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v4

    .line 193
    invoke-virtual {v1, v4}, Landroid/webkit/WebSettings;->setDatabasePath(Ljava/lang/String;)V

    .line 196
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    .line 197
    invoke-virtual {v1, v4}, Landroid/webkit/WebSettings;->setGeolocationDatabasePath(Ljava/lang/String;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    .line 200
    :try_start_7
    const-class v4, Landroid/webkit/WebSettings;

    const-string v5, "setDisplayZoomControls"

    new-array v6, v2, [Ljava/lang/Class;

    sget-object v7, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v7, v6, v3

    invoke-virtual {v4, v5, v6}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v4

    .line 201
    invoke-virtual {v4, v2}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v5, v2, [Ljava/lang/Object;

    .line 202
    sget-object v6, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    aput-object v6, v5, v3

    invoke-virtual {v4, v1, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_1
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    goto :goto_3

    :catch_1
    move-exception v4

    .line 204
    :try_start_8
    invoke-virtual {v4}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    .line 209
    :goto_3
    :try_start_9
    const-class v4, Landroid/webkit/WebSettings;

    const-string v5, "c2V0QWxsb3dVbml2ZXJzYWxBY2Nlc3NGcm9tRmlsZVVSTHM="

    invoke-static {v5}, Lcom/tkay/core/common/l/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    new-array v6, v2, [Ljava/lang/Class;

    sget-object v7, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v7, v6, v3

    invoke-virtual {v4, v5, v6}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v4

    .line 210
    invoke-virtual {v4, v2}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v2, v2, [Ljava/lang/Object;

    .line 211
    sget-object v5, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    aput-object v5, v2, v3

    invoke-virtual {v4, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    goto :goto_4

    :catchall_2
    move-exception v1

    .line 215
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 218
    :catchall_3
    :goto_4
    new-instance v1, Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;

    iget-object v2, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->g:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {v1, v2}, Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;-><init>(Lcom/tkay/expressad/foundation/d/c;)V

    .line 220
    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 222
    new-instance v1, Lcom/tkay/expressad/foundation/webview/BrowserView$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/foundation/webview/BrowserView$2;-><init>(Lcom/tkay/expressad/foundation/webview/BrowserView;)V

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 252
    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->d()I

    move-result v1

    const/16 v2, 0xa

    if-gt v1, v2, :cond_4

    .line 253
    new-instance v1, Lcom/tkay/expressad/foundation/webview/BrowserView$3;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/foundation/webview/BrowserView$3;-><init>(Lcom/tkay/expressad/foundation/webview/BrowserView;)V

    goto :goto_5

    .line 282
    :cond_4
    new-instance v1, Lcom/tkay/expressad/foundation/webview/BrowserView$4;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/foundation/webview/BrowserView$4;-><init>(Lcom/tkay/expressad/foundation/webview/BrowserView;)V

    .line 297
    :goto_5
    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    return-object v0
.end method

.method static synthetic b(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ToolBar;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/expressad/foundation/webview/BrowserView;)Ljava/lang/String;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->b:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/BrowserView$a;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->f:Lcom/tkay/expressad/foundation/webview/BrowserView$a;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/expressad/foundation/webview/BrowserView;)Lcom/tkay/expressad/foundation/webview/ProgressBar;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->c:Lcom/tkay/expressad/foundation/webview/ProgressBar;

    return-object p0
.end method


# virtual methods
.method public destroy()V
    .locals 2

    .line 329
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 330
    invoke-virtual {v0}, Landroid/webkit/WebView;->stopLoading()V

    .line 331
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 332
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->destroy()V

    .line 333
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->removeAllViews()V

    :cond_0
    return-void
.end method

.method public init()V
    .locals 5

    const/4 v0, 0x1

    .line 74
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->setOrientation(I)V

    const/16 v1, 0x11

    .line 76
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->setGravity(I)V

    .line 1120
    new-instance v1, Lcom/tkay/expressad/foundation/webview/ProgressBar;

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/tkay/expressad/foundation/webview/ProgressBar;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->c:Lcom/tkay/expressad/foundation/webview/ProgressBar;

    .line 1121
    new-instance v2, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v3, -0x1

    const/4 v4, 0x4

    invoke-direct {v2, v3, v4}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1123
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    if-nez v1, :cond_0

    .line 1124
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->b()Landroid/webkit/WebView;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    .line 1126
    :cond_0
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v1, v3, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    const/high16 v2, 0x3f800000    # 1.0f

    .line 1127
    iput v2, v1, Landroid/widget/LinearLayout$LayoutParams;->weight:F

    .line 1128
    iget-object v2, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    invoke-virtual {v2, v1}, Landroid/webkit/WebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1133
    :catchall_0
    new-instance v1, Lcom/tkay/expressad/foundation/webview/ToolBar;

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/tkay/expressad/foundation/webview/ToolBar;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    .line 1134
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/BrowserView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42200000    # 40.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    .line 1135
    iget-object v2, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    new-instance v4, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v4, v3, v1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v2, v4}, Lcom/tkay/expressad/foundation/webview/ToolBar;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1136
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/foundation/webview/ToolBar;->setBackgroundColor(I)V

    .line 1138
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->c:Lcom/tkay/expressad/foundation/webview/ProgressBar;

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->addView(Landroid/view/View;)V

    .line 1139
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    if-eqz v1, :cond_1

    .line 1140
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->addView(Landroid/view/View;)V

    .line 1142
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/foundation/webview/BrowserView;->addView(Landroid/view/View;)V

    .line 80
    iget-object v1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->c:Lcom/tkay/expressad/foundation/webview/ProgressBar;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/foundation/webview/ProgressBar;->initResource(Z)V

    .line 82
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    const-string v1, "backward"

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setEnabled(Z)V

    .line 83
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    const-string v2, "forward"

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getItem(Ljava/lang/String;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/View;->setEnabled(Z)V

    .line 85
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->e:Lcom/tkay/expressad/foundation/webview/ToolBar;

    new-instance v1, Lcom/tkay/expressad/foundation/webview/BrowserView$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/foundation/webview/BrowserView$1;-><init>(Lcom/tkay/expressad/foundation/webview/BrowserView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/webview/ToolBar;->setOnItemClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public loadUrl(Ljava/lang/String;)V
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 65
    invoke-virtual {v0, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public setListener(Lcom/tkay/expressad/foundation/webview/BrowserView$a;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->f:Lcom/tkay/expressad/foundation/webview/BrowserView$a;

    return-void
.end method

.method public setWebView(Landroid/webkit/WebView;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView;->d:Landroid/webkit/WebView;

    return-void
.end method
