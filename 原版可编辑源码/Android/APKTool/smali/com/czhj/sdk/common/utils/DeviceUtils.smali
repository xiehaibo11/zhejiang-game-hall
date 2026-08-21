.class public Lcom/czhj/sdk/common/utils/DeviceUtils;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/utils/DeviceUtils$NetBroadcastReceiver;,
        Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;
    }
.end annotation


# static fields
.field static final a:[Ljava/lang/String;

.field private static final b:I = 0x1e00000

.field private static final c:Ljava/lang/String; = "getSimState"

.field private static final d:Ljava/lang/String; = "getImei"

.field private static final e:Ljava/lang/String; = "getLine1Number"

.field private static final f:I = 0x1e00000

.field private static final g:I = 0x6400000

.field private static final h:I = -0x1

.field private static i:Ljava/lang/String;

.field private static j:I

.field private static k:Ljava/lang/String;

.field private static l:Ljava/lang/String;

.field private static m:Ljava/lang/String;

.field private static n:Ljava/lang/String;

.field private static o:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

.field private static p:Z

.field private static q:J

.field private static r:J

.field private static s:J

.field private static t:J

.field private static u:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Landroid/net/Network;",
            ">;"
        }
    .end annotation
.end field

.field private static v:Landroid/net/Network;


# direct methods
.method static constructor <clinit>()V
    .locals 13

    const-string v0, "/system/lib/libdroid4x.so"

    const-string v1, "/system/bin/mount.vboxsf"

    const-string v2, "/system/lib/vboxguest.ko"

    const-string v3, "/etc/mumu-configs"

    const-string v4, "/system/lib/vboxsf.ko"

    const-string v5, "/system/lib/vboxvideo.ko"

    const-string v6, "/data/.bluestacks.prop"

    const-string v7, "/system/bin/microvirt-vbox-sf"

    const-string v8, "/system/lib/tboxsf.ko"

    const-string v9, "/system/bin/androVM-vbox-sf"

    const-string v10, "/system/bin/microvirtd"

    const-string v11, "/system/bin/windroyed"

    const-string v12, "/system/lib/libdroid4x.so"

    filled-new-array/range {v0 .. v12}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->a:[Ljava/lang/String;

    const/4 v0, 0x0

    sput v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    sget-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->UNKNOWN:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->o:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->u:Ljava/util/ArrayList;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Landroid/net/Network;)Landroid/net/Network;
    .locals 0

    sput-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils;->v:Landroid/net/Network;

    return-object p0
.end method

.method static synthetic a(Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;)Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;
    .locals 0

    sput-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils;->o:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object p0
.end method

.method static synthetic a()Ljava/util/ArrayList;
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->u:Ljava/util/ArrayList;

    return-object v0
.end method

