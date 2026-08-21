.class public Lcom/bianfeng/utilslib/screen/FullScreenUtils;
.super Ljava/lang/Object;
.source "FullScreenUtils.java"


# static fields
.field private static utils:Lcom/bianfeng/utilslib/screen/FullScreenUtils;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/utilslib/screen/FullScreenUtils;
    .locals 1

    .line 19
    sget-object v0, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->utils:Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    if-nez v0, :cond_0

    .line 20
    new-instance v0, Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    invoke-direct {v0}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->utils:Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    .line 22
    :cond_0
    sget-object v0, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->utils:Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    return-object v0
.end method

.method private getOtherBarSize(Landroid/app/Activity;)I
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method private setFullScreenV12(Landroid/app/Activity;)V
    .locals 2

    .line 53
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/4 v1, 0x1

    .line 55
    invoke-virtual {p1, v1}, Landroid/app/Activity;->requestWindowFeature(I)Z

    const/16 p1, 0x400

    .line 59
    invoke-virtual {v0, p1, p1}, Landroid/view/Window;->setFlags(II)V

    return-void
.end method

.method private setFullScreenV28(Landroid/app/Activity;)V
    .locals 2

    .line 65
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    .line 72
    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x1706

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    const/4 v0, 0x0

    .line 73
    invoke-virtual {p1, v0}, Landroid/view/Window;->setStatusBarColor(I)V

    .line 75
    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    const/4 v1, 0x1

    .line 76
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->layoutInDisplayCutoutMode:I

    .line 78
    invoke-virtual {p1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    return-void
.end method


# virtual methods
.method public getBarSize(Landroid/app/Activity;)I
    .locals 0

    .line 96
    invoke-static {}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->getInstance()Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->getNotSize()I

    move-result p1

    return p1
.end method

.method public getBoomBarSize(Landroid/app/Activity;)I
    .locals 1

    .line 105
    invoke-static {}, Lcom/bianfeng/utilslib/DensityUtils;->getInstance()Lcom/bianfeng/utilslib/DensityUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/utilslib/DensityUtils;->getNavigationBarHeight(Landroid/app/Activity;)I

    move-result v0

    int-to-float v0, v0

    .line 106
    invoke-static {p1, v0}, Lcom/bianfeng/utilslib/DensityUtils;->px2dp(Landroid/content/Context;F)I

    move-result p1

    return p1
.end method

.method public hideBar(Landroid/app/Activity;)V
    .locals 2

    .line 82
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    .line 83
    invoke-virtual {v0}, Landroid/view/View;->getSystemUiVisibility()I

    move-result v0

    or-int/lit16 v0, v0, 0x1206

    .line 89
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 90
    invoke-static {}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->getInstance()Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->setOnApplyWindowInsetsListener(Landroid/app/Activity;)V

    return-void
.end method

.method public setFullScreen(Landroid/app/Activity;)V
    .locals 2

    .line 26
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-lt v0, v1, :cond_2

    .line 27
    invoke-static {}, Lcom/bianfeng/utilslib/screen/RomUtils;->isMimu()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/XiaoMiUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 28
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->setFullScreenV28(Landroid/app/Activity;)V

    goto/16 :goto_1

    .line 29
    :cond_0
    invoke-static {}, Lcom/bianfeng/utilslib/screen/RomUtils;->isMimu()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 30
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->setFullScreenV12(Landroid/app/Activity;)V

    goto :goto_1

    .line 32
    :cond_1
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->setFullScreenV28(Landroid/app/Activity;)V

    goto :goto_1

    .line 35
    :cond_2
    invoke-static {}, Lcom/bianfeng/utilslib/screen/RomUtils;->isHuaWei()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/HuaWeiUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 36
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/utilslib/screen/HuaWeiUtils;->setFullScreenWindowLayoutInDisplayCutout(Landroid/view/Window;)V

    goto :goto_0

    .line 37
    :cond_3
    invoke-static {}, Lcom/bianfeng/utilslib/screen/RomUtils;->isMimu()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/XiaoMiUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 38
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/utilslib/screen/XiaoMiUtils;->setFullScreenWindowLayoutInDisplayCutout(Landroid/view/Window;)V

    .line 39
    :cond_4
    :goto_0
    invoke-static {}, Lcom/bianfeng/utilslib/screen/RomUtils;->isMeizu()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/FlymeUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 40
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/FlymeUtils;->setFullScreenWindowLayoutInDisplayCutout(Landroid/view/Window;)V

    goto :goto_1

    .line 41
    :cond_5
    invoke-static {}, Lcom/bianfeng/utilslib/screen/RomUtils;->isVivo()Z

    move-result v0

    if-eqz v0, :cond_6

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/VivoAndOppoUtils;->hasVivoNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 42
    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/VivoAndOppoUtils;->hasOppoNotch(Landroid/content/Context;)Z

    goto :goto_1

    .line 43
    :cond_6
    invoke-static {}, Lcom/bianfeng/utilslib/screen/RomUtils;->isOppo()Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/VivoAndOppoUtils;->hasOppoNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 44
    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/VivoAndOppoUtils;->hasVivoNotch(Landroid/content/Context;)Z

    goto :goto_1

    .line 46
    :cond_7
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->setFullScreenV12(Landroid/app/Activity;)V

    :goto_1
    return-void
.end method
