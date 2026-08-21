.class final Lcom/tkay/expressad/a/g$2;
.super Landroid/webkit/WebViewClient;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/a/g;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/expressad/a/g;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/a/g;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 162
    iput-object p1, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    iput-object p2, p0, Lcom/tkay/expressad/a/g$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/expressad/a/g$2;->b:Ljava/lang/String;

    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    return-void
.end method

.method private a()Z
    .locals 1

    .line 165
    iget-object v0, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    iget-boolean v0, v0, Lcom/tkay/expressad/a/g;->b:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    iget-boolean v0, v0, Lcom/tkay/expressad/a/g;->c:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method


# virtual methods
.method public final onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    .line 294
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    :try_start_0
    const-string p2, "javascript:window.navigator.vibrate([]);"

    .line 296
    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 298
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 3

    :try_start_0
    const-string p3, "javascript:window.navigator.vibrate([]);"

    .line 172
    invoke-virtual {p1, p3}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    .line 174
    iget-object p3, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p3}, Lcom/tkay/expressad/a/g;->b(Lcom/tkay/expressad/a/g;)Z

    move-result p3

    const/4 v0, 0x0

    if-eqz p3, :cond_0

    .line 175
    iget-object p1, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p1, v0}, Lcom/tkay/expressad/a/g;->a(Lcom/tkay/expressad/a/g;I)I

    .line 176
    iget-object p1, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p1}, Lcom/tkay/expressad/a/g;->c(Lcom/tkay/expressad/a/g;)V

    return-void

    .line 180
    :cond_0
    iget-object p3, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    iput-boolean v0, p3, Lcom/tkay/expressad/a/g;->c:Z

    .line 183
    invoke-virtual {p1}, Landroid/webkit/WebView;->getTag()Ljava/lang/Object;

    move-result-object p3

    const/4 v1, 0x1

    if-nez p3, :cond_1

    const-string p3, "has_first_started"

    .line 184
    invoke-virtual {p1, p3}, Landroid/webkit/WebView;->setTag(Ljava/lang/Object;)V

    goto :goto_0

    .line 186
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    iput-boolean v1, p1, Lcom/tkay/expressad/a/g;->b:Z

    .line 189
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/a/g;->a()Ljava/lang/String;

    move-result-object p1

    monitor-enter p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    const-string p3, "load page-start:"

    .line 1165
    iget-object v2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    iget-boolean v2, v2, Lcom/tkay/expressad/a/g;->b:Z

    if-nez v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    iget-boolean v2, v2, Lcom/tkay/expressad/a/g;->c:Z

    if-eqz v2, :cond_3

    :cond_2
    move v0, v1

    :cond_3
    if-eqz v0, :cond_4

    const-string p3, "load page-start:(redirect)"

    .line 195
    :cond_4
    invoke-static {p2}, Landroid/webkit/URLUtil;->isHttpsUrl(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 196
    invoke-static {}, Lcom/tkay/expressad/a/g;->a()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 198
    :cond_5
    invoke-static {}, Lcom/tkay/expressad/a/g;->a()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 201
    :goto_1
    iget-object p3, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p3, p2}, Lcom/tkay/expressad/a/g;->a(Lcom/tkay/expressad/a/g;Ljava/lang/String;)Ljava/lang/String;

    .line 203
    iget-object p3, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p3}, Lcom/tkay/expressad/a/g;->d(Lcom/tkay/expressad/a/g;)Lcom/tkay/expressad/a/g$a;

    move-result-object p3

    if-eqz p3, :cond_6

    iget-object p3, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p3}, Lcom/tkay/expressad/a/g;->d(Lcom/tkay/expressad/a/g;)Lcom/tkay/expressad/a/g$a;

    move-result-object p3

    invoke-interface {p3, p2}, Lcom/tkay/expressad/a/g$a;->a(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_6

    .line 204
    iget-object p2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->e(Lcom/tkay/expressad/a/g;)Z

    .line 205
    iget-object p2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->c(Lcom/tkay/expressad/a/g;)V

    goto :goto_2

    .line 207
    :cond_6
    iget-object p2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->f(Lcom/tkay/expressad/a/g;)V

    .line 209
    :goto_2
    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    :try_start_2
    monitor-exit p1

    throw p2
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    move-exception p1

    .line 211
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 257
    invoke-static {}, Lcom/tkay/expressad/a/g;->a()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onReceivedError: errno = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ", url: "

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ",\n onReceivedError:, description: "

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ", failingUrl: "

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 260
    invoke-static {}, Lcom/tkay/expressad/a/g;->a()Ljava/lang/String;

    move-result-object p2

    monitor-enter p2

    .line 261
    :try_start_0
    iget-object p4, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p4}, Lcom/tkay/expressad/a/g;->e(Lcom/tkay/expressad/a/g;)Z

    .line 262
    iget-object p4, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p4}, Lcom/tkay/expressad/a/g;->k(Lcom/tkay/expressad/a/g;)V

    .line 263
    iget-object p4, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p4}, Lcom/tkay/expressad/a/g;->c(Lcom/tkay/expressad/a/g;)V

    .line 265
    monitor-exit p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 266
    iget-object p2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->d(Lcom/tkay/expressad/a/g;)Lcom/tkay/expressad/a/g$a;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 267
    iget-object p2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->d(Lcom/tkay/expressad/a/g;)Lcom/tkay/expressad/a/g$a;

    move-result-object p2

    invoke-virtual {p1}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object p1

    iget-object p4, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p4}, Lcom/tkay/expressad/a/g;->l(Lcom/tkay/expressad/a/g;)Ljava/lang/String;

    move-result-object p4

    invoke-interface {p2, p1, p3, p4}, Lcom/tkay/expressad/a/g$a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 265
    monitor-exit p2

    throw p1
