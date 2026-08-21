.class public final Lcom/kwad/components/ad/feed/c;
.super Lcom/kwad/sdk/api/core/AbstractKsFeedAd;

# interfaces
.implements Lcom/kwad/components/core/internal/api/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/feed/c$a;
    }
.end annotation


# instance fields
.field private bJ:Lcom/kwad/sdk/core/h/b;

.field private bP:Lcom/kwad/components/core/internal/api/c;

.field private dG:Lcom/kwad/sdk/api/KsFeedAd$AdInteractionListener;

.field private dH:Lcom/kwad/components/core/widget/b;

.field private dI:Z

.field private final dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

.field private final mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private final mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/api/core/AbstractKsFeedAd;-><init>()V

    new-instance v0, Lcom/kwad/components/core/internal/api/c;

    invoke-direct {v0}, Lcom/kwad/components/core/internal/api/c;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/feed/c;->bP:Lcom/kwad/components/core/internal/api/c;

    new-instance v0, Lcom/kwad/components/ad/feed/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/feed/c$1;-><init>(Lcom/kwad/components/ad/feed/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/feed/c;->bJ:Lcom/kwad/sdk/core/h/b;

    iput-object p1, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v0, 0x1

    iput v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/feed/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iput-boolean p2, p0, Lcom/kwad/components/ad/feed/c;->dI:Z

    new-instance p1, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    invoke-direct {p1}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-static {}, Lcom/kwad/components/ad/h/b;->fa()Lcom/kwad/components/ad/h/b;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/h/b;->a(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method

.method private E(Landroid/content/Context;)Lcom/kwad/components/core/widget/b;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")",
            "Lcom/kwad/components/core/widget/b<",
            "*>;"
        }
    .end annotation

    iget-boolean v0, p0, Lcom/kwad/components/ad/feed/c;->dI:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bw(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    :try_start_0
    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/feed/b/m;

    invoke-direct {v0, p1}, Lcom/kwad/components/ad/feed/b/m;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v1}, Lcom/kwad/sdk/internal/api/SceneImpl;->getWidth()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/b/m;->setWidth(I)V

    iget-object v1, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/b/m;->setVideoPlayConfig(Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->type:I

    invoke-static {v1}, Lcom/kwad/components/model/FeedType;->fromInt(I)Lcom/kwad/components/model/FeedType;

    move-result-object v1

    invoke-static {p1, v1, v0}, Lcom/kwad/components/ad/feed/b;->a(Landroid/content/Context;Lcom/kwad/components/model/FeedType;I)Lcom/kwad/components/core/widget/b;

    move-result-object v0

    :goto_0
    if-eqz v0, :cond_1

    const/high16 v1, 0x41800000    # 16.0f

    invoke-static {p1, v1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/widget/b;->setMargin(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->bJ:Lcom/kwad/sdk/core/h/b;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/widget/b;->setPageExitListener(Lcom/kwad/sdk/core/h/b;)V

    :cond_1
    return-object v0
.end method

.method static synthetic a(Lcom/kwad/components/ad/feed/c;)Lcom/kwad/components/core/internal/api/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/c;->bP:Lcom/kwad/components/core/internal/api/c;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/feed/c;Lcom/kwad/components/core/widget/b;Z)V
    .locals 0

    const/4 p2, 0x0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/feed/c;->a(Lcom/kwad/components/core/widget/b;Z)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/widget/b;Z)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/components/ad/feed/c$3;

    invoke-direct {v0, p0, p2, p1}, Lcom/kwad/components/ad/feed/c$3;-><init>(Lcom/kwad/components/ad/feed/c;ZLcom/kwad/components/core/widget/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/widget/b;->setInnerAdInteractionListener(Lcom/kwad/components/core/widget/b$a;)V

    return-void
.end method

.method private aQ()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "feed_ad_cache_"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v2, v2, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/diskcache/b/a;->remove(Ljava/lang/String;)Z

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/feed/c;)Lcom/kwad/components/core/widget/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/feed/c;)Lcom/kwad/sdk/api/KsFeedAd$AdInteractionListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/c;->dG:Lcom/kwad/sdk/api/KsFeedAd$AdInteractionListener;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/feed/c;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private isVideoSoundEnable()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    instance-of v1, v0, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    if-eqz v1, :cond_0

    check-cast v0, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoSoundValue()I

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->isVideoSoundEnable()Z

    move-result v0

    return v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    return v0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/feed/c$a;)V
    .locals 6

    const-string v0, "feed_preload_view"

    const-string v1, "show"

    const-string v2, "feed"

    invoke-static {v2, v1, v0}, Lcom/kwad/sdk/i/a;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {p0, v3}, Lcom/kwad/components/ad/feed/c;->E(Landroid/content/Context;)Lcom/kwad/components/core/widget/b;

    move-result-object v3

    iput-object v3, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    const/4 v4, 0x1

    if-eqz v3, :cond_2

    instance-of v5, v3, Lcom/kwad/components/ad/feed/b/m;

    if-eqz v5, :cond_0

    check-cast v3, Lcom/kwad/components/ad/feed/b/m;

    new-instance v4, Lcom/kwad/components/ad/feed/c$2;

    invoke-direct {v4, p0, p1}, Lcom/kwad/components/ad/feed/c$2;-><init>(Lcom/kwad/components/ad/feed/c;Lcom/kwad/components/ad/feed/c$a;)V

    invoke-virtual {v3, v4}, Lcom/kwad/components/ad/feed/b/m;->setPreloadListener(Lcom/kwad/components/ad/feed/b/m$a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v3, p1}, Lcom/kwad/components/ad/feed/b/m;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_0

    :cond_0
    iget-object v5, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v3, v5}, Lcom/kwad/components/core/widget/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v3, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    instance-of v5, v3, Lcom/kwad/components/ad/feed/b/c;

    if-eqz v5, :cond_1

    check-cast v3, Lcom/kwad/components/ad/feed/b/c;

    iget-object v5, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-virtual {v3, v5}, Lcom/kwad/components/ad/feed/b/c;->a(Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V

    :cond_1
    iget-object v3, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    invoke-direct {p0, v3, v4}, Lcom/kwad/components/ad/feed/c;->a(Lcom/kwad/components/core/widget/b;Z)V

    :cond_2
    const-string v3, ""

    invoke-interface {p1, v4, v3}, Lcom/kwad/components/ad/feed/c$a;->c(ILjava/lang/String;)V

    :goto_0
    invoke-static {v2, v1, v0}, Lcom/kwad/sdk/i/a;->f(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Lcom/kwad/components/core/internal/api/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->bP:Lcom/kwad/components/core/internal/api/c;

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

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->bP:Lcom/kwad/components/core/internal/api/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/internal/api/c;->b(Lcom/kwad/components/core/internal/api/b;)V

    return-void
.end method

.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final getECPM()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aJ(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public final getFeedView2(Landroid/content/Context;)Landroid/view/View;
    .locals 6

    const-string v0, "show"

    const-string v1, "feed"

    const/4 v2, 0x0

    if-eqz p1, :cond_7

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/KsAdSDKImpl;->hasInitFinish()Z

    move-result v3

    if-nez v3, :cond_0

    goto/16 :goto_1

    :cond_0
    :try_start_0
    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v3, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v4, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FEED:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v5, "callShow"

    invoke-virtual {v3, v4, v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    iget-object v3, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    if-eqz v3, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/b;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    instance-of p1, p1, Landroid/view/ViewGroup;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/b;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iget-object v3, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    invoke-virtual {p1, v3}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_1
    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    return-object p1

    :cond_2
    invoke-direct {p0}, Lcom/kwad/components/ad/feed/c;->aQ()V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/feed/c;->E(Landroid/content/Context;)Lcom/kwad/components/core/widget/b;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    if-nez p1, :cond_3

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    return-object v2

    :cond_3
    iget-object v3, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v3}, Lcom/kwad/components/core/widget/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    instance-of p1, p1, Lcom/kwad/components/ad/feed/b/c;

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    check-cast p1, Lcom/kwad/components/ad/feed/b/c;

    iget-object v3, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-virtual {p1, v3}, Lcom/kwad/components/ad/feed/b/c;->a(Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V

    :cond_4
    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    instance-of p1, p1, Lcom/kwad/components/ad/feed/b/m;

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    const/4 v3, 0x0

    invoke-direct {p0, p1, v3}, Lcom/kwad/components/ad/feed/c;->a(Lcom/kwad/components/core/widget/b;Z)V

    goto :goto_0

    :cond_5
    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    const/4 v3, 0x1

    invoke-direct {p0, p1, v3}, Lcom/kwad/components/ad/feed/c;->a(Lcom/kwad/components/core/widget/b;Z)V

    :goto_0
    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getIsExternal()Z

    move-result v0

    if-eqz v0, :cond_6

    invoke-static {p1}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    return-object v2

    :cond_6
    throw p1

    :cond_7
    :goto_1
    return-object v2
.end method

.method public final getInteractionType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aI(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public final getMaterialType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

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

    iget-object v1, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->llsid:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "llsid"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-object v0
.end method

.method public final reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V

    return-void
.end method

.method public final setAdInteractionListener(Lcom/kwad/sdk/api/KsFeedAd$AdInteractionListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/c;->dG:Lcom/kwad/sdk/api/KsFeedAd$AdInteractionListener;

    return-void
.end method

.method public final setBidEcpm(I)V
    .locals 4

    int-to-long v0, p1

    const-wide/16 v2, -0x1

    invoke-virtual {p0, v0, v1, v2, v3}, Lcom/kwad/components/ad/feed/c;->setBidEcpm(JJ)V

    return-void
.end method

.method public final setBidEcpm(JJ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-wide p1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, p3, p4}, Lcom/kwad/sdk/core/report/a;->i(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    return-void
.end method

.method public final setVideoPlayConfig(Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V
    .locals 2

    instance-of v0, p1, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    if-eqz v0, :cond_4

    check-cast p1, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    invoke-virtual {p1}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoSoundValue()I

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-virtual {p1}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->isVideoSoundEnable()Z

    move-result v1

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->setVideoSoundEnable(Z)V

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoAutoPlayType()I

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-virtual {p1}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoAutoPlayType()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->setVideoAutoPlayType(I)V

    :cond_1
    invoke-virtual {p1}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getDataFlowAutoStartValue()I

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-virtual {p1}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->isDataFlowAutoStart()Z

    move-result p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->setDataFlowAutoStart(Z)V

    goto :goto_0

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zA()Z

    move-result v0

    invoke-interface {p1, v0}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->setDataFlowAutoStart(Z)V

    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    instance-of v0, p1, Lcom/kwad/components/ad/feed/b/m;

    if-eqz v0, :cond_3

    check-cast p1, Lcom/kwad/components/ad/feed/b/m;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/feed/b/m;->setVideoPlayConfig(Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V

    :cond_3
    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dH:Lcom/kwad/components/core/widget/b;

    instance-of v0, p1, Lcom/kwad/components/ad/feed/b/c;

    if-eqz v0, :cond_4

    check-cast p1, Lcom/kwad/components/ad/feed/b/c;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/feed/b/c;->setVideoPlayConfig(Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V

    :cond_4
    invoke-direct {p0}, Lcom/kwad/components/ad/feed/c;->isVideoSoundEnable()Z

    move-result p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v0, 0x2

    :goto_1
    iput v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    return-void

    :cond_5
    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v0, 0x1

    goto :goto_1
.end method

.method public final setVideoSoundEnable(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->setVideoSoundEnable(Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->isVideoSoundEnable()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v0, 0x2

    :goto_0
    iput v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/feed/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v0, 0x1

    goto :goto_0
.end method
