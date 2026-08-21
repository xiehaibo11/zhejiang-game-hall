.class public Lcom/kwad/components/ad/reward/presenter/f/h;
.super Lcom/kwad/components/ad/reward/presenter/f/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/h;
.implements Lcom/kwad/components/core/i/a$a;


# instance fields
.field private lu:Lcom/kwad/components/core/webview/b/f;

.field private final pg:Lcom/kwad/components/core/webview/b/e/a;

.field private tk:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/i/c;",
            ">;"
        }
    .end annotation
.end field

.field private wM:Landroid/widget/FrameLayout;

.field private wN:Landroid/widget/FrameLayout;

.field private wO:Landroid/widget/FrameLayout;

.field protected wg:Landroid/widget/FrameLayout;

.field private wh:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wh:Z

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/h$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/h$1;-><init>(Lcom/kwad/components/ad/reward/presenter/f/h;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->pg:Lcom/kwad/components/core/webview/b/e/a;

    return-void
.end method

.method private X(Z)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "fullTK: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TkRewardPagePresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wg:Landroid/widget/FrameLayout;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    const/16 v2, 0x8

    if-eqz p1, :cond_1

    move v3, v1

    goto :goto_0

    :cond_1
    move v3, v2

    :goto_0
    invoke-virtual {v0, v3}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wM:Landroid/widget/FrameLayout;

    if-eqz p1, :cond_2

    move v3, v2

    goto :goto_1

    :cond_2
    move v3, v1

    :goto_1
    invoke-virtual {v0, v3}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wN:Landroid/widget/FrameLayout;

    if-eqz p1, :cond_3

    move v3, v2

    goto :goto_2

    :cond_3
    move v3, v1

    :goto_2
    invoke-virtual {v0, v3}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wO:Landroid/widget/FrameLayout;

    if-eqz p1, :cond_4

    move v1, v2

    :cond_4
    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/f/h;)Lcom/kwad/components/core/webview/b/f;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->lu:Lcom/kwad/components/core/webview/b/f;

    return-object p0
.end method

.method private static a(Ljava/util/List;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/components/core/i/c;",
            ">;",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ")",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-static {p0}, Lcom/kwad/components/core/i/c;->j(Ljava/util/List;)Ljava/util/List;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    return-object v0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/f/h;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/f/h;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/f/h;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/f/h;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private ei()Lcom/kwad/components/core/webview/b/c;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/h$6;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/h$6;-><init>(Lcom/kwad/components/ad/reward/presenter/f/h;)V

    return-object v0
.end method

.method private ej()Lcom/kwad/components/core/webview/b/f;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/h$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/h$5;-><init>(Lcom/kwad/components/ad/reward/presenter/f/h;)V

    return-object v0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/f/h;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V
    .locals 0

    iget-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wh:Z

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wg:Landroid/widget/FrameLayout;

    if-eqz p1, :cond_0

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/b/t;)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onSkipClick: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v1, p1, Lcom/kwad/components/core/webview/b/b/t;->Xf:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TkRewardPagePresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    if-eqz v0, :cond_0

    iget-wide v0, p1, Lcom/kwad/components/core/webview/b/b/t;->Xf:J

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1, v0, v1}, Lcom/kwad/components/ad/reward/e/b;->onVideoSkipToEnd(J)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/e;->v(Lcom/kwad/components/ad/reward/j;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pd:Ljava/util/List;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/h$7;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/h$7;-><init>(Lcom/kwad/components/ad/reward/presenter/f/h;)V

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/j;->a(Ljava/util/List;Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/f/a;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V

    new-instance p2, Lcom/kwad/components/ad/reward/c/f;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/h$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/h$2;-><init>(Lcom/kwad/components/ad/reward/presenter/f/h;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/ad/reward/c/f;-><init>(Lcom/kwad/components/ad/reward/c/d;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/h;->ej()Lcom/kwad/components/core/webview/b/f;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->lu:Lcom/kwad/components/core/webview/b/f;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->pg:Lcom/kwad/components/core/webview/b/e/a;

    invoke-virtual {p2, v0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/core/webview/b/e/a;)V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->lu:Lcom/kwad/components/core/webview/b/f;

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/b/b;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/h$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/h$3;-><init>(Lcom/kwad/components/ad/reward/presenter/f/h;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/b/b;-><init>(Lcom/kwad/components/core/webview/b/b$a;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/h;->ei()Lcom/kwad/components/core/webview/b/c;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/h$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/h$4;-><init>(Lcom/kwad/components/ad/reward/presenter/f/h;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/e;-><init>(Lcom/kwad/components/core/webview/jshandler/i;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 4

    if-eqz p1, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->creativeId:J

    iget v3, p1, Lcom/kwad/sdk/core/webview/d/b/a;->adStyle:I

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/sdk/core/response/b/d;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;JI)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->tk:Ljava/util/List;

    iget-wide v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->creativeId:J

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/reward/j;->a(Ljava/util/List;J)Lcom/kwad/components/core/i/c;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/core/i/c;)V

    :cond_1
    return-void

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    return-void
.end method

.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/a;->ah()V

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wh:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/presenter/f/h;->X(Z)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v2, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wh:Z

    xor-int/2addr v1, v2

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pk:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/core/i/a$a;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method

.method public final b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/ad/reward/presenter/f/a;->b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V

    return-void
.end method

.method public final bS()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wh:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wg:Landroid/widget/FrameLayout;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final bT()V
    .locals 0

    return-void
.end method

.method public final c(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/components/core/i/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_3

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->tk:Ljava/util/List;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/f/h;->a(Ljava/util/List;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/util/List;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j/a/d;->rG()Lcom/kwad/sdk/core/webview/b;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/b;->setAdTemplateList(Ljava/util/List;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j/a/d;->ju()Lcom/kwad/components/ad/reward/j/l;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/j/l;->e(Ljava/util/List;)V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/j/a/d;->f(Ljava/util/List;)V

    :cond_3
    :goto_0
    return-void
.end method

.method public final cc()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/a;->cc()V

    const-string v0, "TkRewardPagePresenter"

    const-string v1, "onTkLoadFailed"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wh:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pk:Z

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/presenter/f/h;->X(Z)V

    return-void
.end method

.method public final gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/components/ad/reward/page/BackPressHandleResult;->NOT_HANDLED:Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wk:Lcom/kwad/components/ad/reward/j/a/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j/a/d;->gA()Lcom/kwad/components/ad/reward/page/BackPressHandleResult;

    move-result-object v0

    return-object v0
.end method

.method public getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wg:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-neo-video-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_reward_card:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/h;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wg:Landroid/widget/FrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_top:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/h;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wM:Landroid/widget/FrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_middle:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/h;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wN:Landroid/widget/FrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_bottom:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/h;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->wO:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onError(ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onRequestResult(I)V
    .locals 0

    return-void
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/h;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/core/i/a$a;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/b;->b(Lcom/kwad/components/ad/reward/e/h;)V

    return-void
.end method
