.class final Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;
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

    .line 438
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    const-string v0, "MBInterstitialActivity"

    const-string v1, "mWaitJsInvokeTask \u5f00\u59cb\u6267\u884crun\u65b9\u6cd5"

    .line 443
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 444
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    iget-boolean v1, v1, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mIsMBPage:Z

    if-eqz v1, :cond_0

    const-string v1, "mWaitJsInvokeTask getinfo \u5df2\u8c03\u7528 return"

    .line 445
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 450
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->g(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->g(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 451
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->h(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V

    .line 454
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/interstitial/b/a;->a()Lcom/mbridge/msdk/interstitial/b/a;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->g(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    iget-object v3, v3, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->mUnitid:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/interstitial/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    .line 455
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->i(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v1, "mWaitJsInvokeTask webview \u5df2\u52a0\u8f7d\u8d85\u65f6 return"

    .line 456
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 459
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->c(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;Z)Z

    .line 461
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-virtual {v1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->hideLoading()V

    .line 462
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$12;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-virtual {v1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->showWebView()V

    const-string v1, "mWaitJsInvokeTask \u6700\u7ec8\u663e\u793a\u975emb\u7684\u9875\u9762 "

    .line 464
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
