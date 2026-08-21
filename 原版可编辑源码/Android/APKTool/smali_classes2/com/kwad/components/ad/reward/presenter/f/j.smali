.class public final Lcom/kwad/components/ad/reward/presenter/f/j;
.super Lcom/kwad/components/ad/reward/presenter/f/d;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/h;
.implements Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;


# instance fields
.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private wH:Lcom/kwad/components/core/webview/jshandler/am;

.field private wI:Z

.field private wJ:Z

.field private wT:Landroid/widget/FrameLayout;

.field private wU:Landroid/view/View;

.field private wV:Z

.field private wW:Lcom/kwad/components/ad/reward/j$a;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wV:Z

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/j$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/j$1;-><init>(Lcom/kwad/components/ad/reward/presenter/f/j;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/j$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/j$2;-><init>(Lcom/kwad/components/ad/reward/presenter/f/j;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wW:Lcom/kwad/components/ad/reward/j$a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wT:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/f/j;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wJ:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/f/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/j;->jg()V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/f/j;)Lcom/kwad/components/core/webview/jshandler/am;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/f/j;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/j;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wU:Landroid/view/View;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/j;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/j;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private jg()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wJ:Z

    if-eqz v1, :cond_1

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wI:Z

    if-nez v1, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wI:Z

    return-void

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rD()V

    :cond_1
    return-void
.end method

.method private ji()Lcom/kwad/components/core/webview/b/a/e$b;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/j$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/j$3;-><init>(Lcom/kwad/components/ad/reward/presenter/f/j;)V

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;Landroid/view/View;)V
    .locals 0

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wU:Landroid/view/View;

    return-void
.end method

.method public final a(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/ad/reward/presenter/f/d;->a(Lcom/kwad/components/core/webview/jshandler/am;)V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/f/d;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V

    new-instance p2, Lcom/kwad/components/core/webview/b/a/e;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/j;->ji()Lcom/kwad/components/core/webview/b/a/e$b;

    move-result-object v0

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/b/a/e;-><init>(Lcom/kwad/components/core/webview/b/a/e$b;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wW:Lcom/kwad/components/ad/reward/j$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/j;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/j;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getScreenHeight(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/j;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    div-float/2addr v2, v0

    const/high16 v3, 0x3f000000    # 0.5f

    add-float/2addr v2, v3

    float-to-int v2, v2

    iput v2, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    div-float/2addr v1, v0

    add-float/2addr v1, v3

    float-to-int v0, v1

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    return-void
.end method

.method public final bS()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wV:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wT:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final bT()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wV:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wT:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final cc()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wV:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wT:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method protected final cd()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final eh()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->eh()V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/j;->jg()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wV:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wT:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wT:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-video-topfloor"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_topfloor:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/j;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wT:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->wW:Lcom/kwad/components/ad/reward/j$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->b(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/ad/reward/e/h;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/core/webview/b/e/a;)V

    return-void
.end method
