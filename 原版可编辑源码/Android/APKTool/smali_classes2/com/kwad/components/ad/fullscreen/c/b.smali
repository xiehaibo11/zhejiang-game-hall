.class public final Lcom/kwad/components/ad/fullscreen/c/b;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/f;


# instance fields
.field private gf:Lcom/kwad/components/ad/fullscreen/b;

.field private gg:Landroid/view/ViewGroup;

.field private gh:Lcom/kwad/components/core/l/b;

.field private gi:Lcom/kwad/components/ad/reward/presenter/q;

.field private gj:Lcom/kwad/components/ad/reward/presenter/f/b;

.field private gk:Lcom/kwad/components/core/webview/b/e/e;

.field private gl:Lcom/kwad/components/ad/reward/presenter/e/a;

.field private gm:Lcom/kwad/components/ad/reward/presenter/f/h;

.field private mPlayLayout:Landroid/widget/FrameLayout;


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/l/b;Landroid/view/ViewGroup;Lcom/kwad/components/ad/fullscreen/b;Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gh:Lcom/kwad/components/core/l/b;

    iput-object p3, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gf:Lcom/kwad/components/ad/fullscreen/b;

    iput-object p2, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gg:Landroid/view/ViewGroup;

    iput-object p4, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->bI()V

    return-void
.end method

.method private a(Lcom/kwad/components/ad/reward/e/f;)I
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->getPriority()I

    move-result v0

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/f;->getPriority()I

    move-result p1

    sub-int/2addr v0, p1

    return v0
.end method

