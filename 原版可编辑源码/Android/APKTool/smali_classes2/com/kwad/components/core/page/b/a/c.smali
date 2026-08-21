.class public final Lcom/kwad/components/core/page/b/a/c;
.super Lcom/kwad/components/core/page/b/a/a;


# instance fields
.field private Nd:Landroid/widget/LinearLayout;

.field private Ne:Landroid/widget/TextView;

.field private Nf:Landroid/widget/TextView;

.field private Ng:Landroid/widget/TextView;

.field private Nh:Landroid/widget/TextView;

.field private Ni:I

.field private Nj:Z

.field private Nk:Ljava/lang/Runnable;

.field private counterPaused:Z

.field private final xj:Lcom/kwad/sdk/core/c/c;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/page/b/a/c;->counterPaused:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nj:Z

    new-instance v0, Lcom/kwad/components/core/page/b/a/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/a/c$1;-><init>(Lcom/kwad/components/core/page/b/a/c;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nk:Ljava/lang/Runnable;

    new-instance v0, Lcom/kwad/components/core/page/b/a/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/a/c$2;-><init>(Lcom/kwad/components/core/page/b/a/c;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->xj:Lcom/kwad/sdk/core/c/c;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/a/c;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/page/b/a/c;->counterPaused:Z

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/core/page/b/a/c;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/page/b/a/c;->counterPaused:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/core/page/b/a/c;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/core/page/b/a/c;->Ni:I

    return p0
.end method

.method static synthetic c(Lcom/kwad/components/core/page/b/a/c;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/a/c;->Ne:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/core/page/b/a/c;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/a/c;->Nf:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/core/page/b/a/c;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/a/c;->Ng:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/core/page/b/a/c;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/b/a/c;->Nh:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/core/page/b/a/c;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/page/b/a/c;->Nj:Z

    return p0
.end method

.method static synthetic h(Lcom/kwad/components/core/page/b/a/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/c;->oM()V

    return-void
.end method

.method static synthetic i(Lcom/kwad/components/core/page/b/a/c;)I
    .locals 2

    iget v0, p0, Lcom/kwad/components/core/page/b/a/c;->Ni:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/kwad/components/core/page/b/a/c;->Ni:I

    return v0
.end method

.method private oL()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nd:Landroid/widget/LinearLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mRewardVerifyCalled:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Ne:Landroid/widget/TextView;

    const-string v1, "\u4efb\u52a1\u5df2\u5b8c\u6210"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nf:Landroid/widget/TextView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Ng:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nh:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/c;->oM()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nk:Ljava/lang/Runnable;

    const-wide/16 v1, 0x3e8

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    return-void
.end method

.method private oM()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nf:Landroid/widget/TextView;

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/c;->oN()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nh:Landroid/widget/TextView;

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/c;->oO()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private oN()Ljava/lang/String;
    .locals 3

    iget v0, p0, Lcom/kwad/components/core/page/b/a/c;->Ni:I

    div-int/lit8 v0, v0, 0x3c

    const/16 v1, 0xa

    if-lt v0, v1, :cond_0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    :goto_0
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "0"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    goto :goto_0
.end method

.method private oO()Ljava/lang/String;
    .locals 3

    iget v0, p0, Lcom/kwad/components/core/page/b/a/c;->Ni:I

    rem-int/lit8 v0, v0, 0x3c

    const/16 v1, 0xa

    if-lt v0, v1, :cond_0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    :goto_0
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "0"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    goto :goto_0
.end method


# virtual methods
.method public final ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/page/b/a/a;->ah()V

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->xj:Lcom/kwad/sdk/core/c/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->a(Lcom/kwad/sdk/core/c/c;)V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zC()I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/page/b/a/c;->Ni:I

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/a/c;->oL()V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/page/b/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_land_page_open_tip:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/b/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nd:Landroid/widget/LinearLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_land_page_open_desc:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/b/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Ne:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_land_page_open_minute:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/b/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nf:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_land_page_open_colon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/b/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Ng:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_land_page_open_second:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/b/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nh:Landroid/widget/TextView;

    return-void
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/page/b/a/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->xj:Lcom/kwad/sdk/core/c/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->b(Lcom/kwad/sdk/core/c/c;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/c;->Nk:Ljava/lang/Runnable;

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    return-void
.end method
