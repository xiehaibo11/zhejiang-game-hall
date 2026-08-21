.class public final Lcom/kwad/components/ad/reward/presenter/p;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private sB:Lcom/kwad/components/ad/reward/presenter/q;

.field private sC:Z

.field private sI:Lcom/kwad/components/ad/reward/widget/KsToastView;

.field private sJ:Z

.field private sK:Z

.field private sL:Ljava/lang/Runnable;

.field private sM:Z

.field private sz:F


# direct methods
.method public constructor <init>(Lcom/kwad/components/ad/reward/presenter/q;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sJ:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sK:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sM:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sC:Z

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/p$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/p$1;-><init>(Lcom/kwad/components/ad/reward/presenter/p;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/p;->sB:Lcom/kwad/components/ad/reward/presenter/q;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/p;)Lcom/kwad/components/ad/reward/widget/KsToastView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sI:Lcom/kwad/components/ad/reward/widget/KsToastView;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/p;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/p;->sM:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/p;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sM:Z

    return p0
.end method

.method private declared-synchronized hF()V
    .locals 5

    monitor-enter p0

    :try_start_0
    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sC:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    new-instance v2, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v2}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v3, 0xc0

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/report/j;->ci(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/p;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v3}, Lcom/kwad/components/ad/reward/l/d;->getPlayDuration()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Lcom/kwad/sdk/core/report/j;->af(J)Lcom/kwad/sdk/core/report/j;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/report/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sC:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private hK()V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/p$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/p$3;-><init>(Lcom/kwad/components/ad/reward/presenter/p;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sL:Ljava/lang/Runnable;

    return-void
.end method

.method private hL()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sL:Ljava/lang/Runnable;

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sL:Ljava/lang/Runnable;

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/p;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    return-void
.end method

.method public final hI()V
    .locals 4

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sK:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/p;->hF()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sK:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sI:Lcom/kwad/components/ad/reward/widget/KsToastView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sI:Lcom/kwad/components/ad/reward/widget/KsToastView;

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->V(I)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/p;->hK()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sL:Ljava/lang/Runnable;

    const/4 v1, 0x0

    const-wide/16 v2, 0xbb8

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void
.end method

.method public final hJ()V
    .locals 2

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sK:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sI:Lcom/kwad/components/ad/reward/widget/KsToastView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->setVisibility(I)V

    return-void
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_toast_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/p;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/widget/KsToastView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sI:Lcom/kwad/components/ad/reward/widget/KsToastView;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/p$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/p$2;-><init>(Lcom/kwad/components/ad/reward/presenter/p;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gI()F

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sz:F

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gJ()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gK()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->sJ:Z

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/p;->hL()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/p;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    return-void
.end method
