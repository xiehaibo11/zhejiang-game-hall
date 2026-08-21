.class public final Lcom/kwad/components/ad/reward/o;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/f;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/o$a;
    }
.end annotation


# instance fields
.field private gg:Landroid/view/ViewGroup;

.field private gh:Lcom/kwad/components/core/l/b;

.field private gi:Lcom/kwad/components/ad/reward/presenter/q;

.field private gj:Lcom/kwad/components/ad/reward/presenter/f/b;

.field private gl:Lcom/kwad/components/ad/reward/presenter/e/a;

.field private gm:Lcom/kwad/components/ad/reward/presenter/f/h;

.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private mModel:Lcom/kwad/components/ad/reward/model/c;

.field private mPlayLayout:Landroid/widget/FrameLayout;

.field private qx:Lcom/kwad/components/ad/reward/j;

.field private qy:Lcom/kwad/components/ad/reward/o$a;


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/l/b;Landroid/view/ViewGroup;Lcom/kwad/components/ad/reward/model/c;Lcom/kwad/components/ad/reward/j;)V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/o$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/o$1;-><init>(Lcom/kwad/components/ad/reward/o;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/o;->gt:Lcom/kwad/components/core/webview/b/e/e;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/o;->gg:Landroid/view/ViewGroup;

    iput-object p3, p0, Lcom/kwad/components/ad/reward/o;->mModel:Lcom/kwad/components/ad/reward/model/c;

    iput-object p4, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/o;->gh:Lcom/kwad/components/core/l/b;

    invoke-direct {p0, p3}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/ad/reward/model/c;)V

    invoke-virtual {p3}, Lcom/kwad/components/ad/reward/model/c;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/b;->dF(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-virtual {p3}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/components/ad/reward/j;->t(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v1, 0x1

    :goto_1
    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->cF(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p2

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "notFullTk: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, ", mLoadStrategy: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->pM:Lcom/kwad/components/ad/reward/LoadStrategy;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "RewardPresenter"

    invoke-static {v3, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p2, :cond_2

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/o;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    sget-object p1, Lcom/kwad/components/ad/reward/RewardRenderResult;->LIVE_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {p4, p1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/o;->bK()V

    return-void

    :cond_2
    if-eqz v0, :cond_3

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/o;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    sget-object p1, Lcom/kwad/components/ad/reward/RewardRenderResult;->TK_IMAGE:Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {p4, p1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/o;->bL()V

    return-void

    :cond_3
    if-nez v1, :cond_4

    iget-object p2, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p2, p2, Lcom/kwad/components/ad/reward/j;->pM:Lcom/kwad/components/ad/reward/LoadStrategy;

    sget-object v0, Lcom/kwad/components/ad/reward/LoadStrategy;->FULL_TK:Lcom/kwad/components/ad/reward/LoadStrategy;

    invoke-virtual {p2, v0}, Lcom/kwad/components/ad/reward/LoadStrategy;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_4

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/o;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    sget-object p1, Lcom/kwad/components/ad/reward/RewardRenderResult;->NEO_TK:Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {p4, p1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/o;->gz()V

    return-void

    :cond_4
    sget-object p2, Lcom/kwad/components/ad/reward/RewardRenderResult;->DEFAULT:Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {p4, p2}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V

    invoke-direct {p0, p1, p3}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/core/l/b;Lcom/kwad/components/ad/reward/model/c;)V

    return-void
.end method

.method private a(Lcom/kwad/components/ad/reward/e/f;)I
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/o;->getPriority()I

    move-result v0

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/f;->getPriority()I

    move-result p1

    sub-int/2addr v0, p1

    return v0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private a(Lcom/kwad/components/ad/reward/model/c;)V
    .locals 2

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/c;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/ad/reward/j;->g(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/f;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/presenter/f;-><init>()V

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_0
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/presenter/h/a;-><init>()V

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_1
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->cM(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/presenter/f/j;-><init>()V

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_2
    new-instance v1, Lcom/kwad/components/ad/reward/presenter/q;

    invoke-direct {v1, v0}, Lcom/kwad/components/ad/reward/presenter/q;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v1, p0, Lcom/kwad/components/ad/reward/o;->gi:Lcom/kwad/components/ad/reward/presenter/q;

    const/4 v0, 0x1

    invoke-virtual {p0, v1, v0}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->dC(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_3

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IO()Z

    move-result p1

    if-eqz p1, :cond_3

    new-instance p1, Lcom/kwad/components/ad/reward/presenter/e/a;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/presenter/e/a;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/o;->gl:Lcom/kwad/components/ad/reward/presenter/e/a;

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_3
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/o;Lcom/kwad/components/core/l/b;Lcom/kwad/components/ad/reward/model/c;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/core/l/b;Lcom/kwad/components/ad/reward/model/c;)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/l/b;Lcom/kwad/components/ad/reward/model/c;)V
    .locals 4

    iget-object p1, p0, Lcom/kwad/components/ad/reward/o;->mModel:Lcom/kwad/components/ad/reward/model/c;

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/c;->bB()Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/o;->mModel:Lcom/kwad/components/ad/reward/model/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/model/c;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/u;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/presenter/u;-><init>()V

    const/4 v2, 0x1

    invoke-virtual {p0, v1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/c;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/presenter/c;-><init>()V

    invoke-virtual {p0, v1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_1
    new-instance v1, Lcom/kwad/components/ad/reward/presenter/l;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/presenter/l;-><init>()V

    invoke-virtual {p0, v1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/g;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/presenter/g;-><init>()V

    invoke-virtual {p0, v1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/platdetail/c;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/c;-><init>()V

    invoke-virtual {p0, v1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/e;-><init>()V

    invoke-virtual {p0, v1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/presenter/f/e;-><init>()V

    invoke-virtual {p0, v1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/model/c;->hr()Z

    move-result v1

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/model/c;->hs()Z

    move-result v3

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/model/c;->bC()Z

    move-result p2

    if-eqz p2, :cond_2

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IO()Z

    move-result p2

    if-nez p2, :cond_2

    move p2, v2

    goto :goto_0

    :cond_2
    const/4 p2, 0x0

    :goto_0
    if-nez v1, :cond_3

    if-nez v3, :cond_3

    if-nez p2, :cond_3

    new-instance p2, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;

    invoke-direct {p2}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/c;-><init>()V

    invoke-virtual {p0, p2, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_3
    new-instance p2, Lcom/kwad/components/ad/reward/presenter/m;

    invoke-direct {p2}, Lcom/kwad/components/ad/reward/presenter/m;-><init>()V

    invoke-virtual {p0, p2, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance p2, Lcom/kwad/components/ad/reward/presenter/b;

    invoke-direct {p2, p1}, Lcom/kwad/components/ad/reward/presenter/b;-><init>(Lcom/kwad/sdk/core/response/model/AdInfo;)V

    invoke-virtual {p0, p2, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance p2, Lcom/kwad/components/ad/reward/presenter/d/b;

    invoke-direct {p2, v0, v2}, Lcom/kwad/components/ad/reward/presenter/d/b;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V

    invoke-virtual {p0, p2, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance p2, Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-direct {p2}, Lcom/kwad/components/ad/reward/presenter/c/a;-><init>()V

    invoke-virtual {p0, p2, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance p2, Lcom/kwad/components/ad/reward/presenter/t;

    invoke-direct {p2}, Lcom/kwad/components/ad/reward/presenter/t;-><init>()V

    invoke-virtual {p0, p2, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance p2, Lcom/kwad/components/ad/reward/presenter/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/o;->gg:Landroid/view/ViewGroup;

    invoke-direct {p2, v0, p1, v1}, Lcom/kwad/components/ad/reward/presenter/d;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;Landroid/view/ViewGroup;)V

    invoke-virtual {p0, p2, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance p2, Lcom/kwad/components/ad/reward/presenter/k;

    invoke-direct {p2}, Lcom/kwad/components/ad/reward/presenter/k;-><init>()V

    invoke-virtual {p0, p2, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean p2, p2, Lcom/kwad/components/ad/reward/j;->pj:Z

    if-eqz p2, :cond_4

    iget-object p2, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p2, p2, Lcom/kwad/components/ad/reward/j;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {p2, v1}, Lcom/kwad/components/ad/reward/d/a;->b(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p2

    if-eqz p2, :cond_4

    new-instance p2, Lcom/kwad/components/ad/reward/presenter/a/a;

    invoke-direct {p2}, Lcom/kwad/components/ad/reward/presenter/a/a;-><init>()V

    invoke-virtual {p0, p2, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_4
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p2

    if-eqz p2, :cond_5

    new-instance p2, Lcom/kwad/components/ad/reward/presenter/s;

    invoke-direct {p2}, Lcom/kwad/components/ad/reward/presenter/s;-><init>()V

    invoke-virtual {p0, p2, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_5
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p2

    if-eqz p2, :cond_6

    new-instance p2, Lcom/kwad/components/ad/reward/presenter/platdetail/b;

    invoke-direct {p2}, Lcom/kwad/components/ad/reward/presenter/platdetail/b;-><init>()V

    invoke-virtual {p0, p2, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_6
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_7

    new-instance p1, Lcom/kwad/components/ad/reward/presenter/b/c;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/presenter/b/c;-><init>()V

    invoke-virtual {p0, p1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance p1, Lcom/kwad/components/ad/reward/presenter/b/a;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/presenter/b/a;-><init>()V

    invoke-virtual {p0, p1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance p1, Lcom/kwad/components/ad/reward/presenter/b/b;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/presenter/b/b;-><init>()V

    invoke-virtual {p0, p1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    new-instance p1, Lcom/kwad/components/ad/reward/presenter/j;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/presenter/j;-><init>()V

    invoke-virtual {p0, p1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_7
    new-instance p1, Lcom/kwad/components/ad/reward/presenter/i;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/presenter/i;-><init>()V

    invoke-virtual {p0, p1, v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/o;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/o;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private bK()V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/o;->gj:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method private bL()V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/c;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/f/c;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/o;->gm:Lcom/kwad/components/ad/reward/presenter/f/h;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/o;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/o;->mPlayLayout:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/core/l/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/o;->gh:Lcom/kwad/components/core/l/b;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/ad/reward/model/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/o;->mModel:Lcom/kwad/components/ad/reward/model/c;

    return-object p0
.end method

.method private gz()V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/h;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/f/h;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/o;->gm:Lcom/kwad/components/ad/reward/presenter/f/h;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/o$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/o;->qy:Lcom/kwad/components/ad/reward/o$a;

    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c/a;->setCallerContext(Lcom/kwad/components/ad/reward/j;)V

    return-void
.end method

.method public final bD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->E(Z)V

    return-void
.end method

.method public final synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/e/f;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/ad/reward/e/f;)I

    move-result p1

    return p1
.end method

.method public final gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/o;->gi:Lcom/kwad/components/ad/reward/presenter/q;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/q;->bP()Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/o;->gl:Lcom/kwad/components/ad/reward/presenter/e/a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/e/a;->gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    move-result-object v0

    sget-object v1, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    if-ne v0, v1, :cond_1

    sget-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    return-object v0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/o;->gj:Lcom/kwad/components/ad/reward/presenter/f/b;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;->gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    move-result-object v0

    return-object v0

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/o;->gm:Lcom/kwad/components/ad/reward/presenter/f/h;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/f/h;->gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    move-result-object v0

    return-object v0

    :cond_3
    sget-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->NOT_HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    return-object v0
.end method

.method public final getPriority()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final onCreate()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/o;->gg:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_play_layout:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/o;->mPlayLayout:Landroid/widget/FrameLayout;

    sget-object v0, Lcom/kwad/components/ad/reward/RewardRenderResult;->DEFAULT:Lcom/kwad/components/ad/reward/RewardRenderResult;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/j;->fZ()Lcom/kwad/components/ad/reward/RewardRenderResult;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/RewardRenderResult;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/o;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/o;->mPlayLayout:Landroid/widget/FrameLayout;

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/reward/j;->a(Landroid/content/Context;Lcom/kwad/components/ad/reward/j;Landroid/view/ViewGroup;)V

    :cond_0
    return-void
.end method

.method public final onDestroy()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onDestroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/o;->gh:Lcom/kwad/components/core/l/b;

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/o;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/o;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/o;->qy:Lcom/kwad/components/ad/reward/o$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/o$a;->onUnbind()V

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/c/a;->reset()V

    return-void
.end method
