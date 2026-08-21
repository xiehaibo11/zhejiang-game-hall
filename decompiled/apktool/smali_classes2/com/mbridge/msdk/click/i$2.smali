.class final Lcom/mbridge/msdk/click/i$2;
.super Landroid/webkit/WebViewClient;
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
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Landroid/content/Context;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Lcom/mbridge/msdk/click/i;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/i;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 164
    iput-object p1, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    iput-object p2, p0, Lcom/mbridge/msdk/click/i$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/click/i$2;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/mbridge/msdk/click/i$2;->c:Landroid/content/Context;

    iput-object p5, p0, Lcom/mbridge/msdk/click/i$2;->d:Ljava/lang/String;

    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    .line 295
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    :try_start_0
    const-string p2, "javascript:window.navigator.vibrate([]);"

    .line 297
    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 299
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public final onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 3

    :try_start_0
    const-string p3, "javascript:window.navigator.vibrate([]);"

    .line 174
    invoke-virtual {p1, p3}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    .line 176
    iget-object p3, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p3}, Lcom/mbridge/msdk/click/i;->b(Lcom/mbridge/msdk/click/i;)Z

    move-result p3

    const/4 v0, 0x0

    if-eqz p3, :cond_0

    .line 177
    iget-object p1, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/click/i;->a(Lcom/mbridge/msdk/click/i;I)I

    .line 178
    iget-object p1, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p1}, Lcom/mbridge/msdk/click/i;->c(Lcom/mbridge/msdk/click/i;)V

    return-void

    .line 182
    :cond_0
    iget-object p3, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    iput-boolean v0, p3, Lcom/mbridge/msdk/click/i;->c:Z

    .line 185
    invoke-virtual {p1}, Landroid/webkit/WebView;->getTag()Ljava/lang/Object;

    move-result-object p3

    const/4 v1, 0x1

    if-nez p3, :cond_1

    const-string p3, "has_first_started"

    .line 186
    invoke-virtual {p1, p3}, Landroid/webkit/WebView;->setTag(Ljava/lang/Object;)V

    goto :goto_0

    .line 188
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    iput-boolean v1, p1, Lcom/mbridge/msdk/click/i;->b:Z

    .line 191
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/click/i;->a()Ljava/lang/String;

    move-result-object p1

    monitor-enter p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    const-string p3, "\u52a0\u8f7d\u9875\u9762-\u5f00\u59cb\uff1a"

    .line 1167
    iget-object v2, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    iget-boolean v2, v2, Lcom/mbridge/msdk/click/i;->b:Z

    if-nez v2, :cond_2

    iget-object v2, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    iget-boolean v2, v2, Lcom/mbridge/msdk/click/i;->c:Z

    if-eqz v2, :cond_3

    :cond_2
    move v0, v1

    :cond_3
    if-eqz v0, :cond_4

    const-string p3, "\u52a0\u8f7d\u9875\u9762-\u5f00\u59cb\uff1a\uff08\u91cd\u5b9a\u5411\uff09"

    .line 197
    :cond_4
    invoke-static {p2}, Landroid/webkit/URLUtil;->isHttpsUrl(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 198
    invoke-static {}, Lcom/mbridge/msdk/click/i;->a()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {v0, p3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 200
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/click/i;->a()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {v0, p3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 203
    :goto_1
    iget-object p3, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p3, p2}, Lcom/mbridge/msdk/click/i;->a(Lcom/mbridge/msdk/click/i;Ljava/lang/String;)Ljava/lang/String;

    .line 205
    iget-object p3, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p3}, Lcom/mbridge/msdk/click/i;->d(Lcom/mbridge/msdk/click/i;)Lcom/mbridge/msdk/click/i$a;

    move-result-object p3

    if-eqz p3, :cond_6

    iget-object p3, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p3}, Lcom/mbridge/msdk/click/i;->d(Lcom/mbridge/msdk/click/i;)Lcom/mbridge/msdk/click/i$a;

    move-result-object p3

    invoke-interface {p3, p2}, Lcom/mbridge/msdk/click/i$a;->a(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_6

    .line 206
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p2, v1}, Lcom/mbridge/msdk/click/i;->a(Lcom/mbridge/msdk/click/i;Z)Z

    .line 207
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p2}, Lcom/mbridge/msdk/click/i;->c(Lcom/mbridge/msdk/click/i;)V

    goto :goto_2

    .line 209
    :cond_6
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p2}, Lcom/mbridge/msdk/click/i;->e(Lcom/mbridge/msdk/click/i;)V

    .line 211
    :goto_2
    monitor-exit p1

    goto :goto_3

    :catchall_0
    move-exception p2

    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p2
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    move-exception p1

    .line 213
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_3
    return-void
.end method

