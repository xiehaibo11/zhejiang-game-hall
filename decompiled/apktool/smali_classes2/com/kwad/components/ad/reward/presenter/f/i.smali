.class public final Lcom/kwad/components/ad/reward/presenter/f/i;
.super Lcom/kwad/components/ad/reward/presenter/f/d;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/h;


# instance fields
.field private hi:Landroid/widget/FrameLayout;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private rD:J

.field private wQ:Lcom/kwad/components/core/webview/b/e;

.field private wR:Lcom/kwad/components/ad/reward/l/b;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/i$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/i$1;-><init>(Lcom/kwad/components/ad/reward/presenter/f/i;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->wR:Lcom/kwad/components/ad/reward/l/b;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/i$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/i$2;-><init>(Lcom/kwad/components/ad/reward/presenter/f/i;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/core/webview/b/e;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->wQ:Lcom/kwad/components/core/webview/b/e;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/f/i;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->hi:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private jf()Lcom/kwad/components/core/webview/b/e;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/i$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/i$3;-><init>(Lcom/kwad/components/ad/reward/presenter/f/i;)V

    return-object v0
.end method


# virtual methods
.method public final a(JJ)V
    .locals 7

    invoke-super {p0, p1, p2, p3, p4}, Lcom/kwad/components/ad/reward/presenter/f/d;->a(JJ)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    const/4 p2, 0x0

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/r/a;->pT()I

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    move p1, p2

    :goto_0
    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aE(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p1

    goto :goto_1

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aC(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p1

    :goto_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pm:Z

    if-eqz v0, :cond_2

    const/16 p2, 0x3e8

    :cond_2
    mul-int/2addr p1, p2

    int-to-long v5, p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-wide v3, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->rD:J

    move-wide v1, p3

    invoke-static/range {v0 .. v6}, Lcom/kwad/components/ad/reward/n;->a(Lcom/kwad/components/ad/reward/j;JJJ)V

    return-void
.end method

.method public final a(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/f/d;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/i;->jf()Lcom/kwad/components/core/webview/b/e;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->wQ:Lcom/kwad/components/core/webview/b/e;

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/i;->cd()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->H(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->rD:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->wR:Lcom/kwad/components/ad/reward/l/b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/ad/reward/l/b;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/i;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/i;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    const/high16 v0, 0x3f000000    # 0.5f

    add-float/2addr v1, v0

    float-to-int v0, v1

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    const/16 v0, 0x2c

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    return-void
.end method

.method public final bS()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pl:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->hi:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final bT()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v1, v1, Lcom/kwad/components/ad/reward/j;->pl:Z

    if-eqz v1, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ak(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->hi:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final cc()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->cc()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pl:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->C(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->hi:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method protected final cd()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

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

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->hi:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-video-top-bar"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_top:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/i;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->hi:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onUnbind()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/i;->cd()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/i;->wR:Lcom/kwad/components/ad/reward/l/b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/ad/reward/l/b;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method
