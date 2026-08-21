.class public Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;
.super Landroid/widget/FrameLayout;

# interfaces
.implements Lcom/kwad/sdk/widget/c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5$a;
    }
.end annotation


# instance fields
.field private Bk:Landroid/widget/TextView;

.field private Bl:Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5$a;

.field private Bm:Landroid/view/View;

.field private dC:Landroid/widget/TextView;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->D(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->D(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->D(Landroid/content/Context;)V

    return-void
.end method

.method private D(Landroid/content/Context;)V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_video_actionbar_h5:I

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_h5_ad_desc:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->Bk:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_h5_open_btn:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->dC:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_download_bar_cover:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->findViewById(I)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->Bm:Landroid/view/View;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;)Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->Bl:Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5$a;

    return-object p0
.end method

.method private b(Landroid/view/View;Z)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->Bm:Landroid/view/View;

    if-ne p1, v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    :goto_0
    new-instance v1, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v1, p1}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v1, p1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5$1;

    invoke-direct {v0, p0, p2}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5$1;-><init>(Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;Z)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;)V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->b(Landroid/view/View;Z)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5$a;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->Bl:Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5$a;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->Bk:Landroid/widget/TextView;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->dC:Landroid/widget/TextView;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->setClickable(Z)V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->Bm:Landroid/view/View;

    invoke-virtual {p2, p1}, Landroid/view/View;->setClickable(Z)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->Bm:Landroid/view/View;

    invoke-direct {p1, p2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-direct {p1, p0, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarH5;->b(Landroid/view/View;Z)V

    :cond_0
    return-void
.end method
