.class public final Lcom/tkay/expressad/mbbanner/view/a;
.super Lcom/tkay/expressad/atsignalcommon/base/b;


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field c:Lcom/tkay/expressad/mbbanner/a/c/a;

.field private final d:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/util/List;Lcom/tkay/expressad/mbbanner/a/c/a;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Lcom/tkay/expressad/mbbanner/a/c/a;",
            ")V"
        }
    .end annotation

    .line 39
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/base/b;-><init>()V

    const-string v0, "BannerWebViewClient"

    .line 33
    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/view/a;->d:Ljava/lang/String;

    .line 40
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/view/a;->a:Ljava/lang/String;

    .line 41
    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/view/a;->b:Ljava/util/List;

    .line 42
    iput-object p3, p0, Lcom/tkay/expressad/mbbanner/view/a;->c:Lcom/tkay/expressad/mbbanner/a/c/a;

    return-void
.end method


# virtual methods
.method public final onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 47
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/atsignalcommon/base/b;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 50
    :try_start_0
    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "javascript:"

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 51
    invoke-static {}, Lcom/tkay/expressad/d/b/a;->a()Lcom/tkay/expressad/d/b/a;

    invoke-static {}, Lcom/tkay/expressad/d/b/a;->b()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 53
    sget p3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x13

    if-gt p3, v0, :cond_0

    .line 54
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return-void

    .line 56
    :cond_0
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-instance p3, Lcom/tkay/expressad/mbbanner/view/a$1;

    invoke-direct {p3, p0}, Lcom/tkay/expressad/mbbanner/view/a$1;-><init>(Lcom/tkay/expressad/mbbanner/view/a;)V

    invoke-virtual {p1, p2, p3}, Landroid/webkit/WebView;->evaluateJavascript(Ljava/lang/String;Landroid/webkit/ValueCallback;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final shouldOverrideUrlLoading(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Z
    .locals 0

    .line 69
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/base/b;->shouldOverrideUrlLoading(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Z

    move-result p1

    return p1
.end method

.method public final shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 5

    const/4 v0, 0x0

    .line 76
    :try_start_0
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;

    .line 77
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p1, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->lastTouchTime:J

    sub-long/2addr v1, v3

    sget v3, Lcom/tkay/expressad/a/b/a;->c:I

    int-to-long v3, v3

    cmp-long v1, v1, v3

    if-lez v1, :cond_0

    .line 78
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/view/a;->b:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/base/BaseWebView;->getUrl()Ljava/lang/String;

    sget p1, Lcom/tkay/expressad/a/b/a;->b:I

    invoke-static {v1}, Lcom/tkay/expressad/a/b/a;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    if-eqz p1, :cond_0

    return v0

    :cond_0
    const/4 p1, 0x0

    .line 84
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/view/a;->b:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x1

    if-le v1, v2, :cond_1

    .line 85
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    new-instance v3, Landroid/content/Intent;

    const-string v4, "android.intent.action.VIEW"

    .line 86
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    invoke-direct {v3, v4, p2}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {v1, v3}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    move-object p2, p1

    .line 91
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/view/a;->c:Lcom/tkay/expressad/mbbanner/a/c/a;

    if-eqz p1, :cond_2

    .line 92
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/view/a;->c:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-interface {p1, v0, p2}, Lcom/tkay/expressad/mbbanner/a/c/a;->a(ZLjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return v2

    :catchall_0
    return v0
.end method
