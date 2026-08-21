.class public final Lcom/kwad/components/ad/draw/b/b/c;
.super Lcom/kwad/components/ad/draw/a/a;


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

.field private ce:Landroid/view/ViewGroup;

.field private cw:Lcom/kwad/components/ad/draw/b/b/a$b;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/k;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/a/a;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cF:I

    new-instance v0, Lcom/kwad/components/ad/draw/b/b/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/b/c$1;-><init>(Lcom/kwad/components/ad/draw/b/b/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    new-instance v0, Lcom/kwad/components/ad/draw/b/b/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/b/c$2;-><init>(Lcom/kwad/components/ad/draw/b/b/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cw:Lcom/kwad/components/ad/draw/b/b/a$b;

    new-instance v0, Lcom/kwad/components/ad/draw/b/b/c$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/b/c$3;-><init>(Lcom/kwad/components/ad/draw/b/b/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    new-instance v0, Lcom/kwad/components/ad/draw/b/b/c$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/b/c$4;-><init>(Lcom/kwad/components/ad/draw/b/b/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cI:Lcom/kwad/components/core/webview/jshandler/aa$b;

    new-instance v0, Lcom/kwad/components/ad/draw/b/b/c$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/b/c$5;-><init>(Lcom/kwad/components/ad/draw/b/b/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

    new-instance v0, Lcom/kwad/components/ad/draw/b/b/c$6;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/b/c$6;-><init>(Lcom/kwad/components/ad/draw/b/b/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/b/b/c;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cF:I

    return p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/b/b/c;Lcom/kwad/components/core/webview/jshandler/aa$a;)Lcom/kwad/components/core/webview/jshandler/aa$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/b/b/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->release()V

    return-void
.end method

.method private a(Lcom/kwad/components/core/webview/a;)V
    .locals 4

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/r;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b/b/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v3, p0, Lcom/kwad/components/ad/draw/b/b/c;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/r;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b/b/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v3, p0, Lcom/kwad/components/ad/draw/b/b/c;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/x;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/x;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/t;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/t;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/aa;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b/b/c;->cI:Lcom/kwad/components/core/webview/jshandler/aa$b;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/aa;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/webview/jshandler/aa$b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ah;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cK:Lcom/kwad/components/core/webview/jshandler/ah$b;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b/b/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/b;->aV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ah;-><init>(Lcom/kwad/components/core/webview/jshandler/ah$b;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/am;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/am;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ap;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b/b/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/jshandler/ap;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/z;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cJ:Lcom/kwad/components/core/webview/jshandler/z$b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/z;-><init>(Lcom/kwad/components/core/webview/jshandler/z$b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ab;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/ab;-><init>(Lcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method private aA()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->aB()V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->aE()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->ce:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b/b/c;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v2, v2, Lcom/kwad/components/core/webview/jshandler/aa$a;->height:I

    iget-object v3, p0, Lcom/kwad/components/ad/draw/b/b/c;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v3, v3, Lcom/kwad/components/core/webview/jshandler/aa$a;->bottomMargin:I

    add-int/2addr v2, v3

    invoke-static {v0, v2, v1}, Lcom/kwad/components/core/t/m;->c(Landroid/view/View;II)Landroid/animation/ValueAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cL:Landroid/animation/ValueAnimator;

    new-instance v1, Landroid/view/animation/DecelerateInterpolator;

    const/high16 v2, 0x40000000    # 2.0f

    invoke-direct {v1, v2}, Landroid/view/animation/DecelerateInterpolator;-><init>(F)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cL:Landroid/animation/ValueAnimator;

    const-wide/16 v1, 0x12c

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cL:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/ad/draw/b/b/c$7;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/draw/b/b/c$7;-><init>(Lcom/kwad/components/ad/draw/b/b/c;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cL:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    return-void
.end method

.method private aB()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->ce:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_1
    return-void
.end method

.method private aC()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->aD()V

    return-void

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->aE()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b/b/c;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v2, v2, Lcom/kwad/components/core/webview/jshandler/aa$a;->height:I

    iget-object v3, p0, Lcom/kwad/components/ad/draw/b/b/c;->cC:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v3, v3, Lcom/kwad/components/core/webview/jshandler/aa$a;->bottomMargin:I

    add-int/2addr v2, v3

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/t/m;->c(Landroid/view/View;II)Landroid/animation/ValueAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cM:Landroid/animation/ValueAnimator;

    new-instance v1, Landroid/view/animation/DecelerateInterpolator;

    const/high16 v2, 0x40000000    # 2.0f

    invoke-direct {v1, v2}, Landroid/view/animation/DecelerateInterpolator;-><init>(F)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cM:Landroid/animation/ValueAnimator;

    const-wide/16 v1, 0x12c

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cM:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/ad/draw/b/b/c$8;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/draw/b/b/c$8;-><init>(Lcom/kwad/components/ad/draw/b/b/c;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cM:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    return-void
.end method

.method private aD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->ce:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_2
    return-void
.end method

.method private aE()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cL:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->removeAllListeners()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cL:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cM:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->removeAllListeners()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cM:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    :cond_1
    return-void
.end method

.method private aF()V
    .locals 3

    iget v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cF:I

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

    const-string v1, "DrawPlayWebCard"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private av()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/webview/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/draw/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    const/4 v1, 0x0

    iput v1, v0, Lcom/kwad/sdk/core/webview/b;->mScreenOrientation:I

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/draw/a/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->aye:Lcom/kwad/sdk/widget/e;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/draw/a/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cE:Lcom/kwad/sdk/core/webview/b;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v1, v0, Lcom/kwad/sdk/core/webview/b;->Ms:Landroid/webkit/WebView;

    return-void
.end method

.method private aw()V
    .locals 2

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cF:I

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->ax()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setBackgroundColor(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->aV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method private ax()V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->ay()V

    new-instance v0, Lcom/kwad/components/core/webview/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/a;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cD:Lcom/kwad/components/core/webview/a;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/draw/b/b/c;->a(Lcom/kwad/components/core/webview/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cD:Lcom/kwad/components/core/webview/a;

    const-string v2, "KwaiAd"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method private ay()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cD:Lcom/kwad/components/core/webview/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/a;->destroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cD:Lcom/kwad/components/core/webview/a;

    :cond_0
    return-void
.end method

.method private az()Z
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cF:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->aA()V

    return v1

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->aF()V

    const/4 v0, 0x0

    return v0
.end method

.method static synthetic b(Lcom/kwad/components/ad/draw/b/b/c;)Z
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->az()Z

    move-result p0

    return p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/draw/b/b/c;)Lcom/kwad/components/ad/draw/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/draw/b/b/c;)Lcom/kwad/components/ad/draw/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/draw/b/b/c;)Lcom/kwad/sdk/core/webview/KsAdWebView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/draw/b/b/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->aC()V

    return-void
.end method

.method static synthetic g(Lcom/kwad/components/ad/draw/b/b/c;)Lcom/kwad/components/core/webview/jshandler/am;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/draw/b/b/c;)Landroid/view/ViewGroup;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/b/c;->ce:Landroid/view/ViewGroup;

    return-object p0
.end method

.method private release()V
    .locals 2

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cF:I

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->ay()V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bX:Lcom/kwad/components/ad/draw/b/b/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->cw:Lcom/kwad/components/ad/draw/b/b/a$b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/b/b/a;->a(Lcom/kwad/components/ad/draw/b/b/a$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/c/a;->a(Lcom/kwad/components/core/video/k;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->av()V

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->aw()V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_normal_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/b/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->ce:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_web_card_webView:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/b/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/webview/KsAdWebView;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bX:Lcom/kwad/components/ad/draw/b/b/a;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/b/b/a;->a(Lcom/kwad/components/ad/draw/b/b/a$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/c;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/c/a;->b(Lcom/kwad/components/core/video/k;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->aE()V

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/b/c;->release()V

    return-void
.end method
