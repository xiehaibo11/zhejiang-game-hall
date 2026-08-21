.class public Lcom/tkay/basead/ui/MraidSplashATView;
.super Lcom/tkay/basead/ui/BaseSplashATView;


# instance fields
.field a:Lcom/tkay/basead/ui/MraidContainerView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseSplashATView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 25
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/ui/BaseSplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/MraidSplashATView;)V
    .locals 2

    .line 2104
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->a:Lcom/tkay/basead/ui/MraidContainerView;

    if-eqz v0, :cond_2

    .line 2108
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->R()I

    move-result v0

    if-gez v0, :cond_1

    const/16 v0, 0x64

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->R()I

    move-result v0

    :goto_0
    new-instance v1, Lcom/tkay/basead/ui/MraidSplashATView$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/MraidSplashATView$2;-><init>(Lcom/tkay/basead/ui/MraidSplashATView;)V

    .line 3015
    invoke-super {p0, v0, v1}, Lcom/tkay/basead/ui/BaseSplashATView;->a(ILjava/lang/Runnable;)V

    :cond_2
    return-void
.end method

.method private static synthetic a(Lcom/tkay/basead/ui/MraidSplashATView;ILjava/lang/Runnable;)V
    .locals 0

    .line 15
    invoke-super {p0, p1, p2}, Lcom/tkay/basead/ui/BaseSplashATView;->a(ILjava/lang/Runnable;)V

    return-void
.end method

.method private b()V
    .locals 5

    .line 43
    new-instance v0, Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidSplashATView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/ui/MraidSplashATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v3, p0, Lcom/tkay/basead/ui/MraidSplashATView;->c:Lcom/tkay/core/common/f/i;

    new-instance v4, Lcom/tkay/basead/ui/MraidSplashATView$1;

    invoke-direct {v4, p0}, Lcom/tkay/basead/ui/MraidSplashATView$1;-><init>(Lcom/tkay/basead/ui/MraidSplashATView;)V

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/basead/ui/MraidContainerView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/ui/MraidContainerView$a;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->a:Lcom/tkay/basead/ui/MraidContainerView;

    const/4 v1, 0x1

    .line 67
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MraidContainerView;->setNeedRegisterVolumeChangeReceiver(Z)V

    .line 68
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->a:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidContainerView;->init()V

    .line 70
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_splash_web"

    const-string v2, "id"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MraidSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    if-eqz v0, :cond_0

    .line 73
    iget-object v1, p0, Lcom/tkay/basead/ui/MraidSplashATView;->a:Lcom/tkay/basead/ui/MraidContainerView;

    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/basead/ui/MraidSplashATView;)V
    .locals 0

    .line 15
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->h()V

    return-void
.end method

.method private c()V
    .locals 2

    .line 104
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->a:Lcom/tkay/basead/ui/MraidContainerView;

    if-nez v0, :cond_0

    return-void

    .line 108
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->R()I

    move-result v0

    if-gez v0, :cond_1

    const/16 v0, 0x64

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->R()I

    move-result v0

    :goto_0
    new-instance v1, Lcom/tkay/basead/ui/MraidSplashATView$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/MraidSplashATView$2;-><init>(Lcom/tkay/basead/ui/MraidSplashATView;)V

    .line 2015
    invoke-super {p0, v0, v1}, Lcom/tkay/basead/ui/BaseSplashATView;->a(ILjava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method protected final a()V
    .locals 5

    .line 33
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidSplashATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_web_splash_ad_layout"

    const-string v3, "layout"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 1043
    new-instance v0, Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidSplashATView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/ui/MraidSplashATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v3, p0, Lcom/tkay/basead/ui/MraidSplashATView;->c:Lcom/tkay/core/common/f/i;

    new-instance v4, Lcom/tkay/basead/ui/MraidSplashATView$1;

    invoke-direct {v4, p0}, Lcom/tkay/basead/ui/MraidSplashATView$1;-><init>(Lcom/tkay/basead/ui/MraidSplashATView;)V

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/basead/ui/MraidContainerView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/ui/MraidContainerView$a;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->a:Lcom/tkay/basead/ui/MraidContainerView;

    const/4 v1, 0x1

    .line 1067
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MraidContainerView;->setNeedRegisterVolumeChangeReceiver(Z)V

    .line 1068
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->a:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidContainerView;->init()V

    .line 1070
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidSplashATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_splash_web"

    const-string v2, "id"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MraidSplashATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    if-eqz v0, :cond_0

    .line 1073
    iget-object v1, p0, Lcom/tkay/basead/ui/MraidSplashATView;->a:Lcom/tkay/basead/ui/MraidContainerView;

    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method public destroy()V
    .locals 1

    .line 145
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseSplashATView;->destroy()V

    .line 147
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->a:Lcom/tkay/basead/ui/MraidContainerView;

    if-eqz v0, :cond_0

    .line 148
    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidContainerView;->release()V

    :cond_0
    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 1

    .line 136
    invoke-super {p0, p1}, Lcom/tkay/basead/ui/BaseSplashATView;->onWindowFocusChanged(Z)V

    .line 138
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->a:Lcom/tkay/basead/ui/MraidContainerView;

    if-eqz v0, :cond_0

    .line 139
    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/MraidContainerView;->fireMraidIsViewable(Z)V

    :cond_0
    return-void
.end method

.method protected final p()V
    .locals 4

    .line 123
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidSplashATView;->r:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    .line 126
    iget-object v2, p0, Lcom/tkay/basead/ui/MraidSplashATView;->r:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    if-eqz v2, :cond_0

    .line 128
    iget-object v3, p0, Lcom/tkay/basead/ui/MraidSplashATView;->K:Landroid/view/View$OnClickListener;

    invoke-virtual {v2, v3}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method