.method public final onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 259
    invoke-static {}, Lcom/mbridge/msdk/click/i;->a()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onReceivedError: errno = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ", url: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ",\n onReceivedError\uff1a, description: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", failingUrl: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {v0, p4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 262
    invoke-static {}, Lcom/mbridge/msdk/click/i;->a()Ljava/lang/String;

    move-result-object p4

    monitor-enter p4

    .line 263
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/click/i;->a(Lcom/mbridge/msdk/click/i;Z)Z

    .line 264
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->j(Lcom/mbridge/msdk/click/i;)V

    .line 265
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->c(Lcom/mbridge/msdk/click/i;)V

    .line 267
    monitor-exit p4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 268
    iget-object p4, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p4}, Lcom/mbridge/msdk/click/i;->d(Lcom/mbridge/msdk/click/i;)Lcom/mbridge/msdk/click/i$a;

    move-result-object p4

    if-eqz p4, :cond_0

    .line 269
    iget-object p4, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p4}, Lcom/mbridge/msdk/click/i;->d(Lcom/mbridge/msdk/click/i;)Lcom/mbridge/msdk/click/i$a;

    move-result-object p4

    invoke-virtual {p1}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->k(Lcom/mbridge/msdk/click/i;)Ljava/lang/String;

    move-result-object v0

    invoke-interface {p4, p2, p1, p3, v0}, Lcom/mbridge/msdk/click/i$a;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 267
    :try_start_1
    monitor-exit p4
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public final onReceivedSslError(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 2

    .line 276
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/click/i;->a()Ljava/lang/String;

    move-result-object p3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onReceivedSslError IS_SP_CBT_CF:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->IS_SP_CBT_CF:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 277
    sget-boolean p3, Lcom/mbridge/msdk/MBridgeConstans;->IS_SP_CBT_CF:Z

    if-eqz p3, :cond_0

    if-eqz p2, :cond_0

    .line 280
    invoke-virtual {p2}, Landroid/webkit/SslErrorHandler;->cancel()V

    .line 283
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$2;->a:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    iget-object p2, p0, Lcom/mbridge/msdk/click/i$2;->b:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 284
    new-instance p2, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object p3, p0, Lcom/mbridge/msdk/click/i$2;->c:Landroid/content/Context;

    invoke-direct {p2, p3}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    .line 285
    iget-object p3, p0, Lcom/mbridge/msdk/click/i$2;->d:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->b:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/click/i$2;->a:Ljava/lang/String;

    invoke-virtual {p1}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p3, v0, v1, p1}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 288
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public final shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 3

    .line 220
    invoke-static {}, Lcom/mbridge/msdk/click/i;->a()Ljava/lang/String;

    move-result-object p1

    monitor-enter p1

    .line 221
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/click/i;->a()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "override js\u8df3\u8f6c\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 223
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/mbridge/msdk/click/i;->c:Z

    .line 225
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->f(Lcom/mbridge/msdk/click/i;)V

    .line 227
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->b(Lcom/mbridge/msdk/click/i;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 228
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p2}, Lcom/mbridge/msdk/click/i;->g(Lcom/mbridge/msdk/click/i;)V

    .line 229
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p2}, Lcom/mbridge/msdk/click/i;->c(Lcom/mbridge/msdk/click/i;)V

    .line 230
    monitor-exit p1

    return v1

    .line 233
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {v0, p2}, Lcom/mbridge/msdk/click/i;->a(Lcom/mbridge/msdk/click/i;Ljava/lang/String;)Ljava/lang/String;

    .line 235
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->d(Lcom/mbridge/msdk/click/i;)Lcom/mbridge/msdk/click/i$a;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->d(Lcom/mbridge/msdk/click/i;)Lcom/mbridge/msdk/click/i$a;

    move-result-object v0

    invoke-interface {v0, p2}, Lcom/mbridge/msdk/click/i$a;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 236
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p2, v1}, Lcom/mbridge/msdk/click/i;->a(Lcom/mbridge/msdk/click/i;Z)Z

    .line 237
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p2}, Lcom/mbridge/msdk/click/i;->g(Lcom/mbridge/msdk/click/i;)V

    .line 238
    iget-object p2, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p2}, Lcom/mbridge/msdk/click/i;->c(Lcom/mbridge/msdk/click/i;)V

    .line 239
    monitor-exit p1

    return v1

    .line 241
    :cond_1
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 244
    iget-object p1, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p1}, Lcom/mbridge/msdk/click/i;->h(Lcom/mbridge/msdk/click/i;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 245
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    .line 246
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->i(Lcom/mbridge/msdk/click/i;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 247
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->i(Lcom/mbridge/msdk/click/i;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object v0

    const-string v2, "Referer"

    invoke-interface {p1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 249
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->i(Lcom/mbridge/msdk/click/i;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0, p2, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;Ljava/util/Map;)V

    goto :goto_0

    .line 251
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/click/i$2;->e:Lcom/mbridge/msdk/click/i;

    invoke-static {p1}, Lcom/mbridge/msdk/click/i;->i(Lcom/mbridge/msdk/click/i;)Landroid/webkit/WebView;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    :goto_0
    return v1

    :catchall_0
    move-exception p2

    .line 241
    :try_start_1
    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p2
.end method
