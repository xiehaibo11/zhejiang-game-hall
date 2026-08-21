.class public final Lcom/kwad/components/ad/reward/j;
.super Lcom/kwad/components/core/l/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/j$b;,
        Lcom/kwad/components/ad/reward/j$a;
    }
.end annotation


# instance fields
.field public fz:Z

.field public mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

.field public mAdRewardStepListener:Lcom/kwad/components/ad/reward/e/d;

.field public mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field public mCheckExposureResult:Z

.field private mHandler:Landroid/os/Handler;

.field public mPageEnterTime:J

.field public mReportExtData:Lorg/json/JSONObject;

.field private mRewardVerifyCalled:Z

.field public mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field public mScreenOrientation:I

.field public mTimerHelper:Lcom/kwad/sdk/utils/bi;

.field public mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

.field public oU:Z

.field public oV:Lcom/kwad/components/ad/reward/l/d;

.field public oW:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

.field public oX:Lcom/kwad/components/core/playable/a;

.field public oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

.field public oZ:Lcom/kwad/components/ad/reward/l;

.field public pA:Lcom/kwad/components/ad/reward/k/b/a;

.field public pB:Lcom/kwad/components/ad/reward/k/a/a;

.field public pC:I

.field private pD:I

.field public pE:J

.field public pF:J

.field public pG:Z

.field private pH:Z

.field private pI:Z

.field public pJ:Z

.field public pK:Z

.field public pL:Z

.field public pM:Lcom/kwad/components/ad/reward/LoadStrategy;

.field private pN:Lcom/kwad/components/ad/reward/RewardRenderResult;

.field private pO:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/reward/j$a;",
            ">;"
        }
    .end annotation
.end field

.field private pP:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/reward/j$b;",
            ">;"
        }
    .end annotation
.end field

.field private pQ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/i/a$a;",
            ">;"
        }
    .end annotation
.end field

.field public pa:Lcom/kwad/components/ad/k/a;

.field public pb:Lcom/kwad/components/ad/reward/g;

.field private final pc:Ljava/util/PriorityQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/PriorityQueue<",
            "Lcom/kwad/components/ad/reward/e/f;",
            ">;"
        }
    .end annotation
.end field

.field public final pd:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/reward/j/a;",
            ">;"
        }
    .end annotation
.end field

.field private final pe:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/reward/j/r;",
            ">;"
        }
    .end annotation
.end field

.field public pf:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/kwad/components/ad/reward/e/e;",
            ">;"
        }
    .end annotation
.end field

.field private pg:Lcom/kwad/components/core/webview/b/e/a;

.field private ph:Z

.field private pi:Z

.field public pj:Z

.field public pk:Z

.field public pl:Z

.field public pm:Z

.field private pn:Z

.field public po:Z

.field public pp:Z

.field public pq:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public pr:I

.field public ps:Z

.field public pt:Lcom/kwad/components/ad/reward/m/p;

.field public pu:Z

.field private pv:Lcom/kwad/components/core/playable/PlayableSource;

.field private pw:Z

.field private px:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/content/DialogInterface$OnDismissListener;",
            ">;"
        }
    .end annotation
.end field

.field public py:Lcom/kwad/components/ad/reward/e/m;

