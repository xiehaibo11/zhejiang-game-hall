.class public final Lcom/kwad/components/ad/reward/m/n;
.super Lcom/kwad/components/ad/reward/m/d;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/m/n$a;
    }
.end annotation


# instance fields
.field private gg:Landroid/view/ViewGroup;

.field private yP:Landroid/widget/TextView;

.field private zI:Landroid/view/ViewGroup;

.field private zO:Lcom/kwad/components/core/widget/KSCornerImageView;

.field private zP:Landroid/widget/LinearLayout;

.field private zQ:Lcom/kwad/components/ad/widget/KsPriceView;

.field private zR:Landroid/widget/TextView;

.field private zS:Landroid/view/View;

.field private zT:Lcom/kwad/components/core/widget/KSCornerImageView;

.field private zU:Lcom/kwad/components/ad/reward/m/b;

.field private zV:Lcom/kwad/components/ad/reward/m/n$a;


# direct methods
.method public constructor <init>(Landroid/view/ViewGroup;Lcom/kwad/components/ad/reward/m/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/d;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/m/n;->zU:Lcom/kwad/components/ad/reward/m/b;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/n;->initView()V

    return-void
.end method

.method private static a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/CouponInfo;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 2

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_reward_order_card_coupon:I

    const/4 v1, 0x0

    invoke-static {p0, v0, p2, v1}, Lcom/kwad/sdk/m/l;->a(Landroid/content/Context;ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/ad/reward/widget/KSCouponLabelTextView;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/CouponInfo;->getDisplayName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/widget/KSCouponLabelTextView;->setText(Ljava/lang/CharSequence;)V

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/m/n;Landroid/content/Context;Lcom/kwad/sdk/core/response/model/CouponInfo;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 0

    invoke-static {p1, p2, p3}, Lcom/kwad/components/ad/reward/m/n;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/CouponInfo;Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/m/n;)Landroid/widget/LinearLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/n;->zP:Landroid/widget/LinearLayout;

    return-object p0
.end method

.method private a(Lcom/kwad/sdk/core/response/model/AdProductInfo;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zO:Lcom/kwad/components/core/widget/KSCornerImageView;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getIcon()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->yP:Landroid/widget/TextView;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->isCouponListEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zP:Landroid/widget/LinearLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zV:Lcom/kwad/components/ad/reward/m/n$a;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/m/n$a;->hB()V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zP:Landroid/widget/LinearLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zP:Landroid/widget/LinearLayout;

    new-instance v1, Lcom/kwad/components/ad/reward/m/n$1;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/ad/reward/m/n$1;-><init>(Lcom/kwad/components/ad/reward/m/n;Lcom/kwad/sdk/core/response/model/AdProductInfo;)V

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->post(Ljava/lang/Runnable;)Z

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zQ:Lcom/kwad/components/ad/widget/KsPriceView;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getPrice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->getOriginPrice()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/ad/widget/KsPriceView;->f(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/components/ad/d/b;->X()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zT:Lcom/kwad/components/core/widget/KSCornerImageView;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_1
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/m/n;)Lcom/kwad/components/ad/reward/m/n$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/n;->zV:Lcom/kwad/components/ad/reward/m/n$a;

    return-object p0
.end method

.method private initView()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_order_root:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zI:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_order_icon:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KSCornerImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zO:Lcom/kwad/components/core/widget/KSCornerImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_order_title:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->yP:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_order_coupon_list:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zP:Landroid/widget/LinearLayout;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_order_price:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/widget/KsPriceView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zQ:Lcom/kwad/components/ad/widget/KsPriceView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_order_btn_buy:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zR:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_order_text_area:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zS:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_reward_order_kwai_logo:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KSCornerImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zT:Lcom/kwad/components/core/widget/KSCornerImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zR:Landroid/widget/TextView;

    invoke-static {}, Lcom/kwad/components/ad/d/b;->W()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zR:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zO:Lcom/kwad/components/core/widget/KSCornerImageView;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/widget/KSCornerImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zS:Landroid/view/View;

    invoke-virtual {v0, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    instance-of v2, v1, Landroid/widget/FrameLayout$LayoutParams;

    if-eqz v2, :cond_0

    check-cast v1, Landroid/widget/FrameLayout$LayoutParams;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_reward_follow_card_width_horizontal:I

    invoke-virtual {v0, v2}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v0

    iput v0, v1, Landroid/widget/FrameLayout$LayoutParams;->width:I

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->gg:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/m/n$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/n;->zV:Lcom/kwad/components/ad/reward/m/n$a;

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/m/r;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/ad/reward/m/d;->a(Lcom/kwad/components/ad/reward/m/r;)V

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/m/r;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cy(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdProductInfo;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/m/r;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    invoke-direct {p0, v0, p1}, Lcom/kwad/components/ad/reward/m/n;->a(Lcom/kwad/sdk/core/response/model/AdProductInfo;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method public final gQ()Landroid/view/ViewGroup;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zI:Landroid/view/ViewGroup;

    return-object v0
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zU:Lcom/kwad/components/ad/reward/m/b;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zR:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/n;->zU:Lcom/kwad/components/ad/reward/m/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/m/b;->gU()V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zO:Lcom/kwad/components/core/widget/KSCornerImageView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/n;->zU:Lcom/kwad/components/ad/reward/m/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/m/b;->ip()V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/n;->zS:Landroid/view/View;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/m/n;->zU:Lcom/kwad/components/ad/reward/m/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/m/b;->iq()V

    :cond_3
    return-void
.end method
