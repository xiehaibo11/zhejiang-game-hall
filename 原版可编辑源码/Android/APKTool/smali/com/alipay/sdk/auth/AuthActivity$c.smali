.class Lcom/alipay/sdk/auth/AuthActivity$c;
.super Landroid/webkit/WebViewClient;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/alipay/sdk/auth/AuthActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/alipay/sdk/auth/AuthActivity;


# direct methods
.method private constructor <init>(Lcom/alipay/sdk/auth/AuthActivity;)V
    .locals 0

    .line 185
    iput-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/alipay/sdk/auth/AuthActivity;Lcom/alipay/sdk/auth/a;)V
    .locals 0

    .line 185
    invoke-direct {p0, p1}, Lcom/alipay/sdk/auth/AuthActivity$c;-><init>(Lcom/alipay/sdk/auth/AuthActivity;)V

    return-void
.end method


# virtual methods
.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    .line 271
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    invoke-static {p1}, Lcom/alipay/sdk/auth/AuthActivity;->e(Lcom/alipay/sdk/auth/AuthActivity;)V

    .line 273
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    invoke-static {p1}, Lcom/alipay/sdk/auth/AuthActivity;->d(Lcom/alipay/sdk/auth/AuthActivity;)Landroid/os/Handler;

    move-result-object p1

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    return-void
.end method

.method public onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 4

    .line 264
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    invoke-static {v0}, Lcom/alipay/sdk/auth/AuthActivity;->c(Lcom/alipay/sdk/auth/AuthActivity;)V

    .line 265
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    invoke-static {v0}, Lcom/alipay/sdk/auth/AuthActivity;->d(Lcom/alipay/sdk/auth/AuthActivity;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/alipay/sdk/auth/AuthActivity$a;

    iget-object v2, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    const/4 v3, 0x0

    invoke-direct {v1, v2, v3}, Lcom/alipay/sdk/auth/AuthActivity$a;-><init>(Lcom/alipay/sdk/auth/AuthActivity;Lcom/alipay/sdk/auth/a;)V

    const-wide/16 v2, 0x7530

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 266
    invoke-super {p0, p1, p2, p3}, Landroid/webkit/WebViewClient;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    return-void
.end method

.method public onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 189
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/alipay/sdk/auth/AuthActivity;->a(Lcom/alipay/sdk/auth/AuthActivity;Z)Z

    .line 190
    invoke-super {p0, p1, p2, p3, p4}, Landroid/webkit/WebViewClient;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 0

    .line 197
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    invoke-static {p1}, Lcom/alipay/sdk/auth/AuthActivity;->a(Lcom/alipay/sdk/auth/AuthActivity;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 198
    invoke-virtual {p2}, Landroid/webkit/SslErrorHandler;->proceed()V

    .line 199
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    const/4 p2, 0x0

    invoke-static {p1, p2}, Lcom/alipay/sdk/auth/AuthActivity;->b(Lcom/alipay/sdk/auth/AuthActivity;Z)Z

    return-void

    .line 203
    :cond_0
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    new-instance p3, Lcom/alipay/sdk/auth/d;

    invoke-direct {p3, p0, p2}, Lcom/alipay/sdk/auth/d;-><init>(Lcom/alipay/sdk/auth/AuthActivity$c;Landroid/webkit/SslErrorHandler;)V

    invoke-virtual {p1, p3}, Lcom/alipay/sdk/auth/AuthActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 5

    .line 232
    invoke-virtual {p2}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "alipays://platformapi/startApp?"

    invoke-virtual {v1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    const-string v2, "intent://platformapi/startapp?"

    const/4 v3, 0x1

    if-nez v0, :cond_2

    .line 233
    invoke-virtual {p2}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 255
    :cond_0
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    invoke-static {v0, p2}, Lcom/alipay/sdk/auth/AuthActivity;->a(Lcom/alipay/sdk/auth/AuthActivity;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 256
    invoke-virtual {p1}, Landroid/webkit/WebView;->stopLoading()V

    return v3

    .line 259
    :cond_1
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z

    move-result p1

    return p1

    .line 240
    :cond_2
    :goto_0
    :try_start_0
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    sget-object v0, Lcom/alipay/sdk/app/i;->a:Ljava/util/List;

    invoke-static {p1, v0}, Lcom/alipay/sdk/util/n;->a(Landroid/content/Context;Ljava/util/List;)Lcom/alipay/sdk/util/n$a;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 241
    invoke-virtual {p1}, Lcom/alipay/sdk/util/n$a;->a()Z

    move-result v0

    if-nez v0, :cond_5

    invoke-virtual {p1}, Lcom/alipay/sdk/util/n$a;->b()Z

    move-result p1

    if-eqz p1, :cond_3

    goto :goto_1

    :cond_3
    const-string p1, "intent://platformapi/startapp"

    .line 244
    invoke-virtual {p2, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 245
    invoke-virtual {p2, v2, v1}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 247
    :cond_4
    new-instance p1, Landroid/content/Intent;

    const-string v0, "android.intent.action.VIEW"

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    invoke-direct {p1, v0, p2}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    .line 248
    iget-object p2, p0, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    invoke-virtual {p2, p1}, Lcom/alipay/sdk/auth/AuthActivity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    nop

    :catchall_0
    :cond_5
    :goto_1
    return v3
.end method
