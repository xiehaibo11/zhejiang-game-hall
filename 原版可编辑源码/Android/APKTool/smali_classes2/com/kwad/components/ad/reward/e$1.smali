.class final Lcom/kwad/components/ad/reward/e$1;
.super Lcom/kwad/components/core/p/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/e;->loadRewardVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic dU:Lcom/kwad/sdk/internal/api/SceneImpl;

.field final synthetic fS:J

.field final synthetic oI:Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/internal/api/SceneImpl;Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;J)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/e$1;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/e$1;->oI:Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;

    iput-wide p3, p0, Lcom/kwad/components/ad/reward/e$1;->fS:J

    invoke-direct {p0}, Lcom/kwad/components/core/p/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/response/model/AdResultData;Z)V
    .locals 10

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getProceedTemplateList()Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/e$1;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-static {v1, v0}, Lcom/kwad/components/ad/reward/e;->b(Lcom/kwad/sdk/internal/api/SceneImpl;Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    const-string v2, "onRewardVideoAdCacheFailed"

    const-string v3, "rewardAd_"

    if-eqz v1, :cond_1

    sget-object p2, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget p2, p2, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object v0, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object p1, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    :goto_0
    invoke-virtual {p0, p2, p1}, Lcom/kwad/components/ad/reward/e$1;->onError(ILjava/lang/String;)V

    invoke-static {v3, v2}, Lcom/kwad/sdk/utils/i;->am(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v7, Lcom/kwad/components/ad/reward/f;

    invoke-direct {v7, v6}, Lcom/kwad/components/ad/reward/f;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-interface {p1, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-virtual {v6, v4, v5}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setLoadDataTime(J)V

    invoke-virtual {v6, p2}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setLoadFromCache(Z)V

    goto :goto_1

    :cond_2
    const/4 p2, 0x0

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v4

    iget-wide v5, p0, Lcom/kwad/components/ad/reward/e$1;->fS:J

    const/4 v7, 0x1

    invoke-static {v7, v1, v4, v5, v6}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLcom/kwad/sdk/core/response/model/AdTemplate;IJ)V

    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v4, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v5, "dataReady"

    invoke-virtual {v1, v4, v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    new-instance v1, Lcom/kwad/components/ad/reward/e$1$2;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/ad/reward/e$1$2;-><init>(Lcom/kwad/components/ad/reward/e$1;Ljava/util/List;)V

    invoke-static {v1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    move v4, p2

    :cond_3
    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_6

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/kwad/sdk/api/KsRewardVideoAd;

    move-object v6, v5

    check-cast v6, Lcom/kwad/components/ad/reward/f;

    invoke-virtual {v6}, Lcom/kwad/components/ad/reward/f;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v6

    invoke-static {v6}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v8

    invoke-static {v8}, Lcom/kwad/sdk/core/response/b/a;->bK(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v9

    if-nez v9, :cond_5

    invoke-static {v8}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v9

    if-nez v9, :cond_5

    invoke-static {v8}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v8

    if-eqz v8, :cond_4

    goto :goto_3

    :cond_4
    invoke-static {v6, v7}, Lcom/kwad/components/ad/c/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)Z

    move-result v6

    if-eqz v6, :cond_3

    invoke-interface {v1, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_5
    :goto_3
    invoke-interface {v1, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    move v4, v7

    goto :goto_2

    :cond_6
    if-nez v4, :cond_7

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_7

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoV:Lcom/kwad/sdk/core/network/f;

    iget p1, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    sget-object p2, Lcom/kwad/sdk/core/network/f;->aoV:Lcom/kwad/sdk/core/network/f;

    iget-object p2, p2, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/ad/reward/e$1;->onError(ILjava/lang/String;)V

    invoke-static {v3, v2}, Lcom/kwad/sdk/utils/i;->am(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_7
    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p2

    iget-wide v2, p0, Lcom/kwad/components/ad/reward/e$1;->fS:J

    invoke-static {v7, p1, p2, v2, v3}, Lcom/kwad/components/ad/reward/monitor/a;->b(ZLcom/kwad/sdk/core/response/model/AdTemplate;IJ)V

    new-instance p1, Lcom/kwad/components/ad/reward/e$1$3;

    invoke-direct {p1, p0, v1}, Lcom/kwad/components/ad/reward/e$1$3;-><init>(Lcom/kwad/components/ad/reward/e$1;Ljava/util/List;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onError(ILjava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/e$1;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v0

    const/4 v2, 0x1

    invoke-static {v2, p1, p2, v0, v1}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZILjava/lang/String;J)V

    new-instance v0, Lcom/kwad/components/ad/reward/e$1$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/components/ad/reward/e$1$1;-><init>(Lcom/kwad/components/ad/reward/e$1;ILjava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
