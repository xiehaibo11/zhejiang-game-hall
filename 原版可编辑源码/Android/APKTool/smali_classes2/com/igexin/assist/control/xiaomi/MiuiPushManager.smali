.class public Lcom/igexin/assist/control/xiaomi/MiuiPushManager;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/assist/control/AbstractPushManager;


# static fields
.field public static final PLUGIN_VERSION:Ljava/lang/String; = "1.2.0"

.field public static final TAG:Ljava/lang/String; = "Assist_XM"

.field public static final XIAOMI_VERSION:Ljava/lang/String; = "4.9.0"

.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    sput-object v0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 4

    const-string v0, "XM_"

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v1, ""

    iput-object v1, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->b:Ljava/lang/String;

    iput-object v1, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->c:Ljava/lang/String;

    :try_start_0
    const-string v2, "Assist_XM"

    const-string v3, "xiaomi plugin version = 1.2.0, xiaomi sdk version = 4.9.0"

    invoke-static {v2, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    const/16 v3, 0x80

    invoke-virtual {v2, p1, v3}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object p1

    iget-object v2, p1, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v3, "MIPUSH_APPID"

    invoke-virtual {v2, v3}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->b:Ljava/lang/String;

    invoke-virtual {v2, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->b:Ljava/lang/String;

    iget-object p1, p1, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v2, "MIPUSH_APPKEY"

    invoke-virtual {p1, v2}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    iput-object p1, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->c:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->c:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getprop "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/Runtime;->exec(Ljava/lang/String;)Ljava/lang/Process;

    move-result-object p0

    new-instance v1, Ljava/io/BufferedReader;

    new-instance v2, Ljava/io/InputStreamReader;

    invoke-virtual {p0}, Ljava/lang/Process;->getInputStream()Ljava/io/InputStream;

    move-result-object p0

    invoke-direct {v2, p0}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    const/16 p0, 0x400

    invoke-direct {v1, v2, p0}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {v1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-object p0

    :catchall_0
    move-exception p0

    move-object v0, v1

    goto :goto_1

    :catchall_1
    move-exception p0

    :goto_1
    if-eqz v0, :cond_0

    :try_start_3
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_2

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    :cond_0
    :goto_2
    throw p0

    :catch_2
    move-object v1, v0

    :catch_3
    if-eqz v1, :cond_1

    :try_start_4
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_4

    goto :goto_3

    :catch_4
    move-exception p0

    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_1
    :goto_3
    return-object v0
.end method

.method private static a()Z
    .locals 2

    const-string v0, "ro.miui.ui.version.name"

    invoke-static {v0}, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "ro.miui.ui.version.code"

    invoke-static {v1}, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

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

.method public static checkXMDevice(Landroid/content/Context;)Z
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->a()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const-string v1, "com.xiaomi.xmsf"

    invoke-virtual {p0, v1, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    if-eqz p0, :cond_0

    iget p0, p0, Landroid/content/pm/PackageInfo;->versionCode:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v1, 0x69

    if-lt p0, v1, :cond_0

    const/4 v0, 0x1

    :catchall_0
    :cond_0
    return v0
.end method


# virtual methods
.method public getToken(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    invoke-static {p1}, Lcom/xiaomi/mipush/sdk/MiPushClient;->getRegId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public register(Landroid/content/Context;)V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "Assist_XM"

    if-nez v0, :cond_1

    :try_start_1
    iget-object v0, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Register mipush, pkg = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v0, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->b:Ljava/lang/String;

    iget-object v1, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->c:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/xiaomi/mipush/sdk/MiPushClient;->registerPush(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    :goto_0
    const-string p1, "Register mipush appId or appKey is null or empty"

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :goto_1
    return-void
.end method

.method public setSilentTime(Landroid/content/Context;II)V
    .locals 6

    if-nez p3, :cond_0

    invoke-virtual {p0, p1}, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->turnOnPush(Landroid/content/Context;)V

    return-void

    :cond_0
    add-int/2addr p3, p2

    rem-int/lit8 v1, p3, 0x18

    const/4 v2, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    move-object v0, p1

    move v3, p2

    invoke-static/range {v0 .. v5}, Lcom/xiaomi/mipush/sdk/MiPushClient;->setAcceptTime(Landroid/content/Context;IIIILjava/lang/String;)V

    return-void
.end method

.method public turnOffPush(Landroid/content/Context;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->b:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/xiaomi/mipush/sdk/MiPushClient;->pausePush(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public turnOnPush(Landroid/content/Context;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/igexin/assist/control/xiaomi/MiuiPushManager;->b:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/xiaomi/mipush/sdk/MiPushClient;->resumePush(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public unregister(Landroid/content/Context;)V
    .locals 2

    :try_start_0
    const-string v0, "Assist_XM"

    const-string v1, "Unregister mipush"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {p1}, Lcom/xiaomi/mipush/sdk/MiPushClient;->unregisterPush(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
