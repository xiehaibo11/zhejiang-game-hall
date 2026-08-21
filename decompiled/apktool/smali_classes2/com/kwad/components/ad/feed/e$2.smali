.class final Lcom/kwad/components/ad/feed/e$2;
.super Lcom/kwad/components/core/p/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/e;->a(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic dT:Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;

.field final synthetic dU:Lcom/kwad/sdk/internal/api/SceneImpl;

.field final synthetic dV:Z

.field final synthetic dW:J


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;Lcom/kwad/sdk/internal/api/SceneImpl;ZJ)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/e$2;->dT:Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;

    iput-object p2, p0, Lcom/kwad/components/ad/feed/e$2;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-boolean p3, p0, Lcom/kwad/components/ad/feed/e$2;->dV:Z

    iput-wide p4, p0, Lcom/kwad/components/ad/feed/e$2;->dW:J

    invoke-direct {p0}, Lcom/kwad/components/core/p/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 7

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "loadFeedAd onSuccess:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "KsAdFeedLoadManager"

    invoke-static {v3, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    const/4 v1, 0x0

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v4, :cond_0

    invoke-static {v4}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v5

    invoke-static {v4}, Lcom/kwad/components/model/FeedType;->checkTypeValid(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v6

    if-nez v6, :cond_1

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v6, 0x0

    invoke-static {v5}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v1, v6

    const/4 v5, 0x1

    iget v4, v4, Lcom/kwad/sdk/core/response/model/AdTemplate;->type:I

    invoke-static {v4}, Lcom/kwad/components/model/FeedType;->fromInt(I)Lcom/kwad/components/model/FeedType;

    move-result-object v4

    aput-object v4, v1, v5

    const-string v4, "(\u6a21\u677f\u4e0d\u5339\u914dmaterialType:%s_feedType:%s)"

    invoke-static {v4, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_1
    iget-object v6, p0, Lcom/kwad/components/ad/feed/e$2;->dU:Lcom/kwad/sdk/internal/api/SceneImpl;

    iput-object v6, v4, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-static {v5}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    invoke-static {v4}, Lcom/kwad/components/ad/feed/monitor/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;)Landroid/util/Pair;

    move-result-object v5

    iget-object v6, v5, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v6, Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iget-object v5, v5, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v5, Ljava/lang/String;

    invoke-static {v6, v5}, Lcom/kwad/components/ad/feed/monitor/b;->e(ILjava/lang/String;)V

    :cond_2
    new-instance v5, Lcom/kwad/components/ad/feed/c;

    iget-boolean v6, p0, Lcom/kwad/components/ad/feed/e$2;->dV:Z

    invoke-direct {v5, v4, v6}, Lcom/kwad/components/ad/feed/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V

    invoke-interface {v0, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_3
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    invoke-static {p1}, Lcom/kwad/components/ad/feed/monitor/b;->t(I)V

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_4

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget p1, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object v2, v2, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/feed/monitor/b;->d(ILjava/lang/String;)V

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget p1, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object v2, v2, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/kwad/components/ad/feed/e$2;->onError(ILjava/lang/String;)V

    const-string p1, "loadFeedAd onError"

    invoke-static {v3, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_4
    sget-object p1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FEED:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v2, "dataReady"

    invoke-virtual {p1, v1, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->ct(I)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    new-instance p1, Lcom/kwad/components/ad/feed/e$2$2;

    invoke-direct {p1, p0, v0}, Lcom/kwad/components/ad/feed/e$2$2;-><init>(Lcom/kwad/components/ad/feed/e$2;Ljava/util/List;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onError(ILjava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/feed/e$2$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/components/ad/feed/e$2$1;-><init>(Lcom/kwad/components/ad/feed/e$2;ILjava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
