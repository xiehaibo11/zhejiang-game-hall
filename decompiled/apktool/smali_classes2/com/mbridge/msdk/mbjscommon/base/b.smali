.class public Lcom/mbridge/msdk/mbjscommon/base/b;
.super Landroid/webkit/WebViewClient;
.source "BaseWebViewClient.java"


# instance fields
.field private a:Lcom/mbridge/msdk/mbjscommon/base/a;

.field private b:Lcom/mbridge/msdk/mbjscommon/windvane/d;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/mbjscommon/base/a;)V
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/base/b;->a:Lcom/mbridge/msdk/mbjscommon/base/a;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V
    .locals 0

    .line 62
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/base/b;->b:Lcom/mbridge/msdk/mbjscommon/windvane/d;

    return-void
.end method

.method public final b()Lcom/mbridge/msdk/mbjscommon/base/a;
    .locals 1

    .line 19
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/b;->a:Lcom/mbridge/msdk/mbjscommon/base/a;

    return-object v0
.end method

.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 1

    .line 55
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 56
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/b;->b:Lcom/mbridge/msdk/mbjscommon/windvane/d;

    if-eqz v0, :cond_0

    .line 57
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/d;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 37
    invoke-super {p0, p1, p2, p3, p4}, Landroid/webkit/WebViewClient;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 38
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/b;->b:Lcom/mbridge/msdk/mbjscommon/windvane/d;

    if-eqz v0, :cond_0

    .line 39
    invoke-interface {v0, p1, p2, p3, p4}, Lcom/mbridge/msdk/mbjscommon/windvane/d;->a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 1

    .line 46
    invoke-super {p0, p1, p2, p3}, Landroid/webkit/WebViewClient;->onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V

    .line 47
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/b;->b:Lcom/mbridge/msdk/mbjscommon/windvane/d;

    if-eqz v0, :cond_0

    .line 48
    invoke-interface {v0, p1, p2, p3}, Lcom/mbridge/msdk/mbjscommon/windvane/d;->a(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V

    :cond_0
    return-void
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 1

    .line 24
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/b;->a:Lcom/mbridge/msdk/mbjscommon/base/a;

    if-eqz v0, :cond_0

    .line 25
    invoke-interface {v0, p2}, Lcom/mbridge/msdk/mbjscommon/base/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x1

    return p1

    .line 29
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/base/b;->b:Lcom/mbridge/msdk/mbjscommon/windvane/d;

    if-eqz v0, :cond_1

    .line 30
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/d;->b(Landroid/webkit/WebView;Ljava/lang/String;)Z

    .line 32
    :cond_1
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z

    move-result p1

    return p1
.end method
