.class public Lcom/reyun/tracking/a/a;
.super Ljava/lang/Object;


# static fields
.field public static a:Ljava/lang/String;

.field public static b:Ljava/lang/String;

.field private static c:Ljava/lang/String;

.field private static d:Ljava/lang/String;

.field private static e:Ljava/lang/String;

.field private static f:Ljava/lang/String;

.field private static g:Ljava/lang/String;

.field private static h:Ljava/lang/String;

.field private static i:F

.field private static j:Lorg/json/JSONArray;

.field private static k:J

.field private static l:Ljava/lang/Runnable;

.field private static m:Landroid/hardware/SensorManager;

.field private static n:Lcom/reyun/tracking/a/d;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(F)F
    .locals 0

    sput p0, Lcom/reyun/tracking/a/a;->i:F

    return p0
.end method

.method public static a()Ljava/lang/String;
    .locals 3

    const-string v0, "GMT+8:00"

    invoke-static {v0}, Ljava/util/TimeZone;->getTimeZone(Ljava/lang/String;)Ljava/util/TimeZone;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/TimeZone;->getRawOffset()I

    move-result v0

    div-int/lit16 v0, v0, 0x3e8

    div-int/lit16 v0, v0, 0xe10

    new-instance v1, Ljava/lang/StringBuilder;

    if-lez v0, :cond_0

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "+"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    :goto_0
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ""

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0
.end method

