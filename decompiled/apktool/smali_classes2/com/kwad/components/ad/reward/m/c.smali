.class public final Lcom/kwad/components/ad/reward/m/c;
.super Lcom/kwad/sdk/core/download/a/a;

# interfaces
.implements Lcom/kwad/sdk/widget/c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/m/c$a;,
        Lcom/kwad/components/ad/reward/m/c$b;
    }
.end annotation


# instance fields
.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private yA:Lcom/kwad/components/ad/i/a;

.field private yB:Ljava/lang/Runnable;

.field private yo:Landroid/view/View;

.field private yp:Landroid/view/View;

.field private yq:Landroid/widget/Button;

.field private yr:Landroid/widget/Button;

.field private ys:Landroid/widget/TextView;

.field private yt:Landroid/widget/ImageView;

.field private yu:Landroid/widget/TextView;

.field private yv:Landroid/widget/TextView;

.field private yw:Lcom/kwad/sdk/widget/KSRatingBar;

.field private yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

.field private yy:Lcom/kwad/components/ad/reward/m/c$a;

.field private volatile yz:Z


# direct methods
.method public constructor <init>(Landroid/view/View;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/download/a/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/m/c;->yz:Z

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yo:Landroid/view/View;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/c;->initView()V

    new-instance v0, Lcom/kwad/components/ad/i/a;

    invoke-direct {v0, p1}, Lcom/kwad/components/ad/i/a;-><init>(Landroid/view/View;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yA:Lcom/kwad/components/ad/i/a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/m/c;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/c;->yp:Landroid/view/View;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/m/c;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/m/c;->yz:Z

    return p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/m/c;)Lcom/kwad/components/ad/i/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/c;->yA:Lcom/kwad/components/ad/i/a;

    return-object p0
.end method

.method private c(Landroid/view/View;Z)V
    .locals 1

    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result p1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_install_container:I

    if-eq p1, v0, :cond_0

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_install_action:I

    if-eq p1, v0, :cond_0

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_install_start:I

    if-ne p1, v0, :cond_1

    :cond_0
    const-string p1, "ApkInfoCardViewHelper"

    const-string v0, "onClick install"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/m/c;->yz:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yy:Lcom/kwad/components/ad/reward/m/c$a;

    if-eqz v0, :cond_1

    invoke-interface {v0, p2, p1}, Lcom/kwad/components/ad/reward/m/c$a;->c(ZI)V

    :cond_1
    return-void
.end method

.method private initView()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yo:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_install_action:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yq:Landroid/widget/Button;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yo:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_install_start:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yo:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_install_container:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yp:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yo:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_icon:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yt:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yo:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_name:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->ys:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yo:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_desc:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yu:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yo:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_score:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSRatingBar;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yw:Lcom/kwad/sdk/widget/KSRatingBar;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yo:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_tags:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/widget/KsAppTagsView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;)V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/reward/m/c;->c(Landroid/view/View;Z)V

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/m/c$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yy:Lcom/kwad/components/ad/reward/m/c$a;

    return-void
.end method