.field public pz:Z


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/l/b;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/components/core/l/b<",
            "*>;)V"
        }
    .end annotation

    invoke-direct {p0, p1}, Lcom/kwad/components/core/l/a;-><init>(Lcom/kwad/components/core/l/b;)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->oU:Z

    new-instance v0, Ljava/util/PriorityQueue;

    invoke-direct {v0}, Ljava/util/PriorityQueue;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j;->pc:Ljava/util/PriorityQueue;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j;->pd:Ljava/util/List;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j;->pe:Ljava/util/List;

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j;->pf:Ljava/util/Set;

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->ph:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pi:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pk:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pl:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pm:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pn:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->po:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->mRewardVerifyCalled:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pp:Z

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j;->pq:Ljava/util/List;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->mCheckExposureResult:Z

    iput p1, p0, Lcom/kwad/components/ad/reward/j;->pr:I

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->ps:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pu:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j;->pv:Lcom/kwad/components/core/playable/PlayableSource;

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pw:Z

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j;->px:Ljava/util/List;

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j;->mHandler:Landroid/os/Handler;

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pz:Z

    const/4 v0, 0x2

    iput v0, p0, Lcom/kwad/components/ad/reward/j;->pD:I

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pH:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pI:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pJ:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pK:Z

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pL:Z

    sget-object p1, Lcom/kwad/components/ad/reward/LoadStrategy;->FULL_TK:Lcom/kwad/components/ad/reward/LoadStrategy;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j;->pM:Lcom/kwad/components/ad/reward/LoadStrategy;

    new-instance p1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j;->pO:Ljava/util/List;

    new-instance p1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j;->pP:Ljava/util/List;

    new-instance p1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j;->pQ:Ljava/util/List;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j;->Lg:Ljava/util/List;

    new-instance v0, Lcom/kwad/components/ad/reward/j$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/j$1;-><init>(Lcom/kwad/components/ad/reward/j;)V

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static a(JLcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 2

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    invoke-static {v0, v1, p0, p1}, Ljava/lang/Math;->min(JJ)J

    move-result-wide p0

    return-wide p0
.end method

.method public static a(Ljava/util/List;J)Lcom/kwad/components/core/i/c;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/components/core/i/c;",
            ">;J)",
            "Lcom/kwad/components/core/i/c;"
        }
    .end annotation

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    const/4 v1, 0x0

    if-ltz v0, :cond_2

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/i/c;

    invoke-virtual {v0}, Lcom/kwad/components/core/i/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v2

    cmp-long v2, v2, p1

    if-nez v2, :cond_1

    return-object v0

    :cond_2
    :goto_0
    return-object v1
.end method

.method private a(ILcom/kwad/sdk/core/report/j;)V
    .locals 2

    if-nez p2, :cond_0

    new-instance p2, Lcom/kwad/sdk/core/report/j;

    invoke-direct {p2}, Lcom/kwad/sdk/core/report/j;-><init>()V

    :cond_0
    invoke-virtual {p2, p1}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    const/4 v1, 0x0

    invoke-static {p1, v1, v1, p2, v0}, Lcom/kwad/components/ad/reward/i/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    sget v0, Lcom/kwad/components/ad/reward/c/b;->STATUS_NONE:I

    invoke-virtual {p1, p2, v0}, Lcom/kwad/components/ad/reward/c/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    return-void
.end method

