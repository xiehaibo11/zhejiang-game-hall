.class public final Lcom/kwad/components/ad/reward/presenter/a/a;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/core/webview/b/i;


# instance fields
.field private lp:Lcom/kwad/components/core/webview/b/h;

.field private lr:Landroid/widget/FrameLayout;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private final mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private tE:J

.field private tF:J

.field private tG:Z

.field private tH:Z

.field private tI:Lcom/kwad/components/ad/reward/j$b;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/a/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/a/a$1;-><init>(Lcom/kwad/components/ad/reward/presenter/a/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tI:Lcom/kwad/components/ad/reward/j$b;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/a/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/a/a$2;-><init>(Lcom/kwad/components/ad/reward/presenter/a/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/a/a;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lr:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/a/a;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tG:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/a/a;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/a/a;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tE:J

    return-wide v0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/a/a;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tF:J

    return-wide v0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/a/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tG:Z

    return p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/presenter/a/a;)Lcom/kwad/components/core/webview/b/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lp:Lcom/kwad/components/core/webview/b/h;

    return-object p0
.end method

.method private hU()Lcom/kwad/components/core/webview/b/h;
    .locals 4

    new-instance v0, Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/a/a;->getContext()Landroid/content/Context;

    move-result-object v1

    const-wide/16 v2, -0x1

    invoke-direct {v0, v2, v3, v1}, Lcom/kwad/components/core/webview/b/h;-><init>(JLandroid/content/Context;)V

    return-object v0
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/presenter/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic j(Lcom/kwad/components/ad/reward/presenter/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

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
    .locals 9

    new-instance v8, Lcom/kwad/components/ad/reward/j/q;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v0, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    new-instance v6, Lcom/kwad/components/ad/reward/presenter/a/a$3;

    invoke-direct {v6, p0}, Lcom/kwad/components/ad/reward/presenter/a/a$3;-><init>(Lcom/kwad/components/ad/reward/presenter/a/a;)V

    const-wide/16 v4, -0x1

    const/4 v7, 0x0

    move-object v0, v8

    move-object v1, p2

    invoke-direct/range {v0 .. v7}, Lcom/kwad/components/ad/reward/j/q;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/components/ad/reward/j;JLcom/kwad/sdk/core/webview/d/a/a;Landroid/content/DialogInterface$OnDismissListener;)V

    invoke-interface {p1, v8}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 0

    return-void
.end method

.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lp:Lcom/kwad/components/core/webview/b/h;

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a/a;->hU()Lcom/kwad/components/core/webview/b/h;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lp:Lcom/kwad/components/core/webview/b/h;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aB(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    int-to-long v0, v0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tE:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aC(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    int-to-long v0, v0

    mul-long/2addr v0, v2

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tF:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tI:Lcom/kwad/components/ad/reward/j$b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j$b;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/m;)V
    .locals 0

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/a/a;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/a/a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    const/high16 v2, 0x3f000000    # 0.5f

    add-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/a/a;->getContext()Landroid/content/Context;

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
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    if-eqz p1, :cond_0

    iget-boolean p1, p1, Lcom/kwad/sdk/commercial/model/WebCloseStatus;->interactSuccess:Z

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    iput-boolean p1, v0, Lcom/kwad/components/ad/reward/j;->pm:Z

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean p1, p1, Lcom/kwad/components/ad/reward/j;->pm:Z

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->jO()V

    :cond_1
    iget-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tH:Z

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lr:Landroid/widget/FrameLayout;

    const/16 v0, 0x1e

    invoke-static {p1, v0}, Lcom/kwad/sdk/utils/bm;->o(Landroid/view/View;I)Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->resume()V

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lr:Landroid/widget/FrameLayout;

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final cc()V
    .locals 2

    const-string v0, "TkRewardInteractPresenter"

    const-string v1, "onTkLoadFailed: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lr:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final eh()V
    .locals 2

    const-string v0, "TkRewardInteractPresenter"

    const-string v1, "onTkLoadSuccess: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/a/a;->getContext()Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lr:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/d/a;->P(Landroid/content/Context;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->pause()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tH:Z

    :cond_0
    return-void
.end method

.method public final em()V
    .locals 0

    return-void
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lr:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    const-string v0, "TkRewardInteractPresenter"

    const-string v1, "getTkTemplateId: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-video-interact-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getTouchCoordsView()Lcom/kwad/sdk/widget/e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    return-object v0
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_interact:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/a/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lr:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tI:Lcom/kwad/components/ad/reward/j$b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lp:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/h;->jv()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lp:Lcom/kwad/components/core/webview/b/h;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->lr:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tG:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/a/a;->tH:Z

    return-void
.end method
