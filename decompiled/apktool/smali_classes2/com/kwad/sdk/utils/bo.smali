.class public final Lcom/kwad/sdk/utils/bo;
.super Ljava/lang/Object;


# direct methods
.method public static a(Landroid/webkit/WebView;)Landroid/webkit/WebSettings;
    .locals 2

    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    invoke-static {p0}, Lcom/kwad/sdk/utils/bo;->b(Landroid/webkit/WebView;)Landroid/webkit/WebSettings;

    move-result-object p0

    return-object p0
.end method

.method private static b(Landroid/webkit/WebView;)Landroid/webkit/WebSettings;
    .locals 6

    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowContentAccess(Z)V

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    const/16 v3, 0x64

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setTextZoom(I)V

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowFileAccessFromFileURLs(Z)V

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V

    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x15

    if-lt v3, v4, :cond_0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setMixedContentMode(I)V

    :cond_0
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x13

    if-ge v3, v5, :cond_1

    const-string v3, "searchBoxJavaBridge_"

    invoke-virtual {p0, v3}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    const-string v3, "accessibility"

    invoke-virtual {p0, v3}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    const-string v3, "accessibilityTraversal"

    invoke-virtual {p0, v3}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    :cond_1
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v3, v4, :cond_2

    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v3

    invoke-virtual {v3, p0, v2}, Landroid/webkit/CookieManager;->setAcceptThirdPartyCookies(Landroid/webkit/WebView;Z)V

    :cond_2
    invoke-virtual {p0, v1}, Landroid/webkit/WebView;->setSaveEnabled(Z)V

    return-object v0
.end method