.method public static a(Landroid/app/Activity;Lcom/kwad/components/ad/reward/j;)V
    .locals 7

    const-string v0, "RewardCallerContext"

    const-string v1, "showExtraDialog"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->getPlayDuration()J

    move-result-wide v3

    new-instance v5, Lcom/kwad/components/ad/reward/j$2;

    invoke-direct {v5, p1}, Lcom/kwad/components/ad/reward/j$2;-><init>(Lcom/kwad/components/ad/reward/j;)V

    new-instance v6, Lcom/kwad/components/ad/reward/j$3;

    invoke-direct {v6, p1}, Lcom/kwad/components/ad/reward/j$3;-><init>(Lcom/kwad/components/ad/reward/j;)V

    move-object v1, p1

    move-object v2, p0

    invoke-static/range {v1 .. v6}, Lcom/kwad/components/ad/reward/j/a/b;->a(Lcom/kwad/components/ad/reward/j;Landroid/app/Activity;JLandroid/content/DialogInterface$OnDismissListener;Lcom/kwad/components/core/webview/b/e/c;)Lcom/kwad/components/ad/reward/j/a/b;

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/kwad/components/ad/reward/j;Landroid/view/ViewGroup;)V
    .locals 4

    iget-object v0, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    const-class v1, Lcom/kwad/components/core/offline/api/a/a;

    invoke-static {v1}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/offline/api/a/a;

    if-eqz v1, :cond_1

    invoke-interface {v1}, Lcom/kwad/components/core/offline/api/a/a;->hasLiveCompoReady()Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object v2, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aX(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v2

    const/16 v3, 0x8

    if-ne v2, v3, :cond_0

    const/4 v2, 0x1

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-interface {v1, p0, v2}, Lcom/kwad/components/core/offline/api/a/a;->getView(Landroid/content/Context;I)Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    move-result-object p0

    invoke-interface {p0}, Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;->getView()Landroid/view/View;

    move-result-object v2

    iput-object p0, p1, Lcom/kwad/components/ad/reward/j;->oW:Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;

    invoke-virtual {p2, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/sdk/KsAdSDKImpl;->getAppId()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bR(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, p0, p2, v0}, Lcom/kwad/components/core/offline/api/a/a;->getAdLivePlayModule(Lcom/kwad/components/offline/api/core/adlive/IAdLiveOfflineView;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;

    move-result-object p0

    iget-object p2, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p2, p1, p0}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/j;ILcom/kwad/sdk/core/report/j;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/j;->a(ILcom/kwad/sdk/core/report/j;)V

    return-void
.end method

.method public static a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)V
    .locals 8

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/a/b;->j(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bN(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    if-eqz v0, :cond_2

    invoke-static {p0}, Lcom/kwad/components/ad/reward/j;->f(Lcom/kwad/components/ad/reward/j;)Lcom/kwad/components/ad/reward/j/a/b;

    move-result-object v1

    :cond_2
    if-nez v1, :cond_3

    invoke-static {p0}, Lcom/kwad/components/ad/reward/j;->g(Lcom/kwad/components/ad/reward/j;)Lcom/kwad/components/ad/reward/j/a/b;

    move-result-object v1

    :cond_3
    move-object v2, v1

    if-eqz v2, :cond_4

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->getActivity()Landroid/app/Activity;

    move-result-object v3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->getPlayDuration()J

    move-result-wide v4

    new-instance v7, Lcom/kwad/components/ad/reward/j$10;

    invoke-direct {v7, p0, p1, p2}, Lcom/kwad/components/ad/reward/j$10;-><init>(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)V

    move-object v6, p2

    invoke-static/range {v2 .. v7}, Lcom/kwad/components/ad/reward/j/a/b;->a(Lcom/kwad/components/ad/reward/j/a/b;Landroid/app/Activity;JLcom/kwad/components/core/webview/b/e/c;Lcom/kwad/components/core/webview/b/c/d$a;)Lcom/kwad/components/ad/reward/j/a/b;

    return-void

    :cond_4
    invoke-static {p0, p1, p2}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)V

    return-void
.end method

.method public static a(Ljava/util/List;Lcom/kwad/sdk/g/a;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/util/List<",
            "TT;>;",
            "Lcom/kwad/sdk/g/a<",
            "TT;>;)V"
        }
    .end annotation

    if-eqz p0, :cond_0

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/kwad/sdk/g/a;->accept(Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public static a(Lcom/kwad/components/ad/reward/j;)Z
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->isCanUseTk()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    return v1

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bM(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;

    move-result-object v0

    if-eqz v0, :cond_2

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;->renderType:I

    const/4 v2, 0x1

    if-ne v0, v2, :cond_2

    iget-object p0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p0

    if-nez p0, :cond_2

    return v2

    :cond_2
    return v1
.end method

.method private static b(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)V
    .locals 3

    invoke-static {p0}, Lcom/kwad/components/ad/reward/j;->e(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "showNativeCloseDialog isCloseDialogShowing: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "RewardCallerContext"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->getActivity()Landroid/app/Activity;

    move-result-object v0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, p0, p1, p2}, Lcom/kwad/components/ad/reward/k;->a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)Lcom/kwad/components/ad/reward/k;

    return-void
.end method

.method public static b(Lcom/kwad/components/ad/reward/j;)Z
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->isCanUseTk()Z

    move-result v0

    if-nez v0, :cond_1

    return v1

    :cond_1
    const-class v0, Lcom/kwad/components/core/offline/api/b/c;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    if-nez v0, :cond_2

    return v1

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_3

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gJ()Z

    move-result v2

    if-eqz v2, :cond_3

    move v2, v3

    goto :goto_0

    :cond_3
    move v2, v1

    :goto_0
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cq(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_4

    if-nez v2, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cs(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_4

    move v0, v3

    goto :goto_1

    :cond_4
    move v0, v1

    :goto_1
    if-eqz v0, :cond_5

    iget-boolean v2, p0, Lcom/kwad/components/ad/reward/j;->pK:Z

    if-nez v2, :cond_5

    move v2, v3

    goto :goto_2

    :cond_5
    move v2, v1

    :goto_2
    iput-boolean v2, p0, Lcom/kwad/components/ad/reward/j;->pl:Z

    if-eqz v0, :cond_6

    iget-boolean v2, p0, Lcom/kwad/components/ad/reward/j;->pK:Z

    if-nez v2, :cond_6

    move v1, v3

    :cond_6
    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/j;->C(Z)V

    return v0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)V
    .locals 0

    invoke-static {p0, p1, p2}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)V

    return-void
.end method

.method public static c(Lcom/kwad/components/ad/reward/j;)Z
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_7

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_2

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->isCanUseTk()Z

    move-result v1

    if-nez v1, :cond_1

    return v2

    :cond_1
    const-class v1, Lcom/kwad/components/core/offline/api/b/c;

    invoke-static {v1}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v1

    if-nez v1, :cond_2

    return v2

    :cond_2
    invoke-static {p0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j;)Z

    move-result v1

    if-eqz v1, :cond_3

    return v2

    :cond_3
    invoke-static {v0}, Lcom/kwad/components/ad/reward/a/b;->j(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    const/4 v3, 0x1

    if-eqz v1, :cond_4

    :goto_0
    move v0, v3

    goto :goto_1

    :cond_4
    invoke-static {v0}, Lcom/kwad/components/ad/reward/a/b;->i(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-nez v1, :cond_5

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->ct(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-nez v1, :cond_5

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cq(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_5

    goto :goto_0

    :cond_5
    move v0, v2

    :goto_1
    if-eqz v0, :cond_6

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/j;->pK:Z

    if-nez v1, :cond_6

    move v2, v3

    :cond_6
    iput-boolean v2, p0, Lcom/kwad/components/ad/reward/j;->pl:Z

    return v0

    :cond_7
    :goto_2
    return v2
.end method

.method public static d(Lcom/kwad/components/ad/reward/j;)Z
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->isCanUseTk()Z

    move-result v0

    if-nez v0, :cond_1

    return v1

    :cond_1
    const-class v0, Lcom/kwad/components/core/offline/api/b/c;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    if-nez v0, :cond_2

    return v1

    :cond_2
    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->pJ:Z

    if-eqz v0, :cond_3

    return v1

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_4

    return v3

    :cond_4
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gJ()Z

    move-result v2

    if-eqz v2, :cond_5

    move v2, v3

    goto :goto_0

    :cond_5
    move v2, v1

    :goto_0
    invoke-static {v0}, Lcom/kwad/components/ad/reward/a/b;->j(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v4

    if-eqz v4, :cond_6

    :goto_1
    move v0, v3

    goto :goto_2

    :cond_6
    invoke-static {v0}, Lcom/kwad/components/ad/reward/a/b;->i(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v4

    if-nez v4, :cond_7

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cq(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_7

    if-nez v2, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->ct(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_7

    goto :goto_1

    :cond_7
    move v0, v1

    :goto_2
    iget-object v2, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/j;->r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v2

    if-nez v2, :cond_8

    iget-object p0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p0}, Lcom/kwad/components/ad/reward/j;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p0

    if-nez p0, :cond_8

    if-eqz v0, :cond_8

    return v3

    :cond_8
    return v1
.end method

.method public static e(Lcom/kwad/components/ad/reward/j;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/j;->ph:Z

    return p0
.end method

.method private static f(Lcom/kwad/components/ad/reward/j;)Lcom/kwad/components/ad/reward/j/a/b;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/b/c/d$b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/c/d$b;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d$b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    const-string v1, "ksad-video-confirm-card"

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d$b;->aO(Ljava/lang/String;)V

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d$b;->aP(Z)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d$b;->aQ(Z)V

    invoke-static {p0, v0}, Lcom/kwad/components/ad/reward/j/a/b;->a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/core/webview/b/c/d$b;)Lcom/kwad/components/ad/reward/j/a/b;

    move-result-object p0

    return-object p0
.end method

.method private fK()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pO:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/reward/j$a;

    invoke-interface {v1}, Lcom/kwad/components/ad/reward/j$a;->gj()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private fL()V
    .locals 3

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->pi:Z

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->ph:Z

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->pH:Z

    if-eqz v0, :cond_0

    goto :goto_2

    :cond_0
    const/4 v0, 0x0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j;->pP:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/reward/j$b;

    invoke-interface {v2}, Lcom/kwad/components/ad/reward/j$b;->interceptPlayCardResume()Z

    move-result v2

    or-int/2addr v0, v2

    goto :goto_0

    :cond_1
    if-eqz v0, :cond_2

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pO:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/reward/j$a;

    invoke-interface {v1}, Lcom/kwad/components/ad/reward/j$a;->gk()V

    goto :goto_1

    :cond_3
    :goto_2
    return-void
.end method

.method private fM()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pO:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/reward/j$a;

    invoke-interface {v1}, Lcom/kwad/components/ad/reward/j$a;->gl()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private fN()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pO:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/reward/j$a;

    invoke-interface {v1}, Lcom/kwad/components/ad/reward/j$a;->gm()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private fQ()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pc:Ljava/util/PriorityQueue;

    invoke-virtual {v0}, Ljava/util/PriorityQueue;->clear()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/e/d/c;->clear()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->oZ:Lcom/kwad/components/ad/reward/l;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l;->release()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pb:Lcom/kwad/components/ad/reward/g;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/g;->release()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pf:Ljava/util/Set;

    if-eqz v0, :cond_3

    invoke-interface {v0}, Ljava/util/Set;->clear()V

    :cond_3
    return-void
.end method

.method private fS()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pc:Ljava/util/PriorityQueue;

    invoke-virtual {v0}, Ljava/util/PriorityQueue;->size()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/j;->pc:Ljava/util/PriorityQueue;

    invoke-virtual {v2}, Ljava/util/PriorityQueue;->poll()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/reward/e/f;

    if-eqz v2, :cond_0

    invoke-interface {v2}, Lcom/kwad/components/ad/reward/e/f;->bD()V

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private static g(Lcom/kwad/components/ad/reward/j;)Lcom/kwad/components/ad/reward/j/a/b;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bN(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bN(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return-object p0

    :cond_1
    :goto_0
    new-instance v0, Lcom/kwad/components/core/webview/b/c/d$b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/c/d$b;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d$b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    const-string v1, "ksad-video-confirm-card"

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d$b;->aO(Ljava/lang/String;)V

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d$b;->aP(Z)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d$b;->aQ(Z)V

    invoke-static {p0, v0}, Lcom/kwad/components/ad/reward/j/a/b;->a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/core/webview/b/c/d$b;)Lcom/kwad/components/ad/reward/j/a/b;

    move-result-object p0

    return-object p0
.end method

.method public static g(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->g(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/components/ad/reward/a/b;->k(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/j;->fK()V

    return-void
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/j;->fL()V

    return-void
.end method

.method private static isMainThread()Z
    .locals 2

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic j(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/j;->fM()V

    return-void
.end method

.method static synthetic k(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/j;->fN()V

    return-void
.end method

.method static synthetic l(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/j;->fS()V

    return-void
.end method

.method public static r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/a/b;->k(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/d;->f(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)Z

    move-result p0

    return p0
.end method

.method public static s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p0

    return p0
.end method

.method public static t(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-static {p0}, Lcom/kwad/components/ad/reward/j;->r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p0}, Lcom/kwad/components/ad/reward/j;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p0

    if-eqz p0, :cond_1

    goto :goto_0

    :cond_1
    return v1

    :cond_2
    :goto_0
    const/4 p0, 0x1

    return p0
.end method


# virtual methods
.method public final A(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pi:Z

    if-eqz p1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/j;->fM()V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/j;->fL()V

    return-void
.end method

.method public final B(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pI:Z

    return-void
.end method

.method public final C(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pn:Z

    return-void
.end method

.method public final D(Z)V
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pw:Z

    return-void
.end method

.method public final E(Z)V
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->pH:Z

    return-void
.end method

.method public final F(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->ph:Z

    return-void
.end method

.method public final G(Ljava/lang/String;)V
    .locals 4

    const/4 v0, -0x1

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->xN()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/components/ad/reward/i/a;->a(Landroid/app/Activity;)I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/reward/j;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    invoke-static {v1, v2, p1, v0, v3}, Lcom/kwad/components/ad/reward/i/b;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;ILorg/json/JSONObject;)V

    return-void
.end method

.method public final G(Z)V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->mRewardVerifyCalled:Z

    if-eq p1, v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pe:Ljava/util/List;

    new-instance v1, Lcom/kwad/components/ad/reward/j$9;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/ad/reward/j$9;-><init>(Lcom/kwad/components/ad/reward/j;Z)V

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Ljava/util/List;Lcom/kwad/sdk/g/a;)V

    :cond_0
    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/j;->mRewardVerifyCalled:Z

    return-void
.end method

.method public final K(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/j;->pD:I

    return-void
.end method

.method public final a(ILandroid/content/Context;II)V
    .locals 0

    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/kwad/components/ad/reward/j;->b(ILandroid/content/Context;II)V

    return-void
.end method

.method public final a(ILandroid/content/Context;IIJ)V
    .locals 9

    const/4 v1, 0x1

    const/16 v3, 0x28

    const/4 v4, 0x1

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v0, p0

    move-object v2, p2

    move-wide v5, p5

    invoke-virtual/range {v0 .. v8}, Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;IIJZLcom/kwad/sdk/core/report/j;)V

    return-void
.end method

.method public final a(ILandroid/content/Context;IIJZLcom/kwad/sdk/core/report/j;)V
    .locals 0

    new-instance p7, Lcom/kwad/components/core/e/d/a$a;

    invoke-direct {p7, p2}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p7, p2}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    iget-object p7, p0, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p2, p7}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    const/4 p7, 0x0

    invoke-virtual {p2, p7}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, p4}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, p5, p6}, Lcom/kwad/components/core/e/d/a$a;->s(J)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, p3}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j;->fP()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->al(Ljava/lang/String;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance p2, Lcom/kwad/components/ad/reward/j$6;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/reward/j$6;-><init>(Lcom/kwad/components/ad/reward/j;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->a(Ljava/util/concurrent/Callable;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance p2, Lcom/kwad/components/ad/reward/j$5;

    invoke-direct {p2, p0, p3, p8}, Lcom/kwad/components/ad/reward/j$5;-><init>(Lcom/kwad/components/ad/reward/j;ILcom/kwad/sdk/core/report/j;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method public final a(JJI)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j;->pf:Ljava/util/Set;

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/kwad/components/ad/reward/e/e;

    invoke-interface {p2}, Lcom/kwad/components/ad/reward/e/e;->bY()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Landroid/content/DialogInterface$OnDismissListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->px:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j;->pN:Lcom/kwad/components/ad/reward/RewardRenderResult;

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/e/m;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j;->py:Lcom/kwad/components/ad/reward/e/m;

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/j$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pO:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/j$b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pP:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/j/a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pd:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/j/r;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pe:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/components/core/i/a$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pQ:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/components/core/i/c;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getUniqueId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->C(Ljava/lang/String;)Lcom/kwad/components/core/i/d;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/j$7;

    invoke-direct {v1, p0, v0, p1}, Lcom/kwad/components/ad/reward/j$7;-><init>(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/core/i/d;Lcom/kwad/components/core/i/c;)V

    invoke-static {v1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/e/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j;->pg:Lcom/kwad/components/core/webview/b/e/a;

    return-void
.end method

.method public final b(ILandroid/content/Context;II)V
    .locals 9

    const-wide/16 v5, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v0, p0

    move v1, p1

    move-object v2, p2

    move v3, p3

    move v4, p4

    invoke-virtual/range {v0 .. v8}, Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;IIJZLcom/kwad/sdk/core/report/j;)V

    return-void
.end method

.method public final b(Landroid/content/DialogInterface$OnDismissListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->px:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/reward/c/b;)V
    .locals 2

    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/ad/reward/c/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/reward/c/b;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/reward/e/f;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pc:Ljava/util/PriorityQueue;

    invoke-virtual {v0, p1}, Ljava/util/PriorityQueue;->offer(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/reward/j$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pO:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/reward/j$b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pP:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/reward/j/a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pd:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/reward/j/r;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pe:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/core/i/a$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pQ:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final b(Lcom/kwad/components/core/i/c;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getUniqueId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->C(Ljava/lang/String;)Lcom/kwad/components/core/i/d;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/j$8;

    invoke-direct {v1, p0, v0, p1}, Lcom/kwad/components/ad/reward/j$8;-><init>(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/core/i/d;Lcom/kwad/components/core/i/c;)V

    invoke-static {v1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final c(Lcom/kwad/components/ad/reward/e/f;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pc:Ljava/util/PriorityQueue;

    invoke-virtual {v0, p1}, Ljava/util/PriorityQueue;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final c(ZZ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/j$11;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/components/ad/reward/j$11;-><init>(Lcom/kwad/components/ad/reward/j;ZZ)V

    const-wide/16 p1, 0x1f4

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    :cond_0
    return-void
.end method

.method public final d(Landroid/content/DialogInterface;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->px:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/DialogInterface$OnDismissListener;

    invoke-interface {v1, p1}, Landroid/content/DialogInterface$OnDismissListener;->onDismiss(Landroid/content/DialogInterface;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final d(Lcom/kwad/components/core/playable/PlayableSource;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j;->pv:Lcom/kwad/components/core/playable/PlayableSource;

    return-void
.end method

.method public final fO()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->pi:Z

    return v0
.end method

.method public final fP()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->tkLiveShopItemInfo:Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->tkLiveShopItemInfo:Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;->itemId:Ljava/lang/String;

    return-object v0
.end method

.method public final fR()V
    .locals 2

    invoke-static {}, Lcom/kwad/components/ad/reward/j;->isMainThread()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/j;->fS()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mHandler:Landroid/os/Handler;

    new-instance v1, Lcom/kwad/components/ad/reward/j$4;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/j$4;-><init>(Lcom/kwad/components/ad/reward/j;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final fT()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->pI:Z

    return v0
.end method

.method public final fU()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pg:Lcom/kwad/components/core/webview/b/e/a;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/e/a;->ck()V

    return-void
.end method

.method public final fV()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->pn:Z

    return v0
.end method

.method public final fW()Lcom/kwad/components/core/playable/PlayableSource;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pv:Lcom/kwad/components/core/playable/PlayableSource;

    return-object v0
.end method

.method public final fX()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->pw:Z

    return v0
.end method

.method public final fY()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/components/core/i/a$a;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pQ:Ljava/util/List;

    return-object v0
.end method

.method public final fZ()Lcom/kwad/components/ad/reward/RewardRenderResult;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->pN:Lcom/kwad/components/ad/reward/RewardRenderResult;

    return-object v0
.end method

.method public final ga()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->pH:Z

    return v0
.end method

.method public final gb()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->ph:Z

    return v0
.end method

.method public final gc()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j;->mRewardVerifyCalled:Z

    return v0
.end method

.method public final gd()V
    .locals 4

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/j;->pF:J

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-eqz v2, :cond_0

    const-wide/16 v2, 0x3e8

    div-long/2addr v0, v2

    long-to-int v0, v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->W(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v2

    invoke-static {v1, v2, v0}, Lcom/kwad/sdk/core/report/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;II)V

    return-void
.end method

.method public final release()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/j;->fQ()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->release()V

    return-void
.end method
