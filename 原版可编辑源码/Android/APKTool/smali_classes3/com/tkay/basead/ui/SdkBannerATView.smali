.class public Lcom/tkay/basead/ui/SdkBannerATView;
.super Lcom/tkay/basead/ui/BaseBannerATView;


# static fields
.field private static final x:I = 0x1

.field private static final y:I = 0x2


# instance fields
.field private final A:Landroid/view/View$OnClickListener;

.field u:Z

.field v:Ljava/lang/String;

.field private w:I

.field private final z:Landroid/view/View$OnClickListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 71
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseBannerATView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x2

    .line 45
    iput p1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->w:I

    .line 50
    new-instance p1, Lcom/tkay/basead/ui/SdkBannerATView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/SdkBannerATView$1;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->z:Landroid/view/View$OnClickListener;

    .line 63
    new-instance p1, Lcom/tkay/basead/ui/SdkBannerATView$8;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/SdkBannerATView$8;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->A:Landroid/view/View$OnClickListener;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 75
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/ui/BaseBannerATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    const/4 p1, 0x2

    .line 45
    iput p1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->w:I

    .line 50
    new-instance p1, Lcom/tkay/basead/ui/SdkBannerATView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/SdkBannerATView$1;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->z:Landroid/view/View$OnClickListener;

    .line 63
    new-instance p1, Lcom/tkay/basead/ui/SdkBannerATView$8;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/SdkBannerATView$8;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->A:Landroid/view/View$OnClickListener;

    .line 77
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->b()V

    .line 78
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->c()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/SdkBannerATView;)I
    .locals 0

    .line 40
    iget p0, p0, Lcom/tkay/basead/ui/SdkBannerATView;->w:I

    return p0
.end method

.method private a(Ljava/lang/String;)I
    .locals 3

    .line 143
    iget-object v0, p0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v0, v0, Lcom/tkay/core/common/f/z;

    const/4 v1, 0x1

    const/4 v2, 0x2

    if-eqz v0, :cond_0

    .line 144
    iget-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    check-cast p1, Lcom/tkay/core/common/f/z;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/z;->Y()I

    move-result p1

    if-eq p1, v1, :cond_2

    const/4 v0, 0x3

    goto :goto_0

    .line 153
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v0, v0, Lcom/tkay/core/common/f/r;

    if-eqz v0, :cond_1

    .line 154
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p1}, Lcom/tkay/basead/a/b/c;->c(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    goto :goto_1

    :cond_1
    :goto_0
    move v1, v2

    .line 160
    :cond_2
    :goto_1
    iput v1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->w:I

    return v1
.end method

.method static synthetic b(Lcom/tkay/basead/ui/SdkBannerATView;)V
    .locals 1

    const/4 v0, 0x1

    .line 40
    invoke-super {p0, v0}, Lcom/tkay/basead/ui/BaseBannerATView;->b(I)V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 14

    .line 167
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    const-string v2, "myoffer_banner_root"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout;

    .line 168
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_banner_close"

    invoke-static {v2, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p0, v2}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/basead/ui/CloseImageView;

    iput-object v2, p0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    .line 171
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_banner_container"

    invoke-static {v2, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p0, v2}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout;

    .line 172
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "myoffer_banner_publisher_name"

    invoke-static {v3, v4, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    .line 173
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "myoffer_banner_privacy_agreement"

    invoke-static {v4, v5, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {p0, v4}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    .line 174
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "myoffer_banner_permission_manage"

    invoke-static {v5, v6, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {p0, v5}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    .line 175
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v6

    const-string v7, "myoffer_banner_version_name"

    invoke-static {v6, v7, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {p0, v6}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    .line 177
    iget-object v7, p0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v7, v7, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v7}, Lcom/tkay/core/common/f/j;->s()I

    move-result v7

    const/4 v8, 0x0

    if-nez v7, :cond_1

    .line 178
    iget-object v7, p0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v7, v8}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 179
    iget-object v7, p0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    const-string v9, "728x90"

    invoke-static {v9, v7}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_0

    .line 180
    iget-object v7, p0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v7}, Lcom/tkay/basead/ui/CloseImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v7

    .line 181
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v9

    const/high16 v10, 0x41b80000    # 23.0f

    invoke-static {v9, v10}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v9

    iput v9, v7, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 182
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9, v10}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v9

    iput v9, v7, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 183
    iget-object v9, p0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v9, v7}, Lcom/tkay/basead/ui/CloseImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 186
    :cond_0
    iget-object v7, p0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    iget-object v9, p0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v9, v9, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v9}, Lcom/tkay/core/common/f/j;->h()I

    move-result v9

    invoke-virtual {p0, v7, v9}, Lcom/tkay/basead/ui/SdkBannerATView;->a(Lcom/tkay/basead/ui/a;I)F

    goto :goto_0

    .line 188
    :cond_1
    iget-object v7, p0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    const/16 v9, 0x8

    invoke-virtual {v7, v9}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 195
    :goto_0
    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v7

    check-cast v7, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v9, -0x1

    .line 196
    iput v9, v7, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 197
    iput v9, v7, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 198
    invoke-virtual {v0, v7}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 201
    new-instance v0, Lcom/tkay/core/common/res/image/RecycleImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-direct {v0, v7}, Lcom/tkay/core/common/res/image/RecycleImageView;-><init>(Landroid/content/Context;)V

    .line 202
    sget-object v7, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v7}, Lcom/tkay/core/common/res/image/RecycleImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 203
    new-instance v7, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v7, v9, v9}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v8, v7}, Lcom/tkay/basead/ui/SdkBannerATView;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 206
    new-instance v7, Lcom/tkay/core/common/res/image/RecycleImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-direct {v7, v10}, Lcom/tkay/core/common/res/image/RecycleImageView;-><init>(Landroid/content/Context;)V

    .line 207
    sget-object v10, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v7, v10}, Lcom/tkay/core/common/res/image/RecycleImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 208
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v10

    new-instance v11, Lcom/tkay/core/common/res/e;

    const/4 v12, 0x1

    invoke-direct {v11, v12, p1}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v13, Lcom/tkay/basead/ui/SdkBannerATView$9;

    invoke-direct {v13, p0, p1, v7, v0}, Lcom/tkay/basead/ui/SdkBannerATView$9;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Ljava/lang/String;Lcom/tkay/core/common/res/image/RecycleImageView;Lcom/tkay/core/common/res/image/RecycleImageView;)V

    invoke-virtual {v10, v11, v13}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 244
    iget-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {p1, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 245
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p1, v9, v9}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v0, 0xd

    .line 246
    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 247
    invoke-virtual {p0, v7, v12, p1}, Lcom/tkay/basead/ui/SdkBannerATView;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 250
    iget-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 251
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "myoffer_banner_self_ad_logo"

    invoke-static {p1, v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    .line 252
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/res/e;

    iget-object v7, p0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v7}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v1, v12, v7}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v7, Lcom/tkay/basead/ui/SdkBannerATView$10;

    invoke-direct {v7, p0, p1}, Lcom/tkay/basead/ui/SdkBannerATView$10;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Landroid/widget/ImageView;)V

    invoke-virtual {v0, v1, v7}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 266
    iget-object v0, p0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 270
    :cond_2
    iget-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->K()Z

    move-result p1

    if-eqz p1, :cond_7

    if-eqz v2, :cond_3

    .line 272
    invoke-virtual {v2, v8}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    :cond_3
    if-eqz v3, :cond_4

    .line 276
    invoke-virtual {v3, v8}, Landroid/widget/TextView;->setVisibility(I)V

    .line 277
    iget-object p1, p0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 278
    new-instance p1, Lcom/tkay/basead/ui/SdkBannerATView$11;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/SdkBannerATView$11;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v3, p1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_4
    if-eqz v4, :cond_5

    .line 286
    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setVisibility(I)V

    .line 287
    new-instance p1, Lcom/tkay/basead/ui/SdkBannerATView$12;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/SdkBannerATView$12;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v4, p1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_5
    if-eqz v5, :cond_6

    .line 295
    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setVisibility(I)V

    .line 296
    new-instance p1, Lcom/tkay/basead/ui/SdkBannerATView$13;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/SdkBannerATView$13;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v5, p1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_6
    if-eqz v6, :cond_7

    .line 304
    invoke-virtual {v6, v8}, Landroid/widget/TextView;->setVisibility(I)V

    .line 305
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    .line 306
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_panel_version"

    const-string v2, "string"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    new-array v1, v12, [Ljava/lang/Object;

    iget-object v2, p0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    .line 307
    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v8

    .line 305
    invoke-virtual {p1, v0, v1}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v6, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 309
    new-instance p1, Lcom/tkay/basead/ui/SdkBannerATView$14;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/SdkBannerATView$14;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v6, p1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_7
    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/ui/SdkBannerATView;)V
    .locals 1

    const/4 v0, 0x1

    .line 40
    invoke-super {p0, v0}, Lcom/tkay/basead/ui/BaseBannerATView;->b(I)V

    return-void
.end method

.method static synthetic d(Lcom/tkay/basead/ui/SdkBannerATView;)V
    .locals 1

    const/4 v0, 0x1

    .line 40
    invoke-super {p0, v0}, Lcom/tkay/basead/ui/BaseBannerATView;->b(I)V

    return-void
.end method

