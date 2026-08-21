.class public Lcom/bianfeng/utilslib/SystemUtil;
.super Ljava/lang/Object;
.source "SystemUtil.java"


# static fields
.field private static util:Lcom/bianfeng/utilslib/SystemUtil;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static createTransactionId()Ljava/lang/String;
    .locals 4

    .line 39
    invoke-static {}, Lcom/bianfeng/utilslib/SignMd5Utils;->getInstance()Lcom/bianfeng/utilslib/SignMd5Utils;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/utilslib/SystemUtil;->getUuid()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const/4 v2, 0x3

    invoke-static {v2}, Lcom/bianfeng/utilslib/SystemUtil;->getRandom(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/SignMd5Utils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getInstance()Lcom/bianfeng/utilslib/SystemUtil;
    .locals 1

    .line 19
    sget-object v0, Lcom/bianfeng/utilslib/SystemUtil;->util:Lcom/bianfeng/utilslib/SystemUtil;

    if-nez v0, :cond_0

    .line 20
    new-instance v0, Lcom/bianfeng/utilslib/SystemUtil;

    invoke-direct {v0}, Lcom/bianfeng/utilslib/SystemUtil;-><init>()V

    sput-object v0, Lcom/bianfeng/utilslib/SystemUtil;->util:Lcom/bianfeng/utilslib/SystemUtil;

    .line 22
    :cond_0
    sget-object v0, Lcom/bianfeng/utilslib/SystemUtil;->util:Lcom/bianfeng/utilslib/SystemUtil;

    return-object v0
.end method

.method public static getRandom(I)Ljava/lang/String;
    .locals 7

    const-string v0, ""

    const/4 v1, 0x0

    :goto_0
    if-ge v1, p0, :cond_0

    .line 51
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v3

    const-wide/high16 v5, 0x4024000000000000L    # 10.0

    mul-double v3, v3, v5

    double-to-int v0, v3

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method private static getUuid()Ljava/lang/String;
    .locals 3

    .line 44
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "-"

    const-string v2, ""

    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public getSystemCurrentTime()Ljava/lang/String;
    .locals 3

    .line 26
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public hideVirtualKey(Landroid/app/Activity;)V
    .locals 3

    .line 30
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    const/16 v2, 0xb

    if-le v0, v2, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v1, :cond_0

    .line 31
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 32
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_1

    const/16 v0, 0x1006

    .line 34
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    :cond_1
    :goto_0
    return-void
.end method
