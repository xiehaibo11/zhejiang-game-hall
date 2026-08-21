.class public final Lcom/kwad/sdk/utils/al;
.super Ljava/lang/Object;


# static fields
.field private static aIT:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private static aIU:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static aIV:Ljava/lang/reflect/Method;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/kwad/sdk/utils/al;->aIU:Ljava/util/Set;

    const-string v1, "android.permission.REQUEST_INSTALL_PACKAGES"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/utils/al;->aIU:Ljava/util/Set;

    const-string v1, "android.permission.WRITE_SETTINGS"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/utils/al;->aIU:Ljava/util/Set;

    const-string v1, "android.permission.SYSTEM_ALERT_WINDOW"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static ao(Landroid/content/Context;Ljava/lang/String;)I
    .locals 3

    sget-object v0, Lcom/kwad/sdk/utils/al;->aIT:Ljava/util/Map;

    if-nez v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/utils/aj;->cp(Landroid/content/Context;)[Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/al;->h([Ljava/lang/String;)V

    :cond_0
    sget-object v0, Lcom/kwad/sdk/utils/al;->aIU:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, -0x2

    if-eqz v0, :cond_1

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/al;->ap(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    if-eq v0, v1, :cond_1

    return v0

    :cond_1
    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/al;->aq(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    if-eq v0, v1, :cond_2

    return v0

    :cond_2
    :try_start_0
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v1

    invoke-static {}, Landroid/os/Process;->myUid()I

    move-result v2

    invoke-virtual {p0, p1, v1, v2}, Landroid/content/Context;->checkPermission(Ljava/lang/String;II)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    return v0
.end method

.method private static ap(Landroid/content/Context;Ljava/lang/String;)I
    .locals 6

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    const v1, -0x7be1381d

    const/4 v2, 0x2

    const/4 v3, 0x1

    const/4 v4, 0x0

    const/4 v5, -0x1

    if-eq v0, v1, :cond_2

    const v1, -0x5d1492dd

    if-eq v0, v1, :cond_1

    const v1, 0x69eee241

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "android.permission.REQUEST_INSTALL_PACKAGES"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p1, v4

    goto :goto_1

    :cond_1
    const-string v0, "android.permission.SYSTEM_ALERT_WINDOW"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p1, v2

    goto :goto_1

    :cond_2
    const-string v0, "android.permission.WRITE_SETTINGS"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p1, v3

    goto :goto_1

    :cond_3
    :goto_0
    move p1, v5

    :goto_1
    if-eqz p1, :cond_7

    const/16 v0, 0x17

    if-eq p1, v3, :cond_6

    if-eq p1, v2, :cond_4

    goto :goto_2

    :cond_4
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt p1, v0, :cond_8

    :try_start_0
    invoke-static {p0}, Landroid/provider/Settings;->canDrawOverlays(Landroid/content/Context;)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_5

    goto :goto_3

    :cond_5
    move v4, v5

    goto :goto_3

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    goto :goto_2

    :cond_6
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt p1, v0, :cond_8

    :try_start_1
    invoke-static {p0}, Landroid/provider/Settings$System;->canWrite(Landroid/content/Context;)Z

    move-result p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p0, :cond_5

    goto :goto_3

    :cond_7
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x1a

    if-lt p1, v0, :cond_8

    invoke-static {p0}, Lcom/kwad/sdk/utils/aj;->co(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_5

    goto :goto_3

    :catchall_1
    :cond_8
    :goto_2
    const/4 v4, -0x2

    :goto_3
    return v4
.end method

.method private static aq(Landroid/content/Context;Ljava/lang/String;)I
    .locals 8

    sget-object v0, Lcom/kwad/sdk/utils/al;->aIT:Ljava/util/Map;

    const/4 v1, -0x2

    if-eqz v0, :cond_6

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    const/4 v3, 0x0

    if-ge v0, v2, :cond_1

    return v3

    :cond_1
    sget-object v0, Lcom/kwad/sdk/utils/al;->aIT:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    return v1

    :cond_2
    :try_start_0
    sget-object v0, Lcom/kwad/sdk/utils/al;->aIT:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    if-nez p1, :cond_3

    return v1

    :cond_3
    sget-object v0, Lcom/kwad/sdk/utils/al;->aIV:Ljava/lang/reflect/Method;

    const/4 v1, 0x2

    const/4 v2, 0x3

    const/4 v4, 0x1

    if-nez v0, :cond_4

    const-class v0, Landroid/app/AppOpsManager;

    const-string v5, "checkOp"

    new-array v6, v2, [Ljava/lang/Class;

    sget-object v7, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v7, v6, v3

    sget-object v7, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v7, v6, v4

    const-class v7, Ljava/lang/String;

    aput-object v7, v6, v1

    invoke-virtual {v0, v5, v6}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/utils/al;->aIV:Ljava/lang/reflect/Method;

    invoke-virtual {v0, v4}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    :cond_4
    const-string v0, "appops"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/AppOpsManager;

    sget-object v5, Lcom/kwad/sdk/utils/al;->aIV:Ljava/lang/reflect/Method;

    new-array v2, v2, [Ljava/lang/Object;

    aput-object p1, v2, v3

    invoke-static {}, Landroid/os/Binder;->getCallingUid()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v2, v4

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    aput-object p0, v2, v1

    invoke-virtual {v5, v0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_5

    return v3

    :cond_5
    const/4 p0, -0x1

    return p0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return v3

    :cond_6
    :goto_0
    return v1
.end method

.method public static cq(Landroid/content/Context;)Z
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v1, "accessibility_enabled"

    invoke-static {p0, v1}, Landroid/provider/Settings$Secure;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move p0, v0

    :goto_0
    const/4 v1, 0x1

    if-ne p0, v1, :cond_0

    return v1

    :cond_0
    return v0
.end method

.method private static fD(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "."

    invoke-virtual {p0, v0}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v0

    if-gez v0, :cond_1

    return-object p0

    :cond_1
    add-int/lit8 v0, v0, 0x1

    :try_start_0
    invoke-virtual {p0, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object p0
.end method

.method private static h([Ljava/lang/String;)V
    .locals 6

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_2

    if-nez p0, :cond_0

    goto :goto_2

    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/utils/al;->aIT:Ljava/util/Map;

    array-length v0, p0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_2

    aget-object v2, p0, v1

    invoke-static {v2}, Lcom/kwad/sdk/utils/al;->fD(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "OP_"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    :try_start_0
    const-class v4, Landroid/app/AppOpsManager;

    invoke-static {v4, v3}, Lcom/kwad/sdk/utils/s;->c(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    if-gez v3, :cond_1

    goto :goto_1

    :cond_1
    sget-object v4, Lcom/kwad/sdk/utils/al;->aIT:Ljava/util/Map;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {v4, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    :goto_2
    return-void
.end method
