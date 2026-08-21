.class public final Lcom/kwad/components/ad/splashscreen/h;
.super Lcom/kwad/sdk/mvp/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/splashscreen/h$a;
    }
.end annotation


# instance fields
.field private BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

.field public Cd:Lcom/kwad/components/ad/splashscreen/e/a;

.field public Ce:Lcom/kwad/sdk/core/h/a;

.field private Cf:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/splashscreen/g;",
            ">;"
        }
    .end annotation
.end field

.field private Cg:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/splashscreen/f;",
            ">;"
        }
    .end annotation
.end field

.field private Ch:Z

.field public Ci:Z

.field public Cj:Z

.field public Ck:I

.field public Cl:I

.field public Cm:J

.field public Cn:J

.field public Co:J

.field public Cp:J

.field public Cq:J

.field public Cr:J

.field public Cs:J

.field public isWebTimeout:Z

.field public mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

.field public mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field public mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field public mTimerHelper:Lcom/kwad/sdk/utils/bi;

.field public mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/a;-><init>()V

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Cf:Ljava/util/List;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Cg:Ljava/util/List;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Ch:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Ci:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Cj:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/h;->isWebTimeout:Z

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/h;)Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/h;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    return-object p0
.end method

.method private kJ()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/h;->kK()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Cf:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/splashscreen/g;

    invoke-interface {v1}, Lcom/kwad/components/ad/splashscreen/g;->kD()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private kK()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v2, v2, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/a;->sb()Lcom/kwad/components/core/webview/b/d/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/components/core/webview/b/d/a;->sc()Ljava/util/List;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setElementTypes(Ljava/util/List;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-eqz v2, :cond_0

    invoke-virtual {v2}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v2

    goto :goto_0

    :cond_0
    const-wide/16 v2, -0x1

    :goto_0
    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setShowEndTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget-boolean v2, p0, Lcom/kwad/components/ad/splashscreen/h;->Cj:Z

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setRotateComposeTimeout(Z)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->cT(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setTkDefaultTimeout(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget v2, p0, Lcom/kwad/components/ad/splashscreen/h;->Ck:I

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setSoSource(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/h;->Cm:J

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setSoLoadTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget v2, p0, Lcom/kwad/components/ad/splashscreen/h;->Cl:I

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setOfflineSource(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/h;->Cn:J

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setOfflineLoadTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/h;->Co:J

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setTkFileLoadTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/h;->Cp:J

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setTkInitTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/h;->Cq:J

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setTkRenderTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/h;->Cr:J

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setNativeLoadTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget-boolean v2, p0, Lcom/kwad/components/ad/splashscreen/h;->isWebTimeout:Z

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setWebTimeout(Z)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    iget-wide v2, p0, Lcom/kwad/components/ad/splashscreen/h;->Cs:J

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setWebLoadTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->de(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setInteractiveStyle(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->df(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setInteractivityDefaultStyle(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->p(Lorg/json/JSONObject;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/a;->sb()Lcom/kwad/components/core/webview/b/d/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/d/a;->sd()V

    return-void
.end method

.method private kL()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Cg:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/splashscreen/f;

    invoke-interface {v1}, Lcom/kwad/components/ad/splashscreen/f;->kz()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public static m(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->fullScreenClickSwitch:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static o(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->cK(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method public final S(Landroid/content/Context;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPvReported:Z

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/local/a;->T(Landroid/content/Context;)V

    invoke-static {}, Lcom/kwad/components/core/t/b;->qj()Lcom/kwad/components/core/t/b;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1, v1}, Lcom/kwad/components/core/t/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    sget-object p1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_SPLASH:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v1, "adShowSuccess"

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/h;->kF()V

    :cond_0
    return-void
.end method

.method public final Y(I)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Cf:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/splashscreen/g;

    invoke-interface {v1, p1}, Lcom/kwad/components/ad/splashscreen/g;->X(I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(ILandroid/content/Context;IILcom/kwad/components/ad/splashscreen/h$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    invoke-direct {v0, p2}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, p2}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, p4}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    const/4 p4, 0x0

    invoke-virtual {p2, p4}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, p3}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance p2, Lcom/kwad/components/ad/splashscreen/h$1;

    invoke-direct {p2, p0, p3, p5}, Lcom/kwad/components/ad/splashscreen/h$1;-><init>(Lcom/kwad/components/ad/splashscreen/h;ILcom/kwad/components/ad/splashscreen/h$a;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/splashscreen/f;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Cg:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/splashscreen/g;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Cf:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/splashscreen/f;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Cg:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/splashscreen/g;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Cf:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final c(ILandroid/content/Context;II)V
    .locals 6

    const/4 v5, 0x0

    move-object v0, p0

    move v1, p1

    move-object v2, p2

    move v3, p3

    move v4, p4

    invoke-virtual/range {v0 .. v5}, Lcom/kwad/components/ad/splashscreen/h;->a(ILandroid/content/Context;IILcom/kwad/components/ad/splashscreen/h$a;)V

    return-void
.end method

.method public final g(ILjava/lang/String;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/h;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    invoke-interface {p1, v0, p2}, Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;->onAdShowError(ILjava/lang/String;)V

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, v0, p2}, Lcom/kwad/components/ad/splashscreen/monitor/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILjava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/h;->kJ()V

    return-void
.end method

.method public final kE()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;->onAdClicked()V

    :cond_0
    return-void
.end method

.method public final kF()V
    .locals 5

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v3, v3, Lcom/kwad/sdk/core/response/model/AdTemplate;->showStartTime:J

    sub-long/2addr v1, v3

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/a;->e(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/b;->kO()V

    invoke-static {}, Lcom/kwad/sdk/a/a/c;->yb()Lcom/kwad/sdk/a/a/c;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/a/a/c;->bc(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->startTiming()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;->onAdShowStart()V

    :cond_1
    return-void
.end method

.method public final kG()V
    .locals 3

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Ch:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Ch:Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/h;->o(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/h;->kL()V

    goto :goto_1

    :cond_2
    :goto_0
    new-instance v0, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/z$a;->duration:J

    :cond_3
    new-instance v1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v2, 0xe

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->ch(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    const/16 v2, 0x16

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->cm(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/report/z$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    if-eqz v0, :cond_4

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;->onAdShowEnd()V

    :cond_4
    :goto_1
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/h;->kJ()V

    return-void
.end method

.method public final kH()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;->onAdShowEnd()V

    :cond_0
    return-void
.end method

.method public final kI()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;->onSkippedAd()V

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/h;->kJ()V

    return-void
.end method

.method public final kM()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/h$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/h$2;-><init>(Lcom/kwad/components/ad/splashscreen/h;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final p(Lcom/kwad/sdk/core/response/model/AdInfo;)Landroid/view/ViewGroup;
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/splashscreen/b/a;->Cz:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/d;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    return-object p1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/f/c;->v(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_1

    sget v1, Lcom/kwad/sdk/R$id;->ksad_splash_right_top_view_stub:I

    goto :goto_0

    :cond_1
    sget v1, Lcom/kwad/sdk/R$id;->ksad_splash_left_top_view_stub:I

    :goto_0
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewStub;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/view/ViewStub;->inflate()Landroid/view/View;

    move-result-object p1

    :goto_1
    check-cast p1, Landroid/view/ViewGroup;

    goto :goto_3

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/f/c;->v(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_3

    sget p1, Lcom/kwad/sdk/R$id;->ksad_splash_right_top_root:I

    goto :goto_2

    :cond_3
    sget p1, Lcom/kwad/sdk/R$id;->ksad_splash_left_top_root:I

    :goto_2
    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object p1

    goto :goto_1

    :goto_3
    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->setVisibility(I)V

    return-object p1
.end method

.method public final release()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/e/a;->release()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/kwad/sdk/core/h/a;->release()V

    :cond_1
    return-void
.end method

.method public final setSplashScreenAdListener(Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/h;->BR:Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    return-void
.end method
