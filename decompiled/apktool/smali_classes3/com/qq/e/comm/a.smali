.class public Lcom/qq/e/comm/a;
.super Ljava/lang/Object;
.source ""


# direct methods
.method public static a(Landroid/content/Context;)Z
    .locals 8

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "android.permission.INTERNET"

    const-string v2, "android.permission.ACCESS_NETWORK_STATE"

    const-string v3, "android.permission.ACCESS_WIFI_STATE"

    .line 1
    filled-new-array {v1, v2, v3}, [Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    move v2, v0

    :goto_0
    const/4 v3, 0x1

    const/4 v4, 0x3

    if-ge v2, v4, :cond_1

    :try_start_1
    aget-object v4, v1, v2

    invoke-virtual {p0, v4}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result v5
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 v6, -0x1

    if-ne v5, v6, :cond_0

    const-string v1, "Permission[%s]\u9700\u8981\u5728AndroidManifest.xml\u4e2d\u58f0\u660e"

    :try_start_2
    new-array v2, v3, [Ljava/lang/Object;

    aput-object v4, v2, v0

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :catchall_0
    move-exception v1

    :try_start_3
    const-string v2, "\u68c0\u67e5\u6743\u9650\u65f6\u53d1\u751f\u5f02\u5e38"

    invoke-static {v2, v1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    move v1, v0

    goto :goto_2

    :cond_1
    move v1, v3

    :goto_2
    if-eqz v1, :cond_4

    new-array v1, v3, [Ljava/lang/Class;

    .line 2
    invoke-static {}, Lcom/qq/e/comm/constants/CustomPkgConstants;->getADActivityName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    aput-object v2, v1, v0

    invoke-static {p0, v1}, Lcom/qq/e/comm/a;->a(Landroid/content/Context;[Ljava/lang/Class;)Z

    move-result v1

    if-eqz v1, :cond_4

    new-array v1, v3, [Ljava/lang/Class;

    invoke-static {}, Lcom/qq/e/comm/constants/CustomPkgConstants;->getPortraitADActivityName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    aput-object v2, v1, v0

    invoke-static {p0, v1}, Lcom/qq/e/comm/a;->a(Landroid/content/Context;[Ljava/lang/Class;)Z

    move-result v1

    if-eqz v1, :cond_4

    new-array v1, v3, [Ljava/lang/Class;

    invoke-static {}, Lcom/qq/e/comm/constants/CustomPkgConstants;->getLandscapeADActivityName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    aput-object v2, v1, v0

    invoke-static {p0, v1}, Lcom/qq/e/comm/a;->a(Landroid/content/Context;[Ljava/lang/Class;)Z

    move-result v1

    if-eqz v1, :cond_4

    new-array v1, v3, [Ljava/lang/Class;

    invoke-static {}, Lcom/qq/e/comm/constants/CustomPkgConstants;->getDownLoadServiceName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    aput-object v2, v1, v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    move v2, v0

    :goto_3
    if-ge v2, v3, :cond_3

    .line 3
    :try_start_4
    aget-object v4, v1, v2

    new-instance v5, Landroid/content/Intent;

    invoke-direct {v5}, Landroid/content/Intent;-><init>()V

    invoke-virtual {v5, p0, v4}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v6

    const/high16 v7, 0x10000

    invoke-virtual {v6, v5, v7}, Landroid/content/pm/PackageManager;->resolveService(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;

    move-result-object v5
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-nez v5, :cond_2

    const-string p0, "Service[%s]\u9700\u8981\u5728AndroidManifest.xml\u4e2d\u58f0\u660e"

    :try_start_5
    new-array v1, v3, [Ljava/lang/Object;

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v0

    invoke-static {p0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    goto :goto_4

    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_3

    :catchall_1
    move-exception p0

    :try_start_6
    const-string v1, "\u68c0\u67e5Service\u65f6\u53d1\u751f\u5f02\u5e38"

    invoke-static {v1, p0}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :goto_4
    move p0, v0

    goto :goto_5

    :cond_3
    move p0, v3

    :goto_5
    if-eqz p0, :cond_4

    move v0, v3

    :cond_4
    return v0

    :catchall_2
    move-exception p0

    const-string v1, "\u68c0\u67e5AndroidManifest.xml\u65f6\u53d1\u751f\u5f02\u5e38"

    .line 4
    invoke-static {v1, p0}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    return v0
.end method

.method private static varargs a(Landroid/content/Context;[Ljava/lang/Class;)Z
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "[",
            "Ljava/lang/Class<",
            "*>;)Z"
        }
    .end annotation

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    :try_start_0
    array-length v2, p1

    const/4 v3, 0x1

    if-ge v1, v2, :cond_1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    aget-object v4, p1, v1

    invoke-virtual {v2, p0, v4}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v4

    const/high16 v5, 0x10000

    invoke-virtual {v4, v2, v5}, Landroid/content/pm/PackageManager;->resolveActivity(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_0

    const-string p0, "Activity[%s]\u9700\u8981\u5728AndroidManifest.xml\u4e2d\u58f0\u660e"

    :try_start_1
    new-array v2, v3, [Ljava/lang/Object;

    aget-object p1, p1, v1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v2, v0

    invoke-static {p0, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return v0

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return v3

    :catchall_0
    move-exception p0

    const-string p1, "\u68c0\u67e5Activity\u65f6\u53d1\u751f\u5f02\u5e38"

    invoke-static {p1, p0}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    return v0
.end method
