.class public final Lcom/kwad/components/core/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsLoadManager;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final getBidRequestToken(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;
    .locals 1

    const-class v0, Lcom/kwad/components/ad/b/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/b/a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/components/ad/b/a;->getBidRequestToken(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    const-string p1, ""

    return-object p1
.end method

.method public final getBidRequestTokenV2(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;
    .locals 1

    const-class v0, Lcom/kwad/components/ad/b/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/b/a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/components/ad/b/a;->getBidRequestTokenV2(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    const-string p1, ""

    return-object p1
.end method

.method public final loadConfigFeedAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V
    .locals 5

    const-string v0, "request"

    const-string v1, "feed"

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FEED:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v4, "loadRequest"

    invoke-virtual {v2, v3, v4}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsScene;->getAdNum()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->ct(I)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    const-class v2, Lcom/kwad/components/ad/b/c;

    invoke-static {v2}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/b/c;

    if-eqz v2, :cond_0

    new-instance v3, Lcom/kwad/components/core/b$4;

    invoke-direct {v3, p0, p2}, Lcom/kwad/components/core/b$4;-><init>(Lcom/kwad/components/core/b;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V

    invoke-interface {v2, p1, v3}, Lcom/kwad/components/ad/b/c;->loadConfigFeedAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    sget-object p1, Lcom/kwad/components/ad/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoR:Lcom/kwad/sdk/core/network/f;

    iget v0, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-interface {p2, v0, p1}, Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;->onError(ILjava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final loadDrawAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V
    .locals 4

    const-string v0, "request"

    const-string v1, "draw"

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    const-class v2, Lcom/kwad/components/ad/b/b;

    invoke-static {v2}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/b/b;

    if-eqz v2, :cond_0

    new-instance v3, Lcom/kwad/components/core/b$5;

    invoke-direct {v3, p0, p2}, Lcom/kwad/components/core/b$5;-><init>(Lcom/kwad/components/core/b;Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V

    invoke-interface {v2, p1, v3}, Lcom/kwad/components/ad/b/b;->loadDrawAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    sget-object p1, Lcom/kwad/components/ad/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoR:Lcom/kwad/sdk/core/network/f;

    iget v0, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-interface {p2, v0, p1}, Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;->onError(ILjava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final loadFeedAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V
    .locals 5

    const-string v0, "request"

    const-string v1, "feed"

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FEED:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v4, "loadRequest"

    invoke-virtual {v2, v3, v4}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsScene;->getAdNum()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->ct(I)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    const-class v2, Lcom/kwad/components/ad/b/c;

    invoke-static {v2}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/b/c;

    if-eqz v2, :cond_0

    new-instance v3, Lcom/kwad/components/core/b$3;

    invoke-direct {v3, p0, p2}, Lcom/kwad/components/core/b$3;-><init>(Lcom/kwad/components/core/b;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V

    invoke-interface {v2, p1, v3}, Lcom/kwad/components/ad/b/c;->loadFeedAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    sget-object p1, Lcom/kwad/components/ad/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoR:Lcom/kwad/sdk/core/network/f;

    iget v0, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-interface {p2, v0, p1}, Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;->onError(ILjava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final loadFullScreenVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;)V
    .locals 5

    const-string v0, "request"

    const-string v1, "fullscreen"

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FULLSCREEN:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v4, "loadRequest"

    invoke-virtual {v2, v3, v4}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    const-class v2, Lcom/kwad/components/ad/b/d;

    invoke-static {v2}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/b/d;

    if-eqz v2, :cond_0

    new-instance v3, Lcom/kwad/components/core/b$1;

    invoke-direct {v3, p0, p2}, Lcom/kwad/components/core/b$1;-><init>(Lcom/kwad/components/core/b;Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;)V

    invoke-interface {v2, p1, v3}, Lcom/kwad/components/ad/b/d;->loadFullScreenVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;)V

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    sget-object p1, Lcom/kwad/components/ad/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoR:Lcom/kwad/sdk/core/network/f;

    iget v0, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-interface {p2, v0, p1}, Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;->onError(ILjava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final loadInterstitialAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;)V
    .locals 5

    const-string v0, "request"

    const-string v1, "interstitial"

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_INTERSTITIAL:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v4, "loadRequest"

    invoke-virtual {v2, v3, v4}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    const-class v2, Lcom/kwad/components/ad/b/e;

    invoke-static {v2}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/b/e;

    if-eqz v2, :cond_0

    new-instance v3, Lcom/kwad/components/core/b$8;

    invoke-direct {v3, p0, p2}, Lcom/kwad/components/core/b$8;-><init>(Lcom/kwad/components/core/b;Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;)V

    invoke-interface {v2, p1, v3}, Lcom/kwad/components/ad/b/e;->loadInterstitialAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;)V

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    sget-object p1, Lcom/kwad/components/ad/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoR:Lcom/kwad/sdk/core/network/f;

    iget v0, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-interface {p2, v0, p1}, Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;->onError(ILjava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final loadNativeAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
    .locals 5

    const-string v0, "request"

    const-string v1, "native"

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_NATIVE:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v4, "loadRequest"

    invoke-virtual {v2, v3, v4}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsScene;->getAdNum()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->ct(I)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    const-class v2, Lcom/kwad/components/ad/b/f;

    invoke-static {v2}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/b/f;

    if-eqz v2, :cond_0

    new-instance v3, Lcom/kwad/components/core/b$6;

    invoke-direct {v3, p0, p2}, Lcom/kwad/components/core/b$6;-><init>(Lcom/kwad/components/core/b;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V

    invoke-interface {v2, p1, v3}, Lcom/kwad/components/ad/b/f;->loadNativeAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    sget-object p1, Lcom/kwad/components/ad/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoR:Lcom/kwad/sdk/core/network/f;

    iget v0, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-interface {p2, v0, p1}, Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;->onError(ILjava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final loadNativeAd(Ljava/lang/String;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
    .locals 3

    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_NATIVE:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v2, "loadRequest"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->be(Z)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    const-class v0, Lcom/kwad/components/ad/b/f;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/b/f;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/components/ad/b/f;->loadNativeAd(Ljava/lang/String;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V

    return-void

    :cond_0
    sget-object p1, Lcom/kwad/components/ad/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoR:Lcom/kwad/sdk/core/network/f;

    iget v0, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-interface {p2, v0, p1}, Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;->onError(ILjava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final loadRewardVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;)V
    .locals 5

    const-string v0, "request"

    const-string v1, "reward"

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_REWARD:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v4, "loadRequest"

    invoke-virtual {v2, v3, v4}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    const-class v2, Lcom/kwad/components/ad/b/g;

    invoke-static {v2}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/b/g;

    if-eqz v2, :cond_0

    new-instance v3, Lcom/kwad/components/core/b$2;

    invoke-direct {v3, p0, p2}, Lcom/kwad/components/core/b$2;-><init>(Lcom/kwad/components/core/b;Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;)V

    invoke-interface {v2, p1, v3}, Lcom/kwad/components/ad/b/g;->loadRewardVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;)V

    goto :goto_0

    :cond_0
    sget-object p1, Lcom/kwad/components/ad/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoR:Lcom/kwad/sdk/core/network/f;

    iget v2, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-interface {p2, v2, p1}, Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;->onError(ILjava/lang/String;)V

    :cond_1
    :goto_0
    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final loadSplashScreenAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;)V
    .locals 5

    const-string v0, "request"

    const-string v1, "splash"

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_SPLASH:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v4, "loadRequest"

    invoke-virtual {v2, v3, v4}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    const-class v2, Lcom/kwad/components/ad/b/h;

    invoke-static {v2}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/b/h;

    if-eqz v2, :cond_0

    new-instance v3, Lcom/kwad/components/core/b$7;

    invoke-direct {v3, p0, p2}, Lcom/kwad/components/core/b$7;-><init>(Lcom/kwad/components/core/b;Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;)V

    invoke-interface {v2, p1, v3}, Lcom/kwad/components/ad/b/h;->loadSplashScreenAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;)V

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    sget-object p1, Lcom/kwad/components/ad/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoR:Lcom/kwad/sdk/core/network/f;

    iget v0, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-interface {p2, v0, p1}, Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;->onError(ILjava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final showInstallDialog(Landroid/app/Activity;Lcom/kwad/sdk/api/KsExitInstallListener;)Z
    .locals 1

    const-class v0, Lcom/kwad/components/ad/b/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/b/a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/components/ad/b/a;->showInstallDialog(Landroid/app/Activity;Lcom/kwad/sdk/api/KsExitInstallListener;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method
