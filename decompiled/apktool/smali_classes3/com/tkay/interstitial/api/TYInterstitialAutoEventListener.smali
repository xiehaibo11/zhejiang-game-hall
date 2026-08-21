.class public abstract Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
    .locals 0

    return-void
.end method

.method public onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 0

    return-void
.end method

.method public abstract onInterstitialAdClicked(Lcom/tkay/core/api/TYAdInfo;)V
.end method

.method public abstract onInterstitialAdClose(Lcom/tkay/core/api/TYAdInfo;)V
.end method

.method public abstract onInterstitialAdShow(Lcom/tkay/core/api/TYAdInfo;)V
.end method

.method public abstract onInterstitialAdVideoEnd(Lcom/tkay/core/api/TYAdInfo;)V
.end method

.method public abstract onInterstitialAdVideoError(Lcom/tkay/core/api/AdError;)V
.end method

.method public abstract onInterstitialAdVideoStart(Lcom/tkay/core/api/TYAdInfo;)V
.end method
