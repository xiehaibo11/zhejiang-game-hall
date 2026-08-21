.class public final Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

.field private cD:Lcom/kwad/components/core/webview/a;

.field private cE:Lcom/kwad/sdk/core/webview/b;

.field private cF:I

.field private cG:Lcom/kwad/components/core/webview/jshandler/am;

.field private cH:Lcom/kwad/sdk/core/webview/d/a/a;

.field private cI:Lcom/kwad/components/core/webview/jshandler/aa$b;

.field private cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

.field private cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

.field private cL:Landroid/animation/ValueAnimator;

.field private cM:Landroid/animation/ValueAnimator;

.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private mUrl:Ljava/lang/String;

.field private oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

.field private so:Lcom/kwad/components/core/widget/KsLogoView;

.field private uF:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$e;

.field private uZ:Z

.field private va:J


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cF:I

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$1;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$3;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->uF:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$4;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$5;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$7;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$7;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cI:Lcom/kwad/components/core/webview/jshandler/aa$b;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$8;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$8;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cF:I

    return p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;Lcom/kwad/components/core/webview/jshandler/aa$a;)Lcom/kwad/components/core/webview/jshandler/aa$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    return-object p1
.end method

.method private a(Lcom/kwad/components/core/webview/a;)V
    .locals 9

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/r;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/r;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/b/a/f;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/f;-><init>()V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/j/q;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v4, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v7, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    const-wide/16 v5, -0x1

    const/4 v8, 0x0

    move-object v1, v0

    invoke-direct/range {v1 .. v8}, Lcom/kwad/components/ad/reward/j/q;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/components/ad/reward/j;JLcom/kwad/sdk/core/webview/d/a/a;Landroid/content/DialogInterface$OnDismissListener;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/x;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/x;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/t;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/t;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/aa;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cI:Lcom/kwad/components/core/webview/jshandler/aa$b;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/aa;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/webview/jshandler/aa$b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ah;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->aV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/am;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/am;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ap;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ap;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/z;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/z;-><init>(Lcom/kwad/components/core/webview/jshandler/z$b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ab;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/h/b;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    sget-object v3, Lcom/kwad/components/core/playable/PlayableSource;->ACTIONBAR_CLICK:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/ad/reward/h/b;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/playable/PlayableSource;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)Z
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->g(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)Z

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->uZ:Z

    return p1
.end method

.method private aB()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->z(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_1
    return-void
.end method

.method private aC()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->aD()V

    return-void

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->aE()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v2, v2, Lcom/kwad/components/core/webview/jshandler/aa$a;->height:I

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v3, v3, Lcom/kwad/components/core/webview/jshandler/aa$a;->bottomMargin:I

    add-int/2addr v2, v3

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/t/m;->c(Landroid/view/View;II)Landroid/animation/ValueAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cM:Landroid/animation/ValueAnimator;

    new-instance v1, Landroid/view/animation/DecelerateInterpolator;

    const/high16 v2, 0x40000000    # 2.0f

    invoke-direct {v1, v2}, Landroid/view/animation/DecelerateInterpolator;-><init>(F)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cM:Landroid/animation/ValueAnimator;

    const-wide/16 v1, 0x12c

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cM:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$2;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cM:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    return-void
.end method

.method private aD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_2
    return-void
.end method

.method private aE()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cL:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->removeAllListeners()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cL:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cM:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->removeAllListeners()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cM:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    :cond_1
    return-void
.end method

.method private aF()V
    .locals 3

    iget v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cF:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    const-string v0, "timeout"

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const-string v0, "h5error"

    goto :goto_0

    :cond_1
    const-string v0, "others"

    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "show webCard fail, reason: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardActionBarWeb"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private av()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget v1, v1, Lcom/kwad/components/ad/reward/j;->mScreenOrientation:I

    iput v1, v0, Lcom/kwad/sdk/core/webview/b;->mScreenOrientation:I

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->aye:Lcom/kwad/sdk/widget/e;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    return-void
.end method

.method private aw()V
    .locals 3

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cF:I

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->ax()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setBackgroundColor(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getClientConfig()Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/webview/KsAdWebView$d;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setClientConfig(Lcom/kwad/sdk/core/webview/a/c$a;)V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->va:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->aV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mUrl:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "startPreloadWebView url: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardActionBarWeb"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mUrl:Ljava/lang/String;

    const-string v2, "play_card"

    invoke-static {v0, v2, v1}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method private ax()V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->ay()V

    new-instance v0, Lcom/kwad/components/core/webview/a;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cD:Lcom/kwad/components/core/webview/a;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->a(Lcom/kwad/components/core/webview/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cD:Lcom/kwad/components/core/webview/a;

    const-string v2, "KwaiAd"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method private ay()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->bU()V

    return-void
.end method

.method private bU()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->aX(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->av()V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->aw()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->uZ:Z

    return p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->release()V

    return-void
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private g(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)Z
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getVisibility()I

    move-result v0

    const/4 v2, 0x1

    if-nez v0, :cond_1

    return v2

    :cond_1
    iget v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cF:I

    if-ne v0, v2, :cond_2

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->h(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    return v2

    :cond_2
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->aF()V

    return v1
.end method

.method private getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$6;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$6;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V

    return-object v0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/sdk/core/webview/KsAdWebView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-object p0
.end method

.method private h(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->aB()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->z(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->aE()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v2, v2, Lcom/kwad/components/core/webview/jshandler/aa$a;->height:I

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v3, v3, Lcom/kwad/components/core/webview/jshandler/aa$a;->bottomMargin:I

    add-int/2addr v2, v3

    invoke-static {v0, v2, v1}, Lcom/kwad/components/core/t/m;->c(Landroid/view/View;II)Landroid/animation/ValueAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cL:Landroid/animation/ValueAnimator;

    new-instance v1, Landroid/view/animation/DecelerateInterpolator;

    const/high16 v2, 0x40000000    # 2.0f

    invoke-direct {v1, v2}, Landroid/view/animation/DecelerateInterpolator;-><init>(F)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cL:Landroid/animation/ValueAnimator;

    const-wide/16 v1, 0x1f4

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cL:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$10;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$10;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cL:Landroid/animation/ValueAnimator;

    invoke-virtual {p1}, Landroid/animation/ValueAnimator;->start()V

    return-void
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic j(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mUrl:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->aC()V

    return-void
.end method

.method static synthetic l(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->va:J

    return-wide v0
.end method

.method static synthetic m(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cF:I

    return p0
.end method

.method static synthetic n(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic o(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic p(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic q(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic r(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    return-object p0
.end method

.method private release()V
    .locals 2

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cF:I

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->ay()V

    return-void
.end method

.method static synthetic s(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/core/webview/jshandler/am;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    return-object p0
.end method

.method private z(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cq(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IO()Z

    move-result p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->so:Lcom/kwad/components/core/widget/KsLogoView;

    if-eqz p1, :cond_1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/widget/KsLogoView;->setVisibility(I)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    const-string v1, "play_card"

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->uF:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->d(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->bU()V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_web_card_webView:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_label_play_bar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->so:Lcom/kwad/components/core/widget/KsLogoView;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$e;)V

    :cond_0
    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->aE()V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->release()V

    return-void
.end method
