.class final Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;
.super Ljava/lang/Object;
.source "MBInterstitialActivity.java"

# interfaces
.implements Lcom/mbridge/msdk/mbjscommon/windvane/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V
    .locals 0

    .line 262
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;I)V
    .locals 0

    return-void
.end method

.method public final a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 279
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    const/4 p2, 0x1

    invoke-static {p1, p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;Z)Z

    const-string p1, "MBInterstitialActivity"

    const-string p2, "onReceivedError"

    .line 280
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 281
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/interstitial/c/a$c;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 282
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/interstitial/c/a$c;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/mbridge/msdk/interstitial/c/a$c;->a(Ljava/lang/String;)V

    .line 284
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    const/4 p2, 0x3

    invoke-static {p1, p2, p3}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 288
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 0

    const-string p1, "MBInterstitialActivity"

    const-string p2, "onReceivedSslError"

    .line 272
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 273
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    const/4 p2, 0x1

    invoke-static {p1, p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;Z)Z

    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 3

    const-string p1, "MBInterstitialActivity"

    .line 315
    :try_start_0
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->c(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Z

    move-result p2

    if-eqz p2, :cond_0

    goto/16 :goto_1

    .line 318
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    const/4 v0, 0x1

    const-string v1, ""

    invoke-static {p2, v0, v1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;ILjava/lang/String;)V

    const-string p2, "onPageFinished"

    .line 319
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 320
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    iget-object p2, p2, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a:Ljava/lang/Runnable;

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->d(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Landroid/os/Handler;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 321
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->d(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Landroid/os/Handler;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    iget-object v0, v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a:Ljava/lang/Runnable;

    invoke-virtual {p2, v0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 323
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/interstitial/c/a$c;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 324
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/interstitial/c/a$c;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/interstitial/c/a$c;->a()V

    .line 327
    :cond_2
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    iget-boolean p2, p2, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mIsMBPage:Z

    if-nez p2, :cond_3

    .line 328
    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {p2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->d(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Landroid/os/Handler;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    iget-object v0, v0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b:Ljava/lang/Runnable;

    const-wide/16 v1, 0x7d0

    invoke-virtual {p2, v0, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    const-string p2, "\u4e0d\u662fmb\u9875\u9762 getinfo\u8fd8\u6ca1\u8c03\u7528 2\u79d2\u540e\u6267\u884ctask"

    .line 329
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    const-string p2, "\u662fmb\u9875\u9762 getinfo\u5df2\u8c03\u7528 \u4e0d\u505a\u5904\u7406"

    .line 331
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 337
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->e(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 341
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 342
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/interstitial/c/a$c;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 343
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$10;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {p1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/interstitial/c/a$c;

    move-result-object p1

    const-string p2, "load page failed"

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/interstitial/c/a$c;->a(Ljava/lang/String;)V

    :cond_4
    :goto_1
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 0

    const-string p1, "MBInterstitialActivity"

    const-string p2, "onPageStarted"

    .line 303
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final b(Landroid/webkit/WebView;I)V
    .locals 0

    return-void
.end method

.method public final b(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 0

    const-string p1, "MBInterstitialActivity"

    const-string p2, "shouldOverrideUrlLoading"

    .line 266
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    return p1
.end method

.method public final c(Landroid/webkit/WebView;I)V
    .locals 0

    return-void
.end method
