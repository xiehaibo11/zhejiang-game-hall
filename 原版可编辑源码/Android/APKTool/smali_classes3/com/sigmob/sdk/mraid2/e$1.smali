.class Lcom/sigmob/sdk/mraid2/e$1;
.super Lcom/sigmob/sdk/mraid2/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid2/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic c:Lcom/sigmob/sdk/mraid2/e;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/e;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid2/f;-><init>()V

    return-void
.end method


# virtual methods
.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/mraid2/f;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    invoke-static {}, Lcom/sigmob/sdk/mraid2/e;->g()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->b(Lcom/sigmob/sdk/mraid2/e;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "-----------onPageFinished---------"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->c(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/b;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->b(Lcom/sigmob/sdk/mraid2/e;)Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->c(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/b;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid2/e;->b(Lcom/sigmob/sdk/mraid2/e;)Lorg/json/JSONObject;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/mraid2/b;->a(Lorg/json/JSONObject;)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->c(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/b;->c()V

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->d(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->d(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->e(Lcom/sigmob/sdk/mraid2/e;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->d(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid2/e;->e(Lcom/sigmob/sdk/mraid2/e;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/mraid2/b;->c(Ljava/lang/String;)V

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->f(Lcom/sigmob/sdk/mraid2/e;)Z

    move-result p1

    if-eqz p1, :cond_3

    return-void

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    const/4 p2, 0x1

    invoke-static {p1, p2}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;Z)Z

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->g(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$a;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->g(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$a;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid2/e;->h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/mraid2/e$a;->a(Lcom/sigmob/sdk/mraid2/e;)V

    :cond_4
    return-void
.end method

.method public onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/sigmob/sdk/mraid2/f;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    return-void
.end method

.method public onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 3

    invoke-static {}, Lcom/sigmob/sdk/mraid2/e;->g()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "-----------onReceivedError---------"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-super {p0, p1, p2, p3, p4}, Lcom/sigmob/sdk/mraid2/f;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->d(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->d(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->e(Lcom/sigmob/sdk/mraid2/e;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->d(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object p1

    iget-object p4, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p4}, Lcom/sigmob/sdk/mraid2/e;->e(Lcom/sigmob/sdk/mraid2/e;)Ljava/lang/String;

    move-result-object p4

    invoke-virtual {p1, p4, p2, p3}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onRenderProcessGone(Landroid/webkit/WebView;Landroid/webkit/RenderProcessGoneDetail;)Z
    .locals 2

    invoke-static {}, Lcom/sigmob/sdk/mraid2/e;->g()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "-----------onRenderProcessGone---------"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p2, :cond_0

    invoke-virtual {p2}, Landroid/webkit/RenderProcessGoneDetail;->didCrash()Z

    move-result p1

    if-eqz p1, :cond_0

    sget-object p1, Lcom/sigmob/windad/WindAdError;->RENDER_PROCESS_GONE_WITH_CRASH:Lcom/sigmob/windad/WindAdError;

    goto :goto_0

    :cond_0
    sget-object p1, Lcom/sigmob/windad/WindAdError;->RENDER_PROCESS_GONE_UNSPECIFIED:Lcom/sigmob/windad/WindAdError;

    :goto_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "handleRenderProcessGone "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid2/e;->g(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$a;

    move-result-object p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid2/e;->g(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$a;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/sigmob/sdk/mraid2/e$a;->a(Lcom/sigmob/windad/WindAdError;)V

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->destroy()V

    const/4 p1, 0x1

    return p1
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 8

    const/4 v0, 0x0

    if-nez p2, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x1

    :try_start_0
    const-string v2, "http"

    invoke-virtual {p2, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_a

    const-string v2, "https"

    invoke-virtual {p2, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    goto/16 :goto_6

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "*"

    const/4 v3, 0x0

    if-eqz p1, :cond_5

    :try_start_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object p1

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

    :cond_2
    if-eqz v3, :cond_b

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_b

    :goto_0
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result p1

    if-ge v0, p1, :cond_b

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-virtual {p2, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_4

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    goto :goto_1

    :cond_3
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_4
    :goto_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/sigmob/sdk/base/common/s;->a(Landroid/content/Context;Landroid/net/Uri;)V

    return v1

    :cond_5
    move p1, v0

    :goto_2
    iget-object v4, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v4}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-ge p1, v4, :cond_b

    iget-object v4, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v4}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object v5

    if-eqz v5, :cond_6

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdSetting()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object v4

    iget-object v4, v4, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

    goto :goto_3

    :cond_6
    move-object v4, v3

    :goto_3
    if-eqz v4, :cond_9

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v5

    if-lez v5, :cond_9

    move v5, v0

    :goto_4
    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v6

    if-ge v5, v6, :cond_9

    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    invoke-virtual {p2, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-nez v7, :cond_8

    invoke-virtual {v6, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_7

    goto :goto_5

    :cond_7
    add-int/lit8 v5, v5, 0x1

    goto :goto_4

    :cond_8
    :goto_5
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$1;->c:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/sigmob/sdk/base/common/s;->a(Landroid/content/Context;Landroid/net/Uri;)V

    return v1

    :cond_9
    add-int/lit8 p1, p1, 0x1

    goto :goto_2

    :cond_a
    :goto_6
    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_7

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_b
    :goto_7
    return v1
.end method
