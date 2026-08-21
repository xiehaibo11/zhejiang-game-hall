.class public Lcom/igexin/assist/sdk/a;
.super Ljava/lang/Object;


# static fields
.field private static a:I

.field private static b:I

.field private static c:I

.field private static d:I

.field private static e:I

.field private static f:I

.field private static g:I

.field private static h:I


# direct methods
.method static a(Landroid/content/Context;)Lcom/igexin/assist/control/AbstractPushManager;
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->b(Landroid/content/Context;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v2, "Assist_PM"

    if-eqz v1, :cond_0

    :try_start_1
    const-string v1, "support xm device"

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v1, "Assist_PM|MiuiPushManager checkDevice flag = true"

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v1, "com.igexin.assist.control.xiaomi.MiuiPushManager"

    invoke-static {v1, p0}, Lcom/igexin/assist/sdk/a;->a(Ljava/lang/String;Landroid/content/Context;)Lcom/igexin/assist/control/AbstractPushManager;

    move-result-object p0

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->c(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "support mz device"

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v1, "Assist_PM|FlymePushManager checkDevice flag = true"

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v1, "com.igexin.assist.control.meizu.FlymePushManager"

    invoke-static {v1, p0}, Lcom/igexin/assist/sdk/a;->a(Ljava/lang/String;Landroid/content/Context;)Lcom/igexin/assist/control/AbstractPushManager;

    move-result-object p0

    return-object p0

    :cond_1
    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->d(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v1, "support hw device"

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v1, "Assist_PM|HmsPushManager checkDevice flag = true"

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v1, "com.igexin.assist.control.huawei.HmsPushManager"

    invoke-static {v1, p0}, Lcom/igexin/assist/sdk/a;->a(Ljava/lang/String;Landroid/content/Context;)Lcom/igexin/assist/control/AbstractPushManager;

    move-result-object p0

    return-object p0

    :cond_2
    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->e(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_3

    const-string v1, "support oppo device"

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v1, "Assist_PM|OppoPushManager checkDevice flag = true"

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v1, "com.igexin.assist.control.oppo.OppoPushManager"

    invoke-static {v1, p0}, Lcom/igexin/assist/sdk/a;->a(Ljava/lang/String;Landroid/content/Context;)Lcom/igexin/assist/control/AbstractPushManager;

    move-result-object p0

    return-object p0

    :cond_3
    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->f(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_4

    const-string v1, "support vivo device"

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v1, "Assist_PM|VivoPushManager checkDevice flag = true"

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v1, "com.igexin.assist.control.vivo.VivoPushManager"

    invoke-static {v1, p0}, Lcom/igexin/assist/sdk/a;->a(Ljava/lang/String;Landroid/content/Context;)Lcom/igexin/assist/control/AbstractPushManager;

    move-result-object p0

    return-object p0

    :cond_4
    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->g(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_5

    const-string v1, "support smartisan device"

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v1, "Assist_PM|SmartisanPushManager checkDevice flag = true"

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v1, "com.igexin.assist.control.st.SmartisanPushManager"

    invoke-static {v1, p0}, Lcom/igexin/assist/sdk/a;->a(Ljava/lang/String;Landroid/content/Context;)Lcom/igexin/assist/control/AbstractPushManager;

    move-result-object p0

    return-object p0

    :cond_5
    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->h(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_6

    sget-boolean v1, Lcom/igexin/push/config/j;->u:Z

    if-eqz v1, :cond_6

    const-string v1, "Assist_PM|FcmPushManager checkDevice flag = true"

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v1, "com.igexin.assist.control.fcm.FcmPushManager"

    invoke-static {v1, p0}, Lcom/igexin/assist/sdk/a;->a(Ljava/lang/String;Landroid/content/Context;)Lcom/igexin/assist/control/AbstractPushManager;

    move-result-object p0

    return-object p0

    :cond_6
    const-string p0, "Assist_PM|getPushManager = null, setToken = false"

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object p0

    const-string v1, "false"

    invoke-virtual {p0, v1}, Lcom/igexin/push/core/b/i;->c(Ljava/lang/String;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    new-array p0, v0, [Ljava/lang/Object;

    const-string v0, "Assist_PM|OtherPushManager = null"

    invoke-static {v0, p0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 p0, 0x0

    return-object p0
.end method

.method private static a(Ljava/lang/String;Landroid/content/Context;)Lcom/igexin/assist/control/AbstractPushManager;
    .locals 4

    :try_start_0
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    const/4 v0, 0x1

    new-array v1, v0, [Ljava/lang/Class;

    const-class v2, Landroid/content/Context;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-virtual {p0, v1}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object p0

    new-array v0, v0, [Ljava/lang/Object;

    aput-object p1, v0, v3

    invoke-virtual {p0, v0}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/igexin/assist/control/AbstractPushManager;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static b(Landroid/content/Context;)Z
    .locals 6

    sget v0, Lcom/igexin/assist/sdk/a;->d:I

    and-int/lit8 v1, v0, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    and-int/lit8 p0, v0, 0x2

    if-eqz p0, :cond_0

    move v2, v3

    :cond_0
    return v2

    :cond_1
    :try_start_0
    const-string v0, "com.igexin.assist.control.xiaomi.MiuiPushManager"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "checkXMDevice"

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const/4 v1, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    aput-object p0, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_2

    sget p0, Lcom/igexin/assist/sdk/a;->d:I

    or-int/lit8 p0, p0, 0x2

    sput p0, Lcom/igexin/assist/sdk/a;->d:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    sget p0, Lcom/igexin/assist/sdk/a;->d:I

    or-int/2addr p0, v3

    sput p0, Lcom/igexin/assist/sdk/a;->d:I

    return v2
.end method

.method public static c(Landroid/content/Context;)Z
    .locals 6

    sget v0, Lcom/igexin/assist/sdk/a;->c:I

    and-int/lit8 v1, v0, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    and-int/lit8 p0, v0, 0x2

    if-eqz p0, :cond_0

    move v2, v3

    :cond_0
    return v2

    :cond_1
    :try_start_0
    const-string v0, "com.igexin.assist.control.meizu.FlymePushManager"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "checkMZDevice"

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const/4 v1, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    aput-object p0, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_2

    sget p0, Lcom/igexin/assist/sdk/a;->c:I

    or-int/lit8 p0, p0, 0x2

    sput p0, Lcom/igexin/assist/sdk/a;->c:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    sget p0, Lcom/igexin/assist/sdk/a;->c:I

    or-int/2addr p0, v3

    sput p0, Lcom/igexin/assist/sdk/a;->c:I

    return v2
.end method

.method public static d(Landroid/content/Context;)Z
    .locals 6

    sget v0, Lcom/igexin/assist/sdk/a;->a:I

    and-int/lit8 v1, v0, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    and-int/lit8 p0, v0, 0x2

    if-eqz p0, :cond_0

    move v2, v3

    :cond_0
    return v2

    :cond_1
    :try_start_0
    const-string v0, "com.igexin.assist.control.huawei.HmsPushManager"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "checkHWDevice"

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const/4 v1, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    aput-object p0, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_2

    sget p0, Lcom/igexin/assist/sdk/a;->a:I

    or-int/lit8 p0, p0, 0x2

    sput p0, Lcom/igexin/assist/sdk/a;->a:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    sget p0, Lcom/igexin/assist/sdk/a;->a:I

    or-int/2addr p0, v3

    sput p0, Lcom/igexin/assist/sdk/a;->a:I

    return v2
.end method

.method public static e(Landroid/content/Context;)Z
    .locals 6

    sget v0, Lcom/igexin/assist/sdk/a;->b:I

    and-int/lit8 v1, v0, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    and-int/lit8 p0, v0, 0x2

    if-eqz p0, :cond_0

    move v2, v3

    :cond_0
    return v2

    :cond_1
    :try_start_0
    const-string v0, "com.igexin.assist.control.oppo.OppoPushManager"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "checkOppoDevice"

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const/4 v1, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    aput-object p0, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_2

    sget p0, Lcom/igexin/assist/sdk/a;->b:I

    or-int/lit8 p0, p0, 0x2

    sput p0, Lcom/igexin/assist/sdk/a;->b:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    sget p0, Lcom/igexin/assist/sdk/a;->b:I

    or-int/2addr p0, v3

    sput p0, Lcom/igexin/assist/sdk/a;->b:I

    return v2
.end method

.method public static f(Landroid/content/Context;)Z
    .locals 6

    sget v0, Lcom/igexin/assist/sdk/a;->e:I

    and-int/lit8 v1, v0, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    and-int/lit8 p0, v0, 0x2

    if-eqz p0, :cond_0

    move v2, v3

    :cond_0
    return v2

    :cond_1
    :try_start_0
    const-string v0, "com.igexin.assist.control.vivo.VivoPushManager"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "checkVivoDevice"

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const/4 v1, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    aput-object p0, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_2

    sget p0, Lcom/igexin/assist/sdk/a;->e:I

    or-int/lit8 p0, p0, 0x2

    sput p0, Lcom/igexin/assist/sdk/a;->e:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    sget p0, Lcom/igexin/assist/sdk/a;->e:I

    or-int/2addr p0, v3

    sput p0, Lcom/igexin/assist/sdk/a;->e:I

    return v2
.end method

.method public static g(Landroid/content/Context;)Z
    .locals 6

    sget v0, Lcom/igexin/assist/sdk/a;->f:I

    and-int/lit8 v1, v0, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    and-int/lit8 p0, v0, 0x2

    if-eqz p0, :cond_0

    move v2, v3

    :cond_0
    return v2

    :cond_1
    :try_start_0
    const-string v0, "com.igexin.assist.control.st.SmartisanPushManager"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "checkSTDevice"

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const/4 v1, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    aput-object p0, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_2

    sget p0, Lcom/igexin/assist/sdk/a;->f:I

    or-int/lit8 p0, p0, 0x2

    sput p0, Lcom/igexin/assist/sdk/a;->f:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    sget p0, Lcom/igexin/assist/sdk/a;->f:I

    or-int/2addr p0, v3

    sput p0, Lcom/igexin/assist/sdk/a;->f:I

    return v2
.end method

.method public static h(Landroid/content/Context;)Z
    .locals 6

    sget v0, Lcom/igexin/assist/sdk/a;->g:I

    and-int/lit8 v1, v0, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    and-int/lit8 p0, v0, 0x2

    if-eqz p0, :cond_0

    move v2, v3

    :cond_0
    return v2

    :cond_1
    :try_start_0
    const-string v0, "com.igexin.assist.control.fcm.FcmPushManager"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "checkFcmDevice"

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const/4 v1, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    aput-object p0, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    sget p0, Lcom/igexin/assist/sdk/a;->g:I

    or-int/2addr p0, v3

    sput p0, Lcom/igexin/assist/sdk/a;->g:I

    if-eqz v2, :cond_2

    or-int/lit8 p0, p0, 0x2

    sput p0, Lcom/igexin/assist/sdk/a;->g:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    sget p0, Lcom/igexin/assist/sdk/a;->g:I

    or-int/2addr p0, v3

    sput p0, Lcom/igexin/assist/sdk/a;->g:I

    return v2
.end method

.method public static i(Landroid/content/Context;)Z
    .locals 4

    sget v0, Lcom/igexin/assist/sdk/a;->h:I

    and-int/lit8 v1, v0, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    and-int/lit8 p0, v0, 0x2

    if-eqz p0, :cond_0

    move v2, v3

    :cond_0
    return v2

    :cond_1
    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->c(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->b(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->d(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->e(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->f(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->g(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_3

    :cond_2
    move v2, v3

    :cond_3
    if-eqz v2, :cond_4

    sget p0, Lcom/igexin/assist/sdk/a;->h:I

    or-int/lit8 p0, p0, 0x2

    sput p0, Lcom/igexin/assist/sdk/a;->h:I

    :cond_4
    sget p0, Lcom/igexin/assist/sdk/a;->h:I

    or-int/2addr p0, v3

    sput p0, Lcom/igexin/assist/sdk/a;->h:I

    return v2
.end method

.method public static j(Landroid/content/Context;)V
    .locals 7

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->b(Landroid/content/Context;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x0

    const-string v3, "clearNotification"

    const/4 v4, 0x1

    if-eqz v1, :cond_0

    :try_start_1
    const-string v1, "com.xiaomi.mipush.sdk.MiPushClient"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Landroid/content/Context;

    aput-object v6, v5, v0

    invoke-virtual {v1, v3, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v3, v4, [Ljava/lang/Object;

    aput-object p0, v3, v0

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "Assist_PM | cancelAllAssistNotification() XM "

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/igexin/assist/sdk/a;->c(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "com.meizu.cloud.pushsdk.PushManager"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Landroid/content/Context;

    aput-object v6, v5, v0

    invoke-virtual {v1, v3, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v3, v4, [Ljava/lang/Object;

    aput-object p0, v3, v0

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "Assist_PM | cancelAllAssistNotification() MZ "

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Assist_PM | cancelAllAssistNotification() err "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p0, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    :goto_0
    return-void
.end method
