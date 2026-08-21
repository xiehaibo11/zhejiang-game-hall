.class public Lcom/tkay/basead/ui/SinglePictureSplashATView;
.super Lcom/tkay/basead/ui/BaseSdkSplashATView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseSdkSplashATView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 37
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/ui/BaseSdkSplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/SinglePictureSplashATView;)V
    .locals 0

    .line 30
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->h()V

    return-void
.end method

.method private static synthetic a(Lcom/tkay/basead/ui/SinglePictureSplashATView;ILjava/lang/Runnable;)V
    .locals 0

    .line 30
    invoke-super {p0, p1, p2}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->a(ILjava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method protected final a()V
    .locals 4

    .line 43
    iget-object v0, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->q()I

    move-result v0

    const-string v1, "layout"

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    .line 44
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_splash_ad_layout_single_land"

    invoke-static {v2, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    goto :goto_0

    .line 46
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_splash_ad_layout_single_port"

    invoke-static {v2, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 49
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->o()V

    return-void
.end method

.method protected final b()V
    .locals 7

    .line 54
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    const-string v2, "myoffer_splash_ad_install_btn"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    .line 55
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_splash_bg"

    invoke-static {v2, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 58
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v2

    new-instance v3, Lcom/tkay/core/common/res/e;

    iget-object v4, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->d:Lcom/tkay/core/common/f/h;

    .line 59
    invoke-virtual {v4}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x1

    invoke-direct {v3, v5, v4}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v4

    iget v4, v4, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v5

    iget v5, v5, Landroid/util/DisplayMetrics;->widthPixels:I

    mul-int/lit16 v5, v5, 0x273

    div-int/lit16 v5, v5, 0x4b0

    new-instance v6, Lcom/tkay/basead/ui/SinglePictureSplashATView$1;

    invoke-direct {v6, p0, v1}, Lcom/tkay/basead/ui/SinglePictureSplashATView$1;-><init>(Lcom/tkay/basead/ui/SinglePictureSplashATView;Lcom/tkay/core/common/ui/component/RoundImageView;)V

    .line 58
    invoke-virtual {v2, v3, v4, v5, v6}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    .line 99
    iget-object v1, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-eqz v1, :cond_2

    if-eqz v0, :cond_2

    .line 101
    iget-object v1, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->x()I

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->m()Z

    move-result v1

    if-nez v1, :cond_1

    const/4 v1, 0x0

    .line 103
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 105
    iget-object v1, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 106
    iget-object v1, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 108
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {v1, v2}, Lcom/tkay/basead/a/e;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    .line 111
    :goto_0
    iget-object v1, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->r:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void

    :cond_1
    const/16 v1, 0x8

    .line 113
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_2
    return-void
.end method

.method protected final c()V
    .locals 2

    .line 120
    iget-object v0, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->R()I

    move-result v0

    if-gez v0, :cond_0

    const/16 v0, 0x64

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/SinglePictureSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->R()I

    move-result v0

    :goto_0
    new-instance v1, Lcom/tkay/basead/ui/SinglePictureSplashATView$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/SinglePictureSplashATView$2;-><init>(Lcom/tkay/basead/ui/SinglePictureSplashATView;)V

    .line 1030
    invoke-super {p0, v0, v1}, Lcom/tkay/basead/ui/BaseSdkSplashATView;->a(ILjava/lang/Runnable;)V

    return-void
.end method
