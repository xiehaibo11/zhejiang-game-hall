.class Lcom/sigmob/sdk/base/views/q$2;
.super Landroid/webkit/WebViewClient;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/views/q;->b()Lcom/sigmob/sdk/base/views/i;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/views/q;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/q;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/q$2;->a:Lcom/sigmob/sdk/base/views/q;

    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    return-void
.end method


# virtual methods
.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    return-void
.end method

.method public onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Landroid/webkit/WebViewClient;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    return-void
.end method

.method public onReceivedError(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceError;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onReceivedError:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-super {p0, p1, p2, p3}, Landroid/webkit/WebViewClient;->onReceivedError(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceError;)V

    return-void
.end method

.method public onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onReceivedSslError:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Landroid/net/http/SslError;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-super {p0, p1, p2, p3}, Landroid/webkit/WebViewClient;->onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V

    return-void
.end method

.method public shouldInterceptRequest(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;
    .locals 1

    :try_start_0
    invoke-interface {p2}, Landroid/webkit/WebResourceRequest;->getUrl()Landroid/net/Uri;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/base/e;->a(Landroid/net/Uri;)Landroid/webkit/WebResourceResponse;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldInterceptRequest(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1
.end method

.method public shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;
    .locals 1

    :try_start_0
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/base/e;->a(Landroid/net/Uri;)Landroid/webkit/WebResourceResponse;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 9

    const/4 v0, 0x1

    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "shouldOverrideUrlLoading:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    const-string v2, "sigmobAd"

    invoke-virtual {v1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-virtual {v1}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_5

    const-string v3, "closeFourElements"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/q$2;->a:Lcom/sigmob/sdk/base/views/q;

    invoke-static {v1}, Lcom/sigmob/sdk/base/views/q;->a(Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/q$2;->a:Lcom/sigmob/sdk/base/views/q;

    invoke-static {v1}, Lcom/sigmob/sdk/base/views/q;->a(Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object v1

    invoke-interface {v1}, Lcom/sigmob/sdk/base/views/q$b;->a()V

    goto/16 :goto_1

    :cond_0
    const-string v3, "buttonClick"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-static {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getQueryParamMap(Landroid/net/Uri;)Ljava/util/Map;

    move-result-object v1

    const-string v2, "url"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v3, "x"

    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v5, "0"

    if-eqz v4, :cond_1

    move-object v3, v5

    :cond_1
    :try_start_1
    const-string v4, "y"

    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_2

    goto :goto_0

    :cond_2
    move-object v5, v1

    :goto_0
    const-string v1, "%s,%s,%s,%s"

    const/4 v4, 0x4

    new-array v4, v4, [Ljava/lang/Object;

    const/4 v6, 0x0

    aput-object v3, v4, v6

    aput-object v5, v4, v0

    const/4 v6, 0x2

    aput-object v3, v4, v6

    const/4 v6, 0x3

    aput-object v5, v4, v6

    invoke-static {v1, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    iget-object v4, p0, Lcom/sigmob/sdk/base/views/q$2;->a:Lcom/sigmob/sdk/base/views/q;

    invoke-static {v4}, Lcom/sigmob/sdk/base/views/q;->b(Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v4

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v4

    instance-of v6, v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v6, :cond_3

    move-object v6, v4

    check-cast v6, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v7, "_DOWNX_"

    invoke-virtual {v6, v7, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v6, v4

    check-cast v6, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v7, "_DOWNY_"

    invoke-virtual {v6, v7, v5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v6, v4

    check-cast v6, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v7, "_UPX_"

    invoke-virtual {v6, v7, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v6, "_UPY_"

    invoke-virtual {v4, v6, v5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v4, p0, Lcom/sigmob/sdk/base/views/q$2;->a:Lcom/sigmob/sdk/base/views/q;

    invoke-static {v4}, Lcom/sigmob/sdk/base/views/q;->b(Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v4

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v4

    new-instance v6, Lcom/czhj/sdk/common/utils/TouchLocation;

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v7

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v8

    invoke-direct {v6, v7, v8}, Lcom/czhj/sdk/common/utils/TouchLocation;-><init>(II)V

    iput-object v6, v4, Lcom/sigmob/sdk/base/models/ClickCommon;->down:Lcom/czhj/sdk/common/utils/TouchLocation;

    iget-object v4, p0, Lcom/sigmob/sdk/base/views/q$2;->a:Lcom/sigmob/sdk/base/views/q;

    invoke-static {v4}, Lcom/sigmob/sdk/base/views/q;->b(Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v4

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v4

    new-instance v6, Lcom/czhj/sdk/common/utils/TouchLocation;

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    invoke-direct {v6, v3, v5}, Lcom/czhj/sdk/common/utils/TouchLocation;-><init>(II)V

    iput-object v6, v4, Lcom/sigmob/sdk/base/models/ClickCommon;->up:Lcom/czhj/sdk/common/utils/TouchLocation;

    iget-object v3, p0, Lcom/sigmob/sdk/base/views/q$2;->a:Lcom/sigmob/sdk/base/views/q;

    invoke-static {v3}, Lcom/sigmob/sdk/base/views/q;->a(Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object v3

    if-eqz v3, :cond_4

    iget-object v3, p0, Lcom/sigmob/sdk/base/views/q$2;->a:Lcom/sigmob/sdk/base/views/q;

    invoke-static {v3}, Lcom/sigmob/sdk/base/views/q;->a(Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object v3

    invoke-interface {v3, v2, v1}, Lcom/sigmob/sdk/base/views/q$b;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_4
    :goto_1
    return v0

    :catchall_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "FourElementsDialog:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_5
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_6

    const-string v1, "http"

    invoke-virtual {p2, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_6

    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    :cond_6
    return v0
.end method
