.class public final Lcom/tkay/interstitial/a/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/interstitial/api/TYInterstitialExListener;


# instance fields
.field a:Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;


# direct methods
.method protected constructor <init>(Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;)V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 23
    iput-object p1, p0, Lcom/tkay/interstitial/a/c;->a:Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;

    return-void
.end method


# virtual methods
.method public final onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
    .locals 2

    .line 28
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/a/c$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/interstitial/a/c$1;-><init>(Lcom/tkay/interstitial/a/c;Lcom/tkay/core/api/TYAdInfo;Z)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 2

    .line 40
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/a/c$2;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/interstitial/a/c$2;-><init>(Lcom/tkay/interstitial/a/c;Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onInterstitialAdClicked(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 103
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/a/c$7;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/a/c$7;-><init>(Lcom/tkay/interstitial/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onInterstitialAdClose(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 91
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/a/c$6;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/a/c$6;-><init>(Lcom/tkay/interstitial/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onInterstitialAdLoadFail(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method public final onInterstitialAdLoaded()V
    .locals 0

    return-void
.end method

.method public final onInterstitialAdShow(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 116
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/a/c$8;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/a/c$8;-><init>(Lcom/tkay/interstitial/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onInterstitialAdVideoEnd(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 65
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/a/c$4;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/a/c$4;-><init>(Lcom/tkay/interstitial/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onInterstitialAdVideoError(Lcom/tkay/core/api/AdError;)V
    .locals 2

    .line 78
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/a/c$5;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/a/c$5;-><init>(Lcom/tkay/interstitial/a/c;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onInterstitialAdVideoStart(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 52
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/a/c$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/a/c$3;-><init>(Lcom/tkay/interstitial/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
