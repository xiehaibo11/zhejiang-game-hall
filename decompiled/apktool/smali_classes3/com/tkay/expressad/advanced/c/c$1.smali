.class final Lcom/tkay/expressad/advanced/c/c$1;
.super Lcom/tkay/expressad/atsignalcommon/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/c;->a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/advanced/c/c$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

.field final synthetic c:Lcom/tkay/expressad/advanced/c/c$a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Lcom/tkay/expressad/advanced/c/c$a;)V
    .locals 0

    .line 269
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/c$1;->a:Lcom/tkay/expressad/foundation/d/c;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/c$1;->b:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    iput-object p3, p0, Lcom/tkay/expressad/advanced/c/c$1;->c:Lcom/tkay/expressad/advanced/c/c$a;

    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/a/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 1

    .line 312
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 313
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/c$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result p2

    if-nez p2, :cond_0

    .line 314
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/c$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/expressad/advanced/a/c;->a(Ljava/lang/String;)V

    .line 315
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/c$1;->b:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    const/4 v0, 0x1

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setH5Ready(Z)V

    .line 319
    :cond_0
    invoke-static {p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJsUtils;->fireOnJSBridgeConnected(Landroid/webkit/WebView;)V

    return-void
.end method

.method public final onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 290
    invoke-super {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/atsignalcommon/a/b;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 291
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/c$1;->b:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setH5Ready(Z)V

    .line 293
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/c$1;->c:Lcom/tkay/expressad/advanced/c/c$a;

    if-eqz p1, :cond_0

    .line 294
    invoke-interface {p1}, Lcom/tkay/expressad/advanced/c/c$a;->b()V

    :cond_0
    return-void
.end method

.method public final onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 0

    .line 301
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/atsignalcommon/a/b;->onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V

    .line 302
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/c$1;->b:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setH5Ready(Z)V

    .line 304
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/c$1;->c:Lcom/tkay/expressad/advanced/c/c$a;

    if-eqz p1, :cond_0

    .line 305
    invoke-interface {p1}, Lcom/tkay/expressad/advanced/c/c$a;->b()V

    :cond_0
    return-void
.end method

.method public final readyState(Landroid/webkit/WebView;I)V
    .locals 0

    .line 272
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->readyState(Landroid/webkit/WebView;I)V

    const/4 p1, 0x1

    if-ne p2, p1, :cond_0

    .line 274
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/c$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/expressad/advanced/a/c;->a(Ljava/lang/String;)V

    .line 275
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/c$1;->b:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setH5Ready(Z)V

    goto :goto_0

    .line 279
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/c$1;->b:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setH5Ready(Z)V

    .line 283
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/c$1;->c:Lcom/tkay/expressad/advanced/c/c$a;

    if-eqz p1, :cond_1

    .line 284
    invoke-interface {p1}, Lcom/tkay/expressad/advanced/c/c$a;->a()V

    :cond_1
    return-void
.end method
