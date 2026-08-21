.class public Lcom/tkay/core/basead/ui/web/BaseWebView;
.super Landroid/webkit/WebView;


# static fields
.field private static b:Z


# instance fields
.field protected a:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 10

    .line 35
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    .line 1091
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 1092
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setAllowContentAccess(Z)V

    .line 1093
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt p1, v1, :cond_0

    .line 1094
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setAllowFileAccessFromFileURLs(Z)V

    .line 1095
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V

    .line 38
    :cond_0
    invoke-static {p0}, Lcom/tkay/core/basead/ui/a/a;->a(Landroid/webkit/WebView;)V

    .line 40
    invoke-static {p0}, Lcom/tkay/core/common/l/g;->a(Landroid/webkit/WebView;)V

    .line 42
    sget-boolean p1, Lcom/tkay/core/basead/ui/web/BaseWebView;->b:Z

    if-nez p1, :cond_2

    .line 43
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getContext()Landroid/content/Context;

    move-result-object p1

    .line 1111
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    const/4 v3, 0x1

    if-ne v1, v2, :cond_1

    .line 1113
    new-instance v1, Landroid/webkit/WebView;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    .line 1114
    invoke-virtual {v1, v0}, Landroid/webkit/WebView;->setBackgroundColor(I)V

    const/4 v5, 0x0

    const/4 v9, 0x0

    const-string v6, ""

    const-string v7, "text/html"

    const-string v8, "UTF-8"

    move-object v4, v1

    .line 1118
    invoke-virtual/range {v4 .. v9}, Landroid/webkit/WebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 1119
    new-instance v0, Landroid/view/WindowManager$LayoutParams;

    invoke-direct {v0}, Landroid/view/WindowManager$LayoutParams;-><init>()V

    .line 1120
    iput v3, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 1121
    iput v3, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 v2, 0x7d5

    .line 1123
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->type:I

    const v2, 0x1000018

    .line 1124
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->flags:I

    const/4 v2, -0x2

    .line 1127
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->format:I

    const v2, 0x800033

    .line 1128
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    const-string v2, "window"

    .line 1130
    invoke-virtual {p1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/view/WindowManager;

    .line 1132
    invoke-interface {p1, v1, v0}, Landroid/view/WindowManager;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 44
    :cond_1
    sput-boolean v3, Lcom/tkay/core/basead/ui/web/BaseWebView;->b:Z

    :cond_2
    return-void
.end method

.method private a()V
    .locals 2

    .line 78
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 79
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 80
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    .line 83
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getCacheDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAppCachePath(Ljava/lang/String;)V

    return-void
.end method

.method private static a(Landroid/content/Context;)V
    .locals 8

    .line 111
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-ne v0, v1, :cond_0

    .line 113
    new-instance v0, Landroid/webkit/WebView;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x0

    .line 114
    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setBackgroundColor(I)V

    const/4 v3, 0x0

    const/4 v7, 0x0

    const-string v4, ""

    const-string v5, "text/html"

    const-string v6, "UTF-8"

    move-object v2, v0

    .line 118
    invoke-virtual/range {v2 .. v7}, Landroid/webkit/WebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 119
    new-instance v1, Landroid/view/WindowManager$LayoutParams;

    invoke-direct {v1}, Landroid/view/WindowManager$LayoutParams;-><init>()V

    const/4 v2, 0x1

    .line 120
    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 121
    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 v2, 0x7d5

    .line 123
    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->type:I

    const v2, 0x1000018

    .line 124
    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->flags:I

    const/4 v2, -0x2

    .line 127
    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->format:I

    const v2, 0x800033

    .line 128
    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->gravity:I

    const-string v2, "window"

    .line 130
    invoke-virtual {p0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    .line 132
    invoke-interface {p0, v0, v1}, Landroid/view/WindowManager;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method private b()V
    .locals 3

    .line 91
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 92
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowContentAccess(Z)V

    .line 93
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-lt v0, v2, :cond_0

    .line 94
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowFileAccessFromFileURLs(Z)V

    .line 95
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V

    :cond_0
    return-void
.end method


# virtual methods
.method public destroy()V
    .locals 1

    .line 56
    iget-boolean v0, p0, Lcom/tkay/core/basead/ui/web/BaseWebView;->a:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 60
    iput-boolean v0, p0, Lcom/tkay/core/basead/ui/web/BaseWebView;->a:Z

    .line 65
    invoke-static {p0}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 69
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;->removeAllViews()V

    .line 70
    invoke-super {p0}, Landroid/webkit/WebView;->destroy()V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 3

    .line 50
    invoke-super {p0}, Landroid/webkit/WebView;->onAttachedToWindow()V

    .line 2095
    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v0

    .line 2096
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-lt v1, v2, :cond_0

    .line 2097
    invoke-virtual {p0}, Landroid/webkit/WebView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v1

    invoke-virtual {v0, p0, v1}, Landroid/webkit/CookieManager;->setAcceptThirdPartyCookies(Landroid/webkit/WebView;Z)V

    :cond_0
    return-void
.end method
