.class public final Lcom/kwad/components/ad/interstitial/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/internal/api/a;
.implements Lcom/kwad/sdk/api/KsInterstitialAd;


# instance fields
.field private bP:Lcom/kwad/components/core/internal/api/c;

.field private hq:Lcom/kwad/sdk/api/KsScene;

.field private hr:Lcom/kwad/components/ad/interstitial/c;

.field private hs:Lcom/kwad/components/ad/interstitial/d;

.field private final mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/kwad/components/core/internal/api/c;

    invoke-direct {v0}, Lcom/kwad/components/core/internal/api/c;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->bP:Lcom/kwad/components/core/internal/api/c;

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/b;->hq:Lcom/kwad/sdk/api/KsScene;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {}, Lcom/kwad/components/ad/h/b;->fa()Lcom/kwad/components/ad/h/b;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/h/b;->a(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/b;)Lcom/kwad/components/core/internal/api/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/b;->bP:Lcom/kwad/components/core/internal/api/c;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/internal/api/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->bP:Lcom/kwad/components/core/internal/api/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/internal/api/c;->a(Lcom/kwad/components/core/internal/api/b;)V

    return-void
.end method

.method public final ae()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final b(Lcom/kwad/components/core/internal/api/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->bP:Lcom/kwad/components/core/internal/api/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/internal/api/c;->b(Lcom/kwad/components/core/internal/api/b;)V

    return-void
.end method

.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final getECPM()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aJ(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public final getInteractionType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aI(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public final getMaterialType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public final getMediaExtraInfo()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zt()Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->llsid:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "llsid"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-object v0
.end method

.method public final isVideo()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    return v0
.end method

.method public final reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V

    return-void
.end method

.method public final setAdInteractionListener(Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->hr:Lcom/kwad/components/ad/interstitial/c;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/interstitial/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/b$1;-><init>(Lcom/kwad/components/ad/interstitial/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->hr:Lcom/kwad/components/ad/interstitial/c;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->hr:Lcom/kwad/components/ad/interstitial/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/interstitial/c;->a(Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/b;->hs:Lcom/kwad/components/ad/interstitial/d;

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->hr:Lcom/kwad/components/ad/interstitial/c;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/interstitial/d;->setAdInteractionListener(Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V

    :cond_1
    return-void
.end method

.method public final setBidEcpm(I)V
    .locals 4

    int-to-long v0, p1

    const-wide/16 v2, -0x1

    invoke-virtual {p0, v0, v1, v2, v3}, Lcom/kwad/components/ad/interstitial/b;->setBidEcpm(JJ)V

    return-void
.end method

.method public final setBidEcpm(JJ)V
    .locals 0

    iget-object p3, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-wide p1, p3, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    iget-object p3, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p3, p1, p2}, Lcom/kwad/sdk/core/report/a;->i(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    return-void
.end method

.method public final showInterstitialAd(Landroid/app/Activity;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V
    .locals 3

    const-string v0, "StayAdHelper"

    if-eqz p1, :cond_5

    invoke-virtual {p1}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/KsAdSDKImpl;->hasInitFinish()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "showInterstitialAd please init sdk first"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    if-nez p2, :cond_2

    new-instance p2, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    invoke-direct {p2}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;-><init>()V

    invoke-virtual {p2}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->build()Lcom/kwad/sdk/api/KsVideoPlayConfig;

    move-result-object p2

    :cond_2
    const-string v0, "interstitial"

    const-string v1, "show"

    invoke-static {v0, v1}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_INTERSTITIAL:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v2, "callShow"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->cL()Lcom/kwad/components/ad/interstitial/monitor/b;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->hq:Lcom/kwad/sdk/api/KsScene;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsScene;->getPosId()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/monitor/b;->h(J)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adShowStartTimeStamp:J

    invoke-interface {p2}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x2

    iput v2, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput v1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    :goto_0
    invoke-static {}, Lcom/kwad/sdk/a/a/c;->yb()Lcom/kwad/sdk/a/a/c;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/a/a/c;->bc(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->hs:Lcom/kwad/components/ad/interstitial/d;

    if-nez v0, :cond_4

    new-instance v0, Lcom/kwad/components/ad/interstitial/d;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/b;->hr:Lcom/kwad/components/ad/interstitial/c;

    invoke-direct {v0, p1, v1, p2, v2}, Lcom/kwad/components/ad/interstitial/d;-><init>(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/api/KsVideoPlayConfig;Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/b;->hs:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->show()V

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/b/b;->J(Landroid/content/Context;)V

    :cond_4
    return-void

    :cond_5
    :goto_1
    const-string p1, "showInterstitialAd activity must not be null"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
