.class public Lcom/bianfeng/utilslib/screen/NotchScreenUtils;
.super Ljava/lang/Object;
.source "NotchScreenUtils.java"


# static fields
.field private static notchScreenUtils:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;


# instance fields
.field private size:I


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 38
    iput v0, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->size:I

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/utilslib/screen/NotchScreenUtils;)I
    .locals 0

    .line 19
    iget p0, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->size:I

    return p0
.end method

.method static synthetic access$002(Lcom/bianfeng/utilslib/screen/NotchScreenUtils;I)I
    .locals 0

    .line 19
    iput p1, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->size:I

    return p1
.end method

.method public static getInstance()Lcom/bianfeng/utilslib/screen/NotchScreenUtils;
    .locals 1

    .line 24
    sget-object v0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->notchScreenUtils:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    if-nez v0, :cond_0

    .line 25
    new-instance v0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    invoke-direct {v0}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->notchScreenUtils:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    .line 27
    :cond_0
    sget-object v0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->notchScreenUtils:Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    return-object v0
.end method

.method private getStatusBarHeight(Landroid/app/Activity;)I
    .locals 3

    .line 85
    invoke-static {}, Lcom/bianfeng/utilslib/screen/RomUtils;->isMeizu()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/FlymeUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 86
    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/FlymeUtils;->getNotHeight(Landroid/content/Context;)I

    move-result p1

    return p1

    .line 88
    :cond_0
    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/XiaoMiUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/HuaWeiUtils;->hasNotch(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/VivoAndOppoUtils;->hasOppoNotch(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p1}, Lcom/bianfeng/utilslib/screen/VivoAndOppoUtils;->hasVivoNotch(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    return p1

    .line 89
    :cond_2
    :goto_0
    invoke-virtual {p1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    const-string v0, "status_bar_height"

    const-string v1, "dimen"

    const-string v2, "android"

    .line 90
    invoke-virtual {p1, v0, v1, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 91
    invoke-virtual {p1, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p1

    return p1
.end method


# virtual methods
.method public getNotSize()I
    .locals 1

    .line 35
    iget v0, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->size:I

    return v0
.end method

.method public setOnApplyWindowInsetsListener(Landroid/app/Activity;)V
    .locals 3

    .line 40
    invoke-static {}, Lcom/bianfeng/utilslib/screen/RomUtils;->isVivo()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 41
    iput v1, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->size:I

    return-void

    .line 44
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1a

    if-ge v0, v2, :cond_1

    .line 45
    iput v1, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->size:I

    return-void

    .line 48
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-ge v0, v1, :cond_2

    .line 49
    invoke-direct {p0, p1}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->getStatusBarHeight(Landroid/app/Activity;)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->size:I

    return-void

    .line 52
    :cond_2
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    new-instance v0, Lcom/bianfeng/utilslib/screen/NotchScreenUtils$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils$1;-><init>(Lcom/bianfeng/utilslib/screen/NotchScreenUtils;)V

    invoke-virtual {p1, v0}, Landroid/view/View;->setOnApplyWindowInsetsListener(Landroid/view/View$OnApplyWindowInsetsListener;)V

    return-void
.end method
