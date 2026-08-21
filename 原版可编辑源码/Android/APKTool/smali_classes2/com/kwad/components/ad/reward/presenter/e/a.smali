.class public final Lcom/kwad/components/ad/reward/presenter/e/a;
.super Lcom/kwad/components/ad/reward/presenter/f/d;

# interfaces
.implements Lcom/kwad/components/ad/reward/j/a;


# instance fields
.field private of:Z

.field private vX:Lcom/kwad/sdk/widget/KSFrameLayout;

.field private vY:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;

.field private vZ:Lcom/kwad/components/core/webview/jshandler/am;

.field private wa:Lcom/kwad/components/ad/reward/e/f;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->of:Z

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/e/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/e/a$1;-><init>(Lcom/kwad/components/ad/reward/presenter/e/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->wa:Lcom/kwad/components/ad/reward/e/f;

    return-void
.end method

.method private U(Z)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->vX:Lcom/kwad/sdk/widget/KSFrameLayout;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/e/a$2;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/ad/reward/presenter/e/a$2;-><init>(Lcom/kwad/components/ad/reward/presenter/e/a;Z)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/e/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/e/a;->iN()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/e/a;)Lcom/kwad/sdk/widget/KSFrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->vX:Lcom/kwad/sdk/widget/KSFrameLayout;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/e/a;)Lcom/kwad/components/core/webview/jshandler/am;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->vZ:Lcom/kwad/components/core/webview/jshandler/am;

    return-object p0
.end method

.method private iN()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->of:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->vY:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;->isPlayEndShow()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->U(Z)V

    :cond_1
    :goto_0
    return-void
.end method

.method private iO()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->of:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->vY:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;->isSkipShow()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->U(Z)V

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/ad/reward/presenter/f/d;->a(Lcom/kwad/components/core/webview/jshandler/am;)V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->vZ:Lcom/kwad/components/core/webview/jshandler/am;

    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bP(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->vY:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->wa:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j/a;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/e/a;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/e/a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    const/high16 v2, 0x3f000000    # 0.5f

    add-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/e/a;->getContext()Landroid/content/Context;

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

.method public final cc()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->cc()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->of:Z

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->U(Z)V

    return-void
.end method

.method public final cd()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final eh()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->eh()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->of:Z

    return-void
.end method

.method public final gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->vX:Lcom/kwad/sdk/widget/KSFrameLayout;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->getVisibility()I

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j/a/d;->gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    move-result-object v0

    return-object v0

    :cond_1
    sget-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->NOT_HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    return-object v0

    :cond_2
    :goto_0
    sget-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->NOT_HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    return-object v0
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->vX:Lcom/kwad/sdk/widget/KSFrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-pre-landingpage-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final iP()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/e/a;->iN()V

    return-void
.end method

.method public final iQ()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/e/a;->iO()V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_pre_form_card:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->vX:Lcom/kwad/sdk/widget/KSFrameLayout;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->wa:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j/a;)V

    return-void
.end method
