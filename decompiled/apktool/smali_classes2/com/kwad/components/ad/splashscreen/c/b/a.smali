.class public final Lcom/kwad/components/ad/splashscreen/c/b/a;
.super Lcom/kwad/components/ad/splashscreen/c/c/a;

# interfaces
.implements Lcom/kwad/components/ad/splashscreen/g;
.implements Lcom/kwad/sdk/core/h/c;


# instance fields
.field private ED:Lcom/kwad/components/core/webview/b/a/m;

.field Ey:Lcom/kwad/components/ad/splashscreen/f;

.field private lr:Landroid/widget/FrameLayout;

.field private wH:Lcom/kwad/components/core/webview/jshandler/am;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/c/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/b/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/b/a$2;-><init>(Lcom/kwad/components/ad/splashscreen/c/b/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->Ey:Lcom/kwad/components/ad/splashscreen/f;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/b/a;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method private a(Lcom/kwad/sdk/core/webview/b;)Lcom/kwad/components/core/webview/jshandler/o;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance v2, Lcom/kwad/components/ad/splashscreen/c/b/a$1;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/splashscreen/c/b/a$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/b/a;)V

    invoke-direct {v0, p1, v1, v2}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    return-object v0
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/b/a;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/c/b/a;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->lr:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method private lz()Lcom/kwad/components/core/webview/b/a/m;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/b/a/m;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/a/m;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->ED:Lcom/kwad/components/core/webview/b/a/m;

    return-object v0
.end method


# virtual methods
.method public final X(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->ED:Lcom/kwad/components/core/webview/b/a/m;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/webview/b/a/m;->aP(I)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/ad/splashscreen/c/c/a;->a(Lcom/kwad/components/core/webview/jshandler/am;)V

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/c/c/a;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V

    invoke-direct {p0, p2}, Lcom/kwad/components/ad/splashscreen/c/b/a;->a(Lcom/kwad/sdk/core/webview/b;)Lcom/kwad/components/core/webview/jshandler/o;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/b/a;->lz()Lcom/kwad/components/core/webview/b/a/m;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final aK()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-boolean v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cj:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rD()V

    :cond_1
    return-void
.end method

.method public final aL()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-boolean v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cj:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rE()V

    :cond_1
    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/c/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->a(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/h;->a(Lcom/kwad/components/ad/splashscreen/g;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->Ey:Lcom/kwad/components/ad/splashscreen/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/h;->a(Lcom/kwad/components/ad/splashscreen/f;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/b/a;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getWidth()I

    move-result v1

    int-to-float v1, v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->b(Landroid/content/Context;F)I

    move-result v0

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/b/a;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getHeight()I

    move-result v1

    int-to-float v1, v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->b(Landroid/content/Context;F)I

    move-result v0

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    return-void
.end method

.method public final cc()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->lr:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final eh()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-boolean v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cj:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->lr:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->lr:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-splash-play-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final kD()V
    .locals 0

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/c/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->splash_tk_play_card_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/b/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->lr:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/c/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->b(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->Ey:Lcom/kwad/components/ad/splashscreen/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/h;->b(Lcom/kwad/components/ad/splashscreen/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/b/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/h;->b(Lcom/kwad/components/ad/splashscreen/g;)V

    return-void
.end method
