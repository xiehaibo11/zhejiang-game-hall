.class Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/nativead/v;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/windad/natives/WindNativeUnifiedAd;-><init>(Lcom/sigmob/windad/natives/WindNativeAdRequest;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/windad/natives/WindNativeAdRequest;

.field final synthetic b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;


# direct methods
.method constructor <init>(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;Lcom/sigmob/windad/natives/WindNativeAdRequest;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    iput-object p2, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;->a:Lcom/sigmob/windad/natives/WindNativeAdRequest;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onNativeAdLoadFail(ILjava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, v0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-static {v0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {p1}, Lcom/sigmob/windad/WindAdError;->getWindAdError(I)Lcom/sigmob/windad/WindAdError;

    move-result-object v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/windad/WindAdError;->setErrorMessage(ILjava/lang/String;)V

    invoke-virtual {v0, p2}, Lcom/sigmob/windad/WindAdError;->setMessage(Ljava/lang/String;)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-static {p1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;->a:Lcom/sigmob/windad/natives/WindNativeAdRequest;

    invoke-virtual {p2}, Lcom/sigmob/windad/natives/WindNativeAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, v0, p2}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;->onAdError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public onNativeAdLoaded(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/windad/natives/WindNativeAdData;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-static {v0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, v0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-static {v0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-static {v1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->b(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, p1, v1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;->onAdLoad(Ljava/util/List;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