.method private o()V
    .locals 24

    move-object/from16 v0, p0

    .line 88
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->r()Ljava/lang/String;

    move-result-object v1

    .line 90
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v2, v2, Lcom/tkay/core/common/f/z;

    if-eqz v2, :cond_0

    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    .line 92
    :goto_0
    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v4

    const/4 v5, 0x3

    const-string v6, "300x250"

    const-string v7, "320x90"

    const-string v8, "320x50"

    const-string v9, "728x90"

    const/4 v11, 0x2

    const/4 v13, 0x1

    sparse-switch v4, :sswitch_data_0

    goto :goto_1

    :sswitch_0
    invoke-virtual {v1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    move v1, v11

    goto :goto_2

    :sswitch_1
    invoke-virtual {v1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v1, 0x0

    goto :goto_2

    :sswitch_2
    invoke-virtual {v1, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    move v1, v5

    goto :goto_2

    :sswitch_3
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    move v1, v13

    goto :goto_2

    :cond_1
    :goto_1
    const/4 v1, -0x1

    :goto_2
    const-string v4, "myoffer_banner_ad_layout_320x50"

    if-eqz v1, :cond_6

    if-eq v1, v13, :cond_4

    if-eq v1, v11, :cond_2

    .line 122
    iput-object v8, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    if-nez v2, :cond_8

    .line 124
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/r;

    if-eqz v1, :cond_8

    .line 125
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/r;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/r;->a()Ljava/lang/String;

    move-result-object v2

    goto :goto_3

    .line 112
    :cond_2
    iput-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    if-nez v2, :cond_3

    .line 114
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/r;

    if-eqz v1, :cond_3

    .line 115
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/r;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/r;->N()Ljava/lang/String;

    move-result-object v2

    .line 117
    :cond_3
    iput-boolean v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->u:Z

    const-string v4, "myoffer_banner_ad_layout_728x90"

    goto :goto_3

    .line 103
    :cond_4
    iput-object v6, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    if-nez v2, :cond_5

    .line 105
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/r;

    if-eqz v1, :cond_5

    .line 106
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/r;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/r;->c()Ljava/lang/String;

    move-result-object v2

    .line 108
    :cond_5
    iput-boolean v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->u:Z

    const-string v4, "myoffer_banner_ad_layout_300x250"

    goto :goto_3

    .line 94
    :cond_6
    iput-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    if-nez v2, :cond_7

    .line 96
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/r;

    if-eqz v1, :cond_7

    .line 97
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/r;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/r;->b()Ljava/lang/String;

    move-result-object v2

    .line 99
    :cond_7
    iput-boolean v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->u:Z

    const-string v4, "myoffer_banner_ad_layout_320x90"

    .line 3143
    :cond_8
    :goto_3
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/z;

    if-eqz v1, :cond_a

    .line 3144
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/z;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/z;->Y()I

    move-result v1

    if-eq v1, v13, :cond_9

    goto :goto_5

    :cond_9
    :goto_4
    move v1, v13

    goto :goto_6

    .line 3153
    :cond_a
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/r;

    if-eqz v1, :cond_b

    .line 3154
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_b

    invoke-static {v2}, Lcom/tkay/basead/a/b/c;->c(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_b

    goto :goto_4

    :cond_b
    :goto_5
    move v1, v11

    .line 3160
    :goto_6
    iput v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->w:I

    const-string v14, "myoffer_banner_version_name"

    const-string v15, "myoffer_banner_permission_manage"

    const-string v3, "myoffer_banner_privacy_agreement"

    const-string v5, "myoffer_banner_publisher_name"

    const-string v11, "myoffer_banner_container"

    const-string v10, "myoffer_banner_close"

    const-string v12, "layout"

    const-string v13, "string"

    move-object/from16 v16, v6

    const-string v6, "myoffer_panel_version"

    move-object/from16 v17, v8

    const-string v8, "id"

    move-object/from16 v18, v7

    const/4 v7, 0x1

    if-ne v7, v1, :cond_14

    .line 132
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v7, "myoffer_banner_ad_layout_pure_picture"

    invoke-static {v4, v7, v12}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v1, v4, v0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 3167
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "myoffer_banner_root"

    invoke-static {v1, v4, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    .line 3168
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v10, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v4}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Lcom/tkay/basead/ui/CloseImageView;

    iput-object v4, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    .line 3171
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v11, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v4}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/RelativeLayout;

    .line 3172
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7, v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v0, v5}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    .line 3173
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7, v3, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    .line 3174
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7, v15, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v0, v7}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/TextView;

    .line 3175
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10, v14, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v0, v10}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/TextView;

    .line 3177
    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v11, v11, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v11}, Lcom/tkay/core/common/f/j;->s()I

    move-result v11

    if-nez v11, :cond_d

    .line 3178
    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    const/4 v12, 0x0

    invoke-virtual {v11, v12}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 3179
    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-static {v9, v11}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v9

    if-eqz v9, :cond_c

    .line 3180
    iget-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v9}, Lcom/tkay/basead/ui/CloseImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v9

    .line 3181
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    const/high16 v12, 0x41b80000    # 23.0f

    invoke-static {v11, v12}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v11

    iput v11, v9, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 3182
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v12}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v11

    iput v11, v9, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 3183
    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v11, v9}, Lcom/tkay/basead/ui/CloseImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3186
    :cond_c
    iget-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v11, v11, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v11}, Lcom/tkay/core/common/f/j;->h()I

    move-result v11

    invoke-virtual {v0, v9, v11}, Lcom/tkay/basead/ui/SdkBannerATView;->a(Lcom/tkay/basead/ui/a;I)F

    goto :goto_7

    .line 3188
    :cond_d
    iget-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    const/16 v11, 0x8

    invoke-virtual {v9, v11}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 3195
    :goto_7
    invoke-virtual {v1}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v9

    check-cast v9, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v11, -0x1

    .line 3196
    iput v11, v9, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 3197
    iput v11, v9, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 3198
    invoke-virtual {v1, v9}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3201
    new-instance v1, Lcom/tkay/core/common/res/image/RecycleImageView;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-direct {v1, v9}, Lcom/tkay/core/common/res/image/RecycleImageView;-><init>(Landroid/content/Context;)V

    .line 3202
    sget-object v9, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v9}, Lcom/tkay/core/common/res/image/RecycleImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 3203
    new-instance v9, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v9, v11, v11}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v11, 0x0

    invoke-virtual {v0, v1, v11, v9}, Lcom/tkay/basead/ui/SdkBannerATView;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 3206
    new-instance v9, Lcom/tkay/core/common/res/image/RecycleImageView;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-direct {v9, v11}, Lcom/tkay/core/common/res/image/RecycleImageView;-><init>(Landroid/content/Context;)V

    .line 3207
    sget-object v11, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v9, v11}, Lcom/tkay/core/common/res/image/RecycleImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 3208
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v11

    new-instance v12, Lcom/tkay/core/common/res/e;

    const/4 v14, 0x1

    invoke-direct {v12, v14, v2}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v15, Lcom/tkay/basead/ui/SdkBannerATView$9;

    invoke-direct {v15, v0, v2, v9, v1}, Lcom/tkay/basead/ui/SdkBannerATView$9;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Ljava/lang/String;Lcom/tkay/core/common/res/image/RecycleImageView;Lcom/tkay/core/common/res/image/RecycleImageView;)V

    invoke-virtual {v11, v12, v15}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 3244
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v1, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 3245
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    .line 3246
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 3247
    invoke-virtual {v0, v9, v14, v1}, Lcom/tkay/basead/ui/SdkBannerATView;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 3250
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_e

    .line 3251
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_banner_self_ad_logo"

    invoke-static {v1, v2, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    .line 3252
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v2

    new-instance v8, Lcom/tkay/core/common/res/e;

    iget-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v9}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v9

    const/4 v11, 0x1

    invoke-direct {v8, v11, v9}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v9, Lcom/tkay/basead/ui/SdkBannerATView$10;

    invoke-direct {v9, v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView$10;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Landroid/widget/ImageView;)V

    invoke-virtual {v2, v8, v9}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 3266
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 3270
    :cond_e
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->K()Z

    move-result v1

    if-eqz v1, :cond_13

    const/4 v1, 0x0

    if-eqz v4, :cond_f

    .line 3272
    invoke-virtual {v4, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    :cond_f
    if-eqz v5, :cond_10

    .line 3276
    invoke-virtual {v5, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3277
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3278
    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$11;

    invoke-direct {v2, v0}, Lcom/tkay/basead/ui/SdkBannerATView$11;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_10
    if-eqz v3, :cond_11

    .line 3286
    invoke-virtual {v3, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3287
    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$12;

    invoke-direct {v2, v0}, Lcom/tkay/basead/ui/SdkBannerATView$12;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v3, v2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_11
    if-eqz v7, :cond_12

    .line 3295
    invoke-virtual {v7, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3296
    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$13;

    invoke-direct {v2, v0}, Lcom/tkay/basead/ui/SdkBannerATView$13;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v7, v2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_12
    if-eqz v10, :cond_13

    .line 3304
    invoke-virtual {v10, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3305
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 3306
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v6, v13}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Object;

    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    .line 3307
    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v1

    .line 3305
    invoke-virtual {v2, v3, v4}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v10, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3309
    new-instance v1, Lcom/tkay/basead/ui/SdkBannerATView$14;

    invoke-direct {v1, v0}, Lcom/tkay/basead/ui/SdkBannerATView$14;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v10, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_13
    return-void

    .line 136
    :cond_14
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v4, v12}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2, v0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 3321
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_banner_icon"

    invoke-static {v1, v2, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 3322
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v4, "myoffer_banner_ad_title"

    invoke-static {v2, v4, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 3323
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v7, "myoffer_banner_desc"

    invoke-static {v4, v7, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v4}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    .line 3324
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    const-string v12, "myoffer_banner_ad_install_btn"

    invoke-static {v7, v12, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v0, v7}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/TextView;

    .line 3326
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v12

    move-object/from16 v19, v6

    const-string v6, "myoffer_banner_spread_layout"

    invoke-static {v12, v6, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v0, v6}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Lcom/tkay/basead/ui/SpreadAnimLayout;

    .line 3327
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v12

    invoke-static {v12, v10, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v0, v10}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Lcom/tkay/basead/ui/CloseImageView;

    iput-object v10, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    .line 3330
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10, v11, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v0, v10}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/RelativeLayout;

    .line 3331
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v0, v5}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    .line 3332
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v3, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    .line 3333
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v15, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v0, v11}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v11

    check-cast v11, Landroid/widget/TextView;

    .line 3334
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v12

    invoke-static {v12, v14, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v12

    invoke-virtual {v0, v12}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v12

    check-cast v12, Landroid/widget/TextView;

    .line 3337
    iget-object v14, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v14, v14, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v14}, Lcom/tkay/core/common/f/j;->s()I

    move-result v14

    if-nez v14, :cond_15

    const/4 v14, 0x1

    goto :goto_8

    :cond_15
    const/4 v14, 0x0

    :goto_8
    if-eqz v14, :cond_16

    .line 3339
    iget-object v15, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    move-object/from16 v20, v13

    const/4 v13, 0x0

    invoke-virtual {v15, v13}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 3341
    iget-object v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    iget-object v15, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v15, v15, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v15}, Lcom/tkay/core/common/f/j;->h()I

    move-result v15

    invoke-virtual {v0, v13, v15}, Lcom/tkay/basead/ui/SdkBannerATView;->a(Lcom/tkay/basead/ui/a;I)F

    move-object/from16 v21, v11

    move-object/from16 v15, v17

    move-object/from16 v11, v18

    move-object/from16 v17, v3

    :goto_9
    move-object/from16 v18, v5

    goto/16 :goto_c

    :cond_16
    move-object/from16 v20, v13

    .line 3343
    iget-object v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    const/16 v15, 0x8

    invoke-virtual {v13, v15}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 3346
    iget-object v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v13}, Ljava/lang/String;->hashCode()I

    move-result v15

    move-object/from16 v21, v11

    const v11, 0x59df59c2

    if-eq v15, v11, :cond_1a

    const v11, 0x59df5a3e

    if-eq v15, v11, :cond_19

    const v11, 0x60b65fb2

    if-eq v15, v11, :cond_18

    :cond_17
    move-object/from16 v15, v17

    move-object/from16 v11, v18

    goto :goto_a

    :cond_18
    invoke-virtual {v13, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_17

    move-object/from16 v15, v17

    move-object/from16 v11, v18

    const/4 v13, 0x2

    goto :goto_b

    :cond_19
    move-object/from16 v11, v18

    invoke-virtual {v13, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v13

    move-object/from16 v15, v17

    if-eqz v13, :cond_1b

    const/4 v13, 0x1

    goto :goto_b

    :cond_1a
    move-object/from16 v15, v17

    move-object/from16 v11, v18

    invoke-virtual {v13, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v13

    if-eqz v13, :cond_1b

    const/4 v13, 0x0

    goto :goto_b

    :cond_1b
    :goto_a
    const/4 v13, -0x1

    :goto_b
    if-eqz v13, :cond_1e

    move-object/from16 v17, v3

    const/4 v3, 0x1

    if-eq v13, v3, :cond_1d

    const/4 v3, 0x2

    if-eq v13, v3, :cond_1c

    goto :goto_9

    .line 3358
    :cond_1c
    invoke-virtual {v6}, Lcom/tkay/basead/ui/SpreadAnimLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    .line 3359
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v13

    move-object/from16 v18, v5

    const/high16 v5, 0x41a00000    # 20.0f

    invoke-static {v13, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v3, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 3360
    invoke-virtual {v6, v3}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_c

    :cond_1d
    move-object/from16 v18, v5

    .line 3353
    invoke-virtual {v2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    .line 3354
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v13, 0x41200000    # 10.0f

    invoke-static {v5, v13}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v3, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 3355
    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_c

    :cond_1e
    move-object/from16 v17, v3

    move-object/from16 v18, v5

    const/high16 v13, 0x41200000    # 10.0f

    .line 3348
    invoke-virtual {v6}, Lcom/tkay/basead/ui/SpreadAnimLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    .line 3349
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v13}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v3, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 3350
    invoke-virtual {v6, v3}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3366
    :goto_c
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1f

    .line 3367
    invoke-virtual {v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    const/4 v5, 0x2

    .line 3368
    invoke-virtual {v1, v5}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    const/4 v5, 0x1

    .line 3369
    invoke-virtual {v1, v5}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    .line 3370
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v13

    invoke-static {v13}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v13

    new-instance v5, Lcom/tkay/core/common/res/e;

    move-object/from16 v22, v10

    iget-object v10, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v10}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v10

    move-object/from16 v23, v12

    const/4 v12, 0x1

    invoke-direct {v5, v12, v10}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    iget v10, v3, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget v3, v3, Landroid/view/ViewGroup$LayoutParams;->height:I

    new-instance v12, Lcom/tkay/basead/ui/SdkBannerATView$15;

    invoke-direct {v12, v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView$15;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Lcom/tkay/core/common/ui/component/RoundImageView;)V

    invoke-virtual {v13, v5, v10, v3, v12}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    goto :goto_d

    :cond_1f
    move-object/from16 v22, v10

    move-object/from16 v23, v12

    .line 3385
    invoke-static {v1}, Lcom/tkay/basead/ui/a/a;->a(Landroid/view/View;)V

    .line 3386
    invoke-virtual {v2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v3, :cond_20

    const/4 v5, 0x0

    .line 3388
    iput v5, v3, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 3389
    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3392
    :cond_20
    :goto_d
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 3395
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3396
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 3397
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v7, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3398
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v3, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    if-eqz v4, :cond_21

    .line 3400
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3401
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 3406
    :cond_21
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_22

    .line 3407
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v5, "myoffer_banner_self_ad_logo"

    invoke-static {v3, v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/ImageView;

    .line 3409
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v5

    new-instance v10, Lcom/tkay/core/common/res/e;

    iget-object v12, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v12}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v12

    const/4 v13, 0x1

    invoke-direct {v10, v13, v12}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v12, Lcom/tkay/basead/ui/SdkBannerATView$2;

    invoke-direct {v12, v0, v3}, Lcom/tkay/basead/ui/SdkBannerATView$2;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Landroid/widget/ImageView;)V

    invoke-virtual {v5, v10, v12}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    goto :goto_e

    :cond_22
    const/4 v3, 0x0

    .line 3423
    :goto_e
    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v5, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 3427
    iget-boolean v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->u:Z

    if-eqz v5, :cond_23

    .line 3428
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v10, "myoffer_banner_main_image"

    invoke-static {v5, v10, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v0, v5}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 3430
    iget-object v8, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v8}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_24

    .line 3431
    invoke-virtual {v5}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    const/4 v8, 0x2

    .line 3432
    invoke-virtual {v5, v8}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    const/4 v8, 0x1

    .line 3433
    invoke-virtual {v5, v8}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    .line 3434
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v10

    new-instance v12, Lcom/tkay/core/common/res/e;

    iget-object v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v13}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v13

    invoke-direct {v12, v8, v13}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v8, Lcom/tkay/basead/ui/SdkBannerATView$3;

    invoke-direct {v8, v0, v5}, Lcom/tkay/basead/ui/SdkBannerATView$3;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Lcom/tkay/core/common/ui/component/RoundImageView;)V

    invoke-virtual {v10, v12, v8}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 3448
    iget-object v8, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v8, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_f

    :cond_23
    const/4 v5, 0x0

    .line 3451
    :cond_24
    :goto_f
    iget-object v8, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v8, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 3454
    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_26

    const/4 v5, 0x0

    .line 3455
    invoke-virtual {v6, v5}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setVisibility(I)V

    .line 3456
    invoke-virtual {v7, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 4355
    iput-object v7, v0, Lcom/tkay/basead/ui/BaseATView;->s:Landroid/view/View;

    move-object/from16 v6, v16

    :cond_25
    move-object/from16 v10, v22

    move-object/from16 v12, v23

    const/4 v7, 0x2

    :goto_10
    const/4 v13, -0x1

    goto/16 :goto_15

    :cond_26
    const/16 v5, 0x8

    .line 3459
    invoke-virtual {v6, v5}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setVisibility(I)V

    .line 3460
    invoke-virtual {v7, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3464
    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v6

    sparse-switch v6, :sswitch_data_1

    :cond_27
    move-object/from16 v6, v16

    goto :goto_11

    :sswitch_4
    invoke-virtual {v5, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_27

    move-object/from16 v6, v16

    const/4 v5, 0x2

    goto :goto_12

    :sswitch_5
    invoke-virtual {v5, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_27

    move-object/from16 v6, v16

    const/4 v5, 0x0

    goto :goto_12

    :sswitch_6
    invoke-virtual {v5, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_27

    move-object/from16 v6, v16

    const/4 v5, 0x3

    goto :goto_12

    :sswitch_7
    move-object/from16 v6, v16

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_28

    const/4 v5, 0x1

    goto :goto_12

    :cond_28
    :goto_11
    const/4 v5, -0x1

    :goto_12
    if-eqz v5, :cond_2e

    const/4 v7, 0x1

    if-eq v5, v7, :cond_25

    const/4 v7, 0x2

    if-eq v5, v7, :cond_2b

    .line 3492
    invoke-virtual {v2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v5, 0xb

    .line 3493
    invoke-virtual {v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    if-eqz v14, :cond_29

    .line 3495
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x41900000    # 18.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    goto :goto_13

    .line 3497
    :cond_29
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x41200000    # 10.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 3499
    :goto_13
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    if-eqz v23, :cond_2a

    .line 3501
    invoke-virtual/range {v23 .. v23}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 3502
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x425c0000    # 55.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    move-object/from16 v12, v23

    .line 3503
    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_14

    :cond_2a
    move-object/from16 v12, v23

    goto :goto_14

    :cond_2b
    move-object/from16 v12, v23

    .line 3474
    invoke-virtual {v2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 3475
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x41900000    # 18.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 3476
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    if-eqz v4, :cond_2c

    .line 3479
    invoke-virtual {v4}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 3480
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x42e40000    # 114.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 3481
    invoke-virtual {v4, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2c
    if-eqz v22, :cond_2d

    .line 3485
    invoke-virtual/range {v22 .. v22}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 3486
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x42e40000    # 114.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    move-object/from16 v10, v22

    .line 3487
    invoke-virtual {v10, v1}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto/16 :goto_10

    :cond_2d
    :goto_14
    move-object/from16 v10, v22

    goto/16 :goto_10

    :cond_2e
    move-object/from16 v10, v22

    move-object/from16 v12, v23

    const/4 v7, 0x2

    .line 3466
    invoke-virtual {v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v5

    check-cast v5, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v8, 0xf

    .line 3467
    invoke-virtual {v5, v8}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/4 v8, 0x6

    const/4 v13, -0x1

    .line 3468
    invoke-virtual {v5, v8, v13}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 3469
    invoke-virtual {v1, v5}, Lcom/tkay/core/common/ui/component/RoundImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3510
    :goto_15
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->K()Z

    move-result v1

    if-eqz v1, :cond_38

    const/16 v1, 0x8

    .line 3511
    invoke-virtual {v4, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3513
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    sparse-switch v2, :sswitch_data_2

    goto :goto_16

    :sswitch_8
    invoke-virtual {v1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2f

    move v1, v7

    goto :goto_17

    :sswitch_9
    invoke-virtual {v1, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2f

    const/4 v1, 0x1

    goto :goto_17

    :sswitch_a
    invoke-virtual {v1, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2f

    const/4 v1, 0x3

    goto :goto_17

    :sswitch_b
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2f

    const/4 v1, 0x0

    goto :goto_17

    :cond_2f
    :goto_16
    move v1, v13

    :goto_17
    if-eqz v1, :cond_30

    goto :goto_18

    :cond_30
    if-eqz v3, :cond_31

    .line 3517
    invoke-virtual {v3}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 3518
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v4, 0x41000000    # 8.0f

    invoke-static {v2, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 3519
    invoke-virtual {v3, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_31
    :goto_18
    const/4 v1, 0x0

    if-eqz v10, :cond_32

    .line 3530
    invoke-virtual {v10, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    :cond_32
    if-eqz v18, :cond_33

    move-object/from16 v5, v18

    .line 3534
    invoke-virtual {v5, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3535
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3536
    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$4;

    invoke-direct {v2, v0}, Lcom/tkay/basead/ui/SdkBannerATView$4;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_33
    if-eqz v17, :cond_34

    move-object/from16 v3, v17

    .line 3544
    invoke-virtual {v3, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3545
    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$5;

    invoke-direct {v2, v0}, Lcom/tkay/basead/ui/SdkBannerATView$5;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v3, v2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_34
    if-eqz v21, :cond_35

    move-object/from16 v2, v21

    .line 3553
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3554
    new-instance v3, Lcom/tkay/basead/ui/SdkBannerATView$6;

    invoke-direct {v3, v0}, Lcom/tkay/basead/ui/SdkBannerATView$6;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_35
    if-eqz v12, :cond_3b

    .line 3562
    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3563
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    sparse-switch v2, :sswitch_data_3

    goto :goto_19

    :sswitch_c
    invoke-virtual {v1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_36

    const/4 v5, 0x1

    goto :goto_1a

    :sswitch_d
    invoke-virtual {v1, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_36

    const/4 v5, 0x0

    goto :goto_1a

    :sswitch_e
    invoke-virtual {v1, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_36

    const/4 v5, 0x3

    goto :goto_1a

    :sswitch_f
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_36

    move v5, v7

    goto :goto_1a

    :cond_36
    :goto_19
    move v5, v13

    :goto_1a
    if-eqz v5, :cond_37

    const/4 v1, 0x1

    if-eq v5, v1, :cond_37

    .line 3575
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 3576
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    move-object/from16 v5, v19

    move-object/from16 v4, v20

    invoke-static {v3, v5, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    new-array v1, v1, [Ljava/lang/Object;

    iget-object v4, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    .line 3577
    invoke-virtual {v4}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v1, v5

    .line 3575
    invoke-virtual {v2, v3, v1}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1b

    :cond_37
    move-object/from16 v5, v19

    move-object/from16 v4, v20

    .line 3567
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    .line 3568
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v5, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    .line 3569
    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "  "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    .line 3567
    invoke-virtual {v1, v2, v3}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3582
    :goto_1b
    new-instance v1, Lcom/tkay/basead/ui/SdkBannerATView$7;

    invoke-direct {v1, v0}, Lcom/tkay/basead/ui/SdkBannerATView$7;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void

    :cond_38
    const/4 v3, 0x1

    const/4 v5, 0x0

    .line 3589
    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3590
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v4

    sparse-switch v4, :sswitch_data_4

    goto :goto_1c

    :sswitch_10
    invoke-virtual {v1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_39

    const/4 v5, 0x3

    goto :goto_1d

    :sswitch_11
    invoke-virtual {v1, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_39

    move v5, v3

    goto :goto_1d

    :sswitch_12
    invoke-virtual {v1, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_39

    goto :goto_1d

    :sswitch_13
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_39

    move v5, v7

    goto :goto_1d

    :cond_39
    :goto_1c
    move v5, v13

    :goto_1d
    if-eqz v5, :cond_3a

    goto :goto_1e

    .line 3592
    :cond_3a
    invoke-virtual {v2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 3593
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41000000    # 8.0f

    invoke-static {v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    iput v3, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 3594
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_3b
    :goto_1e
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        -0x215ddd38 -> :sswitch_3
        0x59df59c2 -> :sswitch_2
        0x59df5a3e -> :sswitch_1
        0x60b65fb2 -> :sswitch_0
    .end sparse-switch

    :sswitch_data_1
    .sparse-switch
        -0x215ddd38 -> :sswitch_7
        0x59df59c2 -> :sswitch_6
        0x59df5a3e -> :sswitch_5
        0x60b65fb2 -> :sswitch_4
    .end sparse-switch

    :sswitch_data_2
    .sparse-switch
        -0x215ddd38 -> :sswitch_b
        0x59df59c2 -> :sswitch_a
        0x59df5a3e -> :sswitch_9
        0x60b65fb2 -> :sswitch_8
    .end sparse-switch

    :sswitch_data_3
    .sparse-switch
        -0x215ddd38 -> :sswitch_f
        0x59df59c2 -> :sswitch_e
        0x59df5a3e -> :sswitch_d
        0x60b65fb2 -> :sswitch_c
    .end sparse-switch

    :sswitch_data_4
    .sparse-switch
        -0x215ddd38 -> :sswitch_13
        0x59df59c2 -> :sswitch_12
        0x59df5a3e -> :sswitch_11
        0x60b65fb2 -> :sswitch_10
    .end sparse-switch
.end method

.method private p()V
    .locals 21

    move-object/from16 v0, p0

    .line 321
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "id"

    const-string v3, "myoffer_banner_icon"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 322
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "myoffer_banner_ad_title"

    invoke-static {v3, v4, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    .line 323
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "myoffer_banner_desc"

    invoke-static {v4, v5, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v4}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    .line 324
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "myoffer_banner_ad_install_btn"

    invoke-static {v5, v6, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v0, v5}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    .line 326
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v6

    const-string v7, "myoffer_banner_spread_layout"

    invoke-static {v6, v7, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v0, v6}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Lcom/tkay/basead/ui/SpreadAnimLayout;

    .line 327
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    const-string v8, "myoffer_banner_close"

    invoke-static {v7, v8, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v0, v7}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Lcom/tkay/basead/ui/CloseImageView;

    iput-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    .line 330
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    const-string v8, "myoffer_banner_container"

    invoke-static {v7, v8, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v0, v7}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/RelativeLayout;

    .line 331
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v8

    const-string v9, "myoffer_banner_publisher_name"

    invoke-static {v8, v9, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v8

    invoke-virtual {v0, v8}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/TextView;

    .line 332
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v9

    const-string v10, "myoffer_banner_privacy_agreement"

    invoke-static {v9, v10, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v0, v9}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/TextView;

    .line 333
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v10

    const-string v11, "myoffer_banner_permission_manage"

    invoke-static {v10, v11, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v0, v10}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/TextView;

    .line 334
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    const-string v12, "myoffer_banner_version_name"

    invoke-static {v11, v12, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v0, v11}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v11

    check-cast v11, Landroid/widget/TextView;

    .line 337
    iget-object v12, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v12, v12, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v12}, Lcom/tkay/core/common/f/j;->s()I

    move-result v12

    if-nez v12, :cond_0

    const/4 v12, 0x1

    goto :goto_0

    :cond_0
    const/4 v12, 0x0

    :goto_0
    const-string v13, "728x90"

    const-string v15, "320x90"

    const-string v14, "320x50"

    move-object/from16 v16, v10

    if-eqz v12, :cond_1

    .line 339
    iget-object v10, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    move-object/from16 v17, v9

    const/4 v9, 0x0

    invoke-virtual {v10, v9}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 341
    iget-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    iget-object v10, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v10, v10, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v10}, Lcom/tkay/core/common/f/j;->h()I

    move-result v10

    invoke-virtual {v0, v9, v10}, Lcom/tkay/basead/ui/SdkBannerATView;->a(Lcom/tkay/basead/ui/a;I)F

    move-object/from16 v18, v8

    goto/16 :goto_3

    :cond_1
    move-object/from16 v17, v9

    .line 343
    iget-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    const/16 v10, 0x8

    invoke-virtual {v9, v10}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 346
    iget-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v9}, Ljava/lang/String;->hashCode()I

    move-result v10

    move-object/from16 v18, v8

    const v8, 0x59df59c2

    if-eq v10, v8, :cond_4

    const v8, 0x59df5a3e

    if-eq v10, v8, :cond_3

    const v8, 0x60b65fb2

    if-eq v10, v8, :cond_2

    goto :goto_1

    :cond_2
    invoke-virtual {v9, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_5

    const/4 v8, 0x2

    goto :goto_2

    :cond_3
    invoke-virtual {v9, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_5

    const/4 v8, 0x1

    goto :goto_2

    :cond_4
    invoke-virtual {v9, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_5

    const/4 v8, 0x0

    goto :goto_2

    :cond_5
    :goto_1
    const/4 v8, -0x1

    :goto_2
    if-eqz v8, :cond_8

    const/4 v9, 0x1

    if-eq v8, v9, :cond_7

    const/4 v9, 0x2

    if-eq v8, v9, :cond_6

    goto :goto_3

    .line 358
    :cond_6
    invoke-virtual {v6}, Lcom/tkay/basead/ui/SpreadAnimLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v8

    check-cast v8, Landroid/widget/RelativeLayout$LayoutParams;

    .line 359
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v9

    const/high16 v10, 0x41a00000    # 20.0f

    invoke-static {v9, v10}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v9

    iput v9, v8, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 360
    invoke-virtual {v6, v8}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_3

    .line 353
    :cond_7
    invoke-virtual {v3}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v8

    check-cast v8, Landroid/widget/RelativeLayout$LayoutParams;

    .line 354
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v9

    const/high16 v10, 0x41200000    # 10.0f

    invoke-static {v9, v10}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v9

    iput v9, v8, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 355
    invoke-virtual {v3, v8}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_3

    :cond_8
    const/high16 v10, 0x41200000    # 10.0f

    .line 348
    invoke-virtual {v6}, Lcom/tkay/basead/ui/SpreadAnimLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v8

    check-cast v8, Landroid/widget/RelativeLayout$LayoutParams;

    .line 349
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9, v10}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v9

    iput v9, v8, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 350
    invoke-virtual {v6, v8}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 366
    :goto_3
    iget-object v8, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v8}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_9

    .line 367
    invoke-virtual {v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v8

    const/4 v9, 0x2

    .line 368
    invoke-virtual {v1, v9}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    const/4 v9, 0x1

    .line 369
    invoke-virtual {v1, v9}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    .line 370
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v10

    new-instance v9, Lcom/tkay/core/common/res/e;

    move-object/from16 v19, v7

    iget-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v7}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v7

    move-object/from16 v20, v11

    const/4 v11, 0x1

    invoke-direct {v9, v11, v7}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    iget v7, v8, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget v8, v8, Landroid/view/ViewGroup$LayoutParams;->height:I

    new-instance v11, Lcom/tkay/basead/ui/SdkBannerATView$15;

    invoke-direct {v11, v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView$15;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Lcom/tkay/core/common/ui/component/RoundImageView;)V

    invoke-virtual {v10, v9, v7, v8, v11}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    goto :goto_4

    :cond_9
    move-object/from16 v19, v7

    move-object/from16 v20, v11

    .line 385
    invoke-static {v1}, Lcom/tkay/basead/ui/a/a;->a(Landroid/view/View;)V

    .line 386
    invoke-virtual {v3}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v7

    check-cast v7, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v7, :cond_a

    const/4 v8, 0x0

    .line 388
    iput v8, v7, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 389
    invoke-virtual {v3, v7}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 392
    :cond_a
    :goto_4
    iget-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v7, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 395
    iget-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v7}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 396
    iget-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v7, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 397
    iget-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v7}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 398
    iget-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v7, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    if-eqz v4, :cond_b

    .line 400
    iget-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v7}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 401
    iget-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v7, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 406
    :cond_b
    iget-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v7}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_c

    .line 407
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    const-string v9, "myoffer_banner_self_ad_logo"

    invoke-static {v7, v9, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v0, v7}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/ImageView;

    .line 409
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v9

    new-instance v10, Lcom/tkay/core/common/res/e;

    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v11}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v11

    const/4 v8, 0x1

    invoke-direct {v10, v8, v11}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v8, Lcom/tkay/basead/ui/SdkBannerATView$2;

    invoke-direct {v8, v0, v7}, Lcom/tkay/basead/ui/SdkBannerATView$2;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Landroid/widget/ImageView;)V

    invoke-virtual {v9, v10, v8}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    goto :goto_5

    :cond_c
    const/4 v7, 0x0

    .line 423
    :goto_5
    iget-object v8, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v8, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 427
    iget-boolean v8, v0, Lcom/tkay/basead/ui/SdkBannerATView;->u:Z

    if-eqz v8, :cond_d

    .line 428
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v8

    const-string v9, "myoffer_banner_main_image"

    invoke-static {v8, v9, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v2

    move-object v8, v2

    check-cast v8, Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 430
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_e

    .line 431
    invoke-virtual {v8}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    const/4 v2, 0x2

    .line 432
    invoke-virtual {v8, v2}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    const/4 v2, 0x1

    .line 433
    invoke-virtual {v8, v2}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    .line 434
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v9

    new-instance v10, Lcom/tkay/core/common/res/e;

    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v11}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v10, v2, v11}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$3;

    invoke-direct {v2, v0, v8}, Lcom/tkay/basead/ui/SdkBannerATView$3;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Lcom/tkay/core/common/ui/component/RoundImageView;)V

    invoke-virtual {v9, v10, v2}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 448
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v2, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_6

    :cond_d
    const/4 v8, 0x0

    .line 451
    :cond_e
    :goto_6
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v2, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 454
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v8, 0x3

    const-string v9, "300x250"

    if-nez v2, :cond_10

    const/4 v2, 0x0

    .line 455
    invoke-virtual {v6, v2}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setVisibility(I)V

    .line 456
    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 5355
    iput-object v5, v0, Lcom/tkay/basead/ui/BaseATView;->s:Landroid/view/View;

    :cond_f
    move-object/from16 v6, v19

    move-object/from16 v11, v20

    const/4 v5, 0x2

    :goto_7
    const/4 v12, -0x1

    goto/16 :goto_c

    :cond_10
    const/16 v2, 0x8

    .line 459
    invoke-virtual {v6, v2}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setVisibility(I)V

    .line 460
    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 464
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v5

    sparse-switch v5, :sswitch_data_0

    goto :goto_8

    :sswitch_0
    invoke-virtual {v2, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_11

    const/4 v2, 0x2

    goto :goto_9

    :sswitch_1
    invoke-virtual {v2, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_11

    const/4 v2, 0x0

    goto :goto_9

    :sswitch_2
    invoke-virtual {v2, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_11

    move v2, v8

    goto :goto_9

    :sswitch_3
    invoke-virtual {v2, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_11

    const/4 v2, 0x1

    goto :goto_9

    :cond_11
    :goto_8
    const/4 v2, -0x1

    :goto_9
    if-eqz v2, :cond_17

    const/4 v5, 0x1

    if-eq v2, v5, :cond_f

    const/high16 v1, 0x41900000    # 18.0f

    const/4 v5, 0x2

    if-eq v2, v5, :cond_14

    .line 492
    invoke-virtual {v3}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v6, 0xb

    .line 493
    invoke-virtual {v2, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    if-eqz v12, :cond_12

    .line 495
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, v2, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    goto :goto_a

    .line 497
    :cond_12
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v6, 0x41200000    # 10.0f

    invoke-static {v1, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, v2, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 499
    :goto_a
    invoke-virtual {v3, v2}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    if-eqz v20, :cond_13

    .line 501
    invoke-virtual/range {v20 .. v20}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 502
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v6, 0x425c0000    # 55.0f

    invoke-static {v2, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    move-object/from16 v11, v20

    .line 503
    invoke-virtual {v11, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_b

    :cond_13
    move-object/from16 v11, v20

    goto :goto_b

    :cond_14
    move-object/from16 v11, v20

    .line 474
    invoke-virtual {v3}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    .line 475
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, v2, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 476
    invoke-virtual {v3, v2}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const/high16 v1, 0x42e40000    # 114.0f

    if-eqz v4, :cond_15

    .line 479
    invoke-virtual {v4}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    .line 480
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v6

    iput v6, v2, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 481
    invoke-virtual {v4, v2}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_15
    if-eqz v19, :cond_16

    .line 485
    invoke-virtual/range {v19 .. v19}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    .line 486
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, v2, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    move-object/from16 v6, v19

    .line 487
    invoke-virtual {v6, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto/16 :goto_7

    :cond_16
    :goto_b
    move-object/from16 v6, v19

    goto/16 :goto_7

    :cond_17
    move-object/from16 v6, v19

    move-object/from16 v11, v20

    const/4 v5, 0x2

    .line 466
    invoke-virtual {v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v10, 0xf

    .line 467
    invoke-virtual {v2, v10}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/4 v10, 0x6

    const/4 v12, -0x1

    .line 468
    invoke-virtual {v2, v10, v12}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 469
    invoke-virtual {v1, v2}, Lcom/tkay/core/common/ui/component/RoundImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 510
    :goto_c
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->K()Z

    move-result v1

    const/high16 v2, 0x41000000    # 8.0f

    if-eqz v1, :cond_21

    const/16 v1, 0x8

    .line 511
    invoke-virtual {v4, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 513
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v3

    sparse-switch v3, :sswitch_data_1

    goto :goto_d

    :sswitch_4
    invoke-virtual {v1, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_18

    move v1, v5

    goto :goto_e

    :sswitch_5
    invoke-virtual {v1, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_18

    const/4 v1, 0x1

    goto :goto_e

    :sswitch_6
    invoke-virtual {v1, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_18

    move v1, v8

    goto :goto_e

    :sswitch_7
    invoke-virtual {v1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_18

    const/4 v1, 0x0

    goto :goto_e

    :cond_18
    :goto_d
    move v1, v12

    :goto_e
    if-eqz v1, :cond_19

    goto :goto_f

    :cond_19
    if-eqz v7, :cond_1a

    .line 517
    invoke-virtual {v7}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 518
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 519
    invoke-virtual {v7, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1a
    :goto_f
    const/4 v1, 0x0

    if-eqz v6, :cond_1b

    .line 530
    invoke-virtual {v6, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    :cond_1b
    if-eqz v18, :cond_1c

    move-object/from16 v2, v18

    .line 534
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 535
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 536
    new-instance v3, Lcom/tkay/basead/ui/SdkBannerATView$4;

    invoke-direct {v3, v0}, Lcom/tkay/basead/ui/SdkBannerATView$4;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_1c
    if-eqz v17, :cond_1d

    move-object/from16 v2, v17

    .line 544
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 545
    new-instance v3, Lcom/tkay/basead/ui/SdkBannerATView$5;

    invoke-direct {v3, v0}, Lcom/tkay/basead/ui/SdkBannerATView$5;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_1d
    if-eqz v16, :cond_1e

    move-object/from16 v10, v16

    .line 553
    invoke-virtual {v10, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 554
    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$6;

    invoke-direct {v2, v0}, Lcom/tkay/basead/ui/SdkBannerATView$6;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v10, v2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_1e
    if-eqz v11, :cond_24

    .line 562
    invoke-virtual {v11, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 563
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    sparse-switch v2, :sswitch_data_2

    goto :goto_10

    :sswitch_8
    invoke-virtual {v1, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1f

    const/4 v5, 0x1

    goto :goto_11

    :sswitch_9
    invoke-virtual {v1, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1f

    const/4 v5, 0x0

    goto :goto_11

    :sswitch_a
    invoke-virtual {v1, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1f

    move v5, v8

    goto :goto_11

    :sswitch_b
    invoke-virtual {v1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1f

    goto :goto_11

    :cond_1f
    :goto_10
    move v5, v12

    :goto_11
    const-string v1, "string"

    const-string v2, "myoffer_panel_version"

    if-eqz v5, :cond_20

    const/4 v3, 0x1

    if-eq v5, v3, :cond_20

    .line 575
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    .line 576
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    new-array v2, v3, [Ljava/lang/Object;

    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    .line 577
    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x0

    aput-object v3, v2, v5

    .line 575
    invoke-virtual {v4, v1, v2}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v11, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_12

    .line 567
    :cond_20
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    .line 568
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/4 v6, 0x1

    new-array v2, v6, [Ljava/lang/Object;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    .line 569
    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "  "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v7, 0x0

    aput-object v4, v2, v7

    .line 567
    invoke-virtual {v3, v1, v2}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v11, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 582
    :goto_12
    new-instance v1, Lcom/tkay/basead/ui/SdkBannerATView$7;

    invoke-direct {v1, v0}, Lcom/tkay/basead/ui/SdkBannerATView$7;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v11, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void

    :cond_21
    const/4 v6, 0x1

    const/4 v7, 0x0

    .line 589
    invoke-virtual {v4, v7}, Landroid/widget/TextView;->setVisibility(I)V

    .line 590
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v4

    sparse-switch v4, :sswitch_data_3

    goto :goto_13

    :sswitch_c
    invoke-virtual {v1, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_22

    move v13, v8

    goto :goto_14

    :sswitch_d
    invoke-virtual {v1, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_22

    move v13, v6

    goto :goto_14

    :sswitch_e
    invoke-virtual {v1, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_22

    move v13, v7

    goto :goto_14

    :sswitch_f
    invoke-virtual {v1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_22

    move v13, v5

    goto :goto_14

    :cond_22
    :goto_13
    move v13, v12

    :goto_14
    if-eqz v13, :cond_23

    goto :goto_15

    .line 592
    :cond_23
    invoke-virtual {v3}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 593
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 594
    invoke-virtual {v3, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_24
    :goto_15
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        -0x215ddd38 -> :sswitch_3
        0x59df59c2 -> :sswitch_2
        0x59df5a3e -> :sswitch_1
        0x60b65fb2 -> :sswitch_0
    .end sparse-switch

    :sswitch_data_1
    .sparse-switch
        -0x215ddd38 -> :sswitch_7
        0x59df59c2 -> :sswitch_6
        0x59df5a3e -> :sswitch_5
        0x60b65fb2 -> :sswitch_4
    .end sparse-switch

    :sswitch_data_2
    .sparse-switch
        -0x215ddd38 -> :sswitch_b
        0x59df59c2 -> :sswitch_a
        0x59df5a3e -> :sswitch_9
        0x60b65fb2 -> :sswitch_8
    .end sparse-switch

    :sswitch_data_3
    .sparse-switch
        -0x215ddd38 -> :sswitch_f
        0x59df59c2 -> :sswitch_e
        0x59df5a3e -> :sswitch_d
        0x60b65fb2 -> :sswitch_c
    .end sparse-switch
.end method


# virtual methods
.method protected final a()V
    .locals 24

    move-object/from16 v0, p0

    .line 1088
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->r()Ljava/lang/String;

    move-result-object v1

    .line 1090
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v2, v2, Lcom/tkay/core/common/f/z;

    if-eqz v2, :cond_0

    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    .line 1092
    :goto_0
    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v4

    const/4 v5, 0x3

    const-string v6, "300x250"

    const-string v7, "320x90"

    const-string v8, "320x50"

    const-string v9, "728x90"

    const/4 v11, 0x2

    const/4 v13, 0x1

    sparse-switch v4, :sswitch_data_0

    goto :goto_1

    :sswitch_0
    invoke-virtual {v1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    move v1, v11

    goto :goto_2

    :sswitch_1
    invoke-virtual {v1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v1, 0x0

    goto :goto_2

    :sswitch_2
    invoke-virtual {v1, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    move v1, v5

    goto :goto_2

    :sswitch_3
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    move v1, v13

    goto :goto_2

    :cond_1
    :goto_1
    const/4 v1, -0x1

    :goto_2
    const-string v4, "myoffer_banner_ad_layout_320x50"

    if-eqz v1, :cond_6

    if-eq v1, v13, :cond_4

    if-eq v1, v11, :cond_2

    .line 1122
    iput-object v8, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    if-nez v2, :cond_8

    .line 1124
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/r;

    if-eqz v1, :cond_8

    .line 1125
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/r;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/r;->a()Ljava/lang/String;

    move-result-object v2

    goto :goto_3

    .line 1112
    :cond_2
    iput-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    if-nez v2, :cond_3

    .line 1114
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/r;

    if-eqz v1, :cond_3

    .line 1115
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/r;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/r;->N()Ljava/lang/String;

    move-result-object v2

    .line 1117
    :cond_3
    iput-boolean v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->u:Z

    const-string v4, "myoffer_banner_ad_layout_728x90"

    goto :goto_3

    .line 1103
    :cond_4
    iput-object v6, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    if-nez v2, :cond_5

    .line 1105
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/r;

    if-eqz v1, :cond_5

    .line 1106
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/r;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/r;->c()Ljava/lang/String;

    move-result-object v2

    .line 1108
    :cond_5
    iput-boolean v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->u:Z

    const-string v4, "myoffer_banner_ad_layout_300x250"

    goto :goto_3

    .line 1094
    :cond_6
    iput-object v7, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    if-nez v2, :cond_7

    .line 1096
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/r;

    if-eqz v1, :cond_7

    .line 1097
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/r;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/r;->b()Ljava/lang/String;

    move-result-object v2

    .line 1099
    :cond_7
    iput-boolean v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->u:Z

    const-string v4, "myoffer_banner_ad_layout_320x90"

    .line 1143
    :cond_8
    :goto_3
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/z;

    if-eqz v1, :cond_a

    .line 1144
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/z;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/z;->Y()I

    move-result v1

    if-eq v1, v13, :cond_9

    goto :goto_5

    :cond_9
    :goto_4
    move v1, v13

    goto :goto_6

    .line 1153
    :cond_a
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/r;

    if-eqz v1, :cond_b

    .line 1154
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_b

    invoke-static {v2}, Lcom/tkay/basead/a/b/c;->c(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_b

    goto :goto_4

    :cond_b
    :goto_5
    move v1, v11

    .line 1160
    :goto_6
    iput v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->w:I

    const-string v14, "myoffer_banner_version_name"

    const-string v15, "myoffer_banner_permission_manage"

    const-string v3, "myoffer_banner_privacy_agreement"

    const-string v5, "myoffer_banner_publisher_name"

    const-string v11, "myoffer_banner_container"

    const-string v10, "myoffer_banner_close"

    const-string v12, "layout"

    const-string v13, "string"

    move-object/from16 v16, v6

    const-string v6, "myoffer_panel_version"

    move-object/from16 v17, v8

    const-string v8, "id"

    move-object/from16 v18, v7

    const/4 v7, 0x1

    if-ne v7, v1, :cond_14

    .line 1132
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v7, "myoffer_banner_ad_layout_pure_picture"

    invoke-static {v4, v7, v12}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v1, v4, v0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 1167
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "myoffer_banner_root"

    invoke-static {v1, v4, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    .line 1168
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v10, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v4}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Lcom/tkay/basead/ui/CloseImageView;

    iput-object v4, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    .line 1171
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v11, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v4}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/RelativeLayout;

    .line 1172
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7, v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v0, v5}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    .line 1173
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7, v3, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    .line 1174
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7, v15, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v0, v7}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/TextView;

    .line 1175
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10, v14, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v0, v10}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/TextView;

    .line 1177
    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v11, v11, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v11}, Lcom/tkay/core/common/f/j;->s()I

    move-result v11

    if-nez v11, :cond_d

    .line 1178
    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    const/4 v12, 0x0

    invoke-virtual {v11, v12}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 1179
    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-static {v9, v11}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v9

    if-eqz v9, :cond_c

    .line 1180
    iget-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v9}, Lcom/tkay/basead/ui/CloseImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v9

    .line 1181
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    const/high16 v12, 0x41b80000    # 23.0f

    invoke-static {v11, v12}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v11

    iput v11, v9, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 1182
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v12}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v11

    iput v11, v9, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 1183
    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v11, v9}, Lcom/tkay/basead/ui/CloseImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1186
    :cond_c
    iget-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    iget-object v11, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v11, v11, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v11}, Lcom/tkay/core/common/f/j;->h()I

    move-result v11

    invoke-virtual {v0, v9, v11}, Lcom/tkay/basead/ui/SdkBannerATView;->a(Lcom/tkay/basead/ui/a;I)F

    goto :goto_7

    .line 1188
    :cond_d
    iget-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    const/16 v11, 0x8

    invoke-virtual {v9, v11}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 1195
    :goto_7
    invoke-virtual {v1}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v9

    check-cast v9, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v11, -0x1

    .line 1196
    iput v11, v9, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 1197
    iput v11, v9, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 1198
    invoke-virtual {v1, v9}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1201
    new-instance v1, Lcom/tkay/core/common/res/image/RecycleImageView;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-direct {v1, v9}, Lcom/tkay/core/common/res/image/RecycleImageView;-><init>(Landroid/content/Context;)V

    .line 1202
    sget-object v9, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v9}, Lcom/tkay/core/common/res/image/RecycleImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 1203
    new-instance v9, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v9, v11, v11}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v11, 0x0

    invoke-virtual {v0, v1, v11, v9}, Lcom/tkay/basead/ui/SdkBannerATView;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 1206
    new-instance v9, Lcom/tkay/core/common/res/image/RecycleImageView;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-direct {v9, v11}, Lcom/tkay/core/common/res/image/RecycleImageView;-><init>(Landroid/content/Context;)V

    .line 1207
    sget-object v11, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v9, v11}, Lcom/tkay/core/common/res/image/RecycleImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 1208
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v11

    new-instance v12, Lcom/tkay/core/common/res/e;

    const/4 v14, 0x1

    invoke-direct {v12, v14, v2}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v15, Lcom/tkay/basead/ui/SdkBannerATView$9;

    invoke-direct {v15, v0, v2, v9, v1}, Lcom/tkay/basead/ui/SdkBannerATView$9;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Ljava/lang/String;Lcom/tkay/core/common/res/image/RecycleImageView;Lcom/tkay/core/common/res/image/RecycleImageView;)V

    invoke-virtual {v11, v12, v15}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 1244
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v1, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1245
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    .line 1246
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1247
    invoke-virtual {v0, v9, v14, v1}, Lcom/tkay/basead/ui/SdkBannerATView;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 1250
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_e

    .line 1251
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_banner_self_ad_logo"

    invoke-static {v1, v2, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    .line 1252
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v2

    new-instance v8, Lcom/tkay/core/common/res/e;

    iget-object v9, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v9}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v9

    const/4 v11, 0x1

    invoke-direct {v8, v11, v9}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v9, Lcom/tkay/basead/ui/SdkBannerATView$10;

    invoke-direct {v9, v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView$10;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Landroid/widget/ImageView;)V

    invoke-virtual {v2, v8, v9}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 1266
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1270
    :cond_e
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->K()Z

    move-result v1

    if-eqz v1, :cond_13

    const/4 v1, 0x0

    if-eqz v4, :cond_f

    .line 1272
    invoke-virtual {v4, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    :cond_f
    if-eqz v5, :cond_10

    .line 1276
    invoke-virtual {v5, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1277
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1278
    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$11;

    invoke-direct {v2, v0}, Lcom/tkay/basead/ui/SdkBannerATView$11;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_10
    if-eqz v3, :cond_11

    .line 1286
    invoke-virtual {v3, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1287
    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$12;

    invoke-direct {v2, v0}, Lcom/tkay/basead/ui/SdkBannerATView$12;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v3, v2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_11
    if-eqz v7, :cond_12

    .line 1295
    invoke-virtual {v7, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1296
    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$13;

    invoke-direct {v2, v0}, Lcom/tkay/basead/ui/SdkBannerATView$13;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v7, v2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_12
    if-eqz v10, :cond_13

    .line 1304
    invoke-virtual {v10, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1305
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 1306
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v6, v13}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Object;

    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    .line 1307
    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v1

    .line 1305
    invoke-virtual {v2, v3, v4}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v10, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1309
    new-instance v1, Lcom/tkay/basead/ui/SdkBannerATView$14;

    invoke-direct {v1, v0}, Lcom/tkay/basead/ui/SdkBannerATView$14;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v10, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_13
    return-void

    .line 1136
    :cond_14
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v4, v12}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2, v0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 1321
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_banner_icon"

    invoke-static {v1, v2, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 1322
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v4, "myoffer_banner_ad_title"

    invoke-static {v2, v4, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 1323
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v7, "myoffer_banner_desc"

    invoke-static {v4, v7, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v4}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    .line 1324
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v7

    const-string v12, "myoffer_banner_ad_install_btn"

    invoke-static {v7, v12, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v0, v7}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/TextView;

    .line 1326
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v12

    move-object/from16 v19, v6

    const-string v6, "myoffer_banner_spread_layout"

    invoke-static {v12, v6, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v0, v6}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Lcom/tkay/basead/ui/SpreadAnimLayout;

    .line 1327
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v12

    invoke-static {v12, v10, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v0, v10}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Lcom/tkay/basead/ui/CloseImageView;

    iput-object v10, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    .line 1330
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10, v11, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v0, v10}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/RelativeLayout;

    .line 1331
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v0, v5}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    .line 1332
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v3, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    .line 1333
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v15, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v0, v11}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v11

    check-cast v11, Landroid/widget/TextView;

    .line 1334
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v12

    invoke-static {v12, v14, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v12

    invoke-virtual {v0, v12}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v12

    check-cast v12, Landroid/widget/TextView;

    .line 1337
    iget-object v14, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v14, v14, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v14}, Lcom/tkay/core/common/f/j;->s()I

    move-result v14

    if-nez v14, :cond_15

    const/4 v14, 0x1

    goto :goto_8

    :cond_15
    const/4 v14, 0x0

    :goto_8
    if-eqz v14, :cond_16

    .line 1339
    iget-object v15, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    move-object/from16 v20, v13

    const/4 v13, 0x0

    invoke-virtual {v15, v13}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 1341
    iget-object v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    iget-object v15, v0, Lcom/tkay/basead/ui/SdkBannerATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v15, v15, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v15}, Lcom/tkay/core/common/f/j;->h()I

    move-result v15

    invoke-virtual {v0, v13, v15}, Lcom/tkay/basead/ui/SdkBannerATView;->a(Lcom/tkay/basead/ui/a;I)F

    move-object/from16 v21, v11

    move-object/from16 v15, v17

    move-object/from16 v11, v18

    move-object/from16 v17, v3

    :goto_9
    move-object/from16 v18, v5

    goto/16 :goto_c

    :cond_16
    move-object/from16 v20, v13

    .line 1343
    iget-object v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->t:Lcom/tkay/basead/ui/CloseImageView;

    const/16 v15, 0x8

    invoke-virtual {v13, v15}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 1346
    iget-object v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v13}, Ljava/lang/String;->hashCode()I

    move-result v15

    move-object/from16 v21, v11

    const v11, 0x59df59c2

    if-eq v15, v11, :cond_1a

    const v11, 0x59df5a3e

    if-eq v15, v11, :cond_19

    const v11, 0x60b65fb2

    if-eq v15, v11, :cond_18

    :cond_17
    move-object/from16 v15, v17

    move-object/from16 v11, v18

    goto :goto_a

    :cond_18
    invoke-virtual {v13, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_17

    move-object/from16 v15, v17

    move-object/from16 v11, v18

    const/4 v13, 0x2

    goto :goto_b

    :cond_19
    move-object/from16 v11, v18

    invoke-virtual {v13, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v13

    move-object/from16 v15, v17

    if-eqz v13, :cond_1b

    const/4 v13, 0x1

    goto :goto_b

    :cond_1a
    move-object/from16 v15, v17

    move-object/from16 v11, v18

    invoke-virtual {v13, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v13

    if-eqz v13, :cond_1b

    const/4 v13, 0x0

    goto :goto_b

    :cond_1b
    :goto_a
    const/4 v13, -0x1

    :goto_b
    if-eqz v13, :cond_1e

    move-object/from16 v17, v3

    const/4 v3, 0x1

    if-eq v13, v3, :cond_1d

    const/4 v3, 0x2

    if-eq v13, v3, :cond_1c

    goto :goto_9

    .line 1358
    :cond_1c
    invoke-virtual {v6}, Lcom/tkay/basead/ui/SpreadAnimLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    .line 1359
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v13

    move-object/from16 v18, v5

    const/high16 v5, 0x41a00000    # 20.0f

    invoke-static {v13, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v3, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1360
    invoke-virtual {v6, v3}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_c

    :cond_1d
    move-object/from16 v18, v5

    .line 1353
    invoke-virtual {v2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    .line 1354
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v13, 0x41200000    # 10.0f

    invoke-static {v5, v13}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v3, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1355
    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_c

    :cond_1e
    move-object/from16 v17, v3

    move-object/from16 v18, v5

    const/high16 v13, 0x41200000    # 10.0f

    .line 1348
    invoke-virtual {v6}, Lcom/tkay/basead/ui/SpreadAnimLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    .line 1349
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v13}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v3, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1350
    invoke-virtual {v6, v3}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1366
    :goto_c
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1f

    .line 1367
    invoke-virtual {v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    const/4 v5, 0x2

    .line 1368
    invoke-virtual {v1, v5}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    const/4 v5, 0x1

    .line 1369
    invoke-virtual {v1, v5}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    .line 1370
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v13

    invoke-static {v13}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v13

    new-instance v5, Lcom/tkay/core/common/res/e;

    move-object/from16 v22, v10

    iget-object v10, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v10}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v10

    move-object/from16 v23, v12

    const/4 v12, 0x1

    invoke-direct {v5, v12, v10}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    iget v10, v3, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget v3, v3, Landroid/view/ViewGroup$LayoutParams;->height:I

    new-instance v12, Lcom/tkay/basead/ui/SdkBannerATView$15;

    invoke-direct {v12, v0, v1}, Lcom/tkay/basead/ui/SdkBannerATView$15;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Lcom/tkay/core/common/ui/component/RoundImageView;)V

    invoke-virtual {v13, v5, v10, v3, v12}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    goto :goto_d

    :cond_1f
    move-object/from16 v22, v10

    move-object/from16 v23, v12

    .line 1385
    invoke-static {v1}, Lcom/tkay/basead/ui/a/a;->a(Landroid/view/View;)V

    .line 1386
    invoke-virtual {v2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v3, :cond_20

    const/4 v5, 0x0

    .line 1388
    iput v5, v3, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 1389
    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1392
    :cond_20
    :goto_d
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1395
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1396
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1397
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v7, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1398
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v3, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    if-eqz v4, :cond_21

    .line 1400
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1401
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1406
    :cond_21
    iget-object v3, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_22

    .line 1407
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v5, "myoffer_banner_self_ad_logo"

    invoke-static {v3, v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/ImageView;

    .line 1409
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v5

    new-instance v10, Lcom/tkay/core/common/res/e;

    iget-object v12, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v12}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v12

    const/4 v13, 0x1

    invoke-direct {v10, v13, v12}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v12, Lcom/tkay/basead/ui/SdkBannerATView$2;

    invoke-direct {v12, v0, v3}, Lcom/tkay/basead/ui/SdkBannerATView$2;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Landroid/widget/ImageView;)V

    invoke-virtual {v5, v10, v12}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    goto :goto_e

    :cond_22
    const/4 v3, 0x0

    .line 1423
    :goto_e
    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v5, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1427
    iget-boolean v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->u:Z

    if-eqz v5, :cond_23

    .line 1428
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v10, "myoffer_banner_main_image"

    invoke-static {v5, v10, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v0, v5}, Lcom/tkay/basead/ui/SdkBannerATView;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 1430
    iget-object v8, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v8}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_24

    .line 1431
    invoke-virtual {v5}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    const/4 v8, 0x2

    .line 1432
    invoke-virtual {v5, v8}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    const/4 v8, 0x1

    .line 1433
    invoke-virtual {v5, v8}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    .line 1434
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-static {v10}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v10

    new-instance v12, Lcom/tkay/core/common/res/e;

    iget-object v13, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v13}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v13

    invoke-direct {v12, v8, v13}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v8, Lcom/tkay/basead/ui/SdkBannerATView$3;

    invoke-direct {v8, v0, v5}, Lcom/tkay/basead/ui/SdkBannerATView$3;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;Lcom/tkay/core/common/ui/component/RoundImageView;)V

    invoke-virtual {v10, v12, v8}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 1448
    iget-object v8, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v8, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_f

    :cond_23
    const/4 v5, 0x0

    .line 1451
    :cond_24
    :goto_f
    iget-object v8, v0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v8, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1454
    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_26

    const/4 v5, 0x0

    .line 1455
    invoke-virtual {v6, v5}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setVisibility(I)V

    .line 1456
    invoke-virtual {v7, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 2355
    iput-object v7, v0, Lcom/tkay/basead/ui/BaseATView;->s:Landroid/view/View;

    move-object/from16 v6, v16

    :cond_25
    move-object/from16 v10, v22

    move-object/from16 v12, v23

    const/4 v7, 0x2

    :goto_10
    const/4 v13, -0x1

    goto/16 :goto_15

    :cond_26
    const/16 v5, 0x8

    .line 1459
    invoke-virtual {v6, v5}, Lcom/tkay/basead/ui/SpreadAnimLayout;->setVisibility(I)V

    .line 1460
    invoke-virtual {v7, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1464
    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v6

    sparse-switch v6, :sswitch_data_1

    :cond_27
    move-object/from16 v6, v16

    goto :goto_11

    :sswitch_4
    invoke-virtual {v5, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_27

    move-object/from16 v6, v16

    const/4 v5, 0x2

    goto :goto_12

    :sswitch_5
    invoke-virtual {v5, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_27

    move-object/from16 v6, v16

    const/4 v5, 0x0

    goto :goto_12

    :sswitch_6
    invoke-virtual {v5, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_27

    move-object/from16 v6, v16

    const/4 v5, 0x3

    goto :goto_12

    :sswitch_7
    move-object/from16 v6, v16

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_28

    const/4 v5, 0x1

    goto :goto_12

    :cond_28
    :goto_11
    const/4 v5, -0x1

    :goto_12
    if-eqz v5, :cond_2e

    const/4 v7, 0x1

    if-eq v5, v7, :cond_25

    const/4 v7, 0x2

    if-eq v5, v7, :cond_2b

    .line 1492
    invoke-virtual {v2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v5, 0xb

    .line 1493
    invoke-virtual {v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    if-eqz v14, :cond_29

    .line 1495
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x41900000    # 18.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    goto :goto_13

    .line 1497
    :cond_29
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x41200000    # 10.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1499
    :goto_13
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    if-eqz v23, :cond_2a

    .line 1501
    invoke-virtual/range {v23 .. v23}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 1502
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x425c0000    # 55.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    move-object/from16 v12, v23

    .line 1503
    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_14

    :cond_2a
    move-object/from16 v12, v23

    goto :goto_14

    :cond_2b
    move-object/from16 v12, v23

    .line 1474
    invoke-virtual {v2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 1475
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x41900000    # 18.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1476
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    if-eqz v4, :cond_2c

    .line 1479
    invoke-virtual {v4}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 1480
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x42e40000    # 114.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1481
    invoke-virtual {v4, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2c
    if-eqz v22, :cond_2d

    .line 1485
    invoke-virtual/range {v22 .. v22}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 1486
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v8, 0x42e40000    # 114.0f

    invoke-static {v5, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    move-object/from16 v10, v22

    .line 1487
    invoke-virtual {v10, v1}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto/16 :goto_10

    :cond_2d
    :goto_14
    move-object/from16 v10, v22

    goto/16 :goto_10

    :cond_2e
    move-object/from16 v10, v22

    move-object/from16 v12, v23

    const/4 v7, 0x2

    .line 1466
    invoke-virtual {v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v5

    check-cast v5, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v8, 0xf

    .line 1467
    invoke-virtual {v5, v8}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/4 v8, 0x6

    const/4 v13, -0x1

    .line 1468
    invoke-virtual {v5, v8, v13}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 1469
    invoke-virtual {v1, v5}, Lcom/tkay/core/common/ui/component/RoundImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1510
    :goto_15
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->K()Z

    move-result v1

    if-eqz v1, :cond_38

    const/16 v1, 0x8

    .line 1511
    invoke-virtual {v4, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1513
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    sparse-switch v2, :sswitch_data_2

    goto :goto_16

    :sswitch_8
    invoke-virtual {v1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2f

    move v1, v7

    goto :goto_17

    :sswitch_9
    invoke-virtual {v1, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2f

    const/4 v1, 0x1

    goto :goto_17

    :sswitch_a
    invoke-virtual {v1, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2f

    const/4 v1, 0x3

    goto :goto_17

    :sswitch_b
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2f

    const/4 v1, 0x0

    goto :goto_17

    :cond_2f
    :goto_16
    move v1, v13

    :goto_17
    if-eqz v1, :cond_30

    goto :goto_18

    :cond_30
    if-eqz v3, :cond_31

    .line 1517
    invoke-virtual {v3}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 1518
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v4, 0x41000000    # 8.0f

    invoke-static {v2, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 1519
    invoke-virtual {v3, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_31
    :goto_18
    const/4 v1, 0x0

    if-eqz v10, :cond_32

    .line 1530
    invoke-virtual {v10, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    :cond_32
    if-eqz v18, :cond_33

    move-object/from16 v5, v18

    .line 1534
    invoke-virtual {v5, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1535
    iget-object v2, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1536
    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$4;

    invoke-direct {v2, v0}, Lcom/tkay/basead/ui/SdkBannerATView$4;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_33
    if-eqz v17, :cond_34

    move-object/from16 v3, v17

    .line 1544
    invoke-virtual {v3, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1545
    new-instance v2, Lcom/tkay/basead/ui/SdkBannerATView$5;

    invoke-direct {v2, v0}, Lcom/tkay/basead/ui/SdkBannerATView$5;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v3, v2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_34
    if-eqz v21, :cond_35

    move-object/from16 v2, v21

    .line 1553
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1554
    new-instance v3, Lcom/tkay/basead/ui/SdkBannerATView$6;

    invoke-direct {v3, v0}, Lcom/tkay/basead/ui/SdkBannerATView$6;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_35
    if-eqz v12, :cond_3b

    .line 1562
    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1563
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    sparse-switch v2, :sswitch_data_3

    goto :goto_19

    :sswitch_c
    invoke-virtual {v1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_36

    const/4 v5, 0x1

    goto :goto_1a

    :sswitch_d
    invoke-virtual {v1, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_36

    const/4 v5, 0x0

    goto :goto_1a

    :sswitch_e
    invoke-virtual {v1, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_36

    const/4 v5, 0x3

    goto :goto_1a

    :sswitch_f
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_36

    move v5, v7

    goto :goto_1a

    :cond_36
    :goto_19
    move v5, v13

    :goto_1a
    if-eqz v5, :cond_37

    const/4 v1, 0x1

    if-eq v5, v1, :cond_37

    .line 1575
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 1576
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    move-object/from16 v5, v19

    move-object/from16 v4, v20

    invoke-static {v3, v5, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    new-array v1, v1, [Ljava/lang/Object;

    iget-object v4, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    .line 1577
    invoke-virtual {v4}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v1, v5

    .line 1575
    invoke-virtual {v2, v3, v1}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1b

    :cond_37
    move-object/from16 v5, v19

    move-object/from16 v4, v20

    .line 1567
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    .line 1568
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v5, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    .line 1569
    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "  "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v0, Lcom/tkay/basead/ui/SdkBannerATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    .line 1567
    invoke-virtual {v1, v2, v3}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1582
    :goto_1b
    new-instance v1, Lcom/tkay/basead/ui/SdkBannerATView$7;

    invoke-direct {v1, v0}, Lcom/tkay/basead/ui/SdkBannerATView$7;-><init>(Lcom/tkay/basead/ui/SdkBannerATView;)V

    invoke-virtual {v12, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void

    :cond_38
    const/4 v3, 0x1

    const/4 v5, 0x0

    .line 1589
    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1590
    iget-object v1, v0, Lcom/tkay/basead/ui/SdkBannerATView;->v:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v4

    sparse-switch v4, :sswitch_data_4

    goto :goto_1c

    :sswitch_10
    invoke-virtual {v1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_39

    const/4 v5, 0x3

    goto :goto_1d

    :sswitch_11
    invoke-virtual {v1, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_39

    move v5, v3

    goto :goto_1d

    :sswitch_12
    invoke-virtual {v1, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_39

    goto :goto_1d

    :sswitch_13
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_39

    move v5, v7

    goto :goto_1d

    :cond_39
    :goto_1c
    move v5, v13

    :goto_1d
    if-eqz v5, :cond_3a

    goto :goto_1e

    .line 1592
    :cond_3a
    invoke-virtual {v2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 1593
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/SdkBannerATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41000000    # 8.0f

    invoke-static {v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    iput v3, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 1594
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_3b
    :goto_1e
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        -0x215ddd38 -> :sswitch_3
        0x59df59c2 -> :sswitch_2
        0x59df5a3e -> :sswitch_1
        0x60b65fb2 -> :sswitch_0
    .end sparse-switch

    :sswitch_data_1
    .sparse-switch
        -0x215ddd38 -> :sswitch_7
        0x59df59c2 -> :sswitch_6
        0x59df5a3e -> :sswitch_5
        0x60b65fb2 -> :sswitch_4
    .end sparse-switch

    :sswitch_data_2
    .sparse-switch
        -0x215ddd38 -> :sswitch_b
        0x59df59c2 -> :sswitch_a
        0x59df5a3e -> :sswitch_9
        0x60b65fb2 -> :sswitch_8
    .end sparse-switch

    :sswitch_data_3
    .sparse-switch
        -0x215ddd38 -> :sswitch_f
        0x59df59c2 -> :sswitch_e
        0x59df5a3e -> :sswitch_d
        0x60b65fb2 -> :sswitch_c
    .end sparse-switch

    :sswitch_data_4
    .sparse-switch
        -0x215ddd38 -> :sswitch_13
        0x59df59c2 -> :sswitch_12
        0x59df5a3e -> :sswitch_11
        0x60b65fb2 -> :sswitch_10
    .end sparse-switch
.end method

.method protected final c()V
    .locals 4

    .line 608
    iget-object v0, p0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    .line 611
    iget-object v2, p0, Lcom/tkay/basead/ui/SdkBannerATView;->r:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    if-eqz v2, :cond_0

    .line 613
    iget-object v3, p0, Lcom/tkay/basead/ui/SdkBannerATView;->A:Landroid/view/View$OnClickListener;

    invoke-virtual {v2, v3}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 616
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/SdkBannerATView;->z:Landroid/view/View$OnClickListener;

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/SdkBannerATView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 618
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseBannerATView;->c()V

    return-void
.end method
