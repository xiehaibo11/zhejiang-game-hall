.class public Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;
.super Lcom/kwad/sdk/api/core/AbstrackKsSplashScreenAd;

# interfaces
.implements Lcom/kwad/components/core/internal/api/a;


# instance fields
.field private BO:Lcom/kwad/components/core/response/model/AdResultData;

.field private BP:Lcom/kwad/sdk/api/KsScene;

.field private bJ:Lcom/kwad/sdk/core/h/b;

.field private bP:Lcom/kwad/components/core/internal/api/c;

.field private final mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/api/core/AbstrackKsSplashScreenAd;-><init>()V

    new-instance v0, Lcom/kwad/components/core/internal/api/c;

    invoke-direct {v0}, Lcom/kwad/components/core/internal/api/c;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->bP:Lcom/kwad/components/core/internal/api/c;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl$1;-><init>(Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->bJ:Lcom/kwad/sdk/core/h/b;

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->BO:Lcom/kwad/components/core/response/model/AdResultData;

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->BP:Lcom/kwad/sdk/api/KsScene;

    invoke-virtual {p2}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object p1

    const/4 p2, 0x0

    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {}, Lcom/kwad/components/ad/h/b;->fa()Lcom/kwad/components/ad/h/b;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/h/b;->a(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;)Lcom/kwad/components/core/internal/api/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->bP:Lcom/kwad/components/core/internal/api/c;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/internal/api/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->bP:Lcom/kwad/components/core/internal/api/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/internal/api/c;->a(Lcom/kwad/components/core/internal/api/b;)V

    return-void
.end method

.method public final ae()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final b(Lcom/kwad/components/core/internal/api/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->bP:Lcom/kwad/components/core/internal/api/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/internal/api/c;->b(Lcom/kwad/components/core/internal/api/b;)V

    return-void
.end method

.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public getECPM()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aJ(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method protected getFragment2(Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)Lcom/kwad/sdk/api/core/fragment/KsFragment;
    .locals 3
    .annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicApi;
    .end annotation

    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_SPLASH:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v2, "callShow"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    const-class v0, Lcom/kwad/components/ad/splashscreen/a/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/splashscreen/a/a;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->bJ:Lcom/kwad/sdk/core/h/b;

    invoke-virtual {v0, v1, v2, p1}, Lcom/kwad/components/ad/splashscreen/a/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/h/b;Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)Lcom/kwad/sdk/api/core/fragment/KsFragment;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method public getInteractionType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aI(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public getMaterialType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public getMediaExtraInfo()Ljava/util/Map;
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

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->llsid:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "llsid"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-object v0
.end method

.method public getView2(Landroid/content/Context;Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)Landroid/view/View;
    .locals 3

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->hasInitFinish()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_SPLASH:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v2, "callShow"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->bJ:Lcom/kwad/sdk/core/h/b;

    invoke-static {p1, v0, v1, v2, p2}, Lcom/kwad/components/ad/splashscreen/c;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;ZLcom/kwad/sdk/core/h/b;Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)Lcom/kwad/components/ad/splashscreen/c;

    move-result-object p1

    return-object p1

    :cond_1
    :goto_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public isAdEnable()Z
    .locals 2

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->kB()Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->BO:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->c(Lcom/kwad/components/core/response/model/AdResultData;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->kB()Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->BO:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->d(Lcom/kwad/components/core/response/model/AdResultData;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public isVideo()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->BO:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-virtual {v0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    return v0
.end method

.method public reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V

    return-void
.end method

.method public setBidEcpm(I)V
    .locals 4

    int-to-long v0, p1

    const-wide/16 v2, -0x1

    invoke-virtual {p0, v0, v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->setBidEcpm(JJ)V

    return-void
.end method

.method public setBidEcpm(JJ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-wide p1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/KsSplashScreenAdControl;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, p3, p4}, Lcom/kwad/sdk/core/report/a;->i(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    return-void
.end method

.method public showSplashMiniWindowIfNeeded(Landroid/content/Context;Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;Landroid/graphics/Rect;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method
