.class public final Lcom/kwad/components/ad/reward/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/internal/api/a;
.implements Lcom/kwad/sdk/api/KsRewardVideoAd;


# instance fields
.field private bP:Lcom/kwad/components/core/internal/api/c;

.field private final mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private final mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private oH:Lcom/kwad/components/core/i/d;

.field private oL:Lcom/kwad/components/ad/reward/e/g;

.field public rewardType:I


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/kwad/components/core/internal/api/c;

    invoke-direct {v0}, Lcom/kwad/components/core/internal/api/c;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/f;->bP:Lcom/kwad/components/core/internal/api/c;

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/components/ad/reward/f;->rewardType:I

    iput-object p1, p0, Lcom/kwad/components/ad/reward/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {}, Lcom/kwad/components/ad/h/b;->fa()Lcom/kwad/components/ad/h/b;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/h/b;->a(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/f;)Lcom/kwad/components/core/internal/api/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/f;->bP:Lcom/kwad/components/core/internal/api/c;

    return-object p0
.end method

.method private a(Landroid/app/Activity;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V
    .locals 8

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/f;->fz()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bK(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object p2, p0, Lcom/kwad/components/ad/reward/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/f;->oL:Lcom/kwad/components/ad/reward/e/g;

    invoke-static {p1, p2, v0, v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->launch(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V

    return-void

    :cond_0
    iget-object v3, p0, Lcom/kwad/components/ad/reward/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v5, p0, Lcom/kwad/components/ad/reward/f;->oL:Lcom/kwad/components/ad/reward/e/g;

    iget-object v6, p0, Lcom/kwad/components/ad/reward/f;->oH:Lcom/kwad/components/core/i/d;

    iget v7, p0, Lcom/kwad/components/ad/reward/f;->rewardType:I

    move-object v2, p1

    move-object v4, p2

    invoke-static/range {v2 .. v7}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->launch(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/api/KsVideoPlayConfig;Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;Lcom/kwad/components/core/i/d;I)V

    return-void
.end method

.method private fz()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->oL:Lcom/kwad/components/ad/reward/e/g;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/c/c;->a(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->extraClickReward:Z

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/internal/api/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->bP:Lcom/kwad/components/core/internal/api/c;

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

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->bP:Lcom/kwad/components/core/internal/api/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/internal/api/c;->b(Lcom/kwad/components/core/internal/api/b;)V

    return-void
.end method

.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final getECPM()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aJ(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public final getInteractionType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aI(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public final getMaterialType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

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

    iget-object v1, p0, Lcom/kwad/components/ad/reward/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->llsid:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "llsid"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-object v0
.end method

.method public final isAdEnable()Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zz()I

    move-result v0

    if-ltz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/core/video/j;->k(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    return v0
.end method

.method public final reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V

    return-void
.end method

.method public final setBidEcpm(I)V
    .locals 4

    int-to-long v0, p1

    const-wide/16 v2, -0x1

    invoke-virtual {p0, v0, v1, v2, v3}, Lcom/kwad/components/ad/reward/f;->setBidEcpm(JJ)V

    return-void
.end method

.method public final setBidEcpm(JJ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-wide p1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    iget-object p1, p0, Lcom/kwad/components/ad/reward/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, p3, p4}, Lcom/kwad/sdk/core/report/a;->i(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    return-void
.end method

.method public final setInnerAdInteractionListener(Lcom/kwad/sdk/api/KsInnerAd$KsInnerAdInteractionListener;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/i/d;

    invoke-direct {v0, p1}, Lcom/kwad/components/core/i/d;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/f;->oH:Lcom/kwad/components/core/i/d;

    return-void
.end method

.method public final setRewardAdInteractionListener(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->oL:Lcom/kwad/components/ad/reward/e/g;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/f$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/f$1;-><init>(Lcom/kwad/components/ad/reward/f;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/f;->oL:Lcom/kwad/components/ad/reward/e/g;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/f;->oL:Lcom/kwad/components/ad/reward/e/g;

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/e/g;->b(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V

    return-void
.end method

.method public final setRewardPlayAgainInteractionListener(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V
    .locals 0

    return-void
.end method

.method public final showRewardVideoAd(Landroid/app/Activity;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V
    .locals 6

    const-string v0, "KsRewardVideoAdControl"

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v1, "show"

    const-string v2, "reward"

    invoke-static {v2, v1}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x1

    iget-object v4, p0, Lcom/kwad/components/ad/reward/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v3, v4}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLcom/kwad/sdk/core/response/model/AdTemplate;)V

    sget-object v3, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v4, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v5, "callShow"

    invoke-virtual {v3, v4, v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/f;->isAdEnable()Z

    move-result v3

    if-nez v3, :cond_1

    const-string p1, "isAdEnable is false"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v2, v1}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    if-nez p2, :cond_2

    new-instance p2, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    invoke-direct {p2}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;-><init>()V

    invoke-virtual {p2}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->build()Lcom/kwad/sdk/api/KsVideoPlayConfig;

    move-result-object p2

    :cond_2
    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/f;->a(Landroid/app/Activity;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V

    return-void

    :cond_3
    :goto_0
    const-string p1, "showRewardVideoAd error, activity is null or finished"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
