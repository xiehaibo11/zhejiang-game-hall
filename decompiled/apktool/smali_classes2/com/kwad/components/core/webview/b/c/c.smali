.class public Lcom/kwad/components/core/webview/b/c/c;
.super Lcom/kwad/components/core/webview/b/c/a;


# instance fields
.field private QW:Landroid/widget/FrameLayout;

.field private VP:Lcom/kwad/components/core/webview/b/c/d;

.field private Xq:Lcom/kwad/components/core/webview/b/a/p;

.field private Xr:Lcom/kwad/components/core/webview/jshandler/am;

.field private Xs:Lcom/kwad/components/core/webview/b/e/d;

.field private xD:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/c/a;-><init>()V

    new-instance v0, Lcom/kwad/components/core/webview/b/c/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/b/c/c$2;-><init>(Lcom/kwad/components/core/webview/b/c/c;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xs:Lcom/kwad/components/core/webview/b/e/d;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/c/c;)Lcom/kwad/components/core/webview/jshandler/am;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xr:Lcom/kwad/components/core/webview/jshandler/am;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/core/webview/b/c/c;)Lcom/kwad/components/core/webview/b/c/d;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/c/c;->VP:Lcom/kwad/components/core/webview/b/c/d;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/core/webview/b/c/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/c/c;->rY()V

    return-void
.end method

.method private rY()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->Xp:Lcom/kwad/components/core/webview/b/c/d$a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->Xp:Lcom/kwad/components/core/webview/b/c/d$a;

    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/c/d$a;->gi()Z

    :cond_0
    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/c;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->aS(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->Xn:Lcom/kwad/sdk/components/g;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->Xn:Lcom/kwad/sdk/components/g;

    const/4 v1, 0x0

    const-string v2, "render failed"

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/components/g;->callbackPageStatus(ZLjava/lang/String;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/a/p;)V
    .locals 4

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xq:Lcom/kwad/components/core/webview/b/a/p;

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-wide v0, p1, Lcom/kwad/components/core/webview/b/c/b;->xI:J

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xq:Lcom/kwad/components/core/webview/b/a/p;

    if-eqz p1, :cond_0

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    if-lez p1, :cond_0

    new-instance p1, Lcom/kwad/components/core/webview/b/b/y;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/y;-><init>()V

    long-to-float v0, v0

    const/high16 v1, 0x447a0000    # 1000.0f

    div-float/2addr v0, v1

    const/high16 v1, 0x3f000000    # 0.5f

    add-float/2addr v0, v1

    float-to-int v0, v0

    iput v0, p1, Lcom/kwad/components/core/webview/b/b/y;->nM:I

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xq:Lcom/kwad/components/core/webview/b/a/p;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/webview/b/a/p;->a(Lcom/kwad/components/core/webview/b/b/y;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/b/t;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/b/c/a;->a(Lcom/kwad/components/core/webview/b/b/t;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->VP:Lcom/kwad/components/core/webview/b/c/d;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b/c/d;->dismiss()V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/c/b;->QM:Lcom/kwad/components/core/webview/b/e/c;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/c/b;->QM:Lcom/kwad/components/core/webview/b/e/c;

    const/4 v0, 0x1

    invoke-interface {p1, v0}, Lcom/kwad/components/core/webview/b/e/c;->H(Z)V

    :cond_1
    return-void
.end method

.method protected final a(Lcom/kwad/components/core/webview/b/c/b;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/b/c/a;->a(Lcom/kwad/components/core/webview/b/c/b;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/c/b;->xD:Ljava/lang/String;

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->xD:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/c/b;->VP:Lcom/kwad/components/core/webview/b/c/d;

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->VP:Lcom/kwad/components/core/webview/b/c/d;

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xr:Lcom/kwad/components/core/webview/jshandler/am;

    return-void
.end method

.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/core/webview/b/c/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->VP:Lcom/kwad/components/core/webview/b/c/d;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xs:Lcom/kwad/components/core/webview/b/e/d;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d;->a(Lcom/kwad/components/core/webview/b/e/d;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->Xn:Lcom/kwad/sdk/components/g;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->lp:Lcom/kwad/components/core/webview/b/h;

    new-instance v1, Lcom/kwad/components/core/webview/b/c/c$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b/c/c$1;-><init>(Lcom/kwad/components/core/webview/b/c/c;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/core/webview/c/g;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->Xn:Lcom/kwad/sdk/components/g;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/c;->lp:Lcom/kwad/components/core/webview/b/h;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/components/g;->a(Lcom/kwad/sdk/components/i;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->lp:Lcom/kwad/components/core/webview/b/h;

    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    const-string v2, "hasTKBridge"

    invoke-virtual {v0, v2, v1}, Lcom/kwad/components/core/webview/b/h;->a(Ljava/lang/String;Ljava/lang/Object;)V

    :cond_1
    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/c;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/c;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    const/high16 v2, 0x3f000000    # 0.5f

    add-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/c;->getContext()Landroid/content/Context;

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

.method public b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/b/c/a;->b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/c/b;->Xn:Lcom/kwad/sdk/components/g;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/c/b;->Xn:Lcom/kwad/sdk/components/g;

    invoke-interface {p1}, Lcom/kwad/sdk/components/g;->callbackDialogDismiss()V

    :cond_0
    return-void
.end method

.method public cc()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->VP:Lcom/kwad/components/core/webview/b/c/d;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/c/d;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->VP:Lcom/kwad/components/core/webview/b/c/d;

    new-instance v1, Lcom/kwad/components/core/webview/b/c/c$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/b/c/c$3;-><init>(Lcom/kwad/components/core/webview/b/c/c;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d;->d(Landroid/content/DialogInterface$OnDismissListener;)V

    goto :goto_0

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/c/c;->rY()V

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->VP:Lcom/kwad/components/core/webview/b/c/d;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/c/d;->dismiss()V

    return-void

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/c/c;->rY()V

    return-void
.end method

.method public final eh()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->Xn:Lcom/kwad/sdk/components/g;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->Xn:Lcom/kwad/sdk/components/g;

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/components/g;->callbackPageStatus(ZLjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final em()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/webview/b/c/a;->em()V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-boolean v0, v0, Lcom/kwad/components/core/webview/b/c/b;->Xo:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->QM:Lcom/kwad/components/core/webview/b/e/c;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->QM:Lcom/kwad/components/core/webview/b/e/c;

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/kwad/components/core/webview/b/e/c;->H(Z)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->VP:Lcom/kwad/components/core/webview/b/c/d;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/c/d;->dismiss()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->QM:Lcom/kwad/components/core/webview/b/e/c;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->QM:Lcom/kwad/components/core/webview/b/e/c;

    invoke-interface {v0}, Lcom/kwad/components/core/webview/b/e/c;->gp()V

    :cond_2
    return-void
.end method

.method public getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->QW:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    iget-object v0, v0, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateId:Ljava/lang/String;

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->xD:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v1, v1, Lcom/kwad/components/core/webview/b/c/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/webview/b/c/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_tk_dialog_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/webview/b/c/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/c/c;->QW:Landroid/widget/FrameLayout;

    return-void
.end method
