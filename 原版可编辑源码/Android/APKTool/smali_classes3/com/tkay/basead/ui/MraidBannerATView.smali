.class public Lcom/tkay/basead/ui/MraidBannerATView;
.super Lcom/tkay/basead/ui/BaseBannerATView;


# instance fields
.field u:Lcom/tkay/basead/ui/MraidContainerView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 28
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseBannerATView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 32
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/ui/BaseBannerATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    .line 34
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->c()V

    return-void
.end method

.method private o()V
    .locals 10

    .line 45
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->r()Ljava/lang/String;

    move-result-object v0

    .line 47
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_web_banner_ad_layout"

    const-string v4, "layout"

    invoke-static {v2, v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 49
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42480000    # 50.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    .line 50
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x43a00000    # 320.0f

    invoke-static {v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    .line 51
    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v5

    const v6, -0x215ddd38

    const/4 v7, 0x2

    const/4 v8, 0x1

    const/4 v9, 0x0

    if-eq v5, v6, :cond_2

    const v6, 0x59df5a3e

    if-eq v5, v6, :cond_1

    const v6, 0x60b65fb2

    if-eq v5, v6, :cond_0

    goto :goto_0

    :cond_0
    const-string v5, "728x90"

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    move v0, v8

    goto :goto_1

    :cond_1
    const-string v5, "320x90"

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    move v0, v9

    goto :goto_1

    :cond_2
    const-string v5, "300x250"

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    move v0, v7

    goto :goto_1

    :cond_3
    :goto_0
    const/4 v0, -0x1

    :goto_1
    const/high16 v5, 0x42b40000    # 90.0f

    if-eqz v0, :cond_6

    if-eq v0, v8, :cond_5

    if-eq v0, v7, :cond_4

    goto :goto_2

    .line 62
    :cond_4
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x43960000    # 300.0f

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    .line 63
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x437a0000    # 250.0f

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    goto :goto_2

    .line 57
    :cond_5
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x44340000    # 720.0f

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    .line 58
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    goto :goto_2

    .line 53
    :cond_6
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    .line 54
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    .line 67
    :goto_2
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-static {v3, v0}, Ljava/lang/Math;->min(II)I

    move-result v0

    .line 70
    new-instance v3, Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/basead/ui/MraidBannerATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v6, p0, Lcom/tkay/basead/ui/MraidBannerATView;->c:Lcom/tkay/core/common/f/i;

    new-instance v7, Lcom/tkay/basead/ui/MraidBannerATView$1;

    invoke-direct {v7, p0}, Lcom/tkay/basead/ui/MraidBannerATView$1;-><init>(Lcom/tkay/basead/ui/MraidBannerATView;)V

    invoke-direct {v3, v4, v5, v6, v7}, Lcom/tkay/basead/ui/MraidContainerView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/ui/MraidContainerView$a;)V

    iput-object v3, p0, Lcom/tkay/basead/ui/MraidBannerATView;->u:Lcom/tkay/basead/ui/MraidContainerView;

    .line 90
    invoke-virtual {v3}, Lcom/tkay/basead/ui/MraidContainerView;->init()V

    .line 92
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "id"

    const-string v5, "myoffer_banner_web"

    invoke-static {v3, v5, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/tkay/basead/ui/MraidBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/FrameLayout;

    .line 93
    iget-object v5, p0, Lcom/tkay/basead/ui/MraidBannerATView;->u:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {v5, v2}, Lcom/tkay/basead/ui/MraidContainerView;->setMinimumHeight(I)V

    .line 94
    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v2, v0, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/16 v5, 0x11

    .line 95
    iput v5, v2, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    .line 96
    iget-object v5, p0, Lcom/tkay/basead/ui/MraidBannerATView;->u:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {v3, v5, v9, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 98
    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v2, v0, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v2}, Lcom/tkay/basead/ui/MraidBannerATView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 100
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_banner_close"

    invoke-static {v0, v1, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MraidBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/CloseImageView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    .line 102
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->s()I

    move-result v0

    if-nez v0, :cond_7

    .line 103
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v0, v9}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 105
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    iget-object v1, p0, Lcom/tkay/basead/ui/MraidBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->h()I

    move-result v1

    invoke-virtual {p0, v0, v1}, Lcom/tkay/basead/ui/MraidBannerATView;->a(Lcom/tkay/basead/ui/a;I)F

    return-void

    .line 107
    :cond_7
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method protected final a()V
    .locals 10

    .line 1045
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->r()Ljava/lang/String;

    move-result-object v0

    .line 1047
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_web_banner_ad_layout"

    const-string v4, "layout"

    invoke-static {v2, v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 1049
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42480000    # 50.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    .line 1050
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x43a00000    # 320.0f

    invoke-static {v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    .line 1051
    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v5

    const v6, -0x215ddd38

    const/4 v7, 0x2

    const/4 v8, 0x1

    const/4 v9, 0x0

    if-eq v5, v6, :cond_2

    const v6, 0x59df5a3e

    if-eq v5, v6, :cond_1

    const v6, 0x60b65fb2

    if-eq v5, v6, :cond_0

    goto :goto_0

    :cond_0
    const-string v5, "728x90"

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    move v0, v8

    goto :goto_1

    :cond_1
    const-string v5, "320x90"

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    move v0, v9

    goto :goto_1

    :cond_2
    const-string v5, "300x250"

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    move v0, v7

    goto :goto_1

    :cond_3
    :goto_0
    const/4 v0, -0x1

    :goto_1
    const/high16 v5, 0x42b40000    # 90.0f

    if-eqz v0, :cond_6

    if-eq v0, v8, :cond_5

    if-eq v0, v7, :cond_4

    goto :goto_2

    .line 1062
    :cond_4
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x43960000    # 300.0f

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    .line 1063
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x437a0000    # 250.0f

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    goto :goto_2

    .line 1057
    :cond_5
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x44340000    # 720.0f

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    .line 1058
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    goto :goto_2

    .line 1053
    :cond_6
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    .line 1054
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    .line 1067
    :goto_2
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-static {v3, v0}, Ljava/lang/Math;->min(II)I

    move-result v0

    .line 1070
    new-instance v3, Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/basead/ui/MraidBannerATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v6, p0, Lcom/tkay/basead/ui/MraidBannerATView;->c:Lcom/tkay/core/common/f/i;

    new-instance v7, Lcom/tkay/basead/ui/MraidBannerATView$1;

    invoke-direct {v7, p0}, Lcom/tkay/basead/ui/MraidBannerATView$1;-><init>(Lcom/tkay/basead/ui/MraidBannerATView;)V

    invoke-direct {v3, v4, v5, v6, v7}, Lcom/tkay/basead/ui/MraidContainerView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/ui/MraidContainerView$a;)V

    iput-object v3, p0, Lcom/tkay/basead/ui/MraidBannerATView;->u:Lcom/tkay/basead/ui/MraidContainerView;

    .line 1090
    invoke-virtual {v3}, Lcom/tkay/basead/ui/MraidContainerView;->init()V

    .line 1092
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "id"

    const-string v5, "myoffer_banner_web"

    invoke-static {v3, v5, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/tkay/basead/ui/MraidBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/FrameLayout;

    .line 1093
    iget-object v5, p0, Lcom/tkay/basead/ui/MraidBannerATView;->u:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {v5, v2}, Lcom/tkay/basead/ui/MraidContainerView;->setMinimumHeight(I)V

    .line 1094
    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v2, v0, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/16 v5, 0x11

    .line 1095
    iput v5, v2, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    .line 1096
    iget-object v5, p0, Lcom/tkay/basead/ui/MraidBannerATView;->u:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {v3, v5, v9, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 1098
    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v2, v0, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v2}, Lcom/tkay/basead/ui/MraidBannerATView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1100
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_banner_close"

    invoke-static {v0, v1, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MraidBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/CloseImageView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    .line 1102
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->s()I

    move-result v0

    if-nez v0, :cond_7

    .line 1103
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v0, v9}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 1105
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    iget-object v1, p0, Lcom/tkay/basead/ui/MraidBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->h()I

    move-result v1

    invoke-virtual {p0, v0, v1}, Lcom/tkay/basead/ui/MraidBannerATView;->a(Lcom/tkay/basead/ui/a;I)F

    return-void

    .line 1107
    :cond_7
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    return-void
.end method

.method protected final b()V
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->u:Lcom/tkay/basead/ui/MraidContainerView;

    if-nez v0, :cond_0

    return-void

    .line 118
    :cond_0
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseBannerATView;->b()V

    return-void
.end method

.method public destroy()V
    .locals 1

    .line 124
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseBannerATView;->destroy()V

    .line 126
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidBannerATView;->u:Lcom/tkay/basead/ui/MraidContainerView;

    if-eqz v0, :cond_0

    .line 127
    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidContainerView;->release()V

    :cond_0
    return-void
.end method