.method public static a(J)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/text/SimpleDateFormat;

    const-string v1, "yyyy-MM-dd HH:mm:ss"

    invoke-direct {v0, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    const-string v1, "GMT+8"

    invoke-static {v1}, Ljava/util/TimeZone;->getTimeZone(Ljava/lang/String;)Ljava/util/TimeZone;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/text/SimpleDateFormat;->setTimeZone(Ljava/util/TimeZone;)V

    invoke-static {p0, p1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/text/SimpleDateFormat;->format(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    if-nez p0, :cond_0

    const-string p0, "unknown"

    return-object p0

    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Landroid/content/Context;I)Ljava/lang/String;
    .locals 3

    const-string v0, "activity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/ActivityManager;

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Landroid/app/ActivityManager;->getRunningAppProcesses()Ljava/util/List;

    move-result-object p0

    if-nez p0, :cond_1

    return-object v0

    :cond_1
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_2
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/ActivityManager$RunningAppProcessInfo;

    if-eqz v1, :cond_2

    iget v2, v1, Landroid/app/ActivityManager$RunningAppProcessInfo;->pid:I

    if-ne v2, p1, :cond_2

    iget-object p0, v1, Landroid/app/ActivityManager$RunningAppProcessInfo;->processName:Ljava/lang/String;

    return-object p0

    :cond_3
    return-object v0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    move-object p0, p1

    :cond_0
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "Tracking"

    invoke-static {p1, p2}, Lcom/reyun/tracking/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-object p0
.end method

.method public static a(Ljava/util/Map;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    invoke-interface {p0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    if-nez v1, :cond_2

    const-string p0, "null"

    return-object p0

    :cond_2
    const-string v2, "^[A-Za-z_][a-zA-Z0-9_]*$"

    invoke-virtual {v1, v2}, Ljava/lang/String;->matches(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    return-object v1

    :cond_3
    return-object v0
.end method

.method static synthetic a(Lorg/json/JSONArray;)Lorg/json/JSONArray;
    .locals 0

    sput-object p0, Lcom/reyun/tracking/a/a;->j:Lorg/json/JSONArray;

    return-object p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    sget-boolean v0, Lcom/reyun/tracking/a/i;->a:Z

    if-eqz v0, :cond_2

    if-nez p0, :cond_0

    const-string p0, "null tag"

    :cond_0
    if-nez p1, :cond_1

    const-string p1, "null log"

    :cond_1
    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static a(Ljava/util/Map;Lorg/json/JSONObject;)V
    .locals 2

    if-eqz p0, :cond_1

    :try_start_0
    const-string v0, "context"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-interface {p0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    if-eqz v1, :cond_0

    if-eqz v0, :cond_0

    invoke-virtual {v1}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    :cond_1
    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    if-nez v1, :cond_1

    return v0

    :cond_1
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p1, p0}, Landroid/content/pm/PackageManager;->checkPermission(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_2

    const/4 v0, 0x1

    :catch_0
    :cond_2
    return v0
.end method

.method public static a(Ljava/lang/String;)Z
    .locals 0

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->b(Ljava/lang/String;)Z

    move-result p0

    xor-int/lit8 p0, p0, 0x1

    return p0
.end method

.method static synthetic b(J)J
    .locals 0

    sput-wide p0, Lcom/reyun/tracking/a/a;->k:J

    return-wide p0
.end method

.method public static b()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/a/a;->b:Ljava/lang/String;

    return-object v0
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 5

    sget-object v0, Lcom/reyun/tracking/a/a;->a:Ljava/lang/String;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    const-string v0, "device_id"

    const-string v1, "tracking_device_id_cache"

    invoke-static {p0, v1, v0}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/reyun/tracking/a/a;->a:Ljava/lang/String;

    const-string v2, "device_id_type"

    invoke-static {p0, v1, v2}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/reyun/tracking/a/a;->b:Ljava/lang/String;

    sget-object v3, Lcom/reyun/tracking/a/a;->a:Ljava/lang/String;

    const-string v4, "_default_"

    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->r(Landroid/content/Context;)Lcom/reyun/tracking/a/f;

    move-result-object v3

    invoke-static {v3}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;)Ljava/lang/String;

    move-result-object v4

    sput-object v4, Lcom/reyun/tracking/a/a;->a:Ljava/lang/String;

    invoke-static {v3}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/reyun/tracking/a/a;->b:Ljava/lang/String;

    sget-object v3, Lcom/reyun/tracking/a/a;->a:Ljava/lang/String;

    invoke-static {p0, v1, v0, v3}, Lcom/reyun/tracking/utils/f;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    sget-object v0, Lcom/reyun/tracking/a/a;->b:Ljava/lang/String;

    invoke-static {p0, v1, v2, v0}, Lcom/reyun/tracking/utils/f;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    sget-object p0, Lcom/reyun/tracking/a/a;->a:Ljava/lang/String;

    return-object p0
.end method

.method public static b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    sget-boolean v0, Lcom/reyun/tracking/a/i;->a:Z

    if-eqz v0, :cond_2

    if-nez p0, :cond_0

    const-string p0, "null tag"

    :cond_0
    if-nez p1, :cond_1

    const-string p1, "null log"

    :cond_1
    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static b(Ljava/util/Map;)V
    .locals 3

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-interface {p0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    if-nez v1, :cond_2

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    :cond_2
    const-string v2, "^[_A-Za-z][a-zA-Z0-9_]*$"

    invoke-virtual {v1, v2}, Ljava/lang/String;->matches(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_3

    goto :goto_1

    :cond_3
    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-nez v1, :cond_4

    goto :goto_1

    :cond_4
    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    const/16 v2, 0x40

    if-le v1, v2, :cond_1

    goto :goto_1

    :cond_5
    return-void
.end method

.method private static b(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p1, p0}, Landroid/content/pm/PackageManager;->checkPermission(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :catch_0
    :cond_0
    return v0
.end method

.method public static b(Ljava/lang/String;)Z
    .locals 0

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->length()I

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
    return p0
.end method

.method public static c()Ljava/lang/String;
    .locals 7

    const-string v0, "unknown"

    sget-object v1, Lcom/reyun/tracking/a/a;->h:Ljava/lang/String;

    if-eqz v1, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    invoke-static {}, Ljava/net/NetworkInterface;->getNetworkInterfaces()Ljava/util/Enumeration;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    move-object v2, v0

    :cond_1
    :try_start_1
    invoke-interface {v1}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v1}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/net/NetworkInterface;

    invoke-virtual {v3}, Ljava/net/NetworkInterface;->getInetAddresses()Ljava/util/Enumeration;

    move-result-object v3

    :cond_2
    invoke-interface {v3}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-interface {v3}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/net/InetAddress;

    if-eqz v4, :cond_2

    instance-of v5, v4, Ljava/net/Inet6Address;

    if-eqz v5, :cond_2

    invoke-virtual {v4}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_2

    invoke-virtual {v4}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v5

    const-string v6, "fe80"

    invoke-virtual {v5, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_2

    invoke-virtual {v4}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v5

    const-string v6, "::1"

    invoke-virtual {v5, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_2

    invoke-virtual {v4}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v5

    const-string v6, "::"

    invoke-virtual {v5, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_2

    invoke-virtual {v4}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v5

    const-string v6, "fec0"

    invoke-virtual {v5, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_2

    move-object v2, v4

    :cond_3
    if-eqz v2, :cond_1

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    if-nez v3, :cond_1

    goto :goto_0

    :catch_0
    move-object v0, v2

    :catch_1
    move-object v2, v0

    :cond_4
    :goto_0
    sput-object v2, Lcom/reyun/tracking/a/a;->h:Ljava/lang/String;

    return-object v2
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const-string v0, "unknown"

    sget-object v1, Lcom/reyun/tracking/a/a;->e:Ljava/lang/String;

    if-eqz v1, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v1, "android_id"

    invoke-static {p0, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    move-object p0, v0

    :goto_0
    if-eqz p0, :cond_2

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    if-nez v1, :cond_1

    goto :goto_1

    :cond_1
    sput-object p0, Lcom/reyun/tracking/a/a;->e:Ljava/lang/String;

    return-object p0

    :cond_2
    :goto_1
    sput-object v0, Lcom/reyun/tracking/a/a;->e:Ljava/lang/String;

    return-object v0
.end method

.method public static c(Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    const-string v0, "MD5"

    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object p0

    array-length v0, p0

    const/4 v2, 0x0

    move-object v3, v1

    :goto_0
    if-ge v2, v0, :cond_2

    aget-byte v4, p0, v2

    and-int/lit16 v4, v4, 0xff

    invoke-static {v4}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v5

    const/4 v6, 0x1

    if-ne v5, v6, :cond_1

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "0"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    :cond_1
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3
    :try_end_0
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    return-object v3

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/security/NoSuchAlgorithmException;->printStackTrace()V

    return-object v1
.end method

.method public static c(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    sget-boolean v0, Lcom/reyun/tracking/a/i;->a:Z

    if-eqz v0, :cond_2

    if-nez p0, :cond_0

    const-string p0, "null tag"

    :cond_0
    if-nez p1, :cond_1

    const-string p1, "null log"

    :cond_1
    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 8

    const-string v0, "android.permission.READ_PHONE_STATE"

    invoke-static {p0, v0}, Lcom/reyun/tracking/a/a;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p0, "unknown"

    return-object p0

    :cond_0
    const-class v0, Lcom/reyun/tracking/a/a;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/reyun/tracking/a/a;->c:Ljava/lang/String;

    if-eqz v1, :cond_1

    sget-object p0, Lcom/reyun/tracking/a/a;->c:Ljava/lang/String;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :cond_1
    :try_start_1
    const-string v1, "tracking_device_id_cache"

    const-string v2, "imei2"

    invoke-static {p0, v1, v2}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_2

    const-string v2, "_default_"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_2

    const-string p0, "Tracking"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "%%% imei2="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/reyun/tracking/a/a;->c:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {p0, v2}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    sput-object v1, Lcom/reyun/tracking/a/a;->c:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return-object v1

    :cond_2
    :try_start_3
    const-string v1, "phone"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1d

    if-lt v2, v3, :cond_3

    const-string v1, "unknown"

    :goto_0
    sput-object v1, Lcom/reyun/tracking/a/a;->c:Ljava/lang/String;

    goto :goto_1

    :cond_3
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1a

    const/4 v4, 0x1

    if-lt v2, v3, :cond_4

    invoke-virtual {v1, v4}, Landroid/telephony/TelephonyManager;->getImei(I)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_4
    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    const-string v3, "getImei"

    new-array v5, v4, [Ljava/lang/Class;

    sget-object v6, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v7, 0x0

    aput-object v6, v5, v7

    invoke-virtual {v2, v3, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v3, v4, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v7

    invoke-virtual {v2, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :goto_1
    sget-object v1, Lcom/reyun/tracking/a/a;->c:Ljava/lang/String;

    if-nez v1, :cond_5

    const-string v1, "unknown"

    sput-object v1, Lcom/reyun/tracking/a/a;->c:Ljava/lang/String;

    :cond_5
    const-string v1, "tracking_device_id_cache"

    const-string v2, "imei2"

    sget-object v3, Lcom/reyun/tracking/a/a;->c:Ljava/lang/String;

    invoke-static {p0, v1, v2, v3}, Lcom/reyun/tracking/utils/f;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    sget-object p0, Lcom/reyun/tracking/a/a;->c:Ljava/lang/String;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    monitor-exit v0

    return-object p0

    :catch_0
    const-string p0, "unknown"

    sput-object p0, Lcom/reyun/tracking/a/a;->c:Ljava/lang/String;

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    throw p0
.end method

.method public static d()V
    .locals 6

    sget-object v0, Lcom/reyun/tracking/a/a;->l:Ljava/lang/Runnable;

    if-nez v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    new-instance v1, Ljava/text/SimpleDateFormat;

    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v2

    const-string v3, "yyyy-MM-dd HH:mm:ss"

    invoke-direct {v1, v3, v2}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;Ljava/util/Locale;)V

    new-instance v2, Ljava/util/Date;

    sget-wide v4, Lcom/reyun/tracking/a/a;->k:J

    invoke-direct {v2, v4, v5}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v1, v2}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "electricityStartTime"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance v1, Ljava/text/SimpleDateFormat;

    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v2

    invoke-direct {v1, v3, v2}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;Ljava/util/Locale;)V

    new-instance v2, Ljava/util/Date;

    invoke-direct {v2}, Ljava/util/Date;-><init>()V

    invoke-virtual {v1, v2}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "electricityEndTime"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v1, Lcom/reyun/tracking/a/a;->j:Lorg/json/JSONArray;

    const-string v2, "electricityData"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "electricityDataEvent"

    invoke-static {v1, v0}, Lcom/reyun/tracking/sdk/Tracking;->setEvent(Ljava/lang/String;Ljava/util/Map;)V

    const/4 v0, 0x0

    sput-object v0, Lcom/reyun/tracking/a/a;->l:Ljava/lang/Runnable;

    return-void
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    sget-boolean v0, Lcom/reyun/tracking/a/i;->a:Z

    if-eqz v0, :cond_0

    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method public static e(Landroid/content/Context;)Ljava/lang/String;
    .locals 7

    const-string v0, "meid"

    const-string v1, "tracking_device_id_cache"

    const-string v2, "android.permission.READ_PHONE_STATE"

    invoke-static {p0, v2}, Lcom/reyun/tracking/a/a;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v2

    const-string v3, "unknown"

    if-nez v2, :cond_0

    return-object v3

    :cond_0
    sget-object v2, Lcom/reyun/tracking/a/a;->d:Ljava/lang/String;

    if-eqz v2, :cond_1

    return-object v2

    :cond_1
    :try_start_0
    invoke-static {p0, v1, v0}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_2

    const-string v4, "_default_"

    invoke-virtual {v4, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_2

    sput-object v2, Lcom/reyun/tracking/a/a;->d:Ljava/lang/String;

    return-object v2

    :cond_2
    const-string v2, "phone"

    invoke-virtual {p0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/telephony/TelephonyManager;

    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x1a

    const/4 v6, 0x0

    if-lt v4, v5, :cond_3

    invoke-virtual {v2, v6}, Landroid/telephony/TelephonyManager;->getMeid(I)Ljava/lang/String;

    move-result-object v2

    :goto_0
    sput-object v2, Lcom/reyun/tracking/a/a;->d:Ljava/lang/String;

    goto :goto_1

    :cond_3
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x17

    if-lt v4, v5, :cond_4

    invoke-virtual {v2, v6}, Landroid/telephony/TelephonyManager;->getDeviceId(I)Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :cond_4
    invoke-virtual {v2}, Landroid/telephony/TelephonyManager;->getDeviceId()Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :goto_1
    sget-object v2, Lcom/reyun/tracking/a/a;->d:Ljava/lang/String;

    invoke-static {p0, v1, v0, v2}, Lcom/reyun/tracking/utils/f;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    sget-object p0, Lcom/reyun/tracking/a/a;->d:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    sput-object v3, Lcom/reyun/tracking/a/a;->d:Ljava/lang/String;

    return-object v3
.end method

.method public static e()V
    .locals 2

    sget-object v0, Lcom/reyun/tracking/a/a;->m:Landroid/hardware/SensorManager;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/reyun/tracking/a/a;->n:Lcom/reyun/tracking/a/d;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/reyun/tracking/a/d;->a(Lcom/reyun/tracking/a/d;)V

    sget-object v0, Lcom/reyun/tracking/a/a;->m:Landroid/hardware/SensorManager;

    sget-object v1, Lcom/reyun/tracking/a/a;->n:Lcom/reyun/tracking/a/d;

    invoke-virtual {v0, v1}, Landroid/hardware/SensorManager;->unregisterListener(Landroid/hardware/SensorEventListener;)V

    :cond_0
    const/4 v0, 0x0

    sput-object v0, Lcom/reyun/tracking/a/a;->n:Lcom/reyun/tracking/a/d;

    return-void
.end method

.method static synthetic f()F
    .locals 1

    sget v0, Lcom/reyun/tracking/a/a;->i:F

    return v0
.end method

.method public static f(Landroid/content/Context;)Lcom/reyun/tracking/a/f;
    .locals 7

    const-string v0, "oaid"

    const-string v1, "^[0]+-[0]+-[0]+-[0]+-[0]+$"

    const-string v2, "unknown"

    const-string v3, "androidid"

    new-instance v4, Lcom/reyun/tracking/a/f;

    invoke-direct {v4}, Lcom/reyun/tracking/a/f;-><init>()V

    :try_start_0
    invoke-static {p0}, Lcom/reyun/tracking/a/a;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    const-string v5, "imei"

    invoke-static {v4, v5}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {v4}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/reyun/tracking/a/a;->b(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_1

    invoke-static {v4}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_0

    goto :goto_0

    :cond_0
    return-object v4

    :cond_1
    :goto_0
    sget-object v5, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    if-eqz v5, :cond_4

    sget-object v5, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-virtual {v5, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_4

    sget-object v5, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v5

    if-lez v5, :cond_4

    sget-object v5, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-static {v1, v5}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_3

    const-string v5, "^[0]+$"

    sget-object v6, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-static {v5, v6}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_2

    goto :goto_2

    :cond_2
    invoke-static {v4, v0}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    sget-object v5, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    :goto_1
    invoke-static {v4, v5}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_3

    :cond_3
    :goto_2
    invoke-static {v4, v3}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    goto :goto_1

    :goto_3
    return-object v4

    :cond_4
    invoke-static {v4, v3}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v4

    :catch_0
    nop

    sget-object v5, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    if-eqz v5, :cond_6

    sget-object v5, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-virtual {v5, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_6

    sget-object v2, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    if-lez v2, :cond_6

    sget-object v2, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-static {v1, v2}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-static {v4, v3}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    goto :goto_4

    :cond_5
    invoke-static {v4, v0}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    sget-object p0, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    :goto_4
    invoke-static {v4, p0}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    return-object v4

    :cond_6
    invoke-static {v4, v3}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v4, p0}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    return-object v4
.end method

.method public static g(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    const-string v0, "android.permission.READ_PHONE_STATE"

    invoke-static {p0, v0}, Lcom/reyun/tracking/a/a;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    const-string v1, "unknown"

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    sget-object v0, Lcom/reyun/tracking/a/a;->f:Ljava/lang/String;

    if-eqz v0, :cond_1

    return-object v0

    :cond_1
    :try_start_0
    const-string v0, "phone"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1d

    if-lt v0, v2, :cond_2

    sput-object v1, Lcom/reyun/tracking/a/a;->f:Ljava/lang/String;

    return-object v1

    :cond_2
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1a

    const/4 v3, 0x0

    if-lt v0, v2, :cond_3

    invoke-virtual {p0, v3}, Landroid/telephony/TelephonyManager;->getImei(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/reyun/tracking/a/a;->f:Ljava/lang/String;

    return-object p0

    :cond_3
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    if-lt v0, v2, :cond_4

    invoke-virtual {p0, v3}, Landroid/telephony/TelephonyManager;->getDeviceId(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/reyun/tracking/a/a;->f:Ljava/lang/String;

    return-object p0

    :cond_4
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getDeviceId()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/reyun/tracking/a/a;->f:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    sput-object v1, Lcom/reyun/tracking/a/a;->f:Ljava/lang/String;

    return-object v1
.end method

.method static synthetic g()Lorg/json/JSONArray;
    .locals 1

    sget-object v0, Lcom/reyun/tracking/a/a;->j:Lorg/json/JSONArray;

    return-object v0
.end method

.method static synthetic h()J
    .locals 2

    sget-wide v0, Lcom/reyun/tracking/a/a;->k:J

    return-wide v0
.end method

.method public static h(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    const-string v0, "phone"

    const-string v1, "android.permission.READ_PHONE_STATE"

    invoke-static {p0, v1}, Lcom/reyun/tracking/a/a;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    const-string v2, "unknown"

    if-nez v1, :cond_0

    return-object v2

    :cond_0
    sget-object v1, Lcom/reyun/tracking/a/a;->g:Ljava/lang/String;

    if-eqz v1, :cond_1

    return-object v1

    :cond_1
    :try_start_0
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    invoke-virtual {v1}, Landroid/telephony/TelephonyManager;->getSimOperatorName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_8

    const-string v1, ""

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSubscriberId()Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_7

    const-string v0, "46000"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "46002"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "46007"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_1

    :cond_2
    const-string v0, "46001"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "46006"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    goto :goto_0

    :cond_3
    const-string v0, "46003"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_6

    const-string v1, "\u4e2d\u56fd\u7535\u4fe1"

    goto :goto_2

    :cond_4
    :goto_0
    const-string v1, "\u4e2d\u56fd\u8054\u901a"

    goto :goto_2

    :cond_5
    :goto_1
    const-string v1, "\u4e2d\u56fd\u79fb\u52a8"

    :cond_6
    :goto_2
    sput-object v1, Lcom/reyun/tracking/a/a;->g:Ljava/lang/String;

    return-object v1

    :cond_7
    sput-object v2, Lcom/reyun/tracking/a/a;->g:Ljava/lang/String;

    return-object v2

    :cond_8
    sput-object v1, Lcom/reyun/tracking/a/a;->g:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "get operator failed! cause "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "Tracking"

    invoke-static {v0, p0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    sput-object v2, Lcom/reyun/tracking/a/a;->g:Ljava/lang/String;

    return-object v2
.end method

.method public static i(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    :try_start_0
    const-string v0, "window"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "*"

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const-string p0, "unknown"

    return-object p0
.end method

.method public static j(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    const-string v0, "unknown"

    :try_start_0
    const-string v1, "android.permission.INTERNET"

    invoke-static {p0, v1}, Lcom/reyun/tracking/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v1, "connectivity"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/ConnectivityManager;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v1, v3}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v1

    if-eqz v2, :cond_0

    invoke-virtual {v2}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v2

    if-eqz v2, :cond_0

    const-string p0, "WIFI"

    return-object p0

    :cond_0
    if-eqz v1, :cond_1

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->s(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    return-object v0

    :cond_2
    sget-boolean p0, Lcom/reyun/tracking/a/i;->a:Z

    if-eqz p0, :cond_3

    const-string p0, " lost  permission"

    const-string v1, "lost----> android.permission.INTERNET"

    invoke-static {p0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_3
    return-object v0
.end method

.method public static k(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    const-string v0, "unknown"

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v2, 0x0

    invoke-virtual {v1, p0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz p0, :cond_0

    :try_start_1
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    if-gtz v1, :cond_1

    goto :goto_0

    :catch_0
    move-exception v0

    goto :goto_1

    :cond_0
    :goto_0
    return-object v0

    :catch_1
    move-exception p0

    move-object v3, v0

    move-object v0, p0

    move-object p0, v3

    :goto_1
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-object p0
.end method

.method public static l(Landroid/content/Context;)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    iget p0, p0, Landroid/content/res/Configuration;->screenLayout:I

    and-int/lit8 p0, p0, 0xf

    const/4 v1, 0x3

    if-lt p0, v1, :cond_1

    const/4 v0, 0x1

    :cond_1
    return v0
.end method

.method public static m(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    const-string v0, "unknown"

    :try_start_0
    const-string v1, "android.permission.ACCESS_WIFI_STATE"

    invoke-static {p0, v1}, Lcom/reyun/tracking/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string p0, "Tracking"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "!!!MISSING permission ["

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    :cond_0
    const-string v1, "wifi"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/wifi/WifiManager;

    invoke-virtual {p0}, Landroid/net/wifi/WifiManager;->getConnectionInfo()Landroid/net/wifi/WifiInfo;

    move-result-object p0

    if-nez p0, :cond_1

    return-object v0

    :cond_1
    invoke-virtual {p0}, Landroid/net/wifi/WifiInfo;->getMacAddress()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    return-object v0
.end method

.method public static n(Landroid/content/Context;)I
    .locals 1

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v0, "screen_brightness"

    invoke-static {p0, v0}, Landroid/provider/Settings$System;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/16 p0, 0xff

    :goto_0
    return p0
.end method

.method public static o(Landroid/content/Context;)I
    .locals 1

    :try_start_0
    const-string v0, "audio"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/media/AudioManager;

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Landroid/media/AudioManager;->getStreamVolume(I)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    const/4 p0, 0x0

    return p0
.end method

.method public static p(Landroid/content/Context;)V
    .locals 2

    sget-object v0, Lcom/reyun/tracking/a/a;->l:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    sput v0, Lcom/reyun/tracking/a/a;->i:F

    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    sput-object v0, Lcom/reyun/tracking/a/a;->j:Lorg/json/JSONArray;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sput-wide v0, Lcom/reyun/tracking/a/a;->k:J

    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object v0

    new-instance v1, Lcom/reyun/tracking/a/b;

    invoke-direct {v1, p0, v0}, Lcom/reyun/tracking/a/b;-><init>(Landroid/content/Context;Lcom/reyun/tracking/sdk/a;)V

    sput-object v1, Lcom/reyun/tracking/a/a;->l:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static q(Landroid/content/Context;)V
    .locals 3

    sget-object v0, Lcom/reyun/tracking/a/a;->n:Lcom/reyun/tracking/a/d;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/reyun/tracking/a/d;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/reyun/tracking/a/d;-><init>(Lcom/reyun/tracking/a/b;)V

    sput-object v0, Lcom/reyun/tracking/a/a;->n:Lcom/reyun/tracking/a/d;

    const-string v0, "sensor"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/hardware/SensorManager;

    sput-object p0, Lcom/reyun/tracking/a/a;->m:Landroid/hardware/SensorManager;

    if-eqz p0, :cond_1

    const/4 v0, 0x4

    invoke-virtual {p0, v0}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object p0

    if-eqz p0, :cond_1

    sget-object v0, Lcom/reyun/tracking/a/a;->m:Landroid/hardware/SensorManager;

    sget-object v1, Lcom/reyun/tracking/a/a;->n:Lcom/reyun/tracking/a/d;

    const/4 v2, 0x2

    invoke-virtual {v0, v1, p0, v2}, Landroid/hardware/SensorManager;->registerListener(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z

    :cond_1
    return-void
.end method

.method private static r(Landroid/content/Context;)Lcom/reyun/tracking/a/f;
    .locals 8

    const-string v0, "tracking_device_id_cache"

    const-string v1, "^[0]+-[0]+-[0]+-[0]+-[0]+$"

    const-string v2, "unknown"

    const-string v3, "oaid"

    const-string v4, "androidid"

    new-instance v5, Lcom/reyun/tracking/a/f;

    invoke-direct {v5}, Lcom/reyun/tracking/a/f;-><init>()V

    :try_start_0
    invoke-static {p0}, Lcom/reyun/tracking/a/a;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    const-string v6, "imei"

    invoke-static {v5, v6}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {v5}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/reyun/tracking/a/a;->b(Ljava/lang/String;)Z

    move-result v6

    if-nez v6, :cond_1

    invoke-static {v5}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    goto :goto_0

    :cond_0
    return-object v5

    :cond_1
    :goto_0
    sget-object v6, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    if-eqz v6, :cond_4

    sget-object v6, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-virtual {v6, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_4

    sget-object v6, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v6

    if-lez v6, :cond_4

    sget-object v6, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-static {v1, v6}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_3

    const-string v6, "^[0]+$"

    sget-object v7, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-static {v6, v7}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_2

    goto :goto_1

    :cond_2
    invoke-static {v5, v3}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    sget-object v6, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-static {v5, v6}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {v5}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;)Ljava/lang/String;

    move-result-object v6

    invoke-static {p0, v0, v3, v6}, Lcom/reyun/tracking/utils/f;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :cond_3
    :goto_1
    invoke-static {v5, v4}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    :goto_2
    return-object v5

    :cond_4
    invoke-static {v5, v4}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v5

    :catch_0
    nop

    sget-object v6, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    if-eqz v6, :cond_6

    sget-object v6, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-virtual {v6, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_6

    sget-object v2, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    if-lez v2, :cond_6

    sget-object v2, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-static {v1, v2}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-static {v5, v4}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v5, p0}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_3

    :cond_5
    invoke-static {v5, v3}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    sget-object v1, Lcom/reyun/tracking/a/h;->a:Ljava/lang/String;

    invoke-static {v5, v1}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {v5}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v0, v3, v1}, Lcom/reyun/tracking/utils/f;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :goto_3
    return-object v5

    :cond_6
    invoke-static {v5, v4}, Lcom/reyun/tracking/a/f;->b(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    invoke-static {p0}, Lcom/reyun/tracking/a/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v5, p0}, Lcom/reyun/tracking/a/f;->a(Lcom/reyun/tracking/a/f;Ljava/lang/String;)Ljava/lang/String;

    return-object v5
.end method

.method private static s(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    const-string v0, "android.permission.READ_PHONE_STATE"

    invoke-static {p0, v0}, Lcom/reyun/tracking/a/a;->b(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    const-string v1, "unknown"

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    const-string v0, "phone"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getNetworkType()I

    move-result p0

    const/4 v0, 0x4

    const-string v2, "2G"

    const-string v3, "3G"

    if-ne p0, v0, :cond_1

    :goto_0
    move-object v1, v2

    goto :goto_3

    :cond_1
    const/4 v0, 0x2

    if-ne p0, v0, :cond_2

    goto :goto_0

    :cond_2
    const/4 v0, 0x5

    if-ne p0, v0, :cond_3

    :goto_1
    move-object v1, v3

    goto :goto_3

    :cond_3
    const/4 v0, 0x6

    if-ne p0, v0, :cond_4

    :goto_2
    goto :goto_1

    :cond_4
    const/4 v0, 0x1

    if-ne p0, v0, :cond_5

    goto :goto_0

    :cond_5
    const/16 v0, 0x8

    if-ne p0, v0, :cond_6

    goto :goto_1

    :cond_6
    const/16 v0, 0xa

    if-ne p0, v0, :cond_7

    const-string v1, "HSPA"

    goto :goto_3

    :cond_7
    const/16 v0, 0x9

    if-ne p0, v0, :cond_8

    const-string v1, "HSUPA"

    goto :goto_3

    :cond_8
    const/4 v0, 0x3

    if-ne p0, v0, :cond_9

    goto :goto_2

    :cond_9
    const/16 v0, 0xd

    if-ne p0, v0, :cond_a

    const-string v1, "4G"

    goto :goto_3

    :cond_a
    const/16 v0, 0x14

    if-ne p0, v0, :cond_b

    const-string v1, "5G"

    goto :goto_3

    :cond_b
    if-nez p0, :cond_c

    const-string v1, "UNKOWN"

    :cond_c
    :goto_3
    return-object v1
.end method
