.class public Lcom/kwad/components/ad/reward/m/h;
.super Lcom/kwad/components/ad/reward/m/s;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/m/h$a;
    }
.end annotation


# instance fields
.field protected mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

.field protected yO:Lcom/kwad/components/core/widget/KsConvertButton;

.field protected yP:Landroid/widget/TextView;

.field protected yQ:Landroid/widget/TextView;

.field protected yR:Landroid/widget/TextView;

.field protected yS:Lcom/kwad/components/ad/reward/m/h$a;

.field protected yT:I

.field protected yU:Z

.field protected yt:Landroid/widget/ImageView;

.field protected yx:Lcom/kwad/components/ad/widget/KsAppTagsView;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/s;-><init>()V

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_reward_apk_info_card_tag_item:I

    iput v0, p0, Lcom/kwad/components/ad/reward/m/h;->yT:I

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/m/h;->yU:Z

    return-void
.end method

.method private T(I)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yO:Lcom/kwad/components/core/widget/KsConvertButton;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x1

    if-ne p1, v1, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/KsConvertButton;->getCornerConf()Lcom/kwad/sdk/widget/h$a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/sdk/widget/h$a;->setAllCorner(Z)V

    goto :goto_0

    :cond_1
    const/4 v2, 0x2

    if-ne p1, v2, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/KsConvertButton;->getCornerConf()Lcom/kwad/sdk/widget/h$a;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/widget/h$a;->bS(Z)Lcom/kwad/sdk/widget/h$a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/widget/h$a;->bV(Z)Lcom/kwad/sdk/widget/h$a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/sdk/widget/h$a;->bU(Z)Lcom/kwad/sdk/widget/h$a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/sdk/widget/h$a;->bT(Z)Lcom/kwad/sdk/widget/h$a;

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yO:Lcom/kwad/components/core/widget/KsConvertButton;

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/KsConvertButton;->postInvalidate()V

    return-void
.end method

.method private a(Lcom/kwad/components/ad/reward/model/a;)V
    .locals 5

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->hl()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/m/h;->T(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->hh()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yP:Landroid/widget/TextView;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->getTitle()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yQ:Landroid/widget/TextView;

    if-eqz v0, :cond_2

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->gv()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yR:Landroid/widget/TextView;

    const/4 v1, 0x0

    const/16 v2, 0x8

    if-eqz v0, :cond_6

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->gv()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->gv()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    move v0, v2

    move v3, v0

    goto :goto_0

    :cond_3
    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->hk()Z

    move-result v0

    if-eqz v0, :cond_4

    move v3, v1

    move v0, v2

    goto :goto_0

    :cond_4
    move v0, v1

    move v3, v2

    :goto_0
    iget-object v4, p0, Lcom/kwad/components/ad/reward/m/h;->yQ:Landroid/widget/TextView;

    if-eqz v4, :cond_5

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yR:Landroid/widget/TextView;

    goto :goto_1

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yQ:Landroid/widget/TextView;

    if-eqz v0, :cond_8

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->gv()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_7

    move v3, v2

    goto :goto_1

    :cond_7
    move v3, v1

    :goto_1
    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_8
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    if-eqz v0, :cond_a

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->hj()Ljava/util/List;

    move-result-object v3

    iget v4, p0, Lcom/kwad/components/ad/reward/m/h;->yT:I

    invoke-virtual {v0, v3, v4}, Lcom/kwad/components/ad/widget/KsAppTagsView;->a(Ljava/util/List;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->hk()Z

    move-result v3

    if-eqz v3, :cond_9

    move v1, v2

    :cond_9
    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/widget/KsAppTagsView;->setVisibility(I)V

    :cond_a
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yO:Lcom/kwad/components/core/widget/KsConvertButton;

    if-eqz v0, :cond_b

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->hi()Lcom/kwad/components/core/e/d/c;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->hh()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/core/widget/KsConvertButton;->a(Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_b
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yt:Landroid/widget/ImageView;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->gu()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/model/a;->hh()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/16 v2, 0xc

    invoke-static {v0, v1, p1, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void
.end method

.method private g(Landroid/view/ViewGroup;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    sget v0, Lcom/kwad/sdk/R$id;->ksad_common_app_logo:I

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_common_app_icon:I

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yt:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_common_app_name:I

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yP:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_common_app_tags:I

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/widget/KsAppTagsView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_common_app_desc:I

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yQ:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_common_app_desc2:I

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yR:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_common_app_action:I

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/core/widget/KsConvertButton;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yO:Lcom/kwad/components/core/widget/KsConvertButton;

    return-void
.end method

.method private static jZ()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_common_app_card_root:I

    return v0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/m/h$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yS:Lcom/kwad/components/ad/reward/m/h$a;

    return-void
.end method

.method protected final a(Lcom/kwad/components/ad/reward/m/r;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/ad/reward/m/s;->a(Lcom/kwad/components/ad/reward/m/r;)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/m/h;->yU:Z

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/model/a;->a(Lcom/kwad/components/ad/reward/m/r;Z)Lcom/kwad/components/ad/reward/model/a;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/m/h;->a(Lcom/kwad/components/ad/reward/model/a;)V

    return-void
.end method

.method public final f(Landroid/view/ViewGroup;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/m/h;->if()I

    move-result v0

    invoke-static {}, Lcom/kwad/components/ad/reward/m/h;->jZ()I

    move-result v1

    invoke-super {p0, p1, v0, v1}, Lcom/kwad/components/ad/reward/m/s;->a(Landroid/view/ViewGroup;II)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->sw:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/m/h;->g(Landroid/view/ViewGroup;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->sw:Landroid/view/ViewGroup;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->sw:Landroid/view/ViewGroup;

    invoke-virtual {p1, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yO:Lcom/kwad/components/core/widget/KsConvertButton;

    invoke-virtual {p1, p0}, Lcom/kwad/components/core/widget/KsConvertButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yt:Landroid/widget/ImageView;

    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yP:Landroid/widget/TextView;

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yQ:Landroid/widget/TextView;

    if-eqz p1, :cond_0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yR:Landroid/widget/TextView;

    if-eqz p1, :cond_1

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    if-eqz p1, :cond_2

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/widget/KsAppTagsView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_2
    return-void
.end method

.method protected if()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_common_app_card_stub:I

    return v0
.end method

.method public onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yO:Lcom/kwad/components/core/widget/KsConvertButton;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yS:Lcom/kwad/components/ad/reward/m/h$a;

    if-eqz p1, :cond_6

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/m/h$a;->ig()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yt:Landroid/widget/ImageView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yS:Lcom/kwad/components/ad/reward/m/h$a;

    if-eqz p1, :cond_6

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/m/h$a;->ih()V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yP:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yS:Lcom/kwad/components/ad/reward/m/h$a;

    if-eqz p1, :cond_6

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/m/h$a;->ii()V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yQ:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yR:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yS:Lcom/kwad/components/ad/reward/m/h$a;

    if-eqz p1, :cond_6

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/m/h$a;->ik()V

    return-void

    :cond_4
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->sw:Landroid/view/ViewGroup;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yS:Lcom/kwad/components/ad/reward/m/h$a;

    if-eqz p1, :cond_6

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/m/h$a;->il()V

    goto :goto_1

    :cond_5
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/h;->yS:Lcom/kwad/components/ad/reward/m/h$a;

    if-eqz p1, :cond_6

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/m/h$a;->ij()V

    :cond_6
    :goto_1
    return-void
.end method

.method public final show()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->sw:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/h;->sw:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_0
    return-void
.end method
