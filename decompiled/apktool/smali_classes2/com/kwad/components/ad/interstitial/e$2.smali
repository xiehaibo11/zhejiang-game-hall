.class final Lcom/kwad/components/ad/interstitial/e$2;
.super Lcom/kwad/components/core/p/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/e;->loadInterstitialAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic dU:Lcom/kwad/sdk/internal/api/SceneImpl;

.field final synthetic hC:Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;

.field final synthetic hD:J


# direct methods
.method constructor <init>(Lcom/kwad/sdk/internal/api/SceneImpl;Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;J)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/e$2;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/e$2;->hC:Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;

    iput-wide p3, p0, Lcom/kwad/components/ad/interstitial/e$2;->hD:J

    invoke-direct {p0}, Lcom/kwad/components/core/p/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/response/model/AdResultData;Z)V
    .locals 11

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    const-string v2, "onInterstitialAdCacheFailed"

    const-string v3, "insertAd_"

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
    invoke-virtual {p0, p2, p1}, Lcom/kwad/components/ad/interstitial/e$2;->onError(ILjava/lang/String;)V

    invoke-static {v3, v2}, Lcom/kwad/sdk/utils/i;->am(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    new-instance v1, Lcom/kwad/components/ad/interstitial/e$2$2;

    invoke-direct {v1, p0, v0}, Lcom/kwad/components/ad/interstitial/e$2$2;-><init>(Lcom/kwad/components/ad/interstitial/e$2;Ljava/util/List;)V

    invoke-static {v1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->cL()Lcom/kwad/components/ad/interstitial/monitor/b;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v5, p0, Lcom/kwad/components/ad/interstitial/e$2;->hD:J

    invoke-static {v4, v5, v6, p2}, Lcom/kwad/components/ad/interstitial/monitor/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;JZ)V

    sget-object v4, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v5, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_INTERSTITIAL:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v6, "dataReady"

    invoke-virtual {v4, v5, v6}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    new-instance v6, Ljava/util/ArrayList;

    invoke-direct {v6}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v7

    :cond_2
    :goto_1
    invoke-interface {v7}, Ljava/util/Iterator;->hasNext()Z

    move-result v8

    if-eqz v8, :cond_5

    invoke-interface {v7}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v8, :cond_2

    iget-object v9, v8, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-nez v9, :cond_3

    iget-object v9, p0, Lcom/kwad/components/ad/interstitial/e$2;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-object v9, v8, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    :cond_3
    invoke-static {v8}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v9

    invoke-static {v9}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_4

    invoke-static {v8}, Lcom/kwad/components/ad/interstitial/monitor/a;->h(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v9

    if-eqz v9, :cond_2

    new-instance v9, Lcom/kwad/components/ad/interstitial/b;

    iget-object v10, p0, Lcom/kwad/components/ad/interstitial/e$2;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {v9, v10, v8}, Lcom/kwad/components/ad/interstitial/b;-><init>(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_2

    :cond_4
    new-instance v9, Lcom/kwad/components/ad/interstitial/b;

    iget-object v10, p0, Lcom/kwad/components/ad/interstitial/e$2;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {v9, v10, v8}, Lcom/kwad/components/ad/interstitial/b;-><init>(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :goto_2
    invoke-interface {v6, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_5
    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v7

    if-nez v7, :cond_7

    sget-object p2, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget p2, p2, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object v0, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_6

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    goto :goto_3

    :cond_6
    iget-object p1, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    :goto_3
    invoke-virtual {p0, p2, p1}, Lcom/kwad/components/ad/interstitial/e$2;->onError(ILjava/lang/String;)V

    invoke-static {v3, v2}, Lcom/kwad/sdk/utils/i;->am(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_7
    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->cL()Lcom/kwad/components/ad/interstitial/monitor/b;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, v4, v5, p2}, Lcom/kwad/components/ad/interstitial/monitor/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;JZ)V

    new-instance p1, Lcom/kwad/components/ad/interstitial/e$2$3;

    invoke-direct {p1, p0, v6}, Lcom/kwad/components/ad/interstitial/e$2$3;-><init>(Lcom/kwad/components/ad/interstitial/e$2;Ljava/util/List;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onError(ILjava/lang/String;)V
    .locals 2

    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->cL()Lcom/kwad/components/ad/interstitial/monitor/b;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/e$2;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v0

    invoke-static {p1, p2, v0, v1}, Lcom/kwad/components/ad/interstitial/monitor/b;->a(ILjava/lang/String;J)V

    new-instance v0, Lcom/kwad/components/ad/interstitial/e$2$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/components/ad/interstitial/e$2$1;-><init>(Lcom/kwad/components/ad/interstitial/e$2;ILjava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
