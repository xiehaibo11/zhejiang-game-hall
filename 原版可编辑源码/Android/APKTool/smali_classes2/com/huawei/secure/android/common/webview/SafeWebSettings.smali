.class public Lcom/huawei/secure/android/common/webview/SafeWebSettings;
.super Ljava/lang/Object;
.source "SourceFile"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static disableContentAccess(Landroid/webkit/WebSettings;)V
    .locals 2

    .line 1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xb

    if-lt v0, v1, :cond_0

    const/4 v0, 0x0

    .line 2
    invoke-virtual {p0, v0}, Landroid/webkit/WebSettings;->setAllowContentAccess(Z)V

    :cond_0
    return-void
.end method

.method public static disableFileCrossAccess(Landroid/webkit/WebSettings;)V
    .locals 3

    const/4 v0, 0x0

    .line 1
    invoke-virtual {p0, v0}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 2
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-lt v1, v2, :cond_0

    .line 3
    invoke-virtual {p0, v0}, Landroid/webkit/WebSettings;->setAllowFileAccessFromFileURLs(Z)V

    .line 4
    invoke-virtual {p0, v0}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V

    :cond_0
    return-void
.end method

.method public static disableGeolocation(Landroid/webkit/WebSettings;)V
    .locals 1

    const/4 v0, 0x0

    .line 1
    invoke-virtual {p0, v0}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    return-void
.end method

.method public static disableMixedContentMode(Landroid/webkit/WebSettings;)V
    .locals 2

    .line 1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    const/4 v0, 0x1

    .line 2
    invoke-virtual {p0, v0}, Landroid/webkit/WebSettings;->setMixedContentMode(I)V

    :cond_0
    return-void
.end method

.method public static disablePasswordStorage(Landroid/webkit/WebSettings;)V
    .locals 2

    .line 1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x12

    if-gt v0, v1, :cond_0

    const/4 v0, 0x0

    .line 3
    invoke-virtual {p0, v0}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    :cond_0
    return-void
.end method

.method public static initWebviewAndSettings(Landroid/webkit/WebView;)V
    .locals 1

    .line 1
    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    .line 3
    invoke-static {v0}, Lcom/huawei/secure/android/common/webview/SafeWebSettings;->disableFileCrossAccess(Landroid/webkit/WebSettings;)V

    .line 4
    invoke-static {p0}, Lcom/huawei/secure/android/common/webview/SafeWebSettings;->removeUnSafeJavascriptImpl(Landroid/webkit/WebView;)V

    .line 5
    invoke-static {v0}, Lcom/huawei/secure/android/common/webview/SafeWebSettings;->disablePasswordStorage(Landroid/webkit/WebSettings;)V

    .line 6
    invoke-static {v0}, Lcom/huawei/secure/android/common/webview/SafeWebSettings;->disableGeolocation(Landroid/webkit/WebSettings;)V

    .line 7
    invoke-static {v0}, Lcom/huawei/secure/android/common/webview/SafeWebSettings;->disableMixedContentMode(Landroid/webkit/WebSettings;)V

    .line 8
    invoke-static {v0}, Lcom/huawei/secure/android/common/webview/SafeWebSettings;->disableContentAccess(Landroid/webkit/WebSettings;)V

    return-void
.end method

.method public static removeUnSafeJavascriptImpl(Landroid/webkit/WebView;)V
    .locals 2

    .line 1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xb

    if-lt v0, v1, :cond_0

    const-string v0, "searchBoxJavaBridge_"

    .line 2
    invoke-virtual {p0, v0}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    const-string v0, "accessibility"

    .line 3
    invoke-virtual {p0, v0}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    const-string v0, "accessibilityTraversal"

    .line 4
    invoke-virtual {p0, v0}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