.method private static a(II)Z
    .locals 0

    and-int/2addr p0, p1

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method private static a(Landroid/content/Context;)Z
    .locals 1

    const-string v0, "android.permission.INTERNET"

    invoke-virtual {p0, v0}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method private static a(Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "ls -l "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/Runtime;->exec(Ljava/lang/String;)Ljava/lang/Process;

    move-result-object v0

    new-instance p0, Ljava/io/BufferedReader;

    new-instance v1, Ljava/io/InputStreamReader;

    invoke-virtual {v0}, Ljava/lang/Process;->getInputStream()Ljava/io/InputStream;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {p0, v1}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    invoke-virtual {p0}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_2

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    const/4 v2, 0x4

    if-lt v1, v2, :cond_2

    const/4 v1, 0x3

    invoke-virtual {p0, v1}, Ljava/lang/String;->charAt(I)C

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v1, 0x73

    if-eq p0, v1, :cond_0

    const/16 v1, 0x78

    if-ne p0, v1, :cond_2

    :cond_0
    const/4 p0, 0x1

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/Process;->destroy()V

    :cond_1
    return p0

    :cond_2
    if-eqz v0, :cond_3

    goto :goto_0

    :catchall_0
    if-eqz v0, :cond_3

    :goto_0
    invoke-virtual {v0}, Ljava/lang/Process;->destroy()V

    :cond_3
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic a(Z)Z
    .locals 0

    sput-boolean p0, Lcom/czhj/sdk/common/utils/DeviceUtils;->p:Z

    return p0
.end method

.method public static diskCacheSizeBytes(Ljava/io/File;J)J
    .locals 5

    :try_start_0
    new-instance v0, Landroid/os/StatFs;

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Landroid/os/StatFs;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockCount()I

    move-result p0

    int-to-long v1, p0

    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockSize()I

    move-result p0

    int-to-long v3, p0

    mul-long/2addr v1, v3

    const-wide/16 v3, 0x32

    div-long p1, v1, v3
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p0, "Unable to calculate 2% of available disk space, defaulting to minimum"

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :goto_0
    const-wide/32 v0, 0x6400000

    invoke-static {p1, p2, v0, v1}, Ljava/lang/Math;->min(JJ)J

    move-result-wide p0

    const-wide/32 v0, 0x1e00000

    invoke-static {p0, p1, v0, v1}, Ljava/lang/Math;->max(JJ)J

    move-result-wide p0

    return-wide p0
.end method

.method public static getActiveNetworkType()Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->o:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object v0
.end method

.method public static getAndroidId(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->m:Ljava/lang/String;

    if-nez v0, :cond_0

    if-eqz p0, :cond_0

    const-string v0, ""

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->m:Ljava/lang/String;

    :try_start_0
    const-string v0, "private : AndroidId"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v0, "android_id"

    invoke-static {p0, v0}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils;->m:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    :goto_0
    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils;->m:Ljava/lang/String;

    return-object p0
.end method

.method public static getApkSha1OrMd5(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v2, 0x40

    invoke-virtual {v1, p0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    if-eqz p0, :cond_1

    iget-object v1, p0, Landroid/content/pm/PackageInfo;->signatures:[Landroid/content/pm/Signature;

    if-eqz v1, :cond_1

    iget-object v1, p0, Landroid/content/pm/PackageInfo;->signatures:[Landroid/content/pm/Signature;

    array-length v1, v1

    if-lez v1, :cond_1

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->signatures:[Landroid/content/pm/Signature;

    const/4 v1, 0x0

    aget-object p0, p0, v1

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Landroid/content/pm/Signature;->toByteArray()[B

    move-result-object p0

    invoke-static {p1}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p1, p0}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object p0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    array-length v2, p0

    move v3, v1

    :goto_0
    const/4 v4, 0x1

    if-ge v3, v2, :cond_0

    aget-byte v5, p0, v3

    and-int/lit16 v5, v5, 0xff

    or-int/lit16 v5, v5, 0x100

    invoke-static {v5}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x3

    invoke-virtual {v5, v4, v6}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ":"

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Ljava/lang/StringBuilder;->length()I

    move-result p0

    sub-int/2addr p0, v4

    invoke-virtual {p1, v1, p0}, Ljava/lang/StringBuilder;->substring(II)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_1
    :goto_1
    return-object v0
.end method

.method public static getAppLaunchCount(Landroid/content/Context;Ljava/lang/String;)I
    .locals 9

    const-string v0, "getAppLaunchCount=="

    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/4 v1, 0x0

    :try_start_0
    invoke-virtual {p0, p1}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    if-nez p0, :cond_0

    return v1

    :cond_0
    invoke-virtual {p0}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object p0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const-string v2, "android.os.ServiceManager"

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    const-string v3, "getService"

    const/4 v4, 0x1

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v1

    invoke-virtual {v2, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v3, v4, [Ljava/lang/Object;

    const-string v5, "usagestats"

    aput-object v5, v3, v1

    const/4 v5, 0x0

    invoke-virtual {v2, v5, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    const-string v3, "com.android.internal.app.IUsageStats$Stub"

    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    const-string v6, "asInterface"

    new-array v7, v4, [Ljava/lang/Class;

    const-class v8, Landroid/os/IBinder;

    aput-object v8, v7, v1

    invoke-virtual {v3, v6, v7}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    new-array v6, v4, [Ljava/lang/Object;

    aput-object v2, v6, v1

    invoke-virtual {v3, v5, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    const-string v5, "getPkgUsageStats"

    new-array v6, v4, [Ljava/lang/Class;

    const-class v7, Landroid/content/ComponentName;

    aput-object v7, v6, v1

    invoke-virtual {v3, v5, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    new-array v4, v4, [Ljava/lang/Object;

    aput-object p0, v4, v1

    invoke-virtual {v3, v2, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    if-nez p0, :cond_1

    return v1

    :cond_1
    const-string v2, "com.android.internal.os.PkgUsageStats"

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const-string p1, "launchCount"

    invoke-virtual {v2, p1}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object p1

    invoke-virtual {p1, p0}, Ljava/lang/reflect/Field;->getInt(Ljava/lang/Object;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return v1
.end method

.method public static getBatteryLevel(Landroid/content/Context;)F
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x0

    const/16 v2, 0x15

    if-lt v0, v2, :cond_1

    const-string v0, "batterymanager"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/os/BatteryManager;

    if-nez p0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x4

    invoke-virtual {p0, v0}, Landroid/os/BatteryManager;->getIntProperty(I)I

    move-result p0

    int-to-float p0, p0

    const/high16 v0, 0x42c80000    # 100.0f

    div-float/2addr p0, v0

    return p0

    :cond_1
    return v1
.end method

.method public static getBatterySaveEnable(Landroid/content/Context;)Z
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x0

    const/16 v2, 0x15

    if-lt v0, v2, :cond_1

    const-string v0, "batterymanager"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/os/BatteryManager;

    if-nez p0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x4

    invoke-virtual {p0, v0}, Landroid/os/BatteryManager;->getIntProperty(I)I

    move-result p0

    const/16 v0, 0x10

    if-ge p0, v0, :cond_1

    const/4 v1, 0x1

    :cond_1
    return v1
.end method

.method public static getBatteryState(Landroid/content/Context;)I
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x0

    const/16 v2, 0x15

    if-lt v0, v2, :cond_5

    const-string v0, "batterymanager"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/os/BatteryManager;

    if-nez p0, :cond_0

    return v1

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1a

    if-lt v0, v2, :cond_1

    const/4 v0, 0x6

    invoke-virtual {p0, v0}, Landroid/os/BatteryManager;->getIntProperty(I)I

    move-result p0

    goto :goto_0

    :cond_1
    move p0, v1

    :goto_0
    const/4 v0, 0x2

    if-eq p0, v0, :cond_4

    const/4 v0, 0x3

    if-eq p0, v0, :cond_3

    const/4 v2, 0x4

    if-eq p0, v2, :cond_3

    const/4 v2, 0x5

    if-eq p0, v2, :cond_2

    return v1

    :cond_2
    return v0

    :cond_3
    const/4 p0, 0x1

    return p0

    :cond_4
    return v0

    :cond_5
    return v1
.end method

.method public static getBlueToothName(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->n:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v0, "bluetooth_name"

    invoke-static {p0, v0}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils;->n:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    :goto_0
    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils;->n:Ljava/lang/String;

    return-object p0
.end method

.method public static getBootSystemTime()J
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    sub-long/2addr v0, v2

    return-wide v0
.end method

.method public static getCPUInfo()Ljava/lang/String;
    .locals 2

    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    sget-object v0, Landroid/os/Build;->SUPPORTED_ABIS:[Ljava/lang/String;

    const/4 v1, 0x0

    aget-object v0, v0, v1

    return-object v0

    :cond_0
    sget-object v0, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const/4 v0, 0x0

    return-object v0
.end method

.method public static getCell_ip()Ljava/lang/String;
    .locals 4

    :try_start_0
    invoke-static {}, Ljava/net/NetworkInterface;->getNetworkInterfaces()Ljava/util/Enumeration;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/net/NetworkInterface;

    invoke-virtual {v1}, Ljava/net/NetworkInterface;->getInetAddresses()Ljava/util/Enumeration;

    move-result-object v1

    :cond_1
    invoke-interface {v1}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/net/InetAddress;

    invoke-virtual {v2}, Ljava/net/InetAddress;->isLoopbackAddress()Z

    move-result v3

    if-nez v3, :cond_1

    instance-of v3, v2, Ljava/net/Inet4Address;

    if-eqz v3, :cond_1

    invoke-virtual {v2}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/net/SocketException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Ljava/net/SocketException;->printStackTrace()V

    :cond_2
    :goto_0
    const-string v0, "0.0.0.0"

    return-object v0
.end method

.method public static getConnectivityManager(Landroid/content/Context;)Landroid/net/ConnectivityManager;
    .locals 1

    if-eqz p0, :cond_0

    const-string v0, "connectivity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getDataNetworkType(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;
    .locals 4

    const-string v0, "getDataNetworkType "

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getTelephonyManager(Landroid/content/Context;)Landroid/telephony/TelephonyManager;

    move-result-object v1

    if-eqz v1, :cond_1

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x18

    if-lt v2, v3, :cond_0

    invoke-virtual {v1}, Landroid/telephony/TelephonyManager;->getDataNetworkType()I

    move-result v1

    goto :goto_0

    :cond_0
    :try_start_0
    invoke-virtual {v1}, Landroid/telephony/TelephonyManager;->getNetworkType()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    :cond_1
    const/4 v1, 0x0

    :goto_0
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getConnectivityManager(Landroid/content/Context;)Landroid/net/ConnectivityManager;

    move-result-object p0

    if-nez v1, :cond_2

    if-eqz p0, :cond_2

    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    if-eqz p0, :cond_2

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getSubtype()I

    move-result v1

    :cond_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/16 p0, 0x14

    if-eq v1, p0, :cond_3

    packed-switch v1, :pswitch_data_0

    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object p0

    :pswitch_0
    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE_4G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object p0

    :pswitch_1
    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE_3G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object p0

    :pswitch_2
    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE_2G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object p0

    :cond_3
    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE_5G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object p0

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_2
        :pswitch_2
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_0
        :pswitch_1
        :pswitch_1
    .end packed-switch
.end method

.method public static getDensityDpi(Landroid/content/Context;)F
    .locals 0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->densityDpi:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    int-to-float p0, p0

    return p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const/4 p0, 0x0

    return p0
.end method

.method public static getDeviceBrand()Ljava/lang/String;
    .locals 1

    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    return-object v0
.end method

.method public static getDeviceDispaly()Ljava/lang/String;
    .locals 1

    sget-object v0, Landroid/os/Build;->DISPLAY:Ljava/lang/String;

    return-object v0
.end method

.method public static getDeviceLocale(Landroid/content/Context;)Ljava/util/Locale;
    .locals 0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    iget-object p0, p0, Landroid/content/res/Configuration;->locale:Ljava/util/Locale;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static getDeviceManufacturer()Ljava/lang/String;
    .locals 1

    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    return-object v0
.end method

.method public static getDeviceModel()Ljava/lang/String;
    .locals 1

    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    return-object v0
.end method

.method public static getDeviceName(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    if-lt v0, v1, :cond_0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v0, "device_name"

    invoke-static {p0, v0}, Landroid/provider/Settings$Global;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const/4 p0, 0x0

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getBlueToothName(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getDeviceOSLevel()I
    .locals 1

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    return v0
.end method

.method public static getDeviceOsVersion()Ljava/lang/String;
    .locals 1

    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    return-object v0
.end method

.method public static getDeviceScreenHeightDip(Landroid/content/Context;)I
    .locals 0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Dips;->screenHeightAsIntDips(Landroid/content/Context;)I

    move-result p0

    return p0
.end method

.method public static getDeviceScreenRealHeightDip(Landroid/content/Context;)I
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getRealMetrics(Landroid/content/Context;)Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-float v0, v0

    invoke-static {v0, p0}, Lcom/czhj/sdk/common/utils/Dips;->pixelsToIntDips(FLandroid/content/Context;)I

    move-result p0

    return p0
.end method

.method public static getDeviceScreenRealWidthDip(Landroid/content/Context;)I
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getRealMetrics(Landroid/content/Context;)Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float v0, v0

    invoke-static {v0, p0}, Lcom/czhj/sdk/common/utils/Dips;->pixelsToIntDips(FLandroid/content/Context;)I

    move-result p0

    return p0
.end method

.method public static getDeviceScreenWidthDip(Landroid/content/Context;)I
    .locals 0

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Dips;->screenWidthAsIntDips(Landroid/content/Context;)I

    move-result p0

    return p0
.end method

.method public static getDeviceSerial()Ljava/lang/String;
    .locals 1

    sget-object v0, Landroid/os/Build;->SERIAL:Ljava/lang/String;

    return-object v0
.end method

.method public static getDeviceType(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->isTablet(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, "pad"

    goto :goto_0

    :cond_0
    const-string p0, "phone"

    :goto_0
    return-object p0
.end method

.method public static getDisplayMetrics(Landroid/content/Context;)Landroid/util/DisplayMetrics;
    .locals 0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static getNetworkOperator(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getTelephonyManager(Landroid/content/Context;)Landroid/telephony/TelephonyManager;

    move-result-object p0

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getPhoneType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSimState()I

    move-result v0

    const/4 v1, 0x5

    if-ne v0, v1, :cond_0

    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSimOperator()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getNetworkOperator()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getNetworkOperatorForUrl(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getNetworkOperator(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getNetworkOperatorName(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getTelephonyManager(Landroid/content/Context;)Landroid/telephony/TelephonyManager;

    move-result-object p0

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getPhoneType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSimState()I

    move-result v0

    const/4 v1, 0x5

    if-ne v0, v1, :cond_0

    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSimOperatorName()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getNetworkOperatorName()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getOrientationInt(Landroid/content/Context;)I
    .locals 0

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    iget p0, p0, Landroid/content/res/Configuration;->orientation:I

    return p0
.end method

.method public static getProperty(Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "android.os.SystemProperties"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "get"

    const/4 v3, 0x1

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v3, [Ljava/lang/Object;

    aput-object p0, v2, v6

    invoke-virtual {v1, v0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_0

    check-cast p0, Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p0

    :catchall_0
    :cond_0
    return-object v0
.end method

.method public static getRealMetrics(Landroid/content/Context;)Landroid/util/DisplayMetrics;
    .locals 7

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getWindowManger(Landroid/content/Context;)Landroid/view/WindowManager;

    move-result-object p0

    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x11

    if-lt v1, v2, :cond_0

    invoke-virtual {p0, v0}, Landroid/view/Display;->getRealMetrics(Landroid/util/DisplayMetrics;)V

    goto :goto_0

    :cond_0
    :try_start_0
    const-string v1, "android.view.Display"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "getRealMetrics"

    const/4 v3, 0x1

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/util/DisplayMetrics;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v3, [Ljava/lang/Object;

    aput-object v0, v2, v6

    invoke-virtual {v1, p0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-object v0
.end method

.method public static getRotation(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getWindowManger(Landroid/content/Context;)Landroid/view/WindowManager;

    move-result-object p0

    const-string v0, "0"

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    invoke-virtual {p0}, Landroid/view/Display;->getRotation()I

    move-result p0

    const/4 v1, 0x1

    if-eq p0, v1, :cond_3

    const/4 v1, 0x2

    if-eq p0, v1, :cond_2

    const/4 v1, 0x3

    if-eq p0, v1, :cond_1

    return-object v0

    :cond_1
    const-string p0, "270"

    return-object p0

    :cond_2
    const-string p0, "180"

    return-object p0

    :cond_3
    const-string p0, "90"

    return-object p0
.end method

.method public static getSDCardPath(Landroid/content/Context;)Ljava/lang/String;
    .locals 8

    const-string v0, "storage"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/os/storage/StorageManager;

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const-string v1, "getPath"

    const/4 v2, 0x0

    const/16 v3, 0x18

    if-lt v0, v3, :cond_1

    invoke-virtual {p0}, Landroid/os/storage/StorageManager;->getStorageVolumes()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/storage/StorageVolume;

    invoke-virtual {v0}, Landroid/os/storage/StorageVolume;->isRemovable()Z

    move-result v3

    if-eqz v3, :cond_0

    :try_start_0
    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    new-array v4, v2, [Ljava/lang/Class;

    invoke-virtual {v3, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    new-array v4, v2, [Ljava/lang/Object;

    invoke-virtual {v3, v0, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    :try_start_1
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    const-string v3, "getVolumeList"

    new-array v4, v2, [Ljava/lang/Class;

    invoke-virtual {v0, v3, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const-string v3, "android.os.storage.StorageVolume"

    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    new-array v4, v2, [Ljava/lang/Class;

    invoke-virtual {v3, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    const-string v4, "isRemovable"

    new-array v5, v2, [Ljava/lang/Class;

    invoke-virtual {v3, v4, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    new-array v4, v2, [Ljava/lang/Object;

    invoke-virtual {v0, p0, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/reflect/Array;->getLength(Ljava/lang/Object;)I

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    move v4, v2

    :goto_1
    if-ge v4, v0, :cond_3

    :try_start_2
    invoke-static {p0, v4}, Ljava/lang/reflect/Array;->get(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v5

    new-array v6, v2, [Ljava/lang/Object;

    invoke-virtual {v3, v5, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    instance-of v7, v6, Ljava/lang/Boolean;

    if-eqz v7, :cond_2

    check-cast v6, Ljava/lang/Boolean;

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    if-eqz v6, :cond_2

    new-array v6, v2, [Ljava/lang/Object;

    invoke-virtual {v1, v5, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    instance-of v6, v5, Ljava/lang/String;

    if-eqz v6, :cond_2

    check-cast v5, Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return-object v5

    :catchall_0
    :cond_2
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    :catchall_1
    :cond_3
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getSysteTotalMemorySize(Landroid/content/Context;)J
    .locals 2

    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_0

    const-string v0, "activity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/ActivityManager;

    new-instance v0, Landroid/app/ActivityManager$MemoryInfo;

    invoke-direct {v0}, Landroid/app/ActivityManager$MemoryInfo;-><init>()V

    if-eqz p0, :cond_0

    invoke-virtual {p0, v0}, Landroid/app/ActivityManager;->getMemoryInfo(Landroid/app/ActivityManager$MemoryInfo;)V

    iget-wide v0, v0, Landroid/app/ActivityManager$MemoryInfo;->totalMem:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-wide v0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public static getTelephonyManager(Landroid/content/Context;)Landroid/telephony/TelephonyManager;
    .locals 2

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->isCanUsePhoneState(Landroid/content/Context;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_1

    return-object v0

    :catchall_0
    :cond_1
    const-string v0, "phone"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    return-object p0
.end method

.method public static getWifiManager(Landroid/content/Context;)Landroid/net/wifi/WifiManager;
    .locals 1

    if-eqz p0, :cond_0

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->isCanUseWifiState(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "wifi"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/wifi/WifiManager;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getWindowManger(Landroid/content/Context;)Landroid/view/WindowManager;
    .locals 1

    const-string v0, "window"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    return-object p0
.end method

.method public static isCanRetryIMEI()Z
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/czhj/sdk/common/utils/DeviceUtils;->q:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x7530

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sput-wide v1, Lcom/czhj/sdk/common/utils/DeviceUtils;->q:J

    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "isCanRetryIMEI status "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return v0
.end method

.method public static isCanRetryLocation()Z
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/czhj/sdk/common/utils/DeviceUtils;->s:J

    sub-long/2addr v0, v2

    const-wide/32 v2, 0x8ca0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sput-wide v1, Lcom/czhj/sdk/common/utils/DeviceUtils;->s:J

    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "isCanRetryLocation status "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return v0
.end method

.method public static isCanRetryWIFI()Z
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/czhj/sdk/common/utils/DeviceUtils;->t:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x7530

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sput-wide v1, Lcom/czhj/sdk/common/utils/DeviceUtils;->t:J

    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "isCanRetryWIFI status "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return v0
.end method

.method public static isCanUseLocation(Landroid/content/Context;)Z
    .locals 2

    const-string v0, "android.permission.ACCESS_COARSE_LOCATION"

    invoke-virtual {p0, v0}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "android.permission.ACCESS_FINE_LOCATION"

    invoke-virtual {p0, v0}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p0, 0x1

    :goto_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "isCanUseLocation status "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return p0
.end method

.method public static isCanUsePhoneState(Landroid/content/Context;)Z
    .locals 2

    const-string v0, "android.permission.READ_PHONE_STATE"

    invoke-virtual {p0, v0}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "isCanUsePhoneState status "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return p0
.end method

.method public static isCanUseWifiState(Landroid/content/Context;)Z
    .locals 2

    const-string v0, "android.permission.ACCESS_WIFI_STATE"

    invoke-virtual {p0, v0}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "isCanUseWifiState status "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return p0
.end method

.method public static isCanUseWriteExternal(Landroid/content/Context;)Z
    .locals 2

    const-string v0, "android.permission.WRITE_EXTERNAL_STORAGE"

    invoke-virtual {p0, v0}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "isCanUseWriteExternal status "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return p0
.end method

.method public static isEmulator()Z
    .locals 9

    sget v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    const/4 v1, 0x3

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-lez v0, :cond_1

    if-le v0, v1, :cond_0

    move v2, v3

    :cond_0
    return v2

    :cond_1
    :try_start_0
    const-string v0, "gsm.version.baseband"

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    const-string v4, "1.0.0.0"

    invoke-virtual {v0, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    :cond_2
    sget v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    add-int/2addr v0, v3

    sput v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    :cond_3
    const-string v0, "ro.build.flavor"

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_4

    sget v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    add-int/2addr v0, v3

    sput v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    goto :goto_0

    :cond_4
    const-string v4, "vbox"

    invoke-virtual {v0, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_5

    const-string v4, "sdk_gphone"

    invoke-virtual {v0, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_6

    :cond_5
    sget v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    add-int/lit8 v0, v0, 0xa

    sput v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    :cond_6
    :goto_0
    const-string v0, "ro.product.board"

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v5, "android"

    if-eqz v4, :cond_7

    :try_start_1
    sget v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    add-int/2addr v0, v3

    sput v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    goto :goto_1

    :cond_7
    invoke-virtual {v0, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    const-string v4, "goldfish"

    invoke-virtual {v0, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_9

    :cond_8
    sget v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    add-int/lit8 v0, v0, 0xa

    sput v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    :cond_9
    :goto_1
    const-string v0, "ro.board.platform"

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_a

    invoke-virtual {v0, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_b

    :cond_a
    sget v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    add-int/2addr v0, v3

    sput v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    :cond_b
    const-string v0, "ro.hardware"

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_c

    sget v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    add-int/2addr v0, v3

    sput v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    goto :goto_3

    :cond_c
    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v4

    const-string v5, "ttvm"

    invoke-virtual {v4, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_d

    :goto_2
    sget v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    add-int/lit8 v0, v0, 0xa

    sput v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    goto :goto_3

    :cond_d
    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v4, "nox"

    invoke-virtual {v0, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_e

    goto :goto_2

    :cond_e
    :goto_3
    sget-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->a:[Ljava/lang/String;

    array-length v4, v0

    move v5, v2

    :goto_4
    if-ge v5, v4, :cond_10

    aget-object v6, v0, v5

    new-instance v7, Ljava/io/File;

    invoke-direct {v7, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v7}, Ljava/io/File;->exists()Z

    move-result v7

    if-eqz v7, :cond_f

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "find emulator "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    sget v6, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    add-int/lit8 v6, v6, 0xa

    sput v6, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_f
    add-int/lit8 v5, v5, 0x1

    goto :goto_4

    :catchall_0
    :cond_10
    sget v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->j:I

    if-le v0, v1, :cond_11

    move v2, v3

    :cond_11
    return v2
.end method

.method public static isNetworkConnected()Z
    .locals 1

    sget-boolean v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->p:Z

    return v0
.end method

.method public static isNetworkValid(Landroid/net/NetworkCapabilities;)Z
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-lt v1, v2, :cond_2

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    if-lt v1, v2, :cond_0

    const/16 v1, 0x10

    invoke-virtual {p0, v1}, Landroid/net/NetworkCapabilities;->hasCapability(I)Z

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    const/4 v2, 0x1

    invoke-virtual {p0, v2}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v3

    if-nez v3, :cond_1

    invoke-virtual {p0, v0}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v3

    if-nez v3, :cond_1

    const/4 v3, 0x3

    invoke-virtual {p0, v3}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v3

    if-nez v3, :cond_1

    const/4 v3, 0x4

    invoke-virtual {p0, v3}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result p0

    if-nez p0, :cond_1

    if-eqz v1, :cond_2

    :cond_1
    move v0, v2

    :cond_2
    return v0
.end method

.method public static isRoot()Z
    .locals 2

    new-instance v0, Ljava/io/File;

    const-string v1, "/system/bin/su"

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {v1}, Lcom/czhj/sdk/common/utils/DeviceUtils;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    :cond_0
    new-instance v0, Ljava/io/File;

    const-string v1, "/system/xbin/su"

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {v1}, Lcom/czhj/sdk/common/utils/DeviceUtils;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    :cond_1
    const/4 v0, 0x1

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static isTablet(Landroid/content/Context;)Z
    .locals 1

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    iget p0, p0, Landroid/content/res/Configuration;->screenLayout:I

    and-int/lit8 p0, p0, 0xf

    const/4 v0, 0x3

    if-lt p0, v0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static memoryCacheSizeBytes(Landroid/content/Context;)I
    .locals 7

    const-string v0, "activity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/ActivityManager;

    if-nez v0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    invoke-virtual {v0}, Landroid/app/ActivityManager;->getMemoryClass()I

    move-result v1

    int-to-long v1, v1

    :try_start_0
    const-class v3, Landroid/content/pm/ApplicationInfo;

    const-string v4, "FLAG_LARGE_HEAP"

    invoke-virtual {v3, v4}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v3

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Ljava/lang/reflect/Field;->getInt(Ljava/lang/Object;)I

    move-result v3

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    iget p0, p0, Landroid/content/pm/ApplicationInfo;->flags:I

    invoke-static {p0, v3}, Lcom/czhj/sdk/common/utils/DeviceUtils;->a(II)Z

    move-result p0

    if-eqz p0, :cond_1

    new-instance p0, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    const-string v3, "getLargeMemoryClass"

    invoke-direct {p0, v0, v3}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    int-to-long v0, p0

    move-wide v1, v0

    goto :goto_0

    :catchall_0
    const-string p0, "Unable to reflectively determine large heap size."

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :cond_1
    :goto_0
    const-wide/32 v3, 0x1e00000

    const-wide/16 v5, 0x8

    div-long/2addr v1, v5

    const-wide/16 v5, 0x400

    mul-long/2addr v1, v5

    mul-long/2addr v1, v5

    invoke-static {v3, v4, v1, v2}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v0

    long-to-int p0, v0

    return p0
.end method

.method public static registerNetworkChange(Landroid/content/Context;)V
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_0

    new-instance v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetBroadcastReceiver;

    invoke-direct {v0}, Lcom/czhj/sdk/common/utils/DeviceUtils$NetBroadcastReceiver;-><init>()V

    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "android.net.conn.CONNECTIVITY_CHANGE"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    goto :goto_0

    :cond_0
    new-instance v0, Landroid/net/NetworkRequest$Builder;

    invoke-direct {v0}, Landroid/net/NetworkRequest$Builder;-><init>()V

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Landroid/net/NetworkRequest$Builder;->addCapability(I)Landroid/net/NetworkRequest$Builder;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/net/NetworkRequest$Builder;->addTransportType(I)Landroid/net/NetworkRequest$Builder;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/net/NetworkRequest$Builder;->addTransportType(I)Landroid/net/NetworkRequest$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/NetworkRequest$Builder;->build()Landroid/net/NetworkRequest;

    move-result-object v0

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getConnectivityManager(Landroid/content/Context;)Landroid/net/ConnectivityManager;

    move-result-object v1

    if-nez v1, :cond_1

    return-void

    :cond_1
    new-instance v2, Lcom/czhj/sdk/common/utils/DeviceUtils$1;

    invoke-direct {v2, p0}, Lcom/czhj/sdk/common/utils/DeviceUtils$1;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0, v2}, Landroid/net/ConnectivityManager;->registerNetworkCallback(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;)V

    :goto_0
    return-void
.end method

.method public static resetRetryIMEI()V
    .locals 2

    const-wide/16 v0, 0x0

    sput-wide v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->q:J

    return-void
.end method

.method public static updateNetworkType(Landroid/content/Context;)V
    .locals 4

    :try_start_0
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->a(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_6

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getConnectivityManager(Landroid/content/Context;)Landroid/net/ConnectivityManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetwork()Landroid/net/Network;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    sget-object v3, Lcom/czhj/sdk/common/utils/DeviceUtils;->v:Landroid/net/Network;

    if-eq v0, v3, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, " updateNetworkType activeNetwork "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getConnectivityManager(Landroid/content/Context;)Landroid/net/ConnectivityManager;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/net/ConnectivityManager;->getNetworkCapabilities(Landroid/net/Network;)Landroid/net/NetworkCapabilities;

    move-result-object v0

    goto :goto_2

    :cond_1
    const-string v0, " updateNetworkType activeNetwork is null"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils;->u:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    sub-int/2addr v0, v2

    :goto_0
    if-ltz v0, :cond_3

    sget-object v1, Lcom/czhj/sdk/common/utils/DeviceUtils;->u:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/Network;

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getConnectivityManager(Landroid/content/Context;)Landroid/net/ConnectivityManager;

    move-result-object v3

    invoke-virtual {v3, v1}, Landroid/net/ConnectivityManager;->getNetworkCapabilities(Landroid/net/Network;)Landroid/net/NetworkCapabilities;

    move-result-object v1

    if-eqz v1, :cond_2

    goto :goto_1

    :cond_2
    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    :cond_3
    :goto_1
    move-object v0, v1

    :goto_2
    if-eqz v0, :cond_9

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "updateNetworkType "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->isNetworkValid(Landroid/net/NetworkCapabilities;)Z

    move-result v1

    sput-boolean v1, Lcom/czhj/sdk/common/utils/DeviceUtils;->p:Z

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "updateNetworkType misNetworkConnected "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v3, Lcom/czhj/sdk/common/utils/DeviceUtils;->p:Z

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Landroid/net/NetworkCapabilities;->hasCapability(I)Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-virtual {v0, v2}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v2

    if-eqz v2, :cond_4

    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->WIFI:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    :goto_3
    sput-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils;->o:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    goto :goto_5

    :cond_4
    invoke-virtual {v0, v1}, Landroid/net/NetworkCapabilities;->hasCapability(I)Z

    move-result v1

    if-eqz v1, :cond_5

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getDataNetworkType(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    move-result-object p0

    goto :goto_3

    :cond_5
    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->UNKNOWN:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    goto :goto_3

    :cond_6
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getConnectivityManager(Landroid/content/Context;)Landroid/net/ConnectivityManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_7

    invoke-virtual {v0}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v1

    sput-boolean v1, Lcom/czhj/sdk/common/utils/DeviceUtils;->p:Z

    :cond_7
    if-eqz v0, :cond_8

    invoke-virtual {v0}, Landroid/net/NetworkInfo;->getType()I

    move-result v0

    goto :goto_4

    :cond_8
    const/4 v0, -0x1

    :goto_4
    invoke-static {p0, v0}, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->a(Landroid/content/Context;I)Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    :cond_9
    :goto_5
    return-void
.end method
