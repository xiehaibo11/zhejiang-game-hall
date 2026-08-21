.class final Lcom/tkay/expressad/a/g$3;
.super Landroid/webkit/WebChromeClient;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/a/g;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/a/g;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/a/g;)V
    .locals 0

    .line 303
    iput-object p1, p0, Lcom/tkay/expressad/a/g$3;->a:Lcom/tkay/expressad/a/g;

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
    .locals 1

    const/16 v0, 0x64

    if-ne p2, v0, :cond_1

    .line 308
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/a/g;->a()Ljava/lang/String;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "LoadPage-State Complete:"

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "javascript:window.navigator.vibrate([]);"

    .line 310
    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    .line 312
    iget-object p2, p0, Lcom/tkay/expressad/a/g$3;->a:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->b(Lcom/tkay/expressad/a/g;)Z

    move-result p2

    if-nez p2, :cond_0

    iget-object p2, p0, Lcom/tkay/expressad/a/g$3;->a:Lcom/tkay/expressad/a/g;

    iget-boolean p2, p2, Lcom/tkay/expressad/a/g;->c:Z

    if-nez p2, :cond_0

    .line 313
    iget-object p2, p0, Lcom/tkay/expressad/a/g$3;->a:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->m(Lcom/tkay/expressad/a/g;)V

    .line 316
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/a/g$3;->a:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->d(Lcom/tkay/expressad/a/g;)Lcom/tkay/expressad/a/g$a;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 317
    iget-object p2, p0, Lcom/tkay/expressad/a/g$3;->a:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->d(Lcom/tkay/expressad/a/g;)Lcom/tkay/expressad/a/g$a;

    move-result-object p2

    invoke-virtual {p1}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    invoke-interface {p2}, Lcom/tkay/expressad/a/g$a;->a()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 321
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method