.end method

.method public final onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 0

    .line 274
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/a/g;->a()Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p3, "onReceivedSslError IS_SP_CBT_CF:"

    invoke-direct {p1, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-boolean p3, Lcom/tkay/expressad/b;->q:Z

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 275
    sget-boolean p1, Lcom/tkay/expressad/b;->q:Z

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    .line 278
    invoke-virtual {p2}, Landroid/webkit/SslErrorHandler;->cancel()V

    .line 281
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/a/g$2;->a:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/a/g$2;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception p1

    .line 287
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 3

    .line 218
    invoke-static {}, Lcom/tkay/expressad/a/g;->a()Ljava/lang/String;

    move-result-object p1

    monitor-enter p1

    .line 219
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/a/g;->a()Ljava/lang/String;

    .line 221
    iget-object v0, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/expressad/a/g;->c:Z

    .line 223
    iget-object v0, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {v0}, Lcom/tkay/expressad/a/g;->g(Lcom/tkay/expressad/a/g;)V

    .line 225
    iget-object v0, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {v0}, Lcom/tkay/expressad/a/g;->b(Lcom/tkay/expressad/a/g;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 226
    iget-object p2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->h(Lcom/tkay/expressad/a/g;)V

    .line 227
    iget-object p2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->c(Lcom/tkay/expressad/a/g;)V

    .line 228
    monitor-exit p1

    return v1

    .line 231
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {v0, p2}, Lcom/tkay/expressad/a/g;->a(Lcom/tkay/expressad/a/g;Ljava/lang/String;)Ljava/lang/String;

    .line 233
    iget-object v0, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {v0}, Lcom/tkay/expressad/a/g;->d(Lcom/tkay/expressad/a/g;)Lcom/tkay/expressad/a/g$a;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {v0}, Lcom/tkay/expressad/a/g;->d(Lcom/tkay/expressad/a/g;)Lcom/tkay/expressad/a/g$a;

    move-result-object v0

    invoke-interface {v0, p2}, Lcom/tkay/expressad/a/g$a;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 234
    iget-object p2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->e(Lcom/tkay/expressad/a/g;)Z

    .line 235
    iget-object p2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->h(Lcom/tkay/expressad/a/g;)V

    .line 236
    iget-object p2, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p2}, Lcom/tkay/expressad/a/g;->c(Lcom/tkay/expressad/a/g;)V

    .line 237
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v1

    .line 239
    :cond_1
    monitor-exit p1

    .line 242
    iget-object p1, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p1}, Lcom/tkay/expressad/a/g;->i(Lcom/tkay/expressad/a/g;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 243
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    .line 244
    iget-object v0, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {v0}, Lcom/tkay/expressad/a/g;->j(Lcom/tkay/expressad/a/g;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 245
    iget-object v0, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {v0}, Lcom/tkay/expressad/a/g;->j(Lcom/tkay/expressad/a/g;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object v0

    const-string v2, "Referer"

    invoke-interface {p1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 247
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {v0}, Lcom/tkay/expressad/a/g;->j(Lcom/tkay/expressad/a/g;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0, p2, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;Ljava/util/Map;)V

    goto :goto_0

    .line 249
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/a/g$2;->c:Lcom/tkay/expressad/a/g;

    invoke-static {p1}, Lcom/tkay/expressad/a/g;->j(Lcom/tkay/expressad/a/g;)Landroid/webkit/WebView;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    :goto_0
    return v1

    :catchall_0
    move-exception p2

    .line 239
    monitor-exit p1

    throw p2
.end method
