.class public Lcom/igexin/assist/control/huawei/HmsPushManager;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/assist/control/AbstractPushManager;


# static fields
.field public static final PLUGIN_VERSION:Ljava/lang/String; = "2.1.0"

.field public static final TAG:Ljava/lang/String; = "Assist_HW"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private final c:Ljava/lang/Object;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 3

    const-string v0, "Assist_HW"

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v1, ""

    iput-object v1, p0, Lcom/igexin/assist/control/huawei/HmsPushManager;->b:Ljava/lang/String;

    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/igexin/assist/control/huawei/HmsPushManager;->c:Ljava/lang/Object;

    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    const/16 v2, 0x80

    invoke-virtual {v1, p1, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object p1

    iget-object p1, p1, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v1, "com.huawei.hms.client.service.name:push"

    invoke-virtual {p1, v1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "huawei plugin version = 2.1.0, huawei sdk version = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {p1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/4 v2, 0x1

    aget-object p1, p1, v2

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const-string p1, "huawei plugin version = 2.1.0, not meta-data"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/igexin/assist/control/huawei/HmsPushManager;)Ljava/lang/Object;
    .locals 0

    iget-object p0, p0, Lcom/igexin/assist/control/huawei/HmsPushManager;->c:Ljava/lang/Object;

    return-object p0
.end method

.method static synthetic a(Lcom/igexin/assist/control/huawei/HmsPushManager;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    iput-object p1, p0, Lcom/igexin/assist/control/huawei/HmsPushManager;->a:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic b(Lcom/igexin/assist/control/huawei/HmsPushManager;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/igexin/assist/control/huawei/HmsPushManager;->a:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic b(Lcom/igexin/assist/control/huawei/HmsPushManager;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    iput-object p1, p0, Lcom/igexin/assist/control/huawei/HmsPushManager;->b:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic c(Lcom/igexin/assist/control/huawei/HmsPushManager;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/igexin/assist/control/huawei/HmsPushManager;->b:Ljava/lang/String;

    return-object p0
.end method

.method public static checkHWDevice(Landroid/content/Context;)Z
    .locals 6

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const-string v1, "com.huawei.hwid"

    invoke-virtual {p0, v1, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    const-string v1, "android.os.SystemProperties"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "get"

    const/4 v3, 0x1

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v0

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v4, v3, [Ljava/lang/Object;

    const-string v5, "ro.build.hw_emui_api_level"

    aput-object v5, v4, v0

    invoke-virtual {v2, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    if-eqz p0, :cond_0

    iget p0, p0, Landroid/content/pm/PackageInfo;->versionCode:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const v2, 0x1c9c380

    if-lt p0, v2, :cond_0

    const/16 p0, 0x9

    if-le v1, p0, :cond_0

    move v0, v3

    :catchall_0
    :cond_0
    return v0
.end method


# virtual methods
.method public getToken(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    iget-object p1, p0, Lcom/igexin/assist/control/huawei/HmsPushManager;->b:Ljava/lang/String;

    return-object p1
.end method

.method public register(Landroid/content/Context;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Register hmspush, pkg = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Assist_HW"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v0, Lcom/igexin/assist/control/huawei/a;

    invoke-direct {v0, p0, p1}, Lcom/igexin/assist/control/huawei/a;-><init>(Lcom/igexin/assist/control/huawei/HmsPushManager;Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/igexin/assist/control/huawei/a;->start()V

    return-void
.end method

.method public setSilentTime(Landroid/content/Context;II)V
    .locals 0

    return-void
.end method

.method public turnOffPush(Landroid/content/Context;)V
    .locals 2

    const-string v0, "Assist_HW"

    const-string v1, "turnOffPush"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-static {p1}, Lcom/huawei/hms/push/HmsMessaging;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/push/HmsMessaging;

    move-result-object p1

    invoke-virtual {p1}, Lcom/huawei/hms/push/HmsMessaging;->turnOffPush()Lcom/huawei/hmf/tasks/Task;

    move-result-object p1

    new-instance v0, Lcom/igexin/assist/control/huawei/d;

    invoke-direct {v0, p0}, Lcom/igexin/assist/control/huawei/d;-><init>(Lcom/igexin/assist/control/huawei/HmsPushManager;)V

    invoke-virtual {p1, v0}, Lcom/huawei/hmf/tasks/Task;->addOnCompleteListener(Lcom/huawei/hmf/tasks/OnCompleteListener;)Lcom/huawei/hmf/tasks/Task;

    return-void
.end method

.method public turnOnPush(Landroid/content/Context;)V
    .locals 2

    const-string v0, "Assist_HW"

    const-string v1, "turnOnPush"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-static {p1}, Lcom/huawei/hms/push/HmsMessaging;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/push/HmsMessaging;

    move-result-object p1

    invoke-virtual {p1}, Lcom/huawei/hms/push/HmsMessaging;->turnOnPush()Lcom/huawei/hmf/tasks/Task;

    move-result-object p1

    new-instance v0, Lcom/igexin/assist/control/huawei/c;

    invoke-direct {v0, p0}, Lcom/igexin/assist/control/huawei/c;-><init>(Lcom/igexin/assist/control/huawei/HmsPushManager;)V

    invoke-virtual {p1, v0}, Lcom/huawei/hmf/tasks/Task;->addOnCompleteListener(Lcom/huawei/hmf/tasks/OnCompleteListener;)Lcom/huawei/hmf/tasks/Task;

    return-void
.end method

.method public unregister(Landroid/content/Context;)V
    .locals 1

    new-instance v0, Lcom/igexin/assist/control/huawei/b;

    invoke-direct {v0, p0, p1}, Lcom/igexin/assist/control/huawei/b;-><init>(Lcom/igexin/assist/control/huawei/HmsPushManager;Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/igexin/assist/control/huawei/b;->start()V

    return-void
.end method
