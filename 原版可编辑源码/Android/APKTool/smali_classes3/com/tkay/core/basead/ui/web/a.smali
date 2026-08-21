.class final Lcom/tkay/core/basead/ui/web/a;
.super Landroid/webkit/WebViewClient;


# instance fields
.field private a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;


# direct methods
.method public constructor <init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V
    .locals 0

    .line 29
    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    .line 30
    iput-object p1, p0, Lcom/tkay/core/basead/ui/web/a;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    return-void
.end method


# virtual methods
.method public final onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 1

    .line 85
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 86
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/a;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    return-void
.end method

.method public final onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 0

    .line 74
    invoke-super {p0, p1, p2, p3}, Landroid/webkit/WebViewClient;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 76
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/a;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-virtual {p1}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a()Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    move-result-object p1

    if-eqz p1, :cond_0

    const/4 p2, 0x0

    .line 78
    invoke-virtual {p1, p2}, Lcom/tkay/core/basead/ui/web/WebProgressBarView;->setVisibility(I)V

    .line 79
    invoke-virtual {p1, p2}, Lcom/tkay/core/basead/ui/web/WebProgressBarView;->setProgress(I)V

    :cond_0
    return-void
.end method

.method public final onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onRenderProcessGone(Landroid/webkit/WebView;Landroid/webkit/RenderProcessGoneDetail;)Z
    .locals 0

    .line 93
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/a;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-virtual {p1}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->finish()V

    const/4 p1, 0x1

    return p1
.end method

.method public final shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 4

    .line 40
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_7

    const-string v0, "about:blank"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 44
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/a;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    if-eqz v0, :cond_2

    .line 1607
    iget-object v2, v0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->b:Lorg/json/JSONArray;

    if-nez v2, :cond_1

    .line 1608
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    iput-object v2, v0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->b:Lorg/json/JSONArray;

    .line 1610
    :cond_1
    iget-object v0, v0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->b:Lorg/json/JSONArray;

    invoke-virtual {v0, p2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 48
    :cond_2
    invoke-virtual {p1}, Landroid/webkit/WebView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/core/common/f/an;

    move-result-object v0

    .line 50
    iget-boolean v2, v0, Lcom/tkay/core/common/f/an;->m:Z

    const/4 v3, 0x1

    if-eqz v2, :cond_4

    .line 51
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/a;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    if-eqz p1, :cond_3

    .line 52
    invoke-virtual {p1, v0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Lcom/tkay/core/common/f/an;)V

    :cond_3
    return v3

    .line 56
    :cond_4
    iget-object v2, p0, Lcom/tkay/core/basead/ui/web/a;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    if-eqz v2, :cond_5

    .line 57
    invoke-virtual {v2, v0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Lcom/tkay/core/common/f/an;)V

    .line 61
    :cond_5
    invoke-static {p2}, Lcom/tkay/core/basead/a/a;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/an;

    move-result-object v0

    .line 62
    iget-object v2, p0, Lcom/tkay/core/basead/ui/web/a;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    if-eqz v2, :cond_6

    .line 63
    invoke-virtual {v2, v0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Lcom/tkay/core/common/f/an;)V

    .line 65
    :cond_6
    iget-object v2, v0, Lcom/tkay/core/common/f/an;->o:Ljava/lang/String;

    invoke-static {v2, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_7

    .line 66
    iget-object p2, v0, Lcom/tkay/core/common/f/an;->o:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return v3

    :cond_7
    :goto_0
    return v1
.end method
