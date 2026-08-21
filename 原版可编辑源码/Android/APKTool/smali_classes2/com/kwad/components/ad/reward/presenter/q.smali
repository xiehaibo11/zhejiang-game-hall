.class public final Lcom/kwad/components/ad/reward/presenter/q;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/f;
.implements Lcom/kwad/components/ad/reward/e/h;
.implements Lcom/kwad/components/core/webview/jshandler/ah$b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/presenter/q$a;
    }
.end annotation


# instance fields
.field private gk:Lcom/kwad/components/core/webview/b/e/e;

.field private sO:Z

.field private sP:Lcom/kwad/components/ad/reward/presenter/q$a;

.field private sQ:Lcom/kwad/components/ad/reward/presenter/p;

.field private sR:Lcom/kwad/components/ad/reward/presenter/n;

.field private sS:Lcom/kwad/components/ad/reward/presenter/o;

.field private sT:I

.field private sU:Z

.field private sV:Z

.field private sW:Z

.field private sz:F


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0, v0}, Lcom/kwad/components/ad/reward/presenter/q;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;ZZ)V

    return-void
.end method

.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;ZZ)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sT:I

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sU:Z

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sV:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sW:Z

    iput-boolean p2, p0, Lcom/kwad/components/ad/reward/presenter/q;->sV:Z

    iput-boolean p3, p0, Lcom/kwad/components/ad/reward/presenter/q;->sW:Z

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    new-instance p1, Lcom/kwad/components/ad/reward/presenter/o;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/presenter/o;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sS:Lcom/kwad/components/ad/reward/presenter/o;

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/presenter/q;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_0
    return-void
.end method

.method private a(Lcom/kwad/components/ad/reward/e/f;)I
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/q;->getPriority()I

    move-result v0

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/f;->getPriority()I

    move-result p1

    sub-int/2addr v0, p1

    return v0
.end method

.method private a(JJZ)V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/q;->hN()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    const-wide/16 v2, 0x2710

    cmp-long v0, p3, v2

    if-ltz v0, :cond_0

    long-to-float p3, p3

    long-to-float p1, p1

    iget p2, p0, Lcom/kwad/components/ad/reward/presenter/q;->sz:F

    mul-float/2addr p1, p2

    cmpl-float p1, p3, p1

    if-ltz p1, :cond_0

    move p1, v1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    if-nez p1, :cond_1

    return-void

    :cond_1
    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gK()Z

    move-result p1

    if-eqz p1, :cond_2

    iget-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sU:Z

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sQ:Lcom/kwad/components/ad/reward/presenter/p;

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/presenter/p;->hI()V

    iput v1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sT:I

    iput-boolean v1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sU:Z

    return-void

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sR:Lcom/kwad/components/ad/reward/presenter/n;

    if-eqz p1, :cond_3

    xor-int/lit8 p2, p5, 0x1

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/reward/presenter/n;->J(Z)V

    const/4 p1, 0x2

    iput p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sT:I

    :cond_3
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/q;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/q;->hM()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/q;JJZ)V
    .locals 6

    const/4 v5, 0x0

    move-object v0, p0

    move-wide v1, p1

    move-wide v3, p3

    invoke-direct/range {v0 .. v5}, Lcom/kwad/components/ad/reward/presenter/q;->a(JJZ)V

    return-void
.end method

