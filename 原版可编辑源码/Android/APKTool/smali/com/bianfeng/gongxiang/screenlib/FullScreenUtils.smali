.class Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;
.super Ljava/lang/Object;
.source "FullScreenUtils.java"


# static fields
.field private static utils:Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;


# direct methods
.method constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;
    .locals 1

    .line 16
    sget-object v0, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->utils:Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;

    if-nez v0, :cond_0

    .line 17
    new-instance v0, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;

    invoke-direct {v0}, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->utils:Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;

    .line 19
    :cond_0
    sget-object v0, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->utils:Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;

    return-object v0
.end method

.method private getOtherBarSize(Landroid/app/Activity;)I
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method private setFullScreenV12(Landroid/app/Activity;)V
    .locals 2

    .line 50
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/4 v1, 0x1

    .line 52
    invoke-virtual {p1, v1}, Landroid/app/Activity;->requestWindowFeature(I)Z

    const/16 p1, 0x400

    .line 56
    invoke-virtual {v0, p1, p1}, Landroid/view/Window;->setFlags(II)V

    return-void
.end method

.method private setFullScreenV28(Landroid/app/Activity;)V
    .locals 2

    .line 61
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    .line 62
    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x1706

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    const/4 v0, 0x0

    .line 69
    invoke-virtual {p1, v0}, Landroid/view/Window;->setStatusBarColor(I)V

    .line 71
    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    const/4 v1, 0x1

    .line 72
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->layoutInDisplayCutoutMode:I

    .line 74
    invoke-virtual {p1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    return-void
.end method


# virtual methods
.method public getBarSize()I
    .locals 1

    .line 90
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->getInstance()Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->getNotSize()I

    move-result v0

    return v0
.end method

.method public hideBar(Landroid/app/Activity;)V
    .locals 2

    .line 78
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    .line 79
    invoke-virtual {v0}, Landroid/view/View;->getSystemUiVisibility()I

    move-result v0

    or-int/lit16 v0, v0, 0x1006

    .line 84
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 85
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->getInstance()Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->setOnApplyWindowInsetsListener(Landroid/app/Activity;)V

    return-void
.end method

.method public setFullScreen(Landroid/app/Activity;)V
    .locals 2

    .line 23
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-lt v0, v1, :cond_2

    .line 24
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->isMimu()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/bianfeng/gongxiang/screenlib/XiaoMiUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 25
    invoke-direct {p0, p1}, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->setFullScreenV28(Landroid/app/Activity;)V

    goto/16 :goto_1

    .line 26
    :cond_0
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->isMimu()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 27
    invoke-direct {p0, p1}, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->setFullScreenV12(Landroid/app/Activity;)V

    goto :goto_1

    .line 29
    :cond_1
    invoke-direct {p0, p1}, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->setFullScreenV28(Landroid/app/Activity;)V

    goto :goto_1

    .line 32
    :cond_2
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->isHuaWei()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-static {p1}, Lcom/bianfeng/gongxiang/screenlib/HuaWeiUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 33
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/gongxiang/screenlib/HuaWeiUtils;->setFullScreenWindowLayoutInDisplayCutout(Landroid/view/Window;)V

    goto :goto_0

    .line 34
    :cond_3
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->isMimu()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {p1}, Lcom/bianfeng/gongxiang/screenlib/XiaoMiUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 35
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/gongxiang/screenlib/XiaoMiUtils;->setFullScreenWindowLayoutInDisplayCutout(Landroid/view/Window;)V

    .line 36
    :cond_4
    :goto_0
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->isMeizu()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-static {p1}, Lcom/bianfeng/gongxiang/screenlib/FlymeUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 37
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/gongxiang/screenlib/FlymeUtils;->setFullScreenWindowLayoutInDisplayCutout(Landroid/view/Window;)V

    goto :goto_1

    .line 38
    :cond_5
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->isVivo()Z

    move-result v0

    if-eqz v0, :cond_6

    invoke-static {p1}, Lcom/bianfeng/gongxiang/screenlib/VivoAndOppoUtils;->hasVivoNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 39
    invoke-static {p1}, Lcom/bianfeng/gongxiang/screenlib/VivoAndOppoUtils;->hasOppoNotch(Landroid/content/Context;)Z

    goto :goto_1

    .line 40
    :cond_6
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->isOppo()Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-static {p1}, Lcom/bianfeng/gongxiang/screenlib/VivoAndOppoUtils;->hasOppoNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 41
    invoke-static {p1}, Lcom/bianfeng/gongxiang/screenlib/VivoAndOppoUtils;->hasVivoNotch(Landroid/content/Context;)Z

    goto :goto_1

    .line 43
    :cond_7
    invoke-direct {p0, p1}, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->setFullScreenV12(Landroid/app/Activity;)V

    :goto_1
    return-void
.end method
