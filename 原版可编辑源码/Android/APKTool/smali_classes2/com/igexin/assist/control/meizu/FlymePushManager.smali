.class public Lcom/igexin/assist/control/meizu/FlymePushManager;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/assist/control/AbstractPushManager;


# static fields
.field public static final MEIZU_VERSION:Ljava/lang/String; = "4.1.4"

.field public static final PLUGIN_VERSION:Ljava/lang/String; = "1.1.4"

.field public static final TAG:Ljava/lang/String; = "Assist_MZ"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 4

    const-string v0, "MZ_"

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v1, ""

    iput-object v1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->a:Ljava/lang/String;

    iput-object v1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->b:Ljava/lang/String;

    :try_start_0
    const-string v2, "Assist_MZ"

    const-string v3, "meizu plugin version = 1.1.4, meizu sdk version = 4.1.4"

    invoke-static {v2, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    const/16 v3, 0x80

    invoke-virtual {v2, p1, v3}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object p1

    iget-object v2, p1, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v3, "MEIZUPUSH_APPID"

    invoke-virtual {v2, v3}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->a:Ljava/lang/String;

    invoke-virtual {v2, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->a:Ljava/lang/String;

    iget-object p1, p1, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v2, "MEIZUPUSH_APPKEY"

    invoke-virtual {p1, v2}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    iput-object p1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->b:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->b:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private static a()Z
    .locals 6

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "meizu"

    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x1

    if-nez v1, :cond_1

    const-string v1, "22c4185e"

    sget-object v3, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v1, "android.os.SystemProperties"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v3, "get"

    new-array v4, v2, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v0

    invoke-virtual {v1, v3, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    new-array v4, v2, [Ljava/lang/Object;

    const-string v5, "ro.meizu.product.model"

    aput-object v5, v4, v0

    invoke-virtual {v3, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    xor-int/2addr v0, v2

    return v0

    :cond_1
    :goto_0
    return v2

    :catchall_0
    return v0
.end method

.method public static checkMZDevice(Landroid/content/Context;)Z
    .locals 6

    const-string p0, ""

    const-string v0, "Flyme OS"

    const/4 v1, 0x0

    :try_start_0
    invoke-static {}, Lcom/igexin/assist/control/meizu/FlymePushManager;->a()Z

    move-result v2

    if-eqz v2, :cond_3

    sget-object v2, Landroid/os/Build;->DISPLAY:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x1

    if-nez v3, :cond_2

    invoke-virtual {v2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const-string v5, "Flyme"

    if-nez v3, :cond_0

    :try_start_1
    invoke-virtual {v2, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v3, :cond_2

    :cond_0
    :try_start_2
    invoke-virtual {v2, v0, p0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v5, p0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p0

    const-string v0, "\\."

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    aget-object p0, p0, v1

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const/4 v0, 0x5

    if-lt p0, v0, :cond_1

    move v1, v4

    :cond_1
    return v1

    :catchall_0
    :cond_2
    return v4

    :catchall_1
    :cond_3
    return v1
.end method


# virtual methods
.method public getToken(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    invoke-static {p1}, Lcom/meizu/cloud/pushsdk/PushManager;->getPushId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public register(Landroid/content/Context;)V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "Assist_MZ"

    if-nez v0, :cond_1

    :try_start_1
    iget-object v0, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Register meizupush, pkg = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->b:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/meizu/cloud/pushsdk/PushManager;->register(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    :goto_0
    const-string p1, "Register meizupush appId not find"

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :goto_1
    return-void
.end method

.method public setSilentTime(Landroid/content/Context;II)V
    .locals 0

    return-void
.end method

.method public turnOffPush(Landroid/content/Context;)V
    .locals 4

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {p1}, Lcom/meizu/cloud/pushsdk/PushManager;->getPushId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->a:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_0

    :cond_1
    iget-object v1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->b:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-static {p1, v1, v2, v0, v3}, Lcom/meizu/cloud/pushsdk/PushManager;->switchPush(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_2
    :goto_0
    return-void
.end method

.method public turnOnPush(Landroid/content/Context;)V
    .locals 4

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {p1}, Lcom/meizu/cloud/pushsdk/PushManager;->getPushId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->a:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_0

    :cond_1
    iget-object v1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->b:Ljava/lang/String;

    const/4 v3, 0x1

    invoke-static {p1, v1, v2, v0, v3}, Lcom/meizu/cloud/pushsdk/PushManager;->switchPush(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_2
    :goto_0
    return-void
.end method

.method public unregister(Landroid/content/Context;)V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "Assist_MZ"

    if-nez v0, :cond_1

    :try_start_1
    iget-object v0, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "|Unregister meizupush"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/igexin/assist/control/meizu/FlymePushManager;->b:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/meizu/cloud/pushsdk/PushManager;->unRegister(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    :goto_0
    const-string p1, "|Unregister meizupush appId not find"

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :goto_1
    return-void
.end method
