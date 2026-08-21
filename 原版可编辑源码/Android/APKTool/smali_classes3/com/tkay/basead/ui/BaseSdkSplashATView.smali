.class public abstract Lcom/tkay/basead/ui/BaseSdkSplashATView;
.super Lcom/tkay/basead/ui/BaseSplashATView;


# static fields
.field public static final TYPE_ASSEBLEM:I = 0x1

.field public static final TYPE_SINGLE_PICTURE:I


# instance fields
.field protected t:Lcom/tkay/core/common/ui/component/RoundImageView;

.field u:Landroid/view/ViewGroup;

.field v:Landroid/widget/TextView;

.field w:Landroid/widget/TextView;

.field x:Landroid/widget/TextView;

.field y:Landroid/widget/TextView;

.field protected final z:Landroid/view/View$OnClickListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 68
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseSplashATView;-><init>(Landroid/content/Context;)V

    .line 50
    new-instance p1, Lcom/tkay/basead/ui/BaseSdkSplashATView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView$1;-><init>(Lcom/tkay/basead/ui/BaseSdkSplashATView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->z:Landroid/view/View$OnClickListener;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 72
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/ui/BaseSplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    .line 50
    new-instance p1, Lcom/tkay/basead/ui/BaseSdkSplashATView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView$1;-><init>(Lcom/tkay/basead/ui/BaseSdkSplashATView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->z:Landroid/view/View$OnClickListener;

    .line 74
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->c()V

    .line 75
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->p()V

    .line 78
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->B:Lcom/tkay/basead/ui/CloseFrameLayout;

    iget-object p2, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->h()I

    move-result p2

    invoke-virtual {p0, p1, p2}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->a(Lcom/tkay/basead/ui/a;I)F

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/BaseSdkSplashATView;)V
    .locals 1

    const/4 v0, 0x1

    .line 33
    invoke-super {p0, v0}, Lcom/tkay/basead/ui/BaseSplashATView;->b(I)V

    return-void
.end method

.method public static isSinglePicture(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)Z
    .locals 3

    .line 252
    instance-of v0, p0, Lcom/tkay/core/common/f/r;

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    .line 253
    instance-of v0, p1, Lcom/tkay/core/common/f/t;

    if-eqz v0, :cond_1

    const/4 p0, 0x2

    .line 254
    check-cast p1, Lcom/tkay/core/common/f/t;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->X()I

    move-result p1

    if-ne p0, p1, :cond_0

    return v2

    :cond_0
    return v1

    .line 257
    :cond_1
    instance-of p1, p0, Lcom/tkay/core/common/f/z;

    if-eqz p1, :cond_2

    check-cast p0, Lcom/tkay/core/common/f/z;

    .line 258
    invoke-virtual {p0}, Lcom/tkay/core/common/f/z;->Y()I

    move-result p0

    if-ne v2, p0, :cond_2

    return v2

    :cond_2
    return v1
.end method


# virtual methods
.method protected abstract b()V
.end method

.method protected abstract c()V
.end method

.method protected o()V
    .locals 9

    .line 83
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->b()V

    .line 86
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    const-string v2, "myoffer_four_element_container"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->u:Landroid/view/ViewGroup;

    .line 87
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_publisher_name"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->v:Landroid/widget/TextView;

    .line 88
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_privacy_agreement"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->w:Landroid/widget/TextView;

    .line 89
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_permission_manage"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->x:Landroid/widget/TextView;

    .line 90
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_version_name"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->y:Landroid/widget/TextView;

    .line 92
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->K()Z

    move-result v0

    const/4 v2, 0x1

    const/16 v3, 0x8

    const/4 v4, 0x0

    if-eqz v0, :cond_4

    .line 93
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->u:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    .line 94
    invoke-virtual {v0, v4}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 97
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->v:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    .line 98
    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 99
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->v:Landroid/widget/TextView;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 100
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->r:Ljava/util/List;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->v:Landroid/widget/TextView;

    invoke-interface {v0, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 103
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->w:Landroid/widget/TextView;

    if-eqz v0, :cond_2

    .line 104
    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 105
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->w:Landroid/widget/TextView;

    new-instance v5, Lcom/tkay/basead/ui/BaseSdkSplashATView$2;

    invoke-direct {v5, p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView$2;-><init>(Lcom/tkay/basead/ui/BaseSdkSplashATView;)V

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 112
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->x:Landroid/widget/TextView;

    if-eqz v0, :cond_3

    .line 113
    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 114
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->x:Landroid/widget/TextView;

    new-instance v5, Lcom/tkay/basead/ui/BaseSdkSplashATView$3;

    invoke-direct {v5, p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView$3;-><init>(Lcom/tkay/basead/ui/BaseSdkSplashATView;)V

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 121
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->y:Landroid/widget/TextView;

    if-eqz v0, :cond_a

    .line 122
    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 123
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->y:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    .line 124
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->getContext()Landroid/content/Context;

    move-result-object v6

    const-string v7, "myoffer_panel_version"

    const-string v8, "string"

    invoke-static {v6, v7, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    new-array v7, v2, [Ljava/lang/Object;

    iget-object v8, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->d:Lcom/tkay/core/common/f/h;

    .line 125
    invoke-virtual {v8}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v7, v4

    .line 123
    invoke-virtual {v5, v6, v7}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 127
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->r:Ljava/util/List;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->y:Landroid/widget/TextView;

    invoke-interface {v0, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 130
    :cond_4
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->u:Landroid/view/ViewGroup;

    if-eqz v0, :cond_5

    .line 131
    invoke-virtual {v0, v3}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 133
    :cond_5
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->y:Landroid/widget/TextView;

    if-eqz v0, :cond_6

    .line 134
    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 136
    :cond_6
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->v:Landroid/widget/TextView;

    if-eqz v0, :cond_7

    .line 137
    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 139
    :cond_7
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->w:Landroid/widget/TextView;

    if-eqz v0, :cond_8

    .line 140
    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 142
    :cond_8
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->x:Landroid/widget/TextView;

    if-eqz v0, :cond_9

    .line 143
    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 146
    :cond_9
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v5, "myoffer_four_element_container_bg"

    invoke-static {v0, v5, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_a

    const/4 v5, 0x0

    .line 148
    invoke-virtual {v0, v5}, Landroid/view/View;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 155
    :catchall_0
    :cond_a
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v5, "myoffer_ad_logo"

    invoke-static {v0, v5, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 156
    invoke-virtual {v0}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 157
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_b

    .line 158
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {v1, v4}, Lcom/tkay/core/common/ui/component/RoundImageView;->setVisibility(I)V

    .line 159
    iget v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 160
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v3

    new-instance v4, Lcom/tkay/core/common/res/e;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v4, v2, v5}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v2, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;

    invoke-direct {v2, p0, v0}, Lcom/tkay/basead/ui/BaseSdkSplashATView$4;-><init>(Lcom/tkay/basead/ui/BaseSdkSplashATView;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {v3, v4, v1, v1, v2}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    goto :goto_1

    .line 186
    :cond_b
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->J()Landroid/graphics/Bitmap;

    move-result-object v1

    if-eqz v1, :cond_c

    .line 187
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->J()Landroid/graphics/Bitmap;

    move-result-object v1

    .line 189
    invoke-virtual {v1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v2

    int-to-float v2, v2

    const/high16 v3, 0x3f800000    # 1.0f

    mul-float/2addr v2, v3

    invoke-virtual {v1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v3

    int-to-float v3, v3

    div-float/2addr v2, v3

    .line 191
    iget v3, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    int-to-float v5, v3

    mul-float/2addr v5, v2

    float-to-int v2, v5

    .line 193
    iput v2, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 194
    iput v3, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 195
    iget-object v2, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {v2, v0}, Lcom/tkay/core/common/ui/component/RoundImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 197
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    sget-object v2, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/ui/component/RoundImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 198
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 199
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->J()Landroid/graphics/Bitmap;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 200
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {v0, v4}, Lcom/tkay/core/common/ui/component/RoundImageView;->setVisibility(I)V

    goto :goto_1

    .line 202
    :cond_c
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {v0, v3}, Lcom/tkay/core/common/ui/component/RoundImageView;->setVisibility(I)V

    .line 205
    :goto_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->r:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->t:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 208
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->q()V

    .line 210
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->r()V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 0

    .line 263
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->onAttachedToWindow()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 268
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->onDetachedFromWindow()V

    return-void
.end method

.method protected p()V
    .locals 1

    .line 245
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->p()V

    .line 247
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseSdkSplashATView;->z:Landroid/view/View$OnClickListener;

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method
