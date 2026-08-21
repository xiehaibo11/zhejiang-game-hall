.class Lcom/tkay/interstitial/api/TYInterstitial$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/interstitial/api/TYInterstitialExListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/interstitial/api/TYInterstitial;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/interstitial/api/TYInterstitial;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/api/TYInterstitial;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
    .locals 2

    .line 51
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/api/TYInterstitial$1$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/interstitial/api/TYInterstitial$1$1;-><init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Lcom/tkay/core/api/TYAdInfo;Z)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 2

    .line 63
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/api/TYInterstitial$1$2;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/interstitial/api/TYInterstitial$1$2;-><init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onInterstitialAdClicked(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 136
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/api/TYInterstitial$1$7;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/api/TYInterstitial$1$7;-><init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onInterstitialAdClose(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 124
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/api/TYInterstitial$1$6;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/api/TYInterstitial$1$6;-><init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onInterstitialAdLoadFail(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method public onInterstitialAdLoaded()V
    .locals 0

    return-void
.end method

.method public onInterstitialAdShow(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 149
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/api/TYInterstitial$1$8;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/api/TYInterstitial$1$8;-><init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onInterstitialAdVideoEnd(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 98
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/api/TYInterstitial$1$4;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/api/TYInterstitial$1$4;-><init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onInterstitialAdVideoError(Lcom/tkay/core/api/AdError;)V
    .locals 2

    .line 111
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/api/TYInterstitial$1$5;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/api/TYInterstitial$1$5;-><init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onInterstitialAdVideoStart(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 85
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/api/TYInterstitial$1$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/api/TYInterstitial$1$3;-><init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
