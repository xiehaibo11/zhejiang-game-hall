.class public Lcom/tkay/basead/ui/AsseblemSplashATView;
.super Lcom/tkay/basead/ui/BaseSdkSplashATView;


# instance fields
.field a:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 37
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseSdkSplashATView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 41
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/ui/BaseSdkSplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/AsseblemSplashATView;)V
    .locals 0

    .line 32
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->h()V

    return-void
.end method

.method private static synthetic a(Lcom/tkay/basead/ui/AsseblemSplashATView;ILjava/lang/Runnable;)V
    .locals 0

    .line 32
    invoke-super {p0, p1, p2}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->a(ILjava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method protected final a()V
    .locals 4

    .line 46
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->q()I

    move-result v0

    const-string v1, "layout"

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    .line 47
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_splash_ad_layout_asseblem_vertical_land"

    invoke-static {v2, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    goto :goto_0

    .line 49
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_splash_ad_layout_asseblem_vertical_port"

    invoke-static {v2, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 51
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->o()V

    return-void
.end method

.method protected final b()V
    .locals 13

    .line 56
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    const-string v2, "myoffer_splash_ad_title"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 57
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_splash_ad_install_btn"

    invoke-static {v2, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p0, v2}, Lcom/tkay/basead/ui/AsseblemSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 58
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "myoffer_splash_desc"

    invoke-static {v3, v4, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/tkay/basead/ui/AsseblemSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    .line 60
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "myoffer_splash_ad_content_image_area"

    invoke-static {v4, v5, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {p0, v4}, Lcom/tkay/basead/ui/AsseblemSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/FrameLayout;

    .line 61
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "myoffer_splash_bg"

    invoke-static {v5, v6, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {p0, v5}, Lcom/tkay/basead/ui/AsseblemSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 62
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v6

    const-string v7, "myoffer_splash_icon"

    invoke-static {v6, v7, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/basead/ui/AsseblemSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 64
    iput-object v2, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->a:Landroid/view/View;

    .line 67
    iget-object v6, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v6}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    const/16 v7, 0x11

    const/4 v8, 0x1

    const/4 v9, 0x0

    if-nez v6, :cond_0

    .line 68
    invoke-virtual {v1, v9}, Lcom/tkay/core/common/ui/component/RoundImageView;->setVisibility(I)V

    .line 69
    invoke-virtual {v1, v8}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    const/16 v6, 0xc

    .line 70
    invoke-virtual {v1, v6}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    .line 71
    invoke-virtual {v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v6

    iget v6, v6, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 72
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v10

    new-instance v11, Lcom/tkay/core/common/res/e;

    iget-object v12, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v12}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v12

    invoke-direct {v11, v8, v12}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v12, Lcom/tkay/basead/ui/AsseblemSplashATView$1;

    invoke-direct {v12, p0, v1}, Lcom/tkay/basead/ui/AsseblemSplashATView$1;-><init>(Lcom/tkay/basead/ui/AsseblemSplashATView;Lcom/tkay/core/common/ui/component/RoundImageView;)V

    invoke-virtual {v10, v11, v6, v6, v12}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    goto :goto_0

    .line 86
    :cond_0
    invoke-static {v1}, Lcom/tkay/basead/ui/a/a;->a(Landroid/view/View;)V

    .line 91
    invoke-virtual {v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v6

    check-cast v6, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v6, :cond_1

    .line 93
    iput v9, v6, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 94
    invoke-virtual {v1, v6}, Lcom/tkay/core/common/ui/component/RoundImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    if-eqz v0, :cond_2

    .line 98
    invoke-virtual {v0, v7}, Landroid/widget/TextView;->setGravity(I)V

    :cond_2
    if-eqz v3, :cond_3

    .line 101
    invoke-virtual {v3, v7}, Landroid/widget/TextView;->setGravity(I)V

    .line 104
    :cond_3
    :goto_0
    iget-object v6, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->r:Ljava/util/List;

    invoke-interface {v6, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 107
    invoke-virtual {v4}, Landroid/widget/FrameLayout;->removeAllViews()V

    .line 109
    new-instance v1, Lcom/tkay/basead/ui/WrapRoundImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-direct {v1, v6}, Lcom/tkay/basead/ui/WrapRoundImageView;-><init>(Landroid/content/Context;)V

    .line 110
    new-instance v6, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v10, -0x1

    invoke-direct {v6, v10, v10}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    .line 111
    iput v7, v6, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    .line 112
    invoke-virtual {v1, v6}, Lcom/tkay/basead/ui/WrapRoundImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 113
    invoke-virtual {v1, v9}, Lcom/tkay/basead/ui/WrapRoundImageView;->setNeedRadiu(Z)V

    .line 115
    sget-object v7, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v7}, Lcom/tkay/basead/ui/WrapRoundImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    const/4 v7, 0x4

    .line 116
    invoke-virtual {v1, v7}, Lcom/tkay/basead/ui/WrapRoundImageView;->setVisibility(I)V

    .line 117
    invoke-virtual {v4, v1, v6}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 118
    invoke-virtual {v4, v9}, Landroid/widget/FrameLayout;->setVisibility(I)V

    .line 120
    invoke-virtual {v5, v9}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    .line 121
    iget-object v6, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v6}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_4

    const-string v1, "#EFEFEF"

    .line 122
    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v5, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setBackgroundColor(I)V

    goto :goto_1

    .line 124
    :cond_4
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v6

    new-instance v10, Lcom/tkay/core/common/res/e;

    iget-object v11, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    .line 125
    invoke-virtual {v11}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v10, v8, v11}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getResources()Landroid/content/res/Resources;

    move-result-object v8

    invoke-virtual {v8}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v8

    iget v8, v8, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getResources()Landroid/content/res/Resources;

    move-result-object v11

    invoke-virtual {v11}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v11

    iget v11, v11, Landroid/util/DisplayMetrics;->widthPixels:I

    mul-int/lit16 v11, v11, 0x273

    div-int/lit16 v11, v11, 0x4b0

    new-instance v12, Lcom/tkay/basead/ui/AsseblemSplashATView$2;

    invoke-direct {v12, p0, v4, v1, v5}, Lcom/tkay/basead/ui/AsseblemSplashATView$2;-><init>(Lcom/tkay/basead/ui/AsseblemSplashATView;Landroid/widget/FrameLayout;Lcom/tkay/basead/ui/WrapRoundImageView;Lcom/tkay/core/common/ui/component/RoundImageView;)V

    .line 124
    invoke-virtual {v6, v10, v8, v11, v12}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    .line 148
    iget-object v4, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->r:Ljava/util/List;

    invoke-interface {v4, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 152
    :goto_1
    iget-object v1, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 153
    iget-object v1, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 154
    invoke-virtual {v0, v9}, Landroid/widget/TextView;->setVisibility(I)V

    goto :goto_2

    .line 156
    :cond_5
    invoke-virtual {v0, v7}, Landroid/widget/TextView;->setVisibility(I)V

    .line 158
    :goto_2
    iget-object v1, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->r:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 161
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 162
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_3

    .line 164
    :cond_6
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {v0, v1}, Lcom/tkay/basead/a/e;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;)I

    move-result v0

    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setText(I)V

    .line 166
    :goto_3
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->r:Ljava/util/List;

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    if-eqz v3, :cond_8

    .line 170
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 171
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_4

    :cond_7
    const/16 v0, 0x8

    .line 173
    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setVisibility(I)V

    .line 175
    :goto_4
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->r:Ljava/util/List;

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_8
    return-void
.end method

.method protected c()V
    .locals 2

    .line 180
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->R()I

    move-result v0

    if-gez v0, :cond_0

    const/16 v0, 0x64

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/AsseblemSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->R()I

    move-result v0

    :goto_0
    new-instance v1, Lcom/tkay/basead/ui/AsseblemSplashATView$3;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/AsseblemSplashATView$3;-><init>(Lcom/tkay/basead/ui/AsseblemSplashATView;)V

    .line 1032
    invoke-super {p0, v0, v1}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->a(ILjava/lang/Runnable;)V

    return-void
.end method
