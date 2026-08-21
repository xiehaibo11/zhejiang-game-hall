.class public abstract Lcom/kwad/components/ad/reward/presenter/f/d;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;
.implements Lcom/kwad/components/ad/reward/j/a/e;
.implements Lcom/kwad/components/core/webview/b/a/w$a;


# instance fields
.field private final gH:Lcom/kwad/sdk/utils/h$a;

.field private final mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private final mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

.field private final mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field protected wk:Lcom/kwad/components/ad/reward/j/a/d;

.field private wl:Lcom/kwad/components/core/webview/b/a/p;

.field private wm:Lcom/kwad/components/core/webview/b/a/o;

.field private wn:Lcom/kwad/components/ad/reward/j/i;

.field private wo:Lcom/kwad/components/ad/reward/j/j;

.field private wp:Lcom/kwad/components/core/webview/b/b/y;

.field private wq:Z

.field private wr:Lcom/kwad/components/core/webview/b/a/h;

.field protected ws:Lcom/kwad/components/ad/reward/presenter/f/f;

.field private wt:Lcom/kwad/components/core/webview/jshandler/au$b;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/d$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$1;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wt:Lcom/kwad/components/core/webview/jshandler/au$b;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/d$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$5;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->gH:Lcom/kwad/sdk/utils/h$a;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/d$6;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$6;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/d$7;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$7;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/d$8;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$8;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->iR()Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/f;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/f/f;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->ws:Lcom/kwad/components/ad/reward/presenter/f/f;

    :cond_0
    return-void
.end method

