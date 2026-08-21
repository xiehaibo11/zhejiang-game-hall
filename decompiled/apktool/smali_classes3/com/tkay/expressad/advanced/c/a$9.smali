.class final Lcom/tkay/expressad/advanced/c/a$9;
.super Lcom/tkay/expressad/atsignalcommon/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/a;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:I

.field final synthetic c:Lcom/tkay/expressad/advanced/c/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 0

    .line 813
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a$9;->c:Lcom/tkay/expressad/advanced/c/a;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/a$9;->a:Lcom/tkay/expressad/foundation/d/c;

    iput p3, p0, Lcom/tkay/expressad/advanced/c/a$9;->b:I

    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/a/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 2

    .line 847
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 849
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/a$9;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result p2

    if-nez p2, :cond_0

    .line 850
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/a$9;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p2}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object p2

    const/4 v0, 0x1

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setH5Ready(Z)V

    .line 852
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/a$9;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/expressad/advanced/a/c;->a(Ljava/lang/String;)V

    .line 853
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/a$9;->c:Lcom/tkay/expressad/advanced/c/a;

    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$9;->a:Lcom/tkay/expressad/foundation/d/c;

    iget v1, p0, Lcom/tkay/expressad/advanced/c/a$9;->b:I

    invoke-static {p2, v0, v1}, Lcom/tkay/expressad/advanced/c/a;->b(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;I)V

    .line 856
    :cond_0
    invoke-static {p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJsUtils;->fireOnJSBridgeConnected(Landroid/webkit/WebView;)V

    return-void
.end method

.method public final onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 831
    invoke-super {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/atsignalcommon/a/b;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 832
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "onReceivedError: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "  "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 833
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$9;->c:Lcom/tkay/expressad/advanced/c/a;

    iget p2, p0, Lcom/tkay/expressad/advanced/c/a$9;->b:I

    invoke-static {p1, p3, p2}, Lcom/tkay/expressad/advanced/c/a;->b(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;I)V

    return-void
.end method

.method public final onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 1

    .line 839
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/atsignalcommon/a/b;->onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V

    .line 840
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "onReceivedSslError: "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3}, Landroid/net/http/SslError;->getPrimaryError()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 841
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$9;->c:Lcom/tkay/expressad/advanced/c/a;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "onReceivedSslError:"

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3}, Landroid/net/http/SslError;->getUrl()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iget p3, p0, Lcom/tkay/expressad/advanced/c/a$9;->b:I

    invoke-static {p1, p2, p3}, Lcom/tkay/expressad/advanced/c/a;->b(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;I)V

    return-void
.end method

.method public final readyState(Landroid/webkit/WebView;I)V
    .locals 1

    .line 816
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->readyState(Landroid/webkit/WebView;I)V

    const/4 p1, 0x1

    if-ne p2, p1, :cond_0

    .line 819
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/a$9;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {p2}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setH5Ready(Z)V

    .line 820
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$9;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/advanced/a/c;->a(Ljava/lang/String;)V

    .line 821
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$9;->c:Lcom/tkay/expressad/advanced/c/a;

    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/a$9;->a:Lcom/tkay/expressad/foundation/d/c;

    iget v0, p0, Lcom/tkay/expressad/advanced/c/a$9;->b:I

    invoke-static {p1, p2, v0}, Lcom/tkay/expressad/advanced/c/a;->b(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;I)V

    return-void

    .line 824
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a$9;->c:Lcom/tkay/expressad/advanced/c/a;

    iget p2, p0, Lcom/tkay/expressad/advanced/c/a$9;->b:I

    const-string v0, "readyState 2"

    invoke-static {p1, v0, p2}, Lcom/tkay/expressad/advanced/c/a;->b(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;I)V

    return-void
.end method