.method static synthetic a(Lcom/kwad/components/ad/fullscreen/c/b;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/fullscreen/c/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private bI()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gf:Lcom/kwad/components/ad/fullscreen/b;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->bN()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gf:Lcom/kwad/components/ad/fullscreen/b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/fullscreen/b;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cF(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->dF(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    sget-object v1, Lcom/kwad/components/ad/reward/RewardRenderResult;->LIVE_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->bO()Lcom/kwad/components/core/webview/b/e/e;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->bK()V

    return-void

    :cond_1
    if-eqz v0, :cond_2

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->bO()Lcom/kwad/components/core/webview/b/e/e;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    sget-object v1, Lcom/kwad/components/ad/reward/RewardRenderResult;->TK_IMAGE:Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->bL()V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    sget-object v1, Lcom/kwad/components/ad/reward/RewardRenderResult;->FULLSCREEN_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->bM()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->bO()Lcom/kwad/components/core/webview/b/e/e;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    sget-object v1, Lcom/kwad/components/ad/reward/RewardRenderResult;->DEFAULT:Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->bJ()V

    return-void
.end method

.method private bJ()V
    .locals 5

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gk:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gf:Lcom/kwad/components/ad/fullscreen/b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/fullscreen/b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gf:Lcom/kwad/components/ad/fullscreen/b;

    invoke-virtual {v1}, Lcom/kwad/components/ad/fullscreen/b;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gf:Lcom/kwad/components/ad/fullscreen/b;

    invoke-virtual {v2}, Lcom/kwad/components/ad/fullscreen/b;->bC()Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IO()Z

    move-result v2

    if-nez v2, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    new-instance v4, Lcom/kwad/components/ad/reward/presenter/u;

    invoke-direct {v4}, Lcom/kwad/components/ad/reward/presenter/u;-><init>()V

    invoke-virtual {p0, v4, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v4

    if-eqz v4, :cond_1

    new-instance v4, Lcom/kwad/components/ad/reward/presenter/c;

    invoke-direct {v4}, Lcom/kwad/components/ad/reward/presenter/c;-><init>()V

    invoke-virtual {p0, v4, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_1
    new-instance v4, Lcom/kwad/components/ad/reward/presenter/l;

    invoke-direct {v4}, Lcom/kwad/components/ad/reward/presenter/l;-><init>()V

    invoke-virtual {p0, v4, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v4, Lcom/kwad/components/ad/reward/presenter/platdetail/c;

    invoke-direct {v4}, Lcom/kwad/components/ad/reward/presenter/platdetail/c;-><init>()V

    invoke-virtual {p0, v4, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v4, Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-direct {v4}, Lcom/kwad/components/ad/reward/presenter/f/e;-><init>()V

    invoke-virtual {p0, v4, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->cM(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v4

    if-eqz v4, :cond_2

    new-instance v4, Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-direct {v4}, Lcom/kwad/components/ad/reward/presenter/f/j;-><init>()V

    invoke-virtual {p0, v4, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_2
    if-nez v2, :cond_3

    new-instance v2, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;

    invoke-direct {v2}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;-><init>()V

    invoke-virtual {p0, v2, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_3
    new-instance v2, Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-direct {v2}, Lcom/kwad/components/ad/reward/presenter/c/a;-><init>()V

    invoke-virtual {p0, v2, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bN(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_4

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/a/f;

    invoke-direct {v0}, Lcom/kwad/components/ad/fullscreen/c/a/f;-><init>()V

    invoke-virtual {p0, v0, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_4
    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_5

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;-><init>()V

    invoke-virtual {p0, v0, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_5
    new-instance v0, Lcom/kwad/components/ad/reward/presenter/k;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/k;-><init>()V

    invoke-virtual {p0, v0, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_6

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/b/c;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/b/c;-><init>()V

    invoke-virtual {p0, v0, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/b/b;-><init>()V

    invoke-virtual {p0, v0, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/j;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/j;-><init>()V

    invoke-virtual {p0, v0, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/b/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/b/a;-><init>()V

    invoke-virtual {p0, v0, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_6
    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/c;

    invoke-direct {v0}, Lcom/kwad/components/ad/fullscreen/c/c;-><init>()V

    invoke-virtual {p0, v0, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/i;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/i;-><init>()V

    invoke-virtual {p0, v0, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    return-void
.end method

.method private bK()V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gj:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method private bL()V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/c;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/f/c;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gm:Lcom/kwad/components/ad/reward/presenter/f/h;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method private bM()V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;-><init>()V

    const/4 v1, 0x1

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    return-void
.end method

.method private bN()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gf:Lcom/kwad/components/ad/fullscreen/b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/fullscreen/b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gf:Lcom/kwad/components/ad/fullscreen/b;

    invoke-virtual {v1}, Lcom/kwad/components/ad/fullscreen/b;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/ad/fullscreen/c/a;

    invoke-direct {v2}, Lcom/kwad/components/ad/fullscreen/c/a;-><init>()V

    const/4 v3, 0x1

    invoke-virtual {p0, v2, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v2, Lcom/kwad/components/ad/reward/presenter/d/b;

    const/4 v4, 0x0

    invoke-direct {v2, v0, v4}, Lcom/kwad/components/ad/reward/presenter/d/b;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V

    invoke-virtual {p0, v2, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v2, Lcom/kwad/components/ad/reward/presenter/q;

    invoke-direct {v2, v0, v4, v4}, Lcom/kwad/components/ad/reward/presenter/q;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;ZZ)V

    iput-object v2, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gi:Lcom/kwad/components/ad/reward/presenter/q;

    invoke-virtual {p0, v2, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v2, Lcom/kwad/components/ad/reward/presenter/d;

    iget-object v4, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gg:Landroid/view/ViewGroup;

    invoke-direct {v2, v0, v1, v4}, Lcom/kwad/components/ad/reward/presenter/d;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;Landroid/view/ViewGroup;)V

    invoke-virtual {p0, v2, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->dC(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IO()Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/e/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/e/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gl:Lcom/kwad/components/ad/reward/presenter/e/a;

    invoke-virtual {p0, v0, v3}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_0
    return-void
.end method

.method private bO()Lcom/kwad/components/core/webview/b/e/e;
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gk:Lcom/kwad/components/core/webview/b/e/e;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gf:Lcom/kwad/components/ad/fullscreen/b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/fullscreen/b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    const-string v1, "ksad-fullscreen-video-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v2, "ksad-live-video-card"

    invoke-static {v2, v1}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v3, "ksad-image-video-card"

    invoke-static {v3, v2}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Lcom/kwad/components/ad/fullscreen/c/b$1;

    invoke-direct {v3, p0, v0, v1, v2}, Lcom/kwad/components/ad/fullscreen/c/b$1;-><init>(Lcom/kwad/components/ad/fullscreen/c/b;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v3, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gk:Lcom/kwad/components/core/webview/b/e/e;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gk:Lcom/kwad/components/core/webview/b/e/e;

    return-object v0
.end method

.method static synthetic c(Lcom/kwad/components/ad/fullscreen/c/b;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->mPlayLayout:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/fullscreen/c/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->bJ()V

    return-void
.end method

.method static synthetic e(Lcom/kwad/components/ad/fullscreen/c/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    return-void
.end method

.method public final bD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->E(Z)V

    return-void
.end method

.method public final bP()Z
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gi:Lcom/kwad/components/ad/reward/presenter/q;

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/q;->bP()Z

    move-result v0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gl:Lcom/kwad/components/ad/reward/presenter/e/a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    move-result-object v0

    sget-object v2, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    if-ne v0, v2, :cond_1

    return v1

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gj:Lcom/kwad/components/ad/reward/presenter/f/b;

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;->gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    move-result-object v0

    sget-object v3, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    if-ne v0, v3, :cond_2

    return v1

    :cond_2
    return v2
.end method

.method public final synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/e/f;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/components/ad/reward/e/f;)I

    move-result p1

    return p1
.end method

.method public final getPriority()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final onCreate()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gg:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_play_layout:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->mPlayLayout:Landroid/widget/FrameLayout;

    sget-object v0, Lcom/kwad/components/ad/reward/RewardRenderResult;->DEFAULT:Lcom/kwad/components/ad/reward/RewardRenderResult;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/j;->fZ()Lcom/kwad/components/ad/reward/RewardRenderResult;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/RewardRenderResult;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/fullscreen/c/b;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/c/b;->mPlayLayout:Landroid/widget/FrameLayout;

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/reward/j;->a(Landroid/content/Context;Lcom/kwad/components/ad/reward/j;Landroid/view/ViewGroup;)V

    :cond_0
    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/b;->gk:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void
.end method
