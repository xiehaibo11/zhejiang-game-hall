.class public final Lcom/kwad/components/core/page/b/a/d;
.super Lcom/kwad/components/core/page/b/a/a;


# instance fields
.field private Nm:Landroid/view/View;

.field private Nn:Landroid/widget/TextView;

.field private No:I

.field private Np:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/a;-><init>()V

    new-instance v0, Lcom/kwad/components/core/page/b/a/d$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/a/d$1;-><init>(Lcom/kwad/components/core/page/b/a/d;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/d;->Np:Ljava/lang/Runnable;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/a/d;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/core/page/b/a/d;->No:I

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/core/page/b/a/d;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/a/d;->Nn:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/core/page/b/a/d;)I
    .locals 2

    iget v0, p0, Lcom/kwad/components/core/page/b/a/d;->No:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/kwad/components/core/page/b/a/d;->No:I

    return v0
.end method

.method static synthetic d(Lcom/kwad/components/core/page/b/a/d;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/a/d;->Nm:Landroid/view/View;

    return-object p0
.end method

.method private oP()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/d;->Nm:Landroid/view/View;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/d;->Nn:Landroid/widget/TextView;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    iget v2, p0, Lcom/kwad/components/core/page/b/a/d;->No:I

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "\u5012\u8ba1\u65f6%d\u79d2"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/d;->Nm:Landroid/view/View;

    invoke-virtual {v0, v3}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/d;->Np:Ljava/lang/Runnable;

    const-wide/16 v1, 0x3e8

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/page/b/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/d;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aE(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/page/b/a/d;->No:I

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    iget v1, p0, Lcom/kwad/components/core/page/b/a/d;->No:I

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/r/a;->aG(I)V

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/d;->oP()V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/page/b/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_web_reward_task_layout:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/b/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/d;->Nm:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_web_reward_task_text:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/b/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/d;->Nn:Landroid/widget/TextView;

    return-void
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/page/b/a/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/d;->Np:Ljava/lang/Runnable;

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    return-void
.end method
