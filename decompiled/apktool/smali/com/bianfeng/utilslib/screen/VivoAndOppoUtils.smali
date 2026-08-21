.class public Lcom/bianfeng/utilslib/screen/VivoAndOppoUtils;
.super Ljava/lang/Object;
.source "VivoAndOppoUtils.java"


# static fields
.field public static final VIVO_FILLET:I = 0x8

.field public static final VIVO_NOTCH:I = 0x20


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static hasOppoNotch(Landroid/content/Context;)Z
    .locals 1

    .line 46
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const-string v0, "com.oppo.feature.screen.heteromorphism"

    invoke-virtual {p0, v0}, Landroid/content/pm/PackageManager;->hasSystemFeature(Ljava/lang/String;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    const/4 p0, 0x0

    return p0
.end method

.method public static hasVivoNotch(Landroid/content/Context;)Z
    .locals 6

    const-string v0, "VivoAndOppoUtils"

    const/4 v1, 0x0

    .line 22
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p0

    const-string v2, "android.util.FtFeature"

    .line 23
    invoke-virtual {p0, v2}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    const-string v2, "isFeatureSupport"

    const/4 v3, 0x1

    new-array v4, v3, [Ljava/lang/Class;

    .line 24
    sget-object v5, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v5, v4, v1

    invoke-virtual {p0, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v3, v3, [Ljava/lang/Object;

    const/16 v4, 0x20

    .line 25
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v1

    invoke-virtual {v2, p0, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    .line 31
    :catch_0
    :try_start_1
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p0

    const-string v2, "hasNotchAtVivo Exception"

    invoke-virtual {p0, v0, v2}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    .line 29
    :catch_1
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p0

    const-string v2, "hasNotchAtVivo NoSuchMethodException"

    invoke-virtual {p0, v0, v2}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    .line 27
    :catch_2
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p0

    const-string v2, "hasNotchAtVivo ClassNotFoundException"

    invoke-virtual {p0, v0, v2}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    return v1
.end method
