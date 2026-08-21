.class Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;
.super Ljava/lang/Object;
.source "NotchScreenUtils.java"


# static fields
.field private static notchScreenUtils:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;


# instance fields
.field private size:I


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 46
    iput v0, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->size:I

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;)I
    .locals 0

    .line 19
    iget p0, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->size:I

    return p0
.end method

.method static synthetic access$002(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;I)I
    .locals 0

    .line 19
    iput p1, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->size:I

    return p1
.end method

.method static synthetic access$100(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;Landroid/app/Activity;)Z
    .locals 0

    .line 19
    invoke-direct {p0, p1}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->isLand(Landroid/app/Activity;)Z

    move-result p0

    return p0
.end method

.method private getActivityOrientation(Landroid/app/Activity;)I
    .locals 2

    .line 100
    :try_start_0
    invoke-virtual {p1}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 101
    invoke-virtual {p1}, Landroid/app/Activity;->getComponentName()Landroid/content/ComponentName;

    move-result-object p1

    const/16 v1, 0x80

    invoke-virtual {v0, p1, v1}, Landroid/content/pm/PackageManager;->getActivityInfo(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;

    move-result-object p1

    .line 102
    iget p1, p1, Landroid/content/pm/ActivityInfo;->screenOrientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 105
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method

.method public static getInstance()Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;
    .locals 1

    .line 26
    sget-object v0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->notchScreenUtils:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    if-nez v0, :cond_0

    .line 27
    new-instance v0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    invoke-direct {v0}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->notchScreenUtils:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    .line 29
    :cond_0
    sget-object v0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->notchScreenUtils:Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;

    return-object v0
.end method

.method private getStatusBarHeight(Landroid/app/Activity;)I
    .locals 3

    .line 111
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->isMeizu()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/bianfeng/gongxiang/screenlib/FlymeUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 112
    invoke-static {p1}, Lcom/bianfeng/gongxiang/screenlib/FlymeUtils;->getNotHeight(Landroid/content/Context;)I

    move-result p1

    return p1

    .line 114
    :cond_0
    invoke-virtual {p1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    const-string v0, "status_bar_height"

    const-string v1, "dimen"

    const-string v2, "android"

    .line 115
    invoke-virtual {p1, v0, v1, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 116
    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p1

    return p1
.end method

.method private isLand(Landroid/app/Activity;)Z
    .locals 1

    .line 94
    invoke-direct {p0, p1}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->getActivityOrientation(Landroid/app/Activity;)I

    move-result v0

    .line 95
    invoke-virtual {p1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    const/4 p1, 0x2

    if-ne v0, p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method


# virtual methods
.method public getNotSize()I
    .locals 1

    .line 43
    iget v0, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->size:I

    return v0
.end method

.method public setOnApplyWindowInsetsListener(Landroid/app/Activity;)V
    .locals 3

    .line 48
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/RomUtils;->isVivo()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 49
    iput v1, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->size:I

    return-void

    .line 52
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1a

    if-ge v0, v2, :cond_1

    .line 53
    iput v1, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->size:I

    return-void

    .line 56
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-ge v0, v1, :cond_2

    .line 57
    invoke-direct {p0, p1}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->getStatusBarHeight(Landroid/app/Activity;)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;->size:I

    return-void

    .line 60
    :cond_2
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils$1;-><init>(Lcom/bianfeng/gongxiang/screenlib/NotchScreenUtils;Landroid/app/Activity;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnApplyWindowInsetsListener(Landroid/view/View$OnApplyWindowInsetsListener;)V

    return-void
.end method
