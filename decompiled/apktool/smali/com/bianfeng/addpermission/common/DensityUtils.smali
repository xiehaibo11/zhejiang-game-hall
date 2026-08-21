.class public Lcom/bianfeng/addpermission/common/DensityUtils;
.super Ljava/lang/Object;
.source "DensityUtils.java"


# static fields
.field private static appDisplayMetrics:Landroid/util/DisplayMetrics;

.field public static targetDensity:F


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getTargetDensity()F
    .locals 1

    .line 72
    sget v0, Lcom/bianfeng/addpermission/common/DensityUtils;->targetDensity:F

    return v0
.end method

.method public static isPortrait(Landroid/app/Activity;)Z
    .locals 4

    const/4 v0, 0x0

    .line 77
    :try_start_0
    invoke-virtual {p0}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    .line 78
    new-instance v2, Landroid/content/ComponentName;

    const-string v3, "com.bianfeng.addpermission.ui.AddPermissionActivity"

    invoke-direct {v2, p0, v3}, Landroid/content/ComponentName;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    const/16 p0, 0x80

    .line 79
    invoke-virtual {v1, v2, p0}, Landroid/content/pm/PackageManager;->getActivityInfo(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;

    move-result-object p0

    .line 80
    iget p0, p0, Landroid/content/pm/ActivityInfo;->screenOrientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x1

    if-ne p0, v1, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0

    :catch_0
    move-exception p0

    .line 83
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method private static setAppOrientation(Landroid/app/Activity;)V
    .locals 3

    .line 45
    invoke-virtual {p0}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/addpermission/common/DensityUtils;->appDisplayMetrics:Landroid/util/DisplayMetrics;

    .line 46
    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    .line 47
    sget-object v1, Lcom/bianfeng/addpermission/common/DensityUtils;->appDisplayMetrics:Landroid/util/DisplayMetrics;

    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 48
    invoke-static {p0}, Lcom/bianfeng/addpermission/common/DensityUtils;->isPortrait(Landroid/app/Activity;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 49
    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result v0

    int-to-float v0, v0

    const/high16 v1, 0x43b40000    # 360.0f

    div-float/2addr v0, v1

    .line 50
    sput v0, Lcom/bianfeng/addpermission/common/DensityUtils;->targetDensity:F

    goto :goto_0

    .line 52
    :cond_0
    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result v0

    int-to-float v0, v0

    const/high16 v1, 0x44200000    # 640.0f

    div-float/2addr v0, v1

    .line 53
    sput v0, Lcom/bianfeng/addpermission/common/DensityUtils;->targetDensity:F

    .line 55
    :goto_0
    sget v0, Lcom/bianfeng/addpermission/common/DensityUtils;->targetDensity:F

    sget-object v1, Lcom/bianfeng/addpermission/common/DensityUtils;->appDisplayMetrics:Landroid/util/DisplayMetrics;

    iget v1, v1, Landroid/util/DisplayMetrics;->scaledDensity:F

    sget-object v2, Lcom/bianfeng/addpermission/common/DensityUtils;->appDisplayMetrics:Landroid/util/DisplayMetrics;

    iget v2, v2, Landroid/util/DisplayMetrics;->density:F

    div-float/2addr v1, v2

    mul-float v0, v0, v1

    const/high16 v1, 0x43200000    # 160.0f

    .line 56
    sget v2, Lcom/bianfeng/addpermission/common/DensityUtils;->targetDensity:F

    mul-float v2, v2, v1

    float-to-int v1, v2

    .line 61
    invoke-virtual {p0}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    .line 62
    sget v2, Lcom/bianfeng/addpermission/common/DensityUtils;->targetDensity:F

    iput v2, p0, Landroid/util/DisplayMetrics;->density:F

    .line 63
    iput v0, p0, Landroid/util/DisplayMetrics;->scaledDensity:F

    .line 64
    iput v1, p0, Landroid/util/DisplayMetrics;->densityDpi:I

    return-void
.end method

.method public static setDefault(Landroid/app/Activity;)V
    .locals 0

    .line 24
    invoke-static {p0}, Lcom/bianfeng/addpermission/common/DensityUtils;->setAppOrientation(Landroid/app/Activity;)V

    return-void
.end method

.method public static setOrientation(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 0

    .line 33
    invoke-static {p0}, Lcom/bianfeng/addpermission/common/DensityUtils;->setAppOrientation(Landroid/app/Activity;)V

    return-void
.end method

.method public static setWidth(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method
