.class public abstract Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;
.super Lcom/tkay/core/api/TYBaseAdAdapter;


# instance fields
.field protected mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public clearImpressionListener()V
    .locals 1

    const/4 v0, 0x0

    .line 34
    iput-object v0, p0, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-void
.end method

.method public final internalShow(Landroid/app/Activity;Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;)V
    .locals 2

    .line 21
    iput-object p2, p0, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    .line 23
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->show(Landroid/app/Activity;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 25
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 27
    iget-object p2, p0, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    if-eqz p2, :cond_0

    .line 28
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "exception, show failed: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, ""

    invoke-interface {p2, v0, p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public abstract show(Landroid/app/Activity;)V
.end method
