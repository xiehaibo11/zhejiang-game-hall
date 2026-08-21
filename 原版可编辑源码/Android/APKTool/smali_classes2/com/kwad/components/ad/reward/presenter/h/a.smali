.class public final Lcom/kwad/components/ad/reward/presenter/h/a;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/core/webview/b/i;


# instance fields
.field private lr:Landroid/widget/FrameLayout;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private final mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private final sk:Lcom/kwad/components/core/l/a/a;

.field private tG:Z

.field private tH:Z

.field private tI:Lcom/kwad/components/ad/reward/j$b;

.field private wk:Lcom/kwad/components/ad/reward/j/a/d;

.field private xn:Z

.field private xo:Lcom/kwad/components/core/webview/b/g;

.field private xp:J


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/h/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/h/a$1;-><init>(Lcom/kwad/components/ad/reward/presenter/h/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->tI:Lcom/kwad/components/ad/reward/j$b;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/h/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/h/a$2;-><init>(Lcom/kwad/components/ad/reward/presenter/h/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->sk:Lcom/kwad/components/core/l/a/a;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/h/a$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/h/a$3;-><init>(Lcom/kwad/components/ad/reward/presenter/h/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/h/a;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->lr:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/h/a;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->xn:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/core/webview/b/g;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->xo:Lcom/kwad/components/core/webview/b/g;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/h/a;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->tG:Z

    return p1
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/h/a;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/h/a;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/h/a;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->xp:J

    return-wide v0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/h/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->tG:Z

    return p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/h/a;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/h/a;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private hE()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h;->A(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/h/a$6;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/h/a$6;-><init>(Lcom/kwad/components/ad/reward/presenter/h/a;)V

    const-wide/16 v1, 0xc8

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->onRewardVerify()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->pause()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->fR()V

    return-void
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic j(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private jl()Lcom/kwad/components/core/webview/b/g;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/h/a$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/h/a$5;-><init>(Lcom/kwad/components/ad/reward/presenter/h/a;)V

    return-object v0
.end method

.method static synthetic k(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j/a/d;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/ad/reward/presenter/h/a;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/h/a;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic m(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic n(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic o(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic p(Lcom/kwad/components/ad/reward/presenter/h/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/a/o;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/a/p;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/b/t;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/h/a;->jl()Lcom/kwad/components/core/webview/b/g;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->xo:Lcom/kwad/components/core/webview/b/g;

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    iget v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->azc:I

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/r/a;->aE(I)V

    iget p1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->azc:I

    const/4 v0, -0x1

    if-ne p1, v0, :cond_1

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/r/a;->aI(Z)V

    :cond_0
    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/r/a;->aF(I)V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    const/4 v0, 0x1

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/r/a;->pX()I

    move-result p1

    const/4 v1, 0x2

    if-ne p1, v1, :cond_0

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object p1

    const/4 v0, 0x3

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/r/a;->aF(I)V

    goto :goto_0

    :cond_2
    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/r/a;->aI(Z)V

    :cond_3
    :goto_0
    return-void
.end method

.method public final ah()V
    .locals 7

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->xn:Z

    const-string v0, "TkRewardVideoTaskPresenter"

    const-string v1, "onBind: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/j/a/d;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    const-wide/16 v3, -0x1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/h/a;->getContext()Landroid/content/Context;

    move-result-object v5

    new-instance v6, Lcom/kwad/components/ad/reward/presenter/h/a$4;

    invoke-direct {v6, p0}, Lcom/kwad/components/ad/reward/presenter/h/a$4;-><init>(Lcom/kwad/components/ad/reward/presenter/h/a;)V

    move-object v1, v0

    invoke-direct/range {v1 .. v6}, Lcom/kwad/components/ad/reward/j/a/d;-><init>(Lcom/kwad/components/ad/reward/j;JLandroid/content/Context;Landroid/content/DialogInterface$OnDismissListener;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aD(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    int-to-long v0, v0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->xp:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->tI:Lcom/kwad/components/ad/reward/j$b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->Lg:Ljava/util/List;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->sk:Lcom/kwad/components/core/l/a/a;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/m;)V
    .locals 0

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/h/a;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/h/a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    const/high16 v2, 0x3f000000    # 0.5f

    add-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/h/a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->getScreenHeight(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    add-float/2addr v1, v2

    float-to-int v0, v1

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    return-void
.end method

.method public final b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x1

    if-eqz p1, :cond_0

    iget-boolean p1, p1, Lcom/kwad/sdk/commercial/model/WebCloseStatus;->interactSuccess:Z

    if-eqz p1, :cond_0

    move p1, v1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    iput-boolean p1, v0, Lcom/kwad/components/ad/reward/j;->pm:Z

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean p1, p1, Lcom/kwad/components/ad/reward/j;->pm:Z

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->jO()V

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/r/a;->pT()I

    move-result p1

    if-ne p1, v1, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/h/a;->hE()V

    :cond_1
    iget-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->tH:Z

    if-eqz p1, :cond_2

    iget-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->xn:Z

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->resume()V

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->lr:Landroid/widget/FrameLayout;

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final cc()V
    .locals 2

    const-string v0, "TkRewardVideoTaskPresenter"

    const-string v1, "onTkLoadFailed: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->lr:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final eh()V
    .locals 2

    const-string v0, "TkRewardVideoTaskPresenter"

    const-string v1, "onTkLoadSuccess: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/h/a;->getContext()Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->lr:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->pause()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->tH:Z

    :cond_0
    return-void
.end method

.method public final em()V
    .locals 0

    return-void
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->lr:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    const-string v0, "TkRewardVideoTaskPresenter"

    const-string v1, "getTkTemplateId: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-video-task-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getTouchCoordsView()Lcom/kwad/sdk/widget/e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    return-object v0
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    const-string v0, "TkRewardVideoTaskPresenter"

    const-string v1, "onCreate: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_task:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->lr:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->tI:Lcom/kwad/components/ad/reward/j$b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->Lg:Ljava/util/List;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->sk:Lcom/kwad/components/core/l/a/a;

    invoke-interface {v0, v1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j/a/d;->jv()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->lr:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->clear()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->tG:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->tH:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a;->xn:Z

    return-void
.end method
