.class public final Lcom/kwad/components/ad/fullscreen/c/c/b;
.super Lcom/kwad/components/ad/reward/presenter/f/a;


# instance fields
.field private dO:Lcom/kwad/sdk/core/g/d;

.field private dP:Landroid/os/Vibrator;

.field private hk:Landroid/widget/FrameLayout;

.field private hl:Landroid/widget/ImageView;

.field private hm:Lcom/kwad/components/ad/reward/e/h;

.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/c/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/c/b$1;-><init>(Lcom/kwad/components/ad/fullscreen/c/c/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hm:Lcom/kwad/components/ad/reward/e/h;

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/c/b$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/c/b$2;-><init>(Lcom/kwad/components/ad/fullscreen/c/c/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hk:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/fullscreen/c/c/b;)Lcom/kwad/sdk/core/g/d;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->dO:Lcom/kwad/sdk/core/g/d;

    return-object p0
.end method

.method private bs()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->dO:Lcom/kwad/sdk/core/g/d;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->ds(Lcom/kwad/sdk/core/response/model/AdInfo;)F

    move-result v0

    new-instance v1, Lcom/kwad/sdk/core/g/d;

    invoke-direct {v1, v0}, Lcom/kwad/sdk/core/g/d;-><init>(F)V

    iput-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->dO:Lcom/kwad/sdk/core/g/d;

    new-instance v2, Lcom/kwad/components/ad/fullscreen/c/c/b$3;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/fullscreen/c/c/b$3;-><init>(Lcom/kwad/components/ad/fullscreen/c/c/b;)V

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/g/d;->a(Lcom/kwad/sdk/core/g/b;)V

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->dO:Lcom/kwad/sdk/core/g/d;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/g/d;->e(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->dO:Lcom/kwad/sdk/core/g/d;

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bg(Landroid/content/Context;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "vibrator"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Vibrator;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->dP:Landroid/os/Vibrator;

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private ce()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->I(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/fullscreen/c/c/b$5;

    invoke-direct {v1, p0, v0}, Lcom/kwad/components/ad/fullscreen/c/c/b$5;-><init>(Lcom/kwad/components/ad/fullscreen/c/c/b;Ljava/lang/String;)V

    const-wide/16 v2, 0x3e8

    invoke-static {v1, v2, v3}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hl:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/fullscreen/c/c/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/fullscreen/c/c/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/fullscreen/c/c/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic j(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/os/Vibrator;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->dP:Landroid/os/Vibrator;

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/components/ad/fullscreen/c/c/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->bs()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/f/a;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/ao;

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/c/b$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/fullscreen/c/c/b$4;-><init>(Lcom/kwad/components/ad/fullscreen/c/c/b;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/ao;-><init>(Lcom/kwad/components/core/webview/jshandler/ao$a;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pk:Z

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hm:Lcom/kwad/components/ad/reward/e/h;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/ad/reward/e/h;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->getContext()Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hl:Landroid/widget/ImageView;

    sget-object v1, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hl:Landroid/widget/ImageView;

    sget-object v1, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->ce()V

    return-void
.end method

.method public final cc()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/a;->cc()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hk:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hl:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pk:Z

    return-void
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hk:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-fullscreen-video-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_full_card:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hk:Landroid/widget/FrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_tk_bg_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hl:Landroid/widget/ImageView;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b;->hm:Lcom/kwad/components/ad/reward/e/h;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method
