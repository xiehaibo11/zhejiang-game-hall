.class Lcom/sigmob/sdk/mraid/b$1;
.super Lcom/sigmob/sdk/mraid/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic c:Lcom/sigmob/sdk/mraid/b;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b$1;->c:Lcom/sigmob/sdk/mraid/b;

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/p;-><init>()V

    return-void
.end method


# virtual methods
.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b$1;->c:Lcom/sigmob/sdk/mraid/b;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/b;->b(Lcom/sigmob/sdk/mraid/b;)V

    return-void
.end method

.method public onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Error: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    invoke-super {p0, p1, p2, p3, p4}, Lcom/sigmob/sdk/mraid/p;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onRenderProcessGone(Landroid/webkit/WebView;Landroid/webkit/RenderProcessGoneDetail;)Z
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b$1;->c:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/mraid/b;->a(Landroid/webkit/RenderProcessGoneDetail;)V

    const/4 p1, 0x1

    return p1
.end method

.method public shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b$1;->c:Lcom/sigmob/sdk/mraid/b;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b$1;->c:Lcom/sigmob/sdk/mraid/b;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b$1;->c:Lcom/sigmob/sdk/mraid/b;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isVideoExist()Z

    move-result v0

    if-eqz v0, :cond_0

    :try_start_0
    new-instance v0, Ljava/io/FileInputStream;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/b$1;->c:Lcom/sigmob/sdk/mraid/b;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V

    new-instance v1, Landroid/webkit/WebResourceResponse;

    const-string v2, "video/mp4"

    const-string v3, "UTF-8"

    invoke-direct {v1, v2, v3, v0}, Landroid/webkit/WebResourceResponse;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/io/FileNotFoundException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/mraid/p;->shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b$1;->c:Lcom/sigmob/sdk/mraid/b;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/mraid/b;->a(Landroid/webkit/WebView;Ljava/lang/String;)Z

    move-result p1

    return p1
.end method
