.class public final Lcom/tkay/core/basead/ui/a/a;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a()V
    .locals 3

    .line 70
    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v0

    .line 71
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 72
    invoke-virtual {v0, v1}, Landroid/webkit/CookieManager;->setAcceptCookie(Z)V

    .line 73
    invoke-static {v1}, Landroid/webkit/CookieManager;->setAcceptFileSchemeCookies(Z)V

    return-void

    :cond_0
    const/4 v1, 0x0

    .line 78
    invoke-virtual {v0, v1}, Landroid/webkit/CookieManager;->setAcceptCookie(Z)V

    .line 79
    invoke-static {v1}, Landroid/webkit/CookieManager;->setAcceptFileSchemeCookies(Z)V

    .line 80
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-lt v1, v2, :cond_1

    const/4 v1, 0x0

    .line 81
    invoke-virtual {v0, v1}, Landroid/webkit/CookieManager;->removeSessionCookies(Landroid/webkit/ValueCallback;)V

    .line 82
    invoke-virtual {v0, v1}, Landroid/webkit/CookieManager;->removeAllCookies(Landroid/webkit/ValueCallback;)V

    .line 83
    invoke-virtual {v0}, Landroid/webkit/CookieManager;->flush()V

    return-void

    .line 85
    :cond_1
    invoke-virtual {v0}, Landroid/webkit/CookieManager;->removeSessionCookie()V

    .line 86
    invoke-virtual {v0}, Landroid/webkit/CookieManager;->removeAllCookie()V

    return-void
.end method

.method public static a(Landroid/webkit/WebView;)V
    .locals 1

    .line 37
    new-instance v0, Lcom/tkay/core/basead/ui/a/a$1;

    invoke-direct {v0}, Lcom/tkay/core/basead/ui/a/a$1;-><init>()V

    invoke-virtual {p0, v0}, Landroid/webkit/WebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    return-void
.end method

.method private static a(Landroid/webkit/WebView;Z)V
    .locals 0

    if-eqz p1, :cond_0

    .line 29
    invoke-virtual {p0}, Landroid/webkit/WebView;->stopLoading()V

    const-string p1, ""

    .line 30
    invoke-virtual {p0, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    .line 33
    :cond_0
    invoke-virtual {p0}, Landroid/webkit/WebView;->onPause()V

    return-void
.end method

.method private static b(Landroid/webkit/WebView;)V
    .locals 3

    .line 95
    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v0

    .line 96
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-lt v1, v2, :cond_0

    .line 97
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
