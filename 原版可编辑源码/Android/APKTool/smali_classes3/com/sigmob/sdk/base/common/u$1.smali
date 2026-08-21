.class Lcom/sigmob/sdk/base/common/u$1;
.super Lcom/sigmob/sdk/base/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/u;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic c:Lcom/sigmob/sdk/base/common/u;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/u;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/u$1;->c:Lcom/sigmob/sdk/base/common/u;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/e;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceivedError(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceError;)V
    .locals 1

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    invoke-super {p0, p1, p2, p3}, Lcom/sigmob/sdk/base/e;->onReceivedError(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceError;)V

    return-void
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 8

    const/4 v0, 0x1

    :try_start_0
    invoke-virtual {p1}, Landroid/webkit/WebView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v3

    const-string v4, "sigmobAd"

    invoke-virtual {v4, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    const/4 v5, 0x0

    if-eqz v4, :cond_2

    invoke-virtual {v2}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_2

    const-string v6, "track"

    invoke-virtual {v6, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_0

    const-string v6, "active"

    invoke-virtual {v6, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_2

    :cond_0
    const-string p1, "data"

    invoke-virtual {v2, p1}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "event"

    invoke-virtual {v2, p2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    new-instance v1, Ljava/lang/String;

    invoke-static {p1, v5}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object p1

    const-string v2, "utf-8"

    invoke-direct {v1, p1, v2}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$1;->c:Lcom/sigmob/sdk/base/common/u;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/u;->a(Lcom/sigmob/sdk/base/common/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    new-instance v2, Lcom/sigmob/sdk/base/common/u$1$1;

    invoke-direct {v2, p0, v1}, Lcom/sigmob/sdk/base/common/u$1$1;-><init>(Lcom/sigmob/sdk/base/common/u$1;Ljava/lang/String;)V

    invoke-static {v4, p2, p1, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_1
    return v0

    :cond_2
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    const-string v2, "http"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_7

    const-string v2, "https"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_7

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$1;->c:Lcom/sigmob/sdk/base/common/u;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/u;->a(Lcom/sigmob/sdk/base/common/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$1;->c:Lcom/sigmob/sdk/base/common/u;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/u;->a(Lcom/sigmob/sdk/base/common/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

    goto :goto_0

    :cond_3
    const/4 p1, 0x0

    :goto_0
    if-eqz p1, :cond_6

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_6

    :goto_1
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    if-ge v5, v2, :cond_6

    invoke-interface {p1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {p2, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_5

    const-string v3, "*"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    goto :goto_2

    :cond_4
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    :cond_5
    :goto_2
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/sigmob/sdk/base/common/s;->a(Landroid/content/Context;Landroid/net/Uri;)V

    sget-object v2, Lcom/sigmob/sdk/base/a;->g:Lcom/sigmob/sdk/base/a;

    const-string v3, "click"

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$1;->c:Lcom/sigmob/sdk/base/common/u;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/u;->a(Lcom/sigmob/sdk/base/common/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v4

    const-string v5, "1"

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u$1;->c:Lcom/sigmob/sdk/base/common/u;

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/u;->b(Lcom/sigmob/sdk/base/common/u;)Ljava/lang/String;

    move-result-object v7

    move-object v6, p2

    invoke-static/range {v2 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    return v0

    :cond_7
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "load Url: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Lcom/czhj/sdk/common/exceptions/IntentNotResolvableException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_4

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    goto :goto_3

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/exceptions/IntentNotResolvableException;->getMessage()Ljava/lang/String;

    move-result-object p1

    :goto_3
    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_4
    return v0
.end method
