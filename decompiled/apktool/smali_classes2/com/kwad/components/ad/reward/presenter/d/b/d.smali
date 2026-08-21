.class public final Lcom/kwad/components/ad/reward/presenter/d/b/d;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/kwad/components/ad/reward/presenter/d/b/c;


# static fields
.field private static final vV:[Ljava/lang/String;


# instance fields
.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private final mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

.field private vR:Landroid/view/ViewGroup;

.field private vS:Landroid/widget/ImageView;

.field private vT:Landroid/view/ViewGroup;

.field private vU:Landroid/widget/TextView;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const-string v0, "\u672a\u83b7\u5f97\u5956\u52b1"

    const-string v1, "\u5df2\u83b7\u5f97\u5956\u52b11/2"

    const-string v2, "\u5df2\u83b7\u5f97\u5168\u90e8\u5956\u52b1"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vV:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/b/d$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/b/d$1;-><init>(Lcom/kwad/components/ad/reward/presenter/d/b/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/b/d$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/b/d$2;-><init>(Lcom/kwad/components/ad/reward/presenter/d/b/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/d/b/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/d/b/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;->bU()V

    return-void
.end method

.method private bU()V
    .locals 3

    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->a(Lcom/kwad/components/ad/reward/e/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vR:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vT:Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/j;->t(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_0

    :cond_0
    const/16 v1, 0x8

    :goto_0
    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/d/b/d;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/d/b/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;->iM()V

    return-void
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/d/b/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;->notifyAdClick()V

    return-void
.end method

.method private iL()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vS:Landroid/widget/ImageView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vS:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vR:Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vR:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method private iM()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vU:Landroid/widget/TextView;

    sget-object v1, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vV:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private notifyAdClick()V
    .locals 4

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    const/16 v1, 0x29

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    const/4 v3, 0x0

    invoke-static {v1, v3, v3, v0, v2}, Lcom/kwad/components/ad/reward/i/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;->bU()V

    return-void
.end method

.method public final iJ()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pu:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ak(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vT:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_0
    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->gc()Z

    move-result v0

    if-nez v0, :cond_3

    return-void

    :cond_3
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;->iL()V

    return-void

    :cond_4
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->gc()Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vU:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v1, v1, Lcom/kwad/components/ad/reward/j;->pp:Z

    if-eqz v1, :cond_5

    sget-object v1, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vV:[Ljava/lang/String;

    const/4 v2, 0x1

    aget-object v1, v1, v2

    goto :goto_1

    :cond_5
    sget-object v1, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vV:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    :goto_1
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_6
    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vS:Landroid/widget/ImageView;

    if-eq p1, v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vR:Landroid/view/ViewGroup;

    if-ne p1, v0, :cond_1

    :cond_0
    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    const/4 v0, 0x2

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/b/d$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/b/d$3;-><init>(Lcom/kwad/components/ad/reward/presenter/d/b/d;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    :cond_1
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_end_reward_icon_layout:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vR:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_end_reward_icon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vS:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_detail_reward_deep_task_view_playend:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vT:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_deep_task_count_down_playend:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vU:Landroid/widget/TextView;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->b(Lcom/kwad/components/ad/reward/e/j;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vR:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vS:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d;->vT:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    return-void
.end method