.method public final a(Lcom/kwad/components/core/e/d/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz p1, :cond_0

    invoke-virtual {p1, p0}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_0
    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/reward/m/c;->c(Landroid/view/View;Z)V

    :cond_0
    return-void
.end method

.method public final c(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V
    .locals 4

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/m/c$b;->A(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/c$b;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yt:Landroid/widget/ImageView;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/c$b;->a(Lcom/kwad/components/ad/reward/m/c$b;)Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0xc

    invoke-static {v1, v2, p1, v3}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->ys:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/c$b;->b(Lcom/kwad/components/ad/reward/m/c$b;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yu:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/c$b;->c(Lcom/kwad/components/ad/reward/m/c$b;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yw:Lcom/kwad/sdk/widget/KSRatingBar;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/c$b;->d(Lcom/kwad/components/ad/reward/m/c$b;)F

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/widget/KSRatingBar;->setStar(F)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/components/ad/reward/a/b;->k(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    invoke-static {p1, v1}, Lcom/kwad/sdk/core/response/b/d;->f(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)Z

    move-result v1

    const/4 v2, 0x0

    const/16 v3, 0x8

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yw:Lcom/kwad/sdk/widget/KSRatingBar;

    invoke-virtual {p1, v2}, Lcom/kwad/sdk/widget/KSRatingBar;->setVisibility(I)V

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    const-string v1, "\u67e5\u770b\u8be6\u60c5"

    invoke-virtual {p1, v1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yw:Lcom/kwad/sdk/widget/KSRatingBar;

    invoke-virtual {p1, v3}, Lcom/kwad/sdk/widget/KSRatingBar;->setVisibility(I)V

    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yq:Landroid/widget/Button;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/m/c$b;->jW()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yq:Landroid/widget/Button;

    const/4 v1, 0x1

    invoke-virtual {p1, v1}, Landroid/widget/Button;->setClickable(Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    invoke-virtual {p1, v1}, Landroid/widget/Button;->setClickable(Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yp:Landroid/view/View;

    invoke-virtual {p1, v1}, Landroid/view/View;->setClickable(Z)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yq:Landroid/widget/Button;

    invoke-direct {p1, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    invoke-direct {p1, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yp:Landroid/view/View;

    invoke-direct {p1, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/c$b;->e(Lcom/kwad/components/ad/reward/m/c$b;)Ljava/util/List;

    move-result-object p1

    if-eqz p2, :cond_2

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p2

    if-nez p2, :cond_2

    iget-object p2, p0, Lcom/kwad/components/ad/reward/m/c;->yu:Landroid/widget/TextView;

    invoke-virtual {p2, v3}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/m/c;->yo:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_apk_info_desc_2:I

    invoke-virtual {p2, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/widget/TextView;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/m/c;->yv:Landroid/widget/TextView;

    invoke-virtual {p2, v2}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/m/c;->yv:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/c$b;->c(Lcom/kwad/components/ad/reward/m/c$b;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_2
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p2

    if-nez p2, :cond_3

    iget-object p2, p0, Lcom/kwad/components/ad/reward/m/c;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    invoke-virtual {p2, v3}, Lcom/kwad/components/ad/widget/KsAppTagsView;->setVisibility(I)V

    :cond_3
    iget-object p2, p0, Lcom/kwad/components/ad/reward/m/c;->yx:Lcom/kwad/components/ad/widget/KsAppTagsView;

    invoke-virtual {p2, p1}, Lcom/kwad/components/ad/widget/KsAppTagsView;->setAppTags(Ljava/util/List;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yB:Ljava/lang/Runnable;

    if-nez p1, :cond_4

    new-instance p1, Lcom/kwad/components/ad/reward/m/c$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/reward/m/c$1;-><init>(Lcom/kwad/components/ad/reward/m/c;)V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yB:Ljava/lang/Runnable;

    :cond_4
    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/c;->yp:Landroid/view/View;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/m/c;->yB:Ljava/lang/Runnable;

    const-wide/16 v0, 0x640

    invoke-virtual {p1, p2, v0, v1}, Landroid/view/View;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public final i(Ljava/lang/String;I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public final jU()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/e/d/c;->c(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yA:Lcom/kwad/components/ad/i/a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/i/a;->jU()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yp:Landroid/view/View;

    if-eqz v0, :cond_2

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yB:Ljava/lang/Runnable;

    if-eqz v1, :cond_2

    invoke-virtual {v0, v1}, Landroid/view/View;->removeCallbacks(Ljava/lang/Runnable;)Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yB:Ljava/lang/Runnable;

    :cond_2
    return-void
.end method

.method public final jV()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yA:Lcom/kwad/components/ad/i/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/i/a;->lO()V

    return-void
.end method

.method public final onDownloadFailed()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, "\u7acb\u5373\u4e0b\u8f7d"

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onDownloadFinished()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-nez v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onDownloadStarted()V
    .locals 0

    return-void
.end method

.method public final onIdle()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, "\u7acb\u5373\u4e0b\u8f7d"

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onInstalled()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->U(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, "\u7acb\u5373\u6253\u5f00"

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onPaused(I)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/download/a/a;->onPaused(I)V

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yA:Lcom/kwad/components/ad/i/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/i/a;->lO()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cw(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yA:Lcom/kwad/components/ad/i/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/i/a;->lO()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c;->yr:Landroid/widget/Button;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cv(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method
