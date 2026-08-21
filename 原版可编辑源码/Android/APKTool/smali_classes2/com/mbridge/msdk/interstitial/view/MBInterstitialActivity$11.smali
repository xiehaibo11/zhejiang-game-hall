.class final Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;
.super Ljava/lang/Object;
.source "MBInterstitialActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


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

    .line 408
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    const-string v0, "MBInterstitialActivity"

    const-string v1, "load page timeOut"

    .line 413
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 414
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->f(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "mLoadTimeTask \u5df2\u7ecf\u6253\u5f00\u975emb\u7684\u9875\u9762\u4e86 return "

    .line 415
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 418
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;Z)Z

    .line 420
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/interstitial/c/a$c;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 421
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->b(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/interstitial/c/a$c;

    move-result-object v0

    const-string v1, "load page timeout"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/interstitial/c/a$c;->a(Ljava/lang/String;)V

    .line 422
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 423
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setVisibility(I)V

    .line 424
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 425
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->release()V

    .line 427
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$11;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-virtual {v0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->hideLoading()V

    :cond_2
    return-void
.end method
