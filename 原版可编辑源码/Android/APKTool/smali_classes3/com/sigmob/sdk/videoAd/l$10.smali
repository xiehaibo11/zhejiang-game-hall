.class Lcom/sigmob/sdk/videoAd/l$10;
.super Lcom/sigmob/sdk/base/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->a(Landroid/content/Context;Lcom/sigmob/sdk/videoAd/h;)Lcom/sigmob/sdk/base/views/l;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic c:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/e;-><init>()V

    return-void
.end method


# virtual methods
.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/base/e;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    const-string p1, "onPageFinished: "

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    const-string p2, "done"

    invoke-static {p1, p2}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;Ljava/lang/String;)Ljava/lang/String;

    return-void
.end method

.method public onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/sigmob/sdk/base/e;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    const-string p1, "onPageStarted: "

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-super {p0, p1, p2, p3, p4}, Lcom/sigmob/sdk/base/e;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    const-string p1, "http://"

    invoke-virtual {p4, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    const-string p2, "error"

    invoke-static {p1, p2}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;Ljava/lang/String;)Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public onReceivedError(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceError;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/sigmob/sdk/base/e;->onReceivedError(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceError;)V

    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p3, 0x15

    if-lt p1, p3, :cond_0

    invoke-interface {p2}, Landroid/webkit/WebResourceRequest;->getUrl()Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {p1}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_0

    const-string p2, "localhost"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    const-string p2, "error"

    invoke-static {p1, p2}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;Ljava/lang/String;)Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 7

    const-string v0, "sigmobAd"

    const/4 v1, 0x1

    :try_start_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "load url "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/webkit/WebView;->getContext()Landroid/content/Context;

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_3

    invoke-virtual {v2}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_3

    const-string v5, "track"

    invoke-virtual {v5, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_1

    const-string v5, "active"

    invoke-virtual {v5, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    goto :goto_0

    :cond_0
    const-string v5, "openFourElements"

    invoke-virtual {v5, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    const/4 p2, 0x2

    invoke-static {p1, p2}, Lcom/sigmob/sdk/videoAd/l;->d(Lcom/sigmob/sdk/videoAd/l;I)V

    return v1

    :cond_1
    :goto_0
    const-string p1, "data"

    invoke-virtual {v2, p1}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "event"

    invoke-virtual {v2, p2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    new-instance v0, Ljava/lang/String;

    invoke-static {p1, v4}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object p1

    const-string v2, "utf-8"

    invoke-direct {v0, p1, v2}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    new-instance v2, Lcom/sigmob/sdk/videoAd/l$10$1;

    invoke-direct {v2, p0, v0}, Lcom/sigmob/sdk/videoAd/l$10$1;-><init>(Lcom/sigmob/sdk/videoAd/l$10;Ljava/lang/String;)V

    invoke-static {v3, p2, p1, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_2
    return v1

    :cond_3
    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v3}, Lcom/sigmob/sdk/videoAd/l;->V(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v3

    if-eqz v3, :cond_4

    return v1

    :cond_4
    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v3}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v3

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->disable_auto_deeplink:Ljava/lang/Boolean;

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v5, "http"

    if-eqz v3, :cond_6

    :try_start_1
    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v3}, Lcom/sigmob/sdk/videoAd/l;->W(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v3

    if-nez v3, :cond_6

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    invoke-virtual {p2, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_5

    return v4

    :cond_5
    return v1

    :cond_6
    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v3}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v3

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->click_type:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    sget-object v6, Lcom/sigmob/sdk/base/common/k;->a:Lcom/sigmob/sdk/base/common/k;

    invoke-virtual {v6}, Lcom/sigmob/sdk/base/common/k;->a()I

    move-result v6

    if-eq v3, v6, :cond_8

    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v3}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v3

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_8

    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v3}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v3

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    sget-object v6, Lcom/sigmob/sdk/base/common/l;->f:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v6}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v6

    if-ne v3, v6, :cond_7

    goto :goto_1

    :cond_7
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->click_type:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    sget-object p2, Lcom/sigmob/sdk/base/common/k;->b:Lcom/sigmob/sdk/base/common/k;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/k;->a()I

    move-result p2

    if-ne p1, p2, :cond_10

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_10

    return v1

    :cond_8
    :goto_1
    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v3}, Lcom/sigmob/sdk/videoAd/l;->U(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/x;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/views/x;->getVisibility()I

    move-result v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const-string v6, "https"

    if-nez v3, :cond_d

    :try_start_2
    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_d

    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_d

    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_d

    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_9

    invoke-virtual {v2}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_9

    invoke-virtual {v2}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object p1

    const-string v0, "download"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_9

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_9

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    iget-object v0, v0, Lcom/sigmob/sdk/videoAd/l;->g:Ljava/lang/String;

    invoke-virtual {p1, p2, v0, v1}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Z)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto/16 :goto_5

    :cond_9
    :try_start_3
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object p1

    if-eqz p1, :cond_a

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

    goto :goto_2

    :cond_a
    const/4 p1, 0x0

    :goto_2
    if-eqz p1, :cond_10

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_10

    :goto_3
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-ge v4, v0, :cond_10

    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_c

    const-string v2, "*"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_b

    goto :goto_4

    :cond_b
    add-int/lit8 v4, v4, 0x1

    goto :goto_3

    :cond_c
    :goto_4
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setCustomDeeplink(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    iget-object v0, v0, Lcom/sigmob/sdk/videoAd/l;->g:Ljava/lang/String;

    invoke-virtual {p1, p2, v0, v1}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Z)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    return v1

    :catch_0
    move-exception p1

    :try_start_4
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_5

    :cond_d
    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_10

    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_e

    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_10

    :cond_e
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->X(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v0

    if-eqz v0, :cond_f

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->Y(Lcom/sigmob/sdk/videoAd/l;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$10;->c:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0, v4}, Lcom/sigmob/sdk/videoAd/l;->i(Lcom/sigmob/sdk/videoAd/l;Z)Z

    :cond_f
    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_5

    :catchall_0
    const-string p1, "webview"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_10
    :goto_5
    return v1
.end method