.method static synthetic A(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic B(Lcom/kwad/components/ad/reward/presenter/f/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->iT()V

    return-void
.end method

.method static synthetic C(Lcom/kwad/components/ad/reward/presenter/f/d;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic D(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic E(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic F(Lcom/kwad/components/ad/reward/presenter/f/d;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic G(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic H(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/core/webview/b/a/o;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wm:Lcom/kwad/components/core/webview/b/a/o;

    return-object p0
.end method

.method static synthetic I(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic J(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j/i;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wn:Lcom/kwad/components/ad/reward/j/i;

    return-object p0
.end method

.method static synthetic K(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wo:Lcom/kwad/components/ad/reward/j/j;

    return-object p0
.end method

.method static synthetic L(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/core/webview/b/a/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wr:Lcom/kwad/components/core/webview/b/a/h;

    return-object p0
.end method

.method static synthetic M(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic N(Lcom/kwad/components/ad/reward/presenter/f/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->hE()V

    return-void
.end method

.method static synthetic O(Lcom/kwad/components/ad/reward/presenter/f/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->iZ()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/f/d;D)V
    .locals 0

    const-wide/16 p1, 0x0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/f/d;->g(D)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private c(JJ)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    invoke-static {v0, v1, p1, p2}, Ljava/lang/Math;->min(JJ)J

    move-result-wide p1

    const-wide/16 v0, 0x320

    sub-long v0, p1, v0

    cmp-long v0, p3, v0

    if-gez v0, :cond_0

    sub-long/2addr p1, p3

    long-to-float p1, p1

    const/high16 p2, 0x447a0000    # 1000.0f

    div-float/2addr p1, p2

    const/high16 p2, 0x3f000000    # 0.5f

    add-float/2addr p1, p2

    float-to-int p1, p1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iput p1, p2, Lcom/kwad/components/ad/reward/j;->pC:I

    :cond_0
    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/f/d;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/f/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->iV()V

    return-void
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/f/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->iW()V

    return-void
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private g(D)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wp:Lcom/kwad/components/core/webview/b/b/y;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/y;->Xk:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wp:Lcom/kwad/components/core/webview/b/b/y;

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/y;->Xg:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wp:Lcom/kwad/components/core/webview/b/b/y;

    const-wide v1, 0x408f400000000000L    # 1000.0

    div-double/2addr p1, v1

    const-wide/high16 v1, 0x3fe0000000000000L    # 0.5

    add-double/2addr p1, v1

    double-to-int p1, p1

    iput p1, v0, Lcom/kwad/components/core/webview/b/b/y;->nM:I

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->ja()V

    return-void
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private hE()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->po:Z

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->iZ()V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->iY()V

    return-void
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/presenter/f/d;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private iT()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    const/16 v2, 0x11

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    return-void
.end method

.method private iU()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->jb()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->G(Ljava/lang/String;)V

    return-void
.end method

.method private iV()V
    .locals 5

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->jb()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    const-string v4, "endTopBar"

    invoke-static {v1, v2, v4, v0, v3}, Lcom/kwad/components/ad/reward/i/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    return-void
.end method

.method private iW()V
    .locals 5

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v1, 0x28

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->jb()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    const/4 v4, 0x0

    invoke-static {v1, v2, v4, v0, v3}, Lcom/kwad/components/ad/reward/i/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    return-void
.end method

.method private iX()V
    .locals 5

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v1, 0x29

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->jb()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    const/4 v4, 0x0

    invoke-static {v1, v2, v4, v0, v3}, Lcom/kwad/components/ad/reward/i/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    return-void
.end method

.method private iY()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wp:Lcom/kwad/components/core/webview/b/b/y;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/y;->Xg:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wp:Lcom/kwad/components/core/webview/b/b/y;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/y;->Xk:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wp:Lcom/kwad/components/core/webview/b/b/y;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    iput v1, v0, Lcom/kwad/components/core/webview/b/b/y;->nM:I

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->ja()V

    return-void
.end method

.method private iZ()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wp:Lcom/kwad/components/core/webview/b/b/y;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/y;->Xk:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wp:Lcom/kwad/components/core/webview/b/b/y;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/y;->Xg:Z

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->ja()V

    return-void
.end method

.method static synthetic j(Lcom/kwad/components/ad/reward/presenter/f/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->iX()V

    return-void
.end method

.method private ja()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wl:Lcom/kwad/components/core/webview/b/a/p;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wp:Lcom/kwad/components/core/webview/b/b/y;

    if-eqz v1, :cond_0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/a/p;->a(Lcom/kwad/components/core/webview/b/b/y;)V

    :cond_0
    return-void
.end method

.method private jb()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j/a/d;->getTkTemplateId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic k(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic m(Lcom/kwad/components/ad/reward/presenter/f/d;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic n(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private notifyRewardVerify()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->onRewardVerify()V

    return-void
.end method

.method static synthetic o(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic p(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic q(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic r(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic s(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic t(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic u(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic v(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic w(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic x(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic y(Lcom/kwad/components/ad/reward/presenter/f/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->notifyRewardVerify()V

    return-void
.end method

.method static synthetic z(Lcom/kwad/components/ad/reward/presenter/f/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->iU()V

    return-void
.end method


# virtual methods
.method public a(JJ)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/kwad/components/ad/reward/presenter/f/d;->c(JJ)V

    long-to-double p1, p3

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/f/d;->g(D)V

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/c/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/c/b;)V

    :cond_0
    return-void
.end method

.method public a(Lcom/kwad/components/core/webview/b/a/o;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wm:Lcom/kwad/components/core/webview/b/a/o;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->gH:Lcom/kwad/sdk/utils/h$a;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/sdk/utils/h$a;)V

    new-instance p1, Lcom/kwad/components/ad/reward/presenter/f/d$4;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$4;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/a/p;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wl:Lcom/kwad/components/core/webview/b/a/p;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    return-void
.end method

.method public a(Lcom/kwad/components/core/webview/b/b/t;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/e;->a(Lcom/kwad/components/ad/reward/j;Z)V

    return-void
.end method

.method public a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->ws:Lcom/kwad/components/ad/reward/presenter/f/f;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/presenter/f/f;->b(Lcom/kwad/components/core/webview/jshandler/am;)V

    :cond_0
    return-void
.end method

.method public a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 5

    new-instance v0, Lcom/kwad/components/ad/reward/j/k;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/j/k;-><init>()V

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/f/d$9;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$9;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j/k;->a(Lcom/kwad/components/ad/reward/j/k$a;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-wide v0, v0, Lcom/kwad/components/ad/reward/j;->pE:J

    new-instance v2, Lcom/kwad/components/ad/reward/j/g;

    const-wide/16 v3, 0x0

    cmp-long v3, v0, v3

    if-lez v3, :cond_0

    long-to-int v0, v0

    div-int/lit16 v0, v0, 0x3e8

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-direct {v2, v0}, Lcom/kwad/components/ad/reward/j/g;-><init>(I)V

    invoke-interface {p1, v2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/j/i;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/j/i;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wn:Lcom/kwad/components/ad/reward/j/i;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/j/j;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/j/j;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wo:Lcom/kwad/components/ad/reward/j/j;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->a(Lcom/kwad/components/ad/reward/e/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/z;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/f/d$10;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$10;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/z;-><init>(Lcom/kwad/components/core/webview/jshandler/z$b;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/j/d;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/j/d;-><init>()V

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/f/d$11;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$11;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j/d;->a(Lcom/kwad/components/ad/reward/j/d$a;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/j/e;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/j/e;-><init>()V

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/f/d$12;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$12;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j/e;->a(Lcom/kwad/components/ad/reward/j/e$a;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/j/h;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/f/d$13;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$13;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/reward/j/h;-><init>(Lcom/kwad/components/ad/reward/j/h$a;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/d$14;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$14;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/d$15;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$15;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/d$16;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$16;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/d$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$2;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/h/b;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    sget-object v3, Lcom/kwad/components/core/playable/PlayableSource;->ACTIONBAR_CLICK:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/ad/reward/h/b;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/playable/PlayableSource;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/b/a/h;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/h;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wr:Lcom/kwad/components/core/webview/b/a/h;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/f/d$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/f/d$3;-><init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/a/h;->a(Lcom/kwad/components/core/webview/b/a/h$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wr:Lcom/kwad/components/core/webview/b/a/h;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/w;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/w;-><init>()V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/au;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wt:Lcom/kwad/components/core/webview/jshandler/au$b;

    invoke-direct {v0, p2, v1, v2}, Lcom/kwad/components/core/webview/jshandler/au;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/components/core/webview/jshandler/au$b;)V

    invoke-interface {p1, v0}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/b/a/w;

    invoke-direct {p2, p0}, Lcom/kwad/components/core/webview/b/a/w;-><init>(Lcom/kwad/components/core/webview/b/a/w$a;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->tkLiveShopItemInfo:Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;

    return-void
.end method

.method public a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    return-void
.end method

.method public ah()V
    .locals 5

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->cd()Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wq:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->a(Landroid/content/DialogInterface$OnDismissListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    if-nez v0, :cond_1

    new-instance v0, Lcom/kwad/components/ad/reward/j/a/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    const-wide/16 v2, -0x1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/kwad/components/ad/reward/j/a/d;-><init>(Lcom/kwad/components/ad/reward/j;JLandroid/content/Context;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wp:Lcom/kwad/components/core/webview/b/b/y;

    if-nez v0, :cond_2

    new-instance v0, Lcom/kwad/components/core/webview/b/b/y;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/b/y;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wp:Lcom/kwad/components/core/webview/b/b/y;

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/j;->getActivity()Landroid/app/Activity;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1, v2, p0}, Lcom/kwad/components/ad/reward/j/a/d;->a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/i;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->ws:Lcom/kwad/components/ad/reward/presenter/f/f;

    if-eqz v0, :cond_3

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/presenter/f/f;->B(Lcom/kwad/components/ad/reward/j;)V

    :cond_3
    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/m;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-boolean p1, p1, Lcom/kwad/components/core/webview/b/b/m;->Xa:Z

    const/4 v1, 0x1

    xor-int/2addr p1, v1

    invoke-virtual {v0, p1, v1}, Lcom/kwad/components/ad/reward/l/d;->setAudioEnabled(ZZ)V

    return-void
.end method

.method public b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 0

    return-void
.end method

.method public cc()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->ws:Lcom/kwad/components/ad/reward/presenter/f/f;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/f/f;->cc()V

    :cond_0
    return-void
.end method

.method protected abstract cd()Z
.end method

.method public eh()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->ws:Lcom/kwad/components/ad/reward/presenter/f/f;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/f/f;->eh()V

    :cond_0
    return-void
.end method

.method public final em()V
    .locals 0

    return-void
.end method

.method public getTouchCoordsView()Lcom/kwad/sdk/widget/e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    return-object v0
.end method

.method protected iR()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public onDismiss(Landroid/content/DialogInterface;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j/a/d;->jt()Lcom/kwad/components/ad/reward/c/e;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j/a/d;->jt()Lcom/kwad/components/ad/reward/c/e;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/c/e;->hb()V

    :cond_0
    return-void
.end method

.method public onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wq:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->ws:Lcom/kwad/components/ad/reward/presenter/f/f;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/presenter/f/f;->C(Lcom/kwad/components/ad/reward/j;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->b(Landroid/content/DialogInterface$OnDismissListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j/a/d;->jv()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->gH:Lcom/kwad/sdk/utils/h$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/sdk/utils/h$a;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->b(Lcom/kwad/components/ad/reward/e/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/d;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    return-void
.end method
