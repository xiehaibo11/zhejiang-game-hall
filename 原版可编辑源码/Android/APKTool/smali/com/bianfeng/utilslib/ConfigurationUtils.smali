.class public Lcom/bianfeng/utilslib/ConfigurationUtils;
.super Ljava/lang/Object;
.source "ConfigurationUtils.java"


# static fields
.field private static utils:Lcom/bianfeng/utilslib/ConfigurationUtils;


# instance fields
.field private mHeight:I

.field private mWidth:I

.field private orientation:I


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/utilslib/ConfigurationUtils;
    .locals 1

    .line 25
    sget-object v0, Lcom/bianfeng/utilslib/ConfigurationUtils;->utils:Lcom/bianfeng/utilslib/ConfigurationUtils;

    if-nez v0, :cond_0

    .line 26
    new-instance v0, Lcom/bianfeng/utilslib/ConfigurationUtils;

    invoke-direct {v0}, Lcom/bianfeng/utilslib/ConfigurationUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/utilslib/ConfigurationUtils;->utils:Lcom/bianfeng/utilslib/ConfigurationUtils;

    .line 28
    :cond_0
    sget-object v0, Lcom/bianfeng/utilslib/ConfigurationUtils;->utils:Lcom/bianfeng/utilslib/ConfigurationUtils;

    return-object v0
.end method


# virtual methods
.method public getHeight()I
    .locals 1

    .line 68
    iget v0, p0, Lcom/bianfeng/utilslib/ConfigurationUtils;->mHeight:I

    return v0
.end method

.method public getWidth()I
    .locals 1

    .line 64
    iget v0, p0, Lcom/bianfeng/utilslib/ConfigurationUtils;->mWidth:I

    return v0
.end method

.method public isLand()Z
    .locals 2

    .line 78
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/bianfeng/utilslib/ConfigurationUtils;->orientation:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "---\u5c4f\u5e55"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymnsdk"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 79
    iget v0, p0, Lcom/bianfeng/utilslib/ConfigurationUtils;->orientation:I

    if-eqz v0, :cond_1

    const/4 v1, 0x6

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public isLand(Landroid/app/Activity;)Z
    .locals 2

    .line 72
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getActivityOrientation(Landroid/app/Activity;)I

    move-result p1

    .line 73
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "---\u5c4f\u5e55"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymnsdk"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_1

    const/4 v0, 0x6

    if-ne p1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    :goto_1
    return p1
.end method

.method public onInit(Landroid/app/Activity;)V
    .locals 1

    .line 36
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getActivityOrientation(Landroid/app/Activity;)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/utilslib/ConfigurationUtils;->orientation:I

    return-void
.end method

.method public onWindowFocusChanged(ZLandroid/app/Activity;)V
    .locals 3

    .line 42
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/bianfeng/utilslib/AppConfigUtils;->getActivityOrientation(Landroid/app/Activity;)I

    move-result p1

    .line 43
    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    const-string v1, "window"

    .line 44
    invoke-virtual {p2, v1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/WindowManager;

    .line 45
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x11

    if-lt v1, v2, :cond_0

    .line 46
    invoke-interface {p2}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p2

    invoke-virtual {p2, v0}, Landroid/view/Display;->getRealMetrics(Landroid/util/DisplayMetrics;)V

    goto :goto_0

    .line 48
    :cond_0
    invoke-interface {p2}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p2

    invoke-virtual {p2, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 50
    :goto_0
    iget p2, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 51
    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    const/4 v1, 0x6

    if-eq p1, v1, :cond_4

    if-nez p1, :cond_1

    goto :goto_3

    :cond_1
    if-ge p2, v0, :cond_2

    move p1, p2

    goto :goto_1

    :cond_2
    move p1, v0

    .line 57
    :goto_1
    iput p1, p0, Lcom/bianfeng/utilslib/ConfigurationUtils;->mWidth:I

    if-le p2, v0, :cond_3

    goto :goto_2

    :cond_3
    move p2, v0

    .line 58
    :goto_2
    iput p2, p0, Lcom/bianfeng/utilslib/ConfigurationUtils;->mHeight:I

    goto :goto_6

    :cond_4
    :goto_3
    if-le p2, v0, :cond_5

    move p1, p2

    goto :goto_4

    :cond_5
    move p1, v0

    .line 54
    :goto_4
    iput p1, p0, Lcom/bianfeng/utilslib/ConfigurationUtils;->mWidth:I

    if-ge p2, v0, :cond_6

    goto :goto_5

    :cond_6
    move p2, v0

    .line 55
    :goto_5
    iput p2, p0, Lcom/bianfeng/utilslib/ConfigurationUtils;->mHeight:I

    :goto_6
    return-void
.end method
