.class public final Lcom/kwad/components/ad/reward/presenter/f/e;
.super Lcom/kwad/components/ad/reward/presenter/f/d;

# interfaces
.implements Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;


# instance fields
.field private lu:Lcom/kwad/components/core/webview/b/f;

.field private final pg:Lcom/kwad/components/core/webview/b/e/a;

.field private wA:Landroid/view/ViewGroup;

.field private wB:Landroid/view/ViewGroup;

.field private wC:Landroid/view/View;

.field private wD:Landroid/view/ViewGroup;

.field private wE:Landroid/widget/FrameLayout;

.field private wz:Landroid/view/ViewGroup;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/e$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/e$4;-><init>(Lcom/kwad/components/ad/reward/presenter/f/e;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->pg:Lcom/kwad/components/core/webview/b/e/a;

    return-void
.end method

.method private R(I)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/f/e$3;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/ad/reward/presenter/f/e$3;-><init>(Lcom/kwad/components/ad/reward/presenter/f/e;I)V

    const-wide/16 v2, 0x320

    invoke-virtual {v0, v1, v2, v3}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method private S(I)I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wA:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getHeight()I

    move-result v0

    if-lez v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wA:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getHeight()I

    move-result p1

    return p1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wD:Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getHeight()I

    move-result v0

    if-lez v0, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wD:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getHeight()I

    move-result p1

    return p1

    :cond_1
    if-lez p1, :cond_2

    return p1

    :cond_2
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/e;->getContext()Landroid/content/Context;

    move-result-object p1

    const/high16 v0, 0x42f00000    # 120.0f

    invoke-static {p1, v0}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p1

    return p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/f/e;I)I
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/f/e;->S(I)I

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/f/e;)I
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/e;->je()I

    move-result p0

    return p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/f/e;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wE:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method private ei()Lcom/kwad/components/core/webview/b/c;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/e$7;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/e$7;-><init>(Lcom/kwad/components/ad/reward/presenter/f/e;)V

    return-object v0
.end method

.method private ej()Lcom/kwad/components/core/webview/b/f;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/e$6;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/e$6;-><init>(Lcom/kwad/components/ad/reward/presenter/f/e;)V

    return-object v0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/core/webview/b/f;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->lu:Lcom/kwad/components/core/webview/b/f;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic j(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private je()I
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wz:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getHeight()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wz:Landroid/view/ViewGroup;

    :goto_0
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getHeight()I

    move-result v0

    return v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wC:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup$MarginLayoutParams;

    iget v0, v0, Landroid/view/ViewGroup$MarginLayoutParams;->topMargin:I

    add-int/lit8 v0, v0, 0x0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wC:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getHeight()I

    move-result v1

    add-int/2addr v0, v1

    if-lez v0, :cond_1

    return v0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wB:Landroid/view/ViewGroup;

    goto :goto_0
.end method

.method private jf()Lcom/kwad/components/core/webview/b/e;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/e$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/e$5;-><init>(Lcom/kwad/components/ad/reward/presenter/f/e;)V

    return-object v0
.end method

.method static synthetic k(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;Landroid/view/View;)V
    .locals 0

    invoke-virtual {p2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    if-eqz p1, :cond_1

    instance-of p2, p1, Landroid/view/ViewGroup$MarginLayoutParams;

    if-eqz p2, :cond_0

    move-object p2, p1

    check-cast p2, Landroid/view/ViewGroup$MarginLayoutParams;

    iget p2, p2, Landroid/view/ViewGroup$MarginLayoutParams;->bottomMargin:I

    iget p1, p1, Landroid/view/ViewGroup$LayoutParams;->height:I

    add-int/2addr p2, p1

    goto :goto_0

    :cond_0
    iget p2, p1, Landroid/view/ViewGroup$LayoutParams;->height:I

    goto :goto_0

    :cond_1
    const/4 p2, 0x0

    :goto_0
    invoke-direct {p0, p2}, Lcom/kwad/components/ad/reward/presenter/f/e;->R(I)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/f/d;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/e;->ej()Lcom/kwad/components/core/webview/b/f;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->lu:Lcom/kwad/components/core/webview/b/f;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->pg:Lcom/kwad/components/core/webview/b/e/a;

    invoke-virtual {p2, v0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/core/webview/b/e/a;)V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->lu:Lcom/kwad/components/core/webview/b/f;

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/e;->jf()Lcom/kwad/components/core/webview/b/e;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/b/b;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/e$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/e$1;-><init>(Lcom/kwad/components/ad/reward/presenter/f/e;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/b/b;-><init>(Lcom/kwad/components/core/webview/b/b$a;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/e;->ei()Lcom/kwad/components/core/webview/b/c;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/e$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/e$2;-><init>(Lcom/kwad/components/ad/reward/presenter/f/e;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/e;-><init>(Lcom/kwad/components/core/webview/jshandler/i;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wE:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/presenter/f/e;->R(I)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 0

    return-void
.end method

.method public final cc()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->cc()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wE:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method protected final cd()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wE:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-video-middle-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_middle:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wE:Landroid/widget/FrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_top:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wz:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_detail_top_toolbar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wB:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_bottom:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wA:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_web_card_webView:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wD:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_compliance_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->wC:Landroid/view/View;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->b(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/e;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/core/webview/b/e/a;)V

    return-void
.end method
