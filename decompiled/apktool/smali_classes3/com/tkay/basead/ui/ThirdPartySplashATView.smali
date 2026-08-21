.class public Lcom/tkay/basead/ui/ThirdPartySplashATView;
.super Lcom/tkay/basead/ui/AsseblemSplashATView;


# instance fields
.field P:Lcom/tkay/core/api/BaseAd;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/AsseblemSplashATView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;Ljava/lang/String;)V
    .locals 0

    .line 27
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/ui/AsseblemSplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    .line 28
    invoke-static {}, Lcom/tkay/basead/d/i;->a()Lcom/tkay/basead/d/i;

    move-result-object p1

    invoke-virtual {p1, p5}, Lcom/tkay/basead/d/i;->a(Ljava/lang/String;)Lcom/tkay/core/api/BaseAd;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->P:Lcom/tkay/core/api/BaseAd;

    .line 1041
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string p2, "id"

    const-string p3, "myoffer_splash_ad_lable_area"

    invoke-static {p1, p3, p2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/FrameLayout;

    const/4 p3, 0x0

    if-eqz p1, :cond_0

    .line 1044
    invoke-virtual {p1, p3}, Landroid/widget/FrameLayout;->setVisibility(I)V

    .line 1045
    iget-object p4, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->r:Ljava/util/List;

    invoke-interface {p4, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1048
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string p4, "myoffer_splash_ad_content_image_area"

    invoke-static {p1, p4, p2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/FrameLayout;

    if-eqz p1, :cond_2

    .line 1050
    iget-object p2, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->P:Lcom/tkay/core/api/BaseAd;

    if-eqz p2, :cond_2

    new-array p4, p3, [Ljava/lang/Object;

    invoke-virtual {p2, p4}, Lcom/tkay/core/api/BaseAd;->getAdMediaView([Ljava/lang/Object;)Landroid/view/View;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 1051
    iget-object p2, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->P:Lcom/tkay/core/api/BaseAd;

    new-array p3, p3, [Ljava/lang/Object;

    invoke-virtual {p2, p3}, Lcom/tkay/core/api/BaseAd;->getAdMediaView([Ljava/lang/Object;)Landroid/view/View;

    move-result-object p2

    .line 1052
    invoke-virtual {p2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object p3

    if-eqz p3, :cond_1

    .line 1053
    invoke-virtual {p2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object p3

    check-cast p3, Landroid/view/ViewGroup;

    invoke-virtual {p3, p2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 1055
    :cond_1
    new-instance p3, Landroid/widget/FrameLayout$LayoutParams;

    const/4 p4, -0x1

    invoke-direct {p3, p4, p4}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, p2, p3}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    return-void
.end method

.method private s()V
    .locals 4

    .line 41
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    const-string v2, "myoffer_splash_ad_lable_area"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    .line 44
    invoke-virtual {v0, v2}, Landroid/widget/FrameLayout;->setVisibility(I)V

    .line 45
    iget-object v3, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->r:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 48
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_splash_ad_content_image_area"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    if-eqz v0, :cond_2

    .line 50
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->P:Lcom/tkay/core/api/BaseAd;

    if-eqz v1, :cond_2

    new-array v3, v2, [Ljava/lang/Object;

    invoke-virtual {v1, v3}, Lcom/tkay/core/api/BaseAd;->getAdMediaView([Ljava/lang/Object;)Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 51
    iget-object v1, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->P:Lcom/tkay/core/api/BaseAd;

    new-array v2, v2, [Ljava/lang/Object;

    invoke-virtual {v1, v2}, Lcom/tkay/core/api/BaseAd;->getAdMediaView([Ljava/lang/Object;)Landroid/view/View;

    move-result-object v1

    .line 52
    invoke-virtual {v1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 53
    invoke-virtual {v1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    invoke-virtual {v2, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 55
    :cond_1
    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    return-void
.end method


# virtual methods
.method protected final a(Lcom/tkay/basead/ui/a;I)F
    .locals 0

    const/high16 p1, 0x3f800000    # 1.0f

    return p1
.end method

.method protected final c()V
    .locals 0

    return-void
.end method

.method protected final m()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method protected final o()V
    .locals 2

    .line 34
    invoke-super {p0}, Lcom/tkay/basead/ui/AsseblemSplashATView;->o()V

    .line 35
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->J:Lcom/tkay/basead/ui/GuideToClickView;

    if-eqz v0, :cond_0

    .line 36
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->J:Lcom/tkay/basead/ui/GuideToClickView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/GuideToClickView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method protected final p()V
    .locals 0

    return-void
.end method

.method public registerNativeClickListener(Landroid/view/View;)V
    .locals 3

    .line 60
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->P:Lcom/tkay/core/api/BaseAd;

    if-eqz v0, :cond_1

    .line 61
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->x()I

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 62
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->r:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 63
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->P:Lcom/tkay/core/api/BaseAd;

    iget-object v2, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->r:Ljava/util/List;

    invoke-virtual {v0, p1, v2, v1}, Lcom/tkay/core/api/BaseAd;->registerListener(Landroid/view/View;Ljava/util/List;Landroid/widget/FrameLayout$LayoutParams;)V

    return-void

    .line 65
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 66
    iget-object v2, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->a:Landroid/view/View;

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 67
    iget-object v2, p0, Lcom/tkay/basead/ui/ThirdPartySplashATView;->P:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v2, p1, v0, v1}, Lcom/tkay/core/api/BaseAd;->registerListener(Landroid/view/View;Ljava/util/List;Landroid/widget/FrameLayout$LayoutParams;)V

    :cond_1
    return-void
.end method