.method private bO()Lcom/kwad/components/core/webview/b/e/e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->gk:Lcom/kwad/components/core/webview/b/e/e;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/q$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/q$2;-><init>(Lcom/kwad/components/ad/reward/presenter/q;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->gk:Lcom/kwad/components/core/webview/b/e/e;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->gk:Lcom/kwad/components/core/webview/b/e/e;

    return-object v0
.end method

.method private hM()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sW:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/p;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/p;-><init>(Lcom/kwad/components/ad/reward/presenter/q;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sQ:Lcom/kwad/components/ad/reward/presenter/p;

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/reward/presenter/q;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_0
    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sV:Z

    if-eqz v0, :cond_1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/n;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/n;-><init>(Lcom/kwad/components/ad/reward/presenter/q;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sR:Lcom/kwad/components/ad/reward/presenter/n;

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/reward/presenter/q;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_1
    return-void
.end method

.method private hN()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sO:Z

    return v0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/reward/j;->A(Z)V

    iget p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sT:I

    if-ne p1, p2, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sQ:Lcom/kwad/components/ad/reward/presenter/p;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/presenter/p;->hJ()V

    return-void

    :cond_0
    iget p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sT:I

    const/4 p2, 0x2

    if-ne p1, p2, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sR:Lcom/kwad/components/ad/reward/presenter/n;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/presenter/n;->hide()V

    :cond_1
    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$a;)V
    .locals 6

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/ah$a;->isSuccess()Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sO:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sP:Lcom/kwad/components/ad/reward/presenter/q$a;

    if-eqz p1, :cond_0

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/q$a;->a(Lcom/kwad/components/ad/reward/presenter/q$a;)J

    move-result-wide v1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sP:Lcom/kwad/components/ad/reward/presenter/q$a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/q$a;->b(Lcom/kwad/components/ad/reward/presenter/q$a;)J

    move-result-wide v3

    const/4 v5, 0x0

    move-object v0, p0

    invoke-direct/range {v0 .. v5}, Lcom/kwad/components/ad/reward/presenter/q;->a(JJZ)V

    :cond_0
    return-void
.end method

.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pk:Z

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/q$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/q$1;-><init>(Lcom/kwad/components/ad/reward/presenter/q;)V

    const-wide/16 v1, 0x64

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/q;->bO()Lcom/kwad/components/core/webview/b/e/e;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    goto :goto_0

    :cond_1
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->by(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/o/a;->V(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/playable/a;->a(Lcom/kwad/components/core/webview/jshandler/ah$b;)V

    :cond_3
    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gJ()Z

    move-result v0

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gI()F

    move-result v1

    iput v1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sz:F

    if-eqz v0, :cond_4

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/q$a;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/kwad/components/ad/reward/presenter/q$a;-><init>(Lcom/kwad/components/ad/reward/presenter/q;B)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sP:Lcom/kwad/components/ad/reward/presenter/q$a;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sP:Lcom/kwad/components/ad/reward/presenter/q$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    :cond_4
    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method

.method public final bD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->in()Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;

    move-result-object v0

    if-eqz v0, :cond_0

    sget-object v1, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;->SHOW_NATIVE_PLAYABLE_PORTRAIT:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;->equals(Ljava/lang/Object;)Z

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sS:Lcom/kwad/components/ad/reward/presenter/o;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->fX()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/q;->hN()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sS:Lcom/kwad/components/ad/reward/presenter/o;

    sget-object v1, Lcom/kwad/components/core/playable/PlayableSource;->PLAY_FINISHED_NORMAL:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/presenter/o;->e(Lcom/kwad/components/core/playable/PlayableSource;)V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sS:Lcom/kwad/components/ad/reward/presenter/o;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/o;->hH()V

    :cond_3
    :goto_0
    return-void
.end method

.method public final bP()Z
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->ga()Z

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/j;->fO()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    if-eqz v0, :cond_0

    return v2

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/b;->fq()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, v2}, Lcom/kwad/components/ad/reward/j;->A(Z)V

    const/4 v0, 0x1

    return v0

    :cond_1
    return v2
.end method

.method public final bS()V
    .locals 9

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->A(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sP:Lcom/kwad/components/ad/reward/presenter/q$a;

    if-eqz v0, :cond_0

    iget v1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sT:I

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/q$a;->a(Lcom/kwad/components/ad/reward/presenter/q$a;)J

    move-result-wide v4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sP:Lcom/kwad/components/ad/reward/presenter/q$a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/q$a;->b(Lcom/kwad/components/ad/reward/presenter/q$a;)J

    move-result-wide v6

    const/4 v8, 0x1

    move-object v3, p0

    invoke-direct/range {v3 .. v8}, Lcom/kwad/components/ad/reward/presenter/q;->a(JJZ)V

    :cond_0
    return-void
.end method

.method public final bT()V
    .locals 0

    return-void
.end method

.method public final synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/e/f;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/q;->a(Lcom/kwad/components/ad/reward/e/f;)I

    move-result p1

    return p1
.end method

.method public final getPriority()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/playable/a;->b(Lcom/kwad/components/core/webview/jshandler/ah$b;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->sP:Lcom/kwad/components/ad/reward/presenter/q$a;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/q;->sP:Lcom/kwad/components/ad/reward/presenter/q$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    :cond_1
    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/ad/reward/e/h;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/q;->gk:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void
.end method
