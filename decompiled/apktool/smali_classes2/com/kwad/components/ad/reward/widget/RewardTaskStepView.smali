.class public Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;
.super Landroid/widget/LinearLayout;


# instance fields
.field private Bc:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/reward/k/c;",
            ">;"
        }
    .end annotation
.end field

.field private qk:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->Bc:Ljava/util/List;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->kj()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->Bc:Ljava/util/List;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->kj()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->Bc:Ljava/util/List;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->kj()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->Bc:Ljava/util/List;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->kj()V

    return-void
.end method

.method private a(ILjava/lang/String;Ljava/lang/String;Z)V
    .locals 3

    if-eqz p4, :cond_0

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_reward_task_step_item_checked:I

    goto :goto_0

    :cond_0
    sget v0, Lcom/kwad/sdk/R$layout;->ksad_reward_task_step_item_unchecked:I

    :goto_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v1, v0, p0, v2}, Lcom/kwad/sdk/m/l;->a(Landroid/content/Context;ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz p4, :cond_1

    invoke-static {v0, p2}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->a(Landroid/view/ViewGroup;Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    invoke-direct {p0, v0, p1, p3}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->a(Landroid/view/ViewGroup;ILjava/lang/String;)V

    :goto_1
    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->addView(Landroid/view/View;)V

    return-void
.end method

.method private a(Landroid/view/ViewGroup;ILjava/lang/String;)V
    .locals 4

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_task_step_item_text:I

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->qk:Ljava/lang/String;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-static {p3, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    sget p3, Lcom/kwad/sdk/R$id;->ksad_reward_task_step_item_icon_text:I

    invoke-virtual {p1, p3}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private static a(Landroid/view/ViewGroup;Ljava/lang/String;)V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_task_step_item_text:I

    invoke-virtual {p0, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object p0

    check-cast p0, Landroid/widget/TextView;

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private af(Z)V
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->getContext()Landroid/content/Context;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$layout;->ksad_reward_task_dialog_dash:I

    const/4 v2, 0x0

    invoke-static {v0, v1, p0, v2}, Lcom/kwad/sdk/m/l;->a(Landroid/content/Context;ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/DividerView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_reward_apk_info_card_step_icon_size:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    sget v3, Lcom/kwad/sdk/R$dimen;->ksad_reward_apk_info_card_step_divider_height:I

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v2

    if-eqz p1, :cond_0

    sget p1, Lcom/kwad/sdk/R$color;->ksad_reward_main_color:I

    goto :goto_0

    :cond_0
    sget p1, Lcom/kwad/sdk/R$color;->ksad_reward_undone_color:I

    :goto_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3, p1}, Landroid/content/res/Resources;->getColor(I)I

    move-result p1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/DividerView;->setDividerColor(I)V

    invoke-virtual {p0, v0, v1, v2}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->addView(Landroid/view/View;II)V

    return-void
.end method

.method private kj()V
    .locals 1

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->setOrientation(I)V

    return-void
.end method

.method private kk()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->Bc:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->Bc:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/components/ad/reward/k/c;

    add-int/lit8 v3, v1, 0x1

    invoke-interface {v2}, Lcom/kwad/components/ad/reward/k/c;->jA()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v2}, Lcom/kwad/components/ad/reward/k/c;->jB()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v2}, Lcom/kwad/components/ad/reward/k/c;->isCompleted()Z

    move-result v2

    invoke-direct {p0, v3, v4, v5, v2}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->a(ILjava/lang/String;Ljava/lang/String;Z)V

    add-int/lit8 v2, v0, -0x1

    if-ge v1, v2, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->Bc:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/reward/k/c;

    invoke-interface {v1}, Lcom/kwad/components/ad/reward/k/c;->isCompleted()Z

    move-result v1

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->af(Z)V

    :cond_0
    move v1, v3

    goto :goto_0

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(Ljava/util/List;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/reward/k/c;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    if-eqz p1, :cond_1

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iput-object p2, p0, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->qk:Ljava/lang/String;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->Bc:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->clear()V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->Bc:Ljava/util/List;

    invoke-interface {p2, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/RewardTaskStepView;->kk()V

    :cond_1
    :goto_0
    return-void
.end method

.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/widget/LinearLayout;->onDraw(Landroid/graphics/Canvas;)V

    return-void
.end method
