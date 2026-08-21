.class public final Lcom/kwad/components/ad/interstitial/f/f;
.super Lcom/kwad/sdk/widget/KSFrameLayout;

# interfaces
.implements Lcom/kwad/sdk/widget/c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/interstitial/f/f$a;
    }
.end annotation


# instance fields
.field private du:Landroid/widget/ImageView;

.field private eo:Landroid/widget/TextView;

.field private ew:Landroid/widget/ImageView;

.field private jR:Lcom/kwad/sdk/widget/KSFrameLayout;

.field private kK:Lcom/kwad/sdk/widget/KSFrameLayout;

.field private lN:Ljava/lang/String;

.field private lO:Landroid/view/View;

.field private lP:Landroid/widget/ImageView;

.field private lQ:Lcom/kwad/components/core/page/widget/TextProgressBar;

.field private lR:Landroid/view/ViewGroup;

.field private lS:Landroid/view/ViewGroup;

.field private lT:Landroid/widget/ImageView;

.field private lU:Landroid/view/View;

.field private lV:Landroid/view/View;

.field private lW:Landroid/widget/TextView;

.field private lX:Landroid/widget/ImageView;

.field private lY:Landroid/widget/TextView;

.field private lZ:Landroid/widget/TextView;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

.field private ma:Landroid/widget/TextView;

.field private mb:Lcom/kwad/components/core/page/widget/TextProgressBar;

.field private mc:Landroid/widget/TextView;

.field private md:Lcom/kwad/components/ad/interstitial/f/g;

.field private final me:Lcom/kwad/components/ad/interstitial/f/f$a;

