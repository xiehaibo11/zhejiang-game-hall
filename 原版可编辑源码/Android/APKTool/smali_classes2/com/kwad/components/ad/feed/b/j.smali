.class public final Lcom/kwad/components/ad/feed/b/j;
.super Lcom/kwad/components/ad/feed/b/a;

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/kwad/sdk/widget/c;


# instance fields
.field private ek:Landroid/widget/TextView;

.field private el:Landroid/widget/ImageView;

.field private em:Landroid/widget/ImageView;

.field private mLogoView:Lcom/kwad/components/core/widget/KsLogoView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/feed/b/a;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method private c(Landroid/view/View;I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->em:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/j;->sm()V

    return-void

    :cond_0
    new-instance p1, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/j;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/kwad/components/core/e/d/d;->b(Lcom/kwad/components/core/e/d/a$a;I)I

    move-result p1

    if-ne p1, v0, :cond_1

    invoke-virtual {p0, p2}, Lcom/kwad/components/ad/feed/b/j;->aK(I)V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/j;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    invoke-virtual {p0, p2}, Lcom/kwad/components/ad/feed/b/j;->aK(I)V

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/j;->mContext:Landroid/content/Context;

    iget-object p2, p0, Lcom/kwad/components/ad/feed/b/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->XT:Lcom/kwad/components/core/widget/b$a;

    invoke-static {p1, p2, v0}, Lcom/kwad/components/ad/feed/FeedDownloadActivityProxy;->launch(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/widget/b$a;)V

    return-void

    :cond_2
    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/j;->getContext()Landroid/content/Context;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/feed/b/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, p2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->launch(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/b/j;->onClick(Landroid/view/View;)V

    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x99

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/feed/b/j;->c(Landroid/view/View;I)V

    :cond_0
    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/ad/feed/b/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->ek:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/f;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aT(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/j;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-virtual {v1, p1}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    const/4 v1, 0x0

    if-lez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/j;->el:Landroid/widget/ImageView;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, v0, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadFeeImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_0

    :cond_0
    const-string p1, "FeedTextImmerseImageView"

    const-string v0, "getImageUrlList size less than one"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    const/4 p1, 0x3

    new-array p1, p1, [Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->ek:Landroid/widget/TextView;

    aput-object v0, p1, v1

    const/4 v0, 0x1

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/j;->el:Landroid/widget/ImageView;

    aput-object v1, p1, v0

    const/4 v0, 0x2

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/j;->em:Landroid/widget/ImageView;

    aput-object v1, p1, v0

    invoke-static {p0, p1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/view/View$OnClickListener;[Landroid/view/View;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/j;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/j;->ek:Landroid/widget/TextView;

    invoke-direct {p1, v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/j;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/j;->el:Landroid/widget/ImageView;

    invoke-direct {p1, v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/j;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/j;->em:Landroid/widget/ImageView;

    invoke-direct {p1, v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    invoke-virtual {p0, p0}, Lcom/kwad/components/ad/feed/b/j;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/j;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/j;->aZ()V

    :cond_1
    return-void
.end method

.method public final ba()V
    .locals 3

    sget v0, Lcom/kwad/sdk/R$id;->ksad_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/j;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/RatioFrameLayout;

    const-wide v1, 0x3fe1eb8520000000L    # 0.5600000023841858

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/widget/RatioFrameLayout;->setRatio(D)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_desc:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/j;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->ek:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_image:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/j;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->el:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_dislike:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/j;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->em:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_feed_logo:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/j;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    return-void
.end method

.method public final getLayoutId()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_feed_text_immerse_image:I

    return v0
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->ek:Landroid/widget/TextView;

    if-ne p1, v0, :cond_0

    const/16 v0, 0x19

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/j;->el:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_1

    const/16 v0, 0x64

    goto :goto_0

    :cond_1
    const/16 v0, 0x23

    :goto_0
    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/feed/b/j;->c(Landroid/view/View;I)V

    return-void
.end method
