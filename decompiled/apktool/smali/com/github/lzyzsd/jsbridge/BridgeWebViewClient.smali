.class public Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;
.super Landroid/webkit/WebViewClient;
.source "BridgeWebViewClient.java"


# instance fields
.field private webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;


# direct methods
.method public constructor <init>(Lcom/github/lzyzsd/jsbridge/BridgeWebView;)V
    .locals 0

    .line 23
    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    .line 24
    iput-object p1, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    return-void
.end method


# virtual methods
.method protected onCustomPageFinishd(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method protected onCustomShouldOverrideUrlLoading(Ljava/lang/String;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 3

    .line 80
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    const-string v0, "WebViewJavascriptBridge.js"

    .line 83
    invoke-static {p1, v0}, Lcom/github/lzyzsd/jsbridge/BridgeUtil;->webViewLoadLocalJs(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 85
    iget-object v0, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getStartupMessage()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 86
    iget-object v0, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->getStartupMessage()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/github/lzyzsd/jsbridge/Message;

    .line 87
    iget-object v2, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {v2, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->dispatchMessage(Lcom/github/lzyzsd/jsbridge/Message;)V

    goto :goto_0

    .line 89
    :cond_0
    iget-object v0, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->setStartupMessage(Ljava/util/List;)V

    .line 92
    :cond_1
    invoke-virtual {p0, p1, p2}, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->onCustomPageFinishd(Landroid/webkit/WebView;Ljava/lang/String;)V

    return-void
.end method

.method public onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 0

    .line 73
    invoke-super {p0, p1, p2, p3}, Landroid/webkit/WebViewClient;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    return-void
.end method

.method public onReceivedError(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceError;)V
    .locals 1

    .line 110
    invoke-super {p0, p1, p2, p3}, Landroid/webkit/WebViewClient;->onReceivedError(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceError;)V

    .line 111
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onReceivedError"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "--"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "ymnsdk: "

    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Z
    .locals 3

    .line 50
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x18

    if-lt v0, v1, :cond_3

    .line 51
    invoke-interface {p2}, Landroid/webkit/WebResourceRequest;->getUrl()Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v0

    :try_start_0
    const-string v1, "UTF-8"

    .line 53
    invoke-static {v0, v1}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 55
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    const-string v1, "yy://return/"

    .line 57
    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    .line 58
    iget-object p1, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {p1, v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->handlerReturnData(Ljava/lang/String;)V

    return v2

    :cond_0
    const-string v1, "yy://"

    .line 60
    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 61
    iget-object p1, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {p1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->flushMessageQueue()V

    return v2

    .line 64
    :cond_1
    invoke-virtual {p0, v0}, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->onCustomShouldOverrideUrlLoading(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_1

    :cond_2
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldOverrideUrlLoading(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Z

    move-result v2

    :goto_1
    return v2

    .line 67
    :cond_3
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldOverrideUrlLoading(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Z

    move-result p1

    return p1
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 2

    :try_start_0
    const-string v0, "UTF-8"

    .line 31
    invoke-static {p2, v0}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 33
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    const-string v0, "yy://return/"

    .line 35
    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 36
    iget-object p1, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {p1, p2}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->handlerReturnData(Ljava/lang/String;)V

    return v1

    :cond_0
    const-string v0, "yy://"

    .line 38
    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 39
    iget-object p1, p0, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->webView:Lcom/github/lzyzsd/jsbridge/BridgeWebView;

    invoke-virtual {p1}, Lcom/github/lzyzsd/jsbridge/BridgeWebView;->flushMessageQueue()V

    return v1

    .line 42
    :cond_1
    invoke-virtual {p0, p2}, Lcom/github/lzyzsd/jsbridge/BridgeWebViewClient;->onCustomShouldOverrideUrlLoading(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_1

    :cond_2
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z

    move-result v1

    :goto_1
    return v1
.end method
