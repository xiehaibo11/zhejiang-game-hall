.class public final Lcom/kwad/components/ad/reward/b/c;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/b/b$a;


# instance fields
.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private rl:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/b/c;->rl:Z

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/b/c;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/b/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/b/c;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/b/c;->rl:Z

    return p1
.end method

.method private static l(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cy(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdProductInfo;

    move-result-object v0

    invoke-static {p0}, Lcom/kwad/components/ad/reward/a/b;->i(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->isCouponListEmpty()Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method public final ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/b/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method

.method public final gU()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/b/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/b/c;->getContext()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x1

    const/16 v3, 0x1d

    invoke-virtual {v0, v2, v1, v3, v2}, Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;II)V

    return-void
.end method

.method public final showDialog()V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onBind hasShown : "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/b/c;->rl:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardCouponDialogPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/b/c;->rl:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/b/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/b/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v2, Lcom/kwad/sdk/R$id;->ksad_reward_order_coupon_list:I

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    if-nez v1, :cond_1

    return-void

    :cond_1
    invoke-virtual {v1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v2

    if-lez v2, :cond_2

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    :cond_2
    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->D(Landroid/view/View;)[I

    move-result-object v2

    invoke-static {v0}, Lcom/kwad/components/ad/reward/b/c;->l(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_3

    if-eqz v2, :cond_3

    new-instance v0, Lcom/kwad/components/ad/reward/b/c$1;

    invoke-direct {v0, p0, v2}, Lcom/kwad/components/ad/reward/b/c$1;-><init>(Lcom/kwad/components/ad/reward/b/c;[I)V

    invoke-virtual {v1, v0}, Landroid/view/View;->post(Ljava/lang/Runnable;)Z

    :cond_3
    return-void
.end method
