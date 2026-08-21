.class public final Lcom/kwad/components/core/s/b/a;
.super Lcom/kwad/sdk/mvp/Presenter;

# interfaces
.implements Lcom/kwad/components/core/webview/b/i;


# instance fields
.field private QW:Landroid/widget/FrameLayout;

.field private QX:Lcom/kwad/components/core/webview/jshandler/am;

.field protected QY:Z

.field protected QZ:Lcom/kwad/components/core/s/a/b;

.field private Ra:Lcom/kwad/components/core/l/a/a;

.field private lp:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    new-instance v0, Lcom/kwad/components/core/s/b/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/s/b/a$1;-><init>(Lcom/kwad/components/core/s/b/a;)V

    iput-object v0, p0, Lcom/kwad/components/core/s/b/a;->Ra:Lcom/kwad/components/core/l/a/a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/s/b/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/s/b/a;->qe()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/s/b/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/s/b/a;->qf()V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/core/s/b/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/s/b/a;->qg()V

    return-void
.end method

.method private qd()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QX:Lcom/kwad/components/core/webview/jshandler/am;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-boolean v1, p0, Lcom/kwad/components/core/s/b/a;->QY:Z

    if-nez v1, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QX:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/s/b/a;->QY:Z

    return-void

    :cond_1
    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rD()V

    return-void
.end method

.method private qe()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/s/b/a;->qd()V

    return-void
.end method

.method private qf()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QX:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    iget-boolean v1, p0, Lcom/kwad/components/core/s/b/a;->QY:Z

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rE()V

    :cond_1
    :goto_0
    return-void
.end method

.method private qg()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QX:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    iget-boolean v1, p0, Lcom/kwad/components/core/s/b/a;->QY:Z

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QX:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_1
    :goto_0
    return-void
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

    iput-object p1, p0, Lcom/kwad/components/core/s/b/a;->QX:Lcom/kwad/components/core/webview/jshandler/am;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 0

    return-void
.end method

.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/core/s/b/a;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/s/a/b;

    iput-object v0, p0, Lcom/kwad/components/core/s/b/a;->QZ:Lcom/kwad/components/core/s/a/b;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/s/b/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/core/s/b/a;->QW:Landroid/widget/FrameLayout;

    new-instance v0, Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {p0}, Lcom/kwad/components/core/s/b/a;->getContext()Landroid/content/Context;

    move-result-object v1

    const/16 v2, 0x3e8

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/b/h;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/kwad/components/core/s/b/a;->lp:Lcom/kwad/components/core/webview/b/h;

    iget-object v1, p0, Lcom/kwad/components/core/s/b/a;->QZ:Lcom/kwad/components/core/s/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/s/a/b;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QZ:Lcom/kwad/components/core/s/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/s/a/b;->QR:Lcom/kwad/sdk/components/h;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QZ:Lcom/kwad/components/core/s/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/s/a/b;->QR:Lcom/kwad/sdk/components/h;

    iget-object v1, p0, Lcom/kwad/components/core/s/b/a;->lp:Lcom/kwad/components/core/webview/b/h;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/components/h;->a(Lcom/kwad/sdk/components/i;)V

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->lp:Lcom/kwad/components/core/webview/b/h;

    new-instance v1, Lcom/kwad/components/core/s/b/a$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/s/b/a$2;-><init>(Lcom/kwad/components/core/s/b/a;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/core/webview/c/g;)V

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->lp:Lcom/kwad/components/core/webview/b/h;

    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    const-string v2, "hasTKBridge"

    invoke-virtual {v0, v2, v1}, Lcom/kwad/components/core/webview/b/h;->a(Ljava/lang/String;Ljava/lang/Object;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->lp:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {p0}, Lcom/kwad/components/core/s/b/a;->getActivity()Landroid/app/Activity;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/s/b/a;->QZ:Lcom/kwad/components/core/s/a/b;

    iget-object v2, v2, Lcom/kwad/components/core/s/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1, v2, p0}, Lcom/kwad/components/core/webview/b/h;->a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/i;)V

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QZ:Lcom/kwad/components/core/s/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/s/a/b;->Lg:Ljava/util/List;

    iget-object v1, p0, Lcom/kwad/components/core/s/b/a;->Ra:Lcom/kwad/components/core/l/a/a;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/m;)V
    .locals 0

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/core/s/b/a;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/core/s/b/a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    const/high16 v2, 0x3f000000    # 0.5f

    add-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    invoke-virtual {p0}, Lcom/kwad/components/core/s/b/a;->getContext()Landroid/content/Context;

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
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/core/s/b/a;->getActivity()Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    return-void
.end method

.method public final cc()V
    .locals 0

    return-void
.end method

.method public final eh()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/s/b/a;->qd()V

    return-void
.end method

.method public final em()V
    .locals 0

    return-void
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QW:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QZ:Lcom/kwad/components/core/s/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/s/a/b;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    iget-object v0, v0, Lcom/kwad/components/offline/api/tk/model/StyleTemplate;->templateId:Ljava/lang/String;

    return-object v0
.end method

.method public final getTouchCoordsView()Lcom/kwad/sdk/widget/e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QZ:Lcom/kwad/components/core/s/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/s/a/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    return-object v0
.end method

.method public final onCreate()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->onCreate()V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->onUnbind()V

    invoke-direct {p0}, Lcom/kwad/components/core/s/b/a;->qg()V

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->lp:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/h;->jv()V

    iget-object v0, p0, Lcom/kwad/components/core/s/b/a;->QZ:Lcom/kwad/components/core/s/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/s/a/b;->Lg:Ljava/util/List;

    iget-object v1, p0, Lcom/kwad/components/core/s/b/a;->Ra:Lcom/kwad/components/core/l/a/a;

    invoke-interface {v0, v1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method
