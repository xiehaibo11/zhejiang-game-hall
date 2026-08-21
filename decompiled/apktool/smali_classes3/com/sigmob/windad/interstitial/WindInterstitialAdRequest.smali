.class public Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;
.super Lcom/sigmob/windad/WindAdRequest;


# instance fields
.field private c:Z

.field private d:Z


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2, p3}, Lcom/sigmob/windad/WindAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    const/4 p1, 0x4

    iput p1, p0, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;->a:I

    return-void
.end method


# virtual methods
.method public isEnableKeepOn()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;->d:Z

    return v0
.end method

.method public isEnableScreenLockDisPlayAd()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;->c:Z

    return v0
.end method

.method public setEnableKeepOn(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;->d:Z

    return-void
.end method

.method public setEnableScreenLockDisPlayAd(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;->c:Z

    return-void
.end method
