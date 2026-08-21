.class public final Lcom/mbridge/msdk/advanced/view/a;
.super Lcom/mbridge/msdk/mbjscommon/base/b;
.source "NativeAdvancedWebViewClient.java"


# instance fields
.field a:Ljava/lang/String;

.field b:Lcom/mbridge/msdk/advanced/c/a;

.field private final c:Ljava/lang/String;

.field private d:Lcom/mbridge/msdk/advanced/c/c;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/mbridge/msdk/advanced/c/a;Lcom/mbridge/msdk/advanced/c/c;)V
    .locals 1

    .line 46
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/base/b;-><init>()V

    const-string v0, "NativeAdvancedWebViewClient"

    .line 40
    iput-object v0, p0, Lcom/mbridge/msdk/advanced/view/a;->c:Ljava/lang/String;

    .line 47
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/view/a;->a:Ljava/lang/String;

    .line 48
    iput-object p2, p0, Lcom/mbridge/msdk/advanced/view/a;->b:Lcom/mbridge/msdk/advanced/c/a;

    .line 49
    iput-object p3, p0, Lcom/mbridge/msdk/advanced/view/a;->d:Lcom/mbridge/msdk/advanced/c/c;

    return-void
.end method

.method private a(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;
    .locals 2

    .line 124
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 1146
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 1147
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 1148
    invoke-virtual {p1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object p1

    const-string v1, "mb-h5"

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    move v0, p1

    :cond_0
    if-eqz v0, :cond_1

    .line 124
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/view/a;->d:Lcom/mbridge/msdk/advanced/c/c;

    if-eqz p1, :cond_1

    .line 125
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    const-string p2, "uri"

    invoke-virtual {p1, p2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 126
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/view/a;->d:Lcom/mbridge/msdk/advanced/c/c;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/advanced/c/c;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 128
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    const-string p2, "webviewclient"

    .line 129
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "relace url"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "127.0.0.1"

    .line 130
    invoke-virtual {p1, p2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    const-string p2, "http"

    invoke-virtual {p1, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 131
    new-instance p2, Ljava/io/FileInputStream;

    invoke-direct {p2, p1}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V

    .line 132
    new-instance p1, Landroid/webkit/WebResourceResponse;

    const-string v0, "video/mp4"

    const-string v1, "utf-8"

    invoke-direct {p1, v0, v1, p2}, Landroid/webkit/WebResourceResponse;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 137
    invoke-virtual {p1}, Ljava/io/FileNotFoundException;->printStackTrace()V

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 154
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/a;->d:Lcom/mbridge/msdk/advanced/c/c;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 155
    iput-object v0, p0, Lcom/mbridge/msdk/advanced/view/a;->d:Lcom/mbridge/msdk/advanced/c/c;

    :cond_0
    return-void
.end method

.method public final onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 54
    invoke-super {p0, p1, p2, p3}, Lcom/mbridge/msdk/mbjscommon/base/b;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 57
    :try_start_0
    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "javascript:"

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 58
    invoke-static {}, Lcom/mbridge/msdk/c/b/b;->a()Lcom/mbridge/msdk/c/b/b;

    move-result-object p3

    invoke-virtual {p3}, Lcom/mbridge/msdk/c/b/b;->b()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 60
    sget p3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x13

    if-gt p3, v0, :cond_0

    .line 61
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_0

    .line 63
    :cond_0
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-instance p3, Lcom/mbridge/msdk/advanced/view/a$1;

    invoke-direct {p3, p0}, Lcom/mbridge/msdk/advanced/view/a$1;-><init>(Lcom/mbridge/msdk/advanced/view/a;)V

    invoke-virtual {p1, p2, p3}, Landroid/webkit/WebView;->evaluateJavascript(Ljava/lang/String;Landroid/webkit/ValueCallback;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "NativeAdvancedWebViewClient"

    const-string p3, "onPageStarted"

    .line 70
    invoke-static {p2, p3, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public final shouldInterceptRequest(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;
    .locals 2

    .line 115
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    .line 116
    invoke-interface {p2}, Landroid/webkit/WebResourceRequest;->getUrl()Landroid/net/Uri;

    move-result-object p2

    invoke-virtual {p2}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_0
    const-string p2, ""

    .line 119
    :goto_0
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/view/a;->a(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1
.end method

.method public final shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;
    .locals 2

    .line 105
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "============shouldInterceptRequest:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NativeAdvancedWebViewClient"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 107
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/view/a;->a(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1
.end method

.method public final shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 6

    const-string v0, "NativeAdvancedWebViewClient"

    const/4 v1, 0x0

    .line 78
    :try_start_0
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 79
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-wide v4, p1, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->lastTouchTime:J

    sub-long/2addr v2, v4

    sget v4, Lcom/mbridge/msdk/click/b/a;->c:I

    int-to-long v4, v4

    cmp-long v2, v2, v4

    if-lez v2, :cond_0

    .line 80
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/advanced/js/a;

    .line 81
    invoke-virtual {v2}, Lcom/mbridge/msdk/advanced/js/a;->a()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getUrl()Ljava/lang/String;

    move-result-object p1

    sget v3, Lcom/mbridge/msdk/click/b/a;->b:I

    invoke-static {v2, p1, v3}, Lcom/mbridge/msdk/click/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_0

    return v1

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 87
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const-string p1, "Use html to open url."

    .line 89
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 90
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/view/a;->b:Lcom/mbridge/msdk/advanced/c/a;

    if-eqz p1, :cond_1

    .line 91
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/view/a;->b:Lcom/mbridge/msdk/advanced/c/a;

    invoke-interface {p1, v1, p2}, Lcom/mbridge/msdk/advanced/c/a;->a(ZLjava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_1
    const/4 p1, 0x1

    return p1

    :goto_0
    const-string p2, "shouldOverrideUrlLoading"

    .line 96
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return v1
.end method
