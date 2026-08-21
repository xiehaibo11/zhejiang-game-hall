.class final Lcom/kwad/components/ad/f/c$1;
.super Lcom/kwad/components/core/p/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/c;->loadNativeAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic dU:Lcom/kwad/sdk/internal/api/SceneImpl;

.field final synthetic mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;Lcom/kwad/sdk/internal/api/SceneImpl;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/c$1;->mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;

    iput-object p2, p0, Lcom/kwad/components/ad/f/c$1;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {p0}, Lcom/kwad/components/core/p/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 4

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_NATIVE:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v3, "dataReady"

    invoke-virtual {v1, v2, v3}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v1, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/f/c$1;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-object v2, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    new-instance v2, Lcom/kwad/components/ad/f/d;

    invoke-direct {v2, v1}, Lcom/kwad/components/ad/f/d;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    new-instance p1, Lcom/kwad/components/ad/f/c$1$2;

    invoke-direct {p1, p0, v0}, Lcom/kwad/components/ad/f/c$1$2;-><init>(Lcom/kwad/components/ad/f/c$1;Ljava/util/List;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onError(ILjava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/f/c$1$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/components/ad/f/c$1$1;-><init>(Lcom/kwad/components/ad/f/c$1;ILjava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
