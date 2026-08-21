.class public final Lcom/kwad/components/ad/reward/presenter/c/a;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private cr:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private volatile cs:Z

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mHandler:Landroid/os/Handler;

.field private mPlayTime:J

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private sr:Lcom/kwad/components/core/video/l;

.field private ss:Lcom/kwad/components/core/video/l;

.field private final tS:Lcom/kwad/components/core/video/i;

.field private tT:Z

.field private tU:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/core/video/i;

    invoke-direct {v0}, Lcom/kwad/components/core/video/i;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->tS:Lcom/kwad/components/core/video/i;

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mPlayTime:J

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mHandler:Landroid/os/Handler;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->tT:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->cs:Z

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/c/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/c/a$1;-><init>(Lcom/kwad/components/ad/reward/presenter/c/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->tU:Ljava/lang/Runnable;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/c/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/c/a$2;-><init>(Lcom/kwad/components/ad/reward/presenter/c/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->ss:Lcom/kwad/components/core/video/l;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/c/a$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/c/a$3;-><init>(Lcom/kwad/components/ad/reward/presenter/c/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/core/video/i;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->tS:Lcom/kwad/components/core/video/i;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/c/a;J)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/c/a;->c(J)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/c/a;Z)Z
    .locals 0

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->tT:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/c/a;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mPlayTime:J

    return-wide p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/c/a;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->cs:Z

    return p1
.end method

.method private c(J)V
    .locals 2

    long-to-float p1, p1

    const/high16 p2, 0x447a0000    # 1000.0f

    div-float/2addr p1, p2

    float-to-double p1, p1

    invoke-static {p1, p2}, Ljava/lang/Math;->ceil(D)D

    move-result-wide p1

    double-to-int p1, p1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->cr:Ljava/util/List;

    if-eqz p2, :cond_2

    invoke-interface {p2}, Ljava/util/List;->isEmpty()Z

    move-result p2

    if-eqz p2, :cond_0

    goto :goto_0

    :cond_0
    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->cr:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_1
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-lt p1, v1, :cond_1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    invoke-static {p2, p1, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->cr:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/c/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->tT:Z

    return p0
.end method

.method private checkExposure()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->callBackStrategyInfo:Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->impressionCheckMs:I

    int-to-long v0, v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-lez v2, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    const-wide/16 v4, 0x1388

    cmp-long v2, v2, v4

    if-lez v2, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mHandler:Landroid/os/Handler;

    new-instance v3, Lcom/kwad/components/ad/reward/presenter/c/a$4;

    invoke-direct {v3, p0}, Lcom/kwad/components/ad/reward/presenter/c/a$4;-><init>(Lcom/kwad/components/ad/reward/presenter/c/a;)V

    invoke-virtual {v2, v3, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/c/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->cs:Z

    return p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic j(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic m(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic n(Lcom/kwad/components/ad/reward/presenter/c/a;)Ljava/lang/Runnable;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->tU:Ljava/lang/Runnable;

    return-object p0
.end method

.method static synthetic o(Lcom/kwad/components/ad/reward/presenter/c/a;)Landroid/os/Handler;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mHandler:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic p(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bd(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->cr:Ljava/util/List;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->ss:Lcom/kwad/components/core/video/l;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    :goto_0
    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->sr:Lcom/kwad/components/core/video/l;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->sr:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mHandler:Landroid/os/Handler;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->tU:Ljava/lang/Runnable;

    const-wide/16 v2, 0x1388

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public final hE()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->po:Z

    if-nez v0, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/report/a;->h(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->tS:Lcom/kwad/components/core/video/i;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/i;->rc()V

    return-void
.end method

.method public final hX()V
    .locals 4

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->cs:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/model/EcOrderCardStyle;->createFromAdInfo(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/components/ad/reward/model/EcOrderCardStyle;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    if-eqz v0, :cond_0

    new-instance v2, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v2}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/EcOrderCardStyle;->getValue()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v2, Lcom/kwad/sdk/core/report/z$a;->asK:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/report/z$a;)Lcom/kwad/sdk/core/report/j;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPvReported:Z

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/c/a;->checkExposure()V

    :cond_1
    invoke-static {}, Lcom/kwad/components/core/t/b;->qj()Lcom/kwad/components/core/t/b;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3, v1}, Lcom/kwad/components/core/t/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/report/a;->g(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 8

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->sr:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->tS:Lcom/kwad/components/core/video/i;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/i;->re()Lcom/kwad/components/core/video/i$a;

    move-result-object v0

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v3, p0, Lcom/kwad/components/ad/reward/presenter/c/a;->mPlayTime:J

    invoke-virtual {v0}, Lcom/kwad/components/core/video/i$a;->rh()J

    move-result-wide v5

    invoke-virtual {v0}, Lcom/kwad/components/core/video/i$a;->rg()I

    move-result v7

    invoke-virtual/range {v1 .. v7}, Lcom/kwad/components/core/o/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;JJI)V

    return-void
.end method
