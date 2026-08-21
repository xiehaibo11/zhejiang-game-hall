.class final Lcom/tkay/expressad/splash/c/e$1;
.super Lcom/tkay/expressad/atsignalcommon/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/c/e;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/splash/c/e$c;Lcom/tkay/expressad/splash/c/e$b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/c/e$b;

.field final synthetic b:Lcom/tkay/expressad/splash/view/TYSplashView;

.field final synthetic c:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic e:Lcom/tkay/expressad/splash/c/e;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/c/e;Lcom/tkay/expressad/splash/c/e$b;Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 110
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/e$1;->e:Lcom/tkay/expressad/splash/c/e;

    iput-object p2, p0, Lcom/tkay/expressad/splash/c/e$1;->a:Lcom/tkay/expressad/splash/c/e$b;

    iput-object p3, p0, Lcom/tkay/expressad/splash/c/e$1;->b:Lcom/tkay/expressad/splash/view/TYSplashView;

    iput-object p4, p0, Lcom/tkay/expressad/splash/c/e$1;->c:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/a/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 1

    .line 160
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 161
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/e$1;->a:Lcom/tkay/expressad/splash/c/e$b;

    if-eqz p2, :cond_0

    .line 162
    invoke-interface {p2}, Lcom/tkay/expressad/splash/c/e$b;->a()V

    .line 164
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/e$1;->e:Lcom/tkay/expressad/splash/c/e;

    invoke-static {p2}, Lcom/tkay/expressad/splash/c/e;->a(Lcom/tkay/expressad/splash/c/e;)Z

    .line 165
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/e$1;->c:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result p2

    if-nez p2, :cond_1

    .line 166
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/e$1;->b:Lcom/tkay/expressad/splash/view/TYSplashView;

    const/4 v0, 0x1

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->setH5Ready(Z)V

    .line 171
    :cond_1
    invoke-static {p1}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->fireOnJSBridgeConnected(Landroid/webkit/WebView;)V

    return-void
.end method

.method public final onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 134
    invoke-super {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/atsignalcommon/a/b;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 135
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/e$1;->a:Lcom/tkay/expressad/splash/c/e$b;

    if-eqz p1, :cond_0

    .line 136
    invoke-interface {p1, p3}, Lcom/tkay/expressad/splash/c/e$b;->a(Ljava/lang/String;)V

    .line 138
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/e$1;->e:Lcom/tkay/expressad/splash/c/e;

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/c/e;->a()V

    .line 139
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/e$1;->b:Lcom/tkay/expressad/splash/view/TYSplashView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->setH5Ready(Z)V

    return-void
.end method

.method public final onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 0

    .line 147
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/atsignalcommon/a/b;->onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V

    .line 148
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/e$1;->a:Lcom/tkay/expressad/splash/c/e$b;

    if-eqz p1, :cond_0

    .line 149
    invoke-virtual {p3}, Landroid/net/http/SslError;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/expressad/splash/c/e$b;->a(Ljava/lang/String;)V

    .line 151
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/e$1;->e:Lcom/tkay/expressad/splash/c/e;

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/c/e;->a()V

    .line 152
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/e$1;->b:Lcom/tkay/expressad/splash/view/TYSplashView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->setH5Ready(Z)V

    return-void
.end method

.method public final readyState(Landroid/webkit/WebView;I)V
    .locals 0

    .line 113
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->readyState(Landroid/webkit/WebView;I)V

    .line 114
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/e$1;->a:Lcom/tkay/expressad/splash/c/e$b;

    if-eqz p1, :cond_0

    .line 115
    invoke-interface {p1, p2}, Lcom/tkay/expressad/splash/c/e$b;->a(I)V

    :cond_0
    const/4 p1, 0x1

    if-ne p2, p1, :cond_1

    .line 118
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/e$1;->e:Lcom/tkay/expressad/splash/c/e;

    invoke-static {p2, p1}, Lcom/tkay/expressad/splash/c/e;->a(Lcom/tkay/expressad/splash/c/e;Z)Z

    .line 119
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/e$1;->b:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setH5Ready(Z)V

    return-void

    .line 124
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/e$1;->e:Lcom/tkay/expressad/splash/c/e;

    const/4 p2, 0x0

    invoke-static {p1, p2}, Lcom/tkay/expressad/splash/c/e;->a(Lcom/tkay/expressad/splash/c/e;Z)Z

    .line 125
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/e$1;->b:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->setH5Ready(Z)V

    return-void
.end method
