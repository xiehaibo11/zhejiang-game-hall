.class public Lcom/tkay/expressad/atsignalcommon/base/b;
.super Landroid/webkit/WebViewClient;


# instance fields
.field private a:Lcom/tkay/expressad/atsignalcommon/base/a;

.field private b:Lcom/tkay/expressad/atsignalcommon/windvane/e;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/atsignalcommon/base/a;)V
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/base/b;->a:Lcom/tkay/expressad/atsignalcommon/base/a;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/base/b;->b:Lcom/tkay/expressad/atsignalcommon/windvane/e;

    return-void
.end method

.method public final b()Lcom/tkay/expressad/atsignalcommon/base/a;
    .locals 1

    .line 19
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/b;->a:Lcom/tkay/expressad/atsignalcommon/base/a;

    return-object v0
.end method

.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 1

    .line 53
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 54
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/b;->b:Lcom/tkay/expressad/atsignalcommon/windvane/e;

    if-eqz v0, :cond_0

    .line 55
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 37
    invoke-super {p0, p1, p2, p3, p4}, Landroid/webkit/WebViewClient;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 38
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/b;->b:Lcom/tkay/expressad/atsignalcommon/windvane/e;

    if-eqz v0, :cond_0

    .line 39
    invoke-interface {v0, p1, p2, p3, p4}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 1

    .line 45
    invoke-super {p0, p1, p2, p3}, Landroid/webkit/WebViewClient;->onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V

    .line 46
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/b;->b:Lcom/tkay/expressad/atsignalcommon/windvane/e;

    if-eqz v0, :cond_0

    .line 47
    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V

    :cond_0
    return-void
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 1

    .line 24
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/b;->a:Lcom/tkay/expressad/atsignalcommon/base/a;

    if-eqz v0, :cond_0

    .line 25
    invoke-interface {v0, p2}, Lcom/tkay/expressad/atsignalcommon/base/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x1

    return p1

    .line 29
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/base/b;->b:Lcom/tkay/expressad/atsignalcommon/windvane/e;

    if-eqz v0, :cond_1

    .line 30
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z

    .line 32
    :cond_1
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z

    move-result p1

    return p1
.end method
