.class public Lcom/bianfeng/utilslib/DensityUtils;
.super Ljava/lang/Object;
.source "DensityUtils.java"


# static fields
.field private static utils:Lcom/bianfeng/utilslib/DensityUtils;


# instance fields
.field private appDisplayMetrics:Landroid/util/DisplayMetrics;

.field private targetDensity:F


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private checkDeviceHasNavigationBar(Landroid/app/Activity;)Z
    .locals 6

    .line 92
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    .line 93
    invoke-virtual {v0}, Landroid/view/View;->getSystemUiVisibility()I

    move-result v0

    .line 94
    invoke-static {}, Lcom/bianfeng/utilslib/Logger;->getInstance()Lcom/bianfeng/utilslib/Logger;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "----"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 95
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x1

    const/4 v2, 0x0

    const/16 v4, 0x11

    if-lt v0, v4, :cond_1

    const-string v0, "window"

    .line 96
    invoke-virtual {p1, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/view/WindowManager;

    .line 97
    invoke-interface {p1}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p1

    .line 98
    new-instance v0, Landroid/graphics/Point;

    invoke-direct {v0}, Landroid/graphics/Point;-><init>()V

    .line 99
    new-instance v4, Landroid/graphics/Point;

    invoke-direct {v4}, Landroid/graphics/Point;-><init>()V

    .line 100
    invoke-virtual {p1, v0}, Landroid/view/Display;->getSize(Landroid/graphics/Point;)V

    .line 101
    invoke-virtual {p1, v4}, Landroid/view/Display;->getRealSize(Landroid/graphics/Point;)V

    .line 102
    invoke-static {}, Lcom/bianfeng/utilslib/Logger;->getInstance()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v4, Landroid/graphics/Point;->y:I

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "--"

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v0, Landroid/graphics/Point;->y:I

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1, v3}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 103
    iget p1, v4, Landroid/graphics/Point;->y:I

    iget v0, v0, Landroid/graphics/Point;->y:I

    if-eq p1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1

    .line 105
    :cond_1
    invoke-static {p1}, Landroid/view/ViewConfiguration;->get(Landroid/content/Context;)Landroid/view/ViewConfiguration;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/ViewConfiguration;->hasPermanentMenuKey()Z

    move-result p1

    const/4 v0, 0x4

    .line 106
    invoke-static {v0}, Landroid/view/KeyCharacterMap;->deviceHasKey(I)Z

    move-result v0

    if-nez p1, :cond_3

    if-eqz v0, :cond_2

    goto :goto_1

    :cond_2
    return v1

    :cond_3
    :goto_1
    return v2
.end method

.method public static getInstance()Lcom/bianfeng/utilslib/DensityUtils;
    .locals 1

    .line 30
    sget-object v0, Lcom/bianfeng/utilslib/DensityUtils;->utils:Lcom/bianfeng/utilslib/DensityUtils;

    if-nez v0, :cond_0

    .line 31
    new-instance v0, Lcom/bianfeng/utilslib/DensityUtils;

    invoke-direct {v0}, Lcom/bianfeng/utilslib/DensityUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/utilslib/DensityUtils;->utils:Lcom/bianfeng/utilslib/DensityUtils;

    .line 33
    :cond_0
    sget-object v0, Lcom/bianfeng/utilslib/DensityUtils;->utils:Lcom/bianfeng/utilslib/DensityUtils;

    return-object v0
.end method

.method public static px2dp(Landroid/content/Context;F)I
    .locals 0

    .line 49
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F

    div-float/2addr p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method

.method private setAppOrientation(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 2

    .line 62
    invoke-virtual {p1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/utilslib/DensityUtils;->appDisplayMetrics:Landroid/util/DisplayMetrics;

    const-string v0, "cessssss"

    const-string v1, "setAppOrientation: "

    .line 63
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-string v0, "height"

    .line 64
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 65
    iget-object p2, p0, Lcom/bianfeng/utilslib/DensityUtils;->appDisplayMetrics:Landroid/util/DisplayMetrics;

    iget p2, p2, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-float p2, p2

    const/high16 v0, 0x43b40000    # 360.0f

    div-float/2addr p2, v0

    iput p2, p0, Lcom/bianfeng/utilslib/DensityUtils;->targetDensity:F

    goto :goto_0

    .line 67
    :cond_0
    iget-object p2, p0, Lcom/bianfeng/utilslib/DensityUtils;->appDisplayMetrics:Landroid/util/DisplayMetrics;

    iget p2, p2, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float p2, p2

    const/high16 v0, 0x44200000    # 640.0f

    div-float/2addr p2, v0

    iput p2, p0, Lcom/bianfeng/utilslib/DensityUtils;->targetDensity:F

    .line 70
    :goto_0
    iget p2, p0, Lcom/bianfeng/utilslib/DensityUtils;->targetDensity:F

    iget-object v0, p0, Lcom/bianfeng/utilslib/DensityUtils;->appDisplayMetrics:Landroid/util/DisplayMetrics;

    iget v0, v0, Landroid/util/DisplayMetrics;->scaledDensity:F

    iget-object v1, p0, Lcom/bianfeng/utilslib/DensityUtils;->appDisplayMetrics:Landroid/util/DisplayMetrics;

    iget v1, v1, Landroid/util/DisplayMetrics;->density:F

    div-float/2addr v0, v1

    mul-float p2, p2, v0

    const/high16 v0, 0x43200000    # 160.0f

    .line 71
    iget v1, p0, Lcom/bianfeng/utilslib/DensityUtils;->targetDensity:F

    mul-float v1, v1, v0

    float-to-int v0, v1

    .line 76
    invoke-virtual {p1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    .line 77
    iget v1, p0, Lcom/bianfeng/utilslib/DensityUtils;->targetDensity:F

    iput v1, p1, Landroid/util/DisplayMetrics;->density:F

    .line 78
    iput p2, p1, Landroid/util/DisplayMetrics;->scaledDensity:F

    .line 79
    iput v0, p1, Landroid/util/DisplayMetrics;->densityDpi:I

    return-void
.end method


# virtual methods
.method public getNavigationBarHeight(Landroid/app/Activity;)I
    .locals 3

    .line 117
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/DensityUtils;->checkDeviceHasNavigationBar(Landroid/app/Activity;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 118
    invoke-virtual {p1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    const-string v0, "navigation_bar_height"

    const-string v1, "dimen"

    const-string v2, "android"

    .line 119
    invoke-virtual {p1, v0, v1, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 120
    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public getTargetDensity()F
    .locals 1

    .line 85
    iget v0, p0, Lcom/bianfeng/utilslib/DensityUtils;->targetDensity:F

    return v0
.end method

.method public setDefault(Landroid/app/Activity;)V
    .locals 1

    const-string v0, "height"

    .line 39
    invoke-direct {p0, p1, v0}, Lcom/bianfeng/utilslib/DensityUtils;->setAppOrientation(Landroid/app/Activity;Ljava/lang/String;)V

    return-void
.end method

.method public setOrientation(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 0

    .line 44
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/utilslib/DensityUtils;->setAppOrientation(Landroid/app/Activity;Ljava/lang/String;)V

    return-void
.end method
