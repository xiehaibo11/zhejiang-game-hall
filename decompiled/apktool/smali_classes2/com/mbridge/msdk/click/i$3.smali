.class final Lcom/mbridge/msdk/click/i$3;
.super Landroid/webkit/WebChromeClient;
.source "WebViewSpider.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/click/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/click/i;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/i;)V
    .locals 0

    .line 304
    iput-object p1, p0, Lcom/mbridge/msdk/click/i$3;->a:Lcom/mbridge/msdk/click/i;

    invoke-direct {p0}, Landroid/webkit/WebChromeClient;-><init>()V

    return-void
.end method


# virtual methods
.method public final onJsAlert(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z
    .locals 0

    const/4 p1, 0x1

    return p1
.end method

.method public final onJsConfirm(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z
    .locals 0

    const/4 p1, 0x1

    return p1
.end method

.method public final onJsPrompt(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z
    .locals 0

    const/4 p1, 0x1

    return p1
.end method

.method public final onProgressChanged(Landroid/webkit/WebView;I)V
    .locals 2

    const/16 v0, 0x64

    if-ne p2, v0, :cond_1

    .line 309
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/click/i;->a()Ljava/lang/String;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u52a0\u8f7d\u9875\u9762-\u8fdb\u5ea6\u5b8c\u6210\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "javascript:window.navigator.vibrate([]);"

    .line 311
    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    .line 313
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$3;->a:Lcom/mbridge/msdk/click/i;

    invoke-static {p2}, Lcom/mbridge/msdk/click/i;->b(Lcom/mbridge/msdk/click/i;)Z

    move-result p2

    if-nez p2, :cond_0

    iget-object p2, p0, Lcom/mbridge/msdk/click/i$3;->a:Lcom/mbridge/msdk/click/i;

    iget-boolean p2, p2, Lcom/mbridge/msdk/click/i;->c:Z

    if-nez p2, :cond_0

    .line 314
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$3;->a:Lcom/mbridge/msdk/click/i;

    invoke-static {p2}, Lcom/mbridge/msdk/click/i;->l(Lcom/mbridge/msdk/click/i;)V

    .line 317
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$3;->a:Lcom/mbridge/msdk/click/i;

    invoke-static {p2}, Lcom/mbridge/msdk/click/i;->d(Lcom/mbridge/msdk/click/i;)Lcom/mbridge/msdk/click/i$a;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 318
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$3;->a:Lcom/mbridge/msdk/click/i;

    invoke-static {p2}, Lcom/mbridge/msdk/click/i;->d(Lcom/mbridge/msdk/click/i;)Lcom/mbridge/msdk/click/i$a;

    move-result-object p2

    invoke-virtual {p1}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/click/i$a;->c(Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 322
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method