.field private mf:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/components/ad/interstitial/f/f$a;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;)V

    const-string v0, "%s\u79d2\u540e\u8fdb\u5165\u8bd5\u73a9\u9875"

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lN:Ljava/lang/String;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->mf:Z

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->me:Lcom/kwad/components/ad/interstitial/f/f$a;

    invoke-virtual {p2}, Lcom/kwad/components/ad/interstitial/f/f$a;->eC()Z

    move-result p2

    if-eqz p2, :cond_0

    sget p2, Lcom/kwad/sdk/R$layout;->ksad_interstitial_native_above:I

    goto :goto_0

    :cond_0
    sget p2, Lcom/kwad/sdk/R$layout;->ksad_interstitial_native:I

    :goto_0
    invoke-static {p1, p2, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->me:Lcom/kwad/components/ad/interstitial/f/f$a;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/f/f$a;->a(Lcom/kwad/components/ad/interstitial/f/f$a;)Z

    move-result p1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/interstitial/f/f;->s(Z)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/f/f;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lT:Landroid/widget/ImageView;

    return-object p0
.end method

.method private a(Landroid/view/View;II)V
    .locals 2

    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/f;->getContext()Landroid/content/Context;

    move-result-object v1

    int-to-float p2, p2

    invoke-static {v1, p2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p2

    iput p2, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/f;->getContext()Landroid/content/Context;

    move-result-object p2

    int-to-float p3, p3

    invoke-static {p2, p3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p2

    iput p2, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    invoke-virtual {p1, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private a(Lcom/kwad/sdk/widget/KSFrameLayout;Z)V
    .locals 2

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->setClickable(Z)V

    new-instance v1, Lcom/kwad/sdk/widget/f;

    invoke-direct {v1, p1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    xor-int/2addr p2, v0

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/widget/KSFrameLayout;->setWidthBasedRatio(Z)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/f/f;)Lcom/kwad/components/ad/interstitial/f/g;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    return-object p0
.end method

.method private b(Landroid/view/View;Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz v0, :cond_0

    invoke-interface {v0, p2}, Lcom/kwad/components/ad/interstitial/f/g;->p(Z)V

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->kK:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-interface {p2, v0}, Lcom/kwad/components/ad/interstitial/f/g;->a(Lcom/kwad/sdk/widget/KSFrameLayout;)V

    :cond_0
    invoke-virtual {p1, p0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dK()V

    return-void

    :cond_1
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->lU:Landroid/view/View;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->me:Lcom/kwad/components/ad/interstitial/f/f$a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/f/f$a;->eB()I

    move-result p1

    const/4 p2, 0x1

    if-ne p2, p1, :cond_2

    goto :goto_0

    :cond_2
    const/4 p2, 0x0

    :goto_0
    if-eqz p2, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_3

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dJ()V

    :cond_3
    return-void

    :cond_4
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->mb:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_5

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dL()V

    return-void

    :cond_5
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->lS:Landroid/view/ViewGroup;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_6

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dW()V

    return-void

    :cond_6
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->lQ:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_7

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dM()V

    return-void

    :cond_7
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->lV:Landroid/view/View;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_8

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dP()V

    return-void

    :cond_8
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_9

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dN()V

    return-void

    :cond_9
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->ew:Landroid/widget/ImageView;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_a

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dO()V

    return-void

    :cond_a
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->du:Landroid/widget/ImageView;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_b

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dQ()V

    return-void

    :cond_b
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->lY:Landroid/widget/TextView;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_c

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dR()V

    return-void

    :cond_c
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->eo:Landroid/widget/TextView;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_d

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dS()V

    return-void

    :cond_d
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->lX:Landroid/widget/ImageView;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_e

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dT()V

    return-void

    :cond_e
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->lZ:Landroid/widget/TextView;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_f

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dU()V

    return-void

    :cond_f
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->ma:Landroid/widget/TextView;

    invoke-virtual {p1, p2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_10

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    if-eqz p1, :cond_10

    invoke-interface {p1}, Lcom/kwad/components/ad/interstitial/f/g;->dV()V

    :cond_10
    return-void
.end method

.method private d(Landroid/view/View;I)V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/f;->getContext()Landroid/content/Context;

    move-result-object v0

    int-to-float p2, p2

    invoke-static {v0, p2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p2

    const/4 v0, 0x0

    invoke-static {p1, v0, p2, v0, v0}, Lcom/kwad/sdk/d/a/a;->b(Landroid/view/View;IIII)V

    return-void
.end method

.method private ev()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lX:Landroid/widget/ImageView;

    const/16 v1, 0x28

    invoke-direct {p0, v0, v1, v1}, Lcom/kwad/components/ad/interstitial/f/f;->a(Landroid/view/View;II)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->mb:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/16 v1, 0x82

    const/16 v2, 0x1e

    invoke-direct {p0, v0, v1, v2}, Lcom/kwad/components/ad/interstitial/f/f;->a(Landroid/view/View;II)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lZ:Landroid/widget/TextView;

    const/high16 v1, 0x41600000    # 14.0f

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextSize(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->mb:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/16 v1, 0xb

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/interstitial/f/f;->d(Landroid/view/View;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lZ:Landroid/widget/TextView;

    const/4 v1, 0x7

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/interstitial/f/f;->d(Landroid/view/View;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->ma:Landroid/widget/TextView;

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/interstitial/f/f;->d(Landroid/view/View;I)V

    return-void
.end method

.method private s(Z)V
    .locals 3

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->setClickable(Z)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_native_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->kK:Lcom/kwad/sdk/widget/KSFrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_native_video_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_full_bg:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lO:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_tail_frame:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lP:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_first_frame_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->ew:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_interstitial_logo:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_playing:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lR:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_play_end:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lS:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_download_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/page/widget/TextProgressBar;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lQ:Lcom/kwad/components/core/page/widget/TextProgressBar;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_close_outer:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lU:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lQ:Lcom/kwad/components/core/page/widget/TextProgressBar;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/f;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41200000    # 10.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setTextDimen(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lQ:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setTextColor(I)V

    :cond_0
    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_mute:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lT:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_count_down:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lW:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_logo:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lX:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_name:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lZ:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_desc:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->ma:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_download_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/page/widget/TextProgressBar;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->mb:Lcom/kwad/components/core/page/widget/TextProgressBar;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_download_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lV:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_icon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->du:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_title:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lY:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_desc:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->eo:Landroid/widget/TextView;

    new-instance v0, Lcom/kwad/sdk/widget/f;

    invoke-direct {v0, p0, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->ew:Landroid/widget/ImageView;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lQ:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->mb:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lU:Landroid/view/View;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lS:Landroid/view/ViewGroup;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lW:Landroid/widget/TextView;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lV:Landroid/view/View;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->du:Landroid/widget/ImageView;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lY:Landroid/widget/TextView;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->eo:Landroid/widget/TextView;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lX:Landroid/widget/ImageView;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lZ:Landroid/widget/TextView;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->ma:Landroid/widget/TextView;

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lT:Landroid/widget/ImageView;

    new-instance v1, Lcom/kwad/components/ad/interstitial/f/f$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/f/f$1;-><init>(Lcom/kwad/components/ad/interstitial/f/f;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_playable_timer:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->mc:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-direct {p0, v0, p1}, Lcom/kwad/components/ad/interstitial/f/f;->a(Lcom/kwad/sdk/widget/KSFrameLayout;Z)V

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IO()Z

    move-result p1

    if-nez p1, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/f/f;->ev()V

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(FLcom/kwad/sdk/core/video/videoview/a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setRatio(F)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/widget/KSFrameLayout;->addView(Landroid/view/View;)V

    invoke-virtual {p2}, Lcom/kwad/sdk/core/video/videoview/a;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v0, 0x0

    iput v0, p1, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    const/4 v0, -0x1

    iput v0, p1, Landroid/widget/FrameLayout$LayoutParams;->width:I

    iput v0, p1, Landroid/widget/FrameLayout$LayoutParams;->height:I

    const/16 v0, 0x11

    iput v0, p1, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    invoke-virtual {p2, p1}, Lcom/kwad/sdk/core/video/videoview/a;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public final a(Landroid/view/View;)V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/interstitial/f/f;->b(Landroid/view/View;Z)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lX:Landroid/widget/ImageView;

    sget v1, Lcom/kwad/sdk/R$drawable;->ksad_default_app_icon:I

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->bM(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x2

    if-ne v0, v2, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lX:Landroid/widget/ImageView;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->ct(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/f;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    sget v3, Lcom/kwad/sdk/R$drawable;->ksad_default_app_icon:I

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v2

    invoke-static {p1, v0, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadCircleIcon(Landroid/widget/ImageView;Ljava/lang/String;Landroid/graphics/drawable/Drawable;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lZ:Landroid/widget/TextView;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->bP(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->ma:Landroid/widget/TextView;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->cp(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->mb:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-static {}, Lcom/kwad/components/ad/d/b;->V()Ljava/lang/String;

    move-result-object p2

    :goto_0
    invoke-virtual {p1, p2, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->e(Ljava/lang/String;I)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->mb:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-static {}, Lcom/kwad/components/ad/d/b;->Y()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_1
    invoke-static {}, Lcom/kwad/components/ad/interstitial/a/b;->cH()Z

    move-result v0

    const/4 v2, 0x4

    if-eqz v0, :cond_2

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->bM(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const/4 v3, 0x3

    if-ne v0, v3, :cond_2

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->cy(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdProductInfo;

    move-result-object p2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lX:Landroid/widget/ImageView;

    iget-object v3, p2, Lcom/kwad/sdk/core/response/model/AdProductInfo;->icon:Ljava/lang/String;

    invoke-static {v0, v3, p1, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadWithRadius(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lZ:Landroid/widget/TextView;

    iget-object p2, p2, Lcom/kwad/sdk/core/response/model/AdProductInfo;->name:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->ma:Landroid/widget/TextView;

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->mb:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-static {}, Lcom/kwad/components/ad/d/b;->W()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_2
    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lX:Landroid/widget/ImageView;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3, p1, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadWithRadius(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lZ:Landroid/widget/TextView;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->ao(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    :goto_1
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->ma:Landroid/widget/TextView;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->mb:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lX:Landroid/widget/ImageView;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cl(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3, p1, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadWithRadius(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lZ:Landroid/widget/TextView;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->bO(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_1
.end method

.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    invoke-static {p1}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->ew:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->ew:Landroid/widget/ImageView;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_0
    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/interstitial/f/f;->b(Landroid/view/View;Z)V

    :cond_0
    return-void
.end method

.method public final b(ZI)V
    .locals 3

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->mc:Landroid/widget/TextView;

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    if-ltz p2, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->mc:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lN:Ljava/lang/String;

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    aput-object p2, v2, v0

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    return-void
.end method

.method public final b(ZZ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->ew:Landroid/widget/ImageView;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    const/16 p1, 0x8

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->ew:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->ew:Landroid/widget/ImageView;

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setClickable(Z)V

    :cond_1
    return-void
.end method

.method public final eA()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lS:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getVisibility()I

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    return v1
.end method

.method public final ew()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lW:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->mf:Z

    :cond_0
    return-void
.end method

.method public final ex()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lU:Landroid/view/View;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final ey()V
    .locals 2

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->t(Z)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lS:Landroid/view/ViewGroup;

    invoke-virtual {v1, v0}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lP:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void
.end method

.method public final ez()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lS:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lP:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->t(Z)V

    return-void
.end method

.method public final f(II)V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/f;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup$MarginLayoutParams;

    iput p1, v0, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    iput p2, v0, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/f/f;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public final g(Ljava/lang/String;I)V
    .locals 1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->lQ:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/4 v0, 0x0

    if-eqz p2, :cond_0

    invoke-virtual {p2, p1, v0}, Lcom/kwad/components/core/page/widget/TextProgressBar;->e(Ljava/lang/String;I)V

    :cond_0
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/f;->mb:Lcom/kwad/components/core/page/widget/TextProgressBar;

    if-eqz p2, :cond_1

    invoke-virtual {p2, p1, v0}, Lcom/kwad/components/core/page/widget/TextProgressBar;->e(Ljava/lang/String;I)V

    :cond_1
    return-void
.end method

.method public final getBlurBgView()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lO:Landroid/view/View;

    return-object v0
.end method

.method public final getTailFrameView()Landroid/widget/ImageView;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lP:Landroid/widget/ImageView;

    return-object v0
.end method

.method public final l(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method public final setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method

.method public final setViewListener(Lcom/kwad/components/ad/interstitial/f/g;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->md:Lcom/kwad/components/ad/interstitial/f/g;

    return-void
.end method

.method public final t(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lR:Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    const/16 p1, 0x8

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lR:Landroid/view/ViewGroup;

    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public final u(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lT:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setSelected(Z)V

    :cond_0
    return-void
.end method

.method public final y(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/f;->lW:Landroid/widget/TextView;

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->me:Lcom/kwad/components/ad/interstitial/f/f$a;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/f/f$a;->b(Lcom/kwad/components/ad/interstitial/f/f$a;)Z

    move-result p1

    if-eqz p1, :cond_2

    iget-boolean p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->mf:Z

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lW:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getVisibility()I

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/f;->lW:Landroid/widget/TextView;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_2
    return-void
.end method
