.class public Lcom/mbridge/msdk/optimize/SensitiveDataUtil;
.super Ljava/lang/Object;
.source "SensitiveDataUtil.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/optimize/SensitiveDataUtil$a;
    }
.end annotation


# static fields
.field private static androidID:Ljava/lang/String;

.field private static deviceid:Ljava/lang/String;

.field private static imsi:Ljava/lang/String;

.field private static isAcquireAndroidId:Z

.field private static isAcquireIMEI:Z

.field private static isAcquireMac:Z

.field private static isAcquireOAID:Z

.field private static isAcquiredIMSI:Z

.field private static mSelfId:Ljava/lang/String;

.field private static macAddress:Ljava/lang/String;

.field private static oaid:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$002(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 42
    sput-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->oaid:Ljava/lang/String;

    return-object p0
.end method

.method public static getAndroidID(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    .line 192
    sget-boolean v1, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isAcquireAndroidId:Z

    if-eqz v1, :cond_0

    .line 193
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->androidID:Ljava/lang/String;

    return-object p0

    .line 196
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    const-string v1, "android_id"

    invoke-static {p0, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->androidID:Ljava/lang/String;

    if-nez p0, :cond_1

    .line 198
    sput-object v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->androidID:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 201
    :catch_0
    sput-object v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->androidID:Ljava/lang/String;

    :cond_1
    :goto_0
    const/4 p0, 0x1

    .line 203
    sput-boolean p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isAcquireAndroidId:Z

    .line 204
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->androidID:Ljava/lang/String;

    return-object p0
.end method

.method private static getFormNewThread(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 348
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;

    invoke-direct {v1, p1, p0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;-><init>(Ljava/lang/String;Landroid/content/Context;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 380
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public static getIMEI(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    .line 120
    sget-boolean v1, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isAcquireIMEI:Z

    if-eqz v1, :cond_0

    .line 121
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->deviceid:Ljava/lang/String;

    return-object p0

    :cond_0
    :try_start_0
    const-string v1, "phone"

    .line 124
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    .line 125
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getDeviceId()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->deviceid:Ljava/lang/String;

    if-nez p0, :cond_1

    .line 127
    sput-object v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->deviceid:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 130
    :catchall_0
    sput-object v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->deviceid:Ljava/lang/String;

    :cond_1
    :goto_0
    const/4 p0, 0x1

    .line 132
    sput-boolean p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isAcquireIMEI:Z

    .line 133
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->deviceid:Ljava/lang/String;

    return-object p0
.end method

.method public static getImsi(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    .line 209
    sget-boolean v1, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isAcquiredIMSI:Z

    if-eqz v1, :cond_0

    .line 210
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->imsi:Ljava/lang/String;

    return-object p0

    :cond_0
    :try_start_0
    const-string v1, "phone"

    .line 213
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    .line 214
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSubscriberId()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->imsi:Ljava/lang/String;

    if-nez p0, :cond_1

    .line 216
    sput-object v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->imsi:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 219
    :catch_0
    sput-object v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->imsi:Ljava/lang/String;

    :cond_1
    :goto_0
    const/4 p0, 0x1

    .line 221
    sput-boolean p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isAcquiredIMSI:Z

    .line 222
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->imsi:Ljava/lang/String;

    return-object p0
.end method

.method private static getMac()Ljava/lang/String;
    .locals 9

    const-string v0, ""

    .line 165
    :try_start_0
    invoke-static {}, Ljava/net/NetworkInterface;->getNetworkInterfaces()Ljava/util/Enumeration;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Collections;->list(Ljava/util/Enumeration;)Ljava/util/ArrayList;

    move-result-object v1

    .line 166
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/net/NetworkInterface;

    .line 167
    invoke-virtual {v2}, Ljava/net/NetworkInterface;->getName()Ljava/lang/String;

    move-result-object v3

    const-string v4, "wlan0"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_0

    goto :goto_0

    .line 169
    :cond_0
    invoke-virtual {v2}, Ljava/net/NetworkInterface;->getHardwareAddress()[B

    move-result-object v1

    if-nez v1, :cond_1

    return-object v0

    .line 174
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    .line 175
    array-length v3, v1

    const/4 v4, 0x0

    move v5, v4

    :goto_1
    const/4 v6, 0x1

    if-ge v5, v3, :cond_2

    aget-byte v7, v1, v5

    const-string v8, "%02X:"

    new-array v6, v6, [Ljava/lang/Object;

    .line 176
    invoke-static {v7}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v7

    aput-object v7, v6, v4

    invoke-static {v8, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 179
    :cond_2
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    if-lez v1, :cond_3

    .line 180
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    sub-int/2addr v1, v6

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->deleteCharAt(I)Ljava/lang/StringBuilder;

    .line 182
    :cond_3
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v1

    .line 185
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    return-object v0
.end method

.method public static getMacAddress(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 137
    sget-boolean v1, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isAcquireMac:Z

    if-eqz v1, :cond_0

    .line 138
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->macAddress:Ljava/lang/String;

    return-object p0

    .line 142
    :cond_0
    :try_start_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    if-lt v1, v2, :cond_1

    .line 143
    invoke-static {}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->getMac()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_1
    const-string v1, "wifi"

    .line 145
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/wifi/WifiManager;

    .line 146
    invoke-virtual {p0}, Landroid/net/wifi/WifiManager;->getConnectionInfo()Landroid/net/wifi/WifiInfo;

    move-result-object p0

    .line 147
    invoke-virtual {p0}, Landroid/net/wifi/WifiInfo;->getMacAddress()Ljava/lang/String;

    move-result-object p0

    :goto_0
    if-nez p0, :cond_2

    return-object v0

    :cond_2
    const-string v1, ":"

    .line 152
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 154
    invoke-virtual {p0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->macAddress:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x1

    .line 159
    sput-boolean v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isAcquireMac:Z

    return-object p0

    :catch_0
    return-object v0
.end method

.method public static getOaid(Landroid/content/Context;)Ljava/lang/String;
    .locals 13

    .line 226
    sget-boolean v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isAcquireOAID:Z

    if-eqz v0, :cond_0

    .line 227
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->oaid:Ljava/lang/String;

    return-object p0

    .line 229
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->oaid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 230
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->oaid:Ljava/lang/String;

    return-object p0

    .line 233
    :cond_1
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$a;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$a;-><init>(Landroid/content/Context;)V

    iget-object v0, v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$a;->b:Ljava/lang/String;

    sput-object v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->oaid:Ljava/lang/String;

    .line 234
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 235
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->oaid:Ljava/lang/String;

    return-object p0

    .line 237
    :cond_2
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    .line 238
    invoke-static {}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isFreeMeOS()Z

    move-result v1

    if-eqz v1, :cond_3

    const-string v0, "FERRMEOS"

    goto :goto_0

    .line 240
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isSSUIOS()Z

    move-result v1

    if-eqz v1, :cond_4

    const-string v0, "SSUI"

    .line 243
    :cond_4
    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 244
    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ASUS"

    const-string v2, "HUAWEI"

    const-string v3, "HONOR"

    const-string v4, "OPPO"

    const-string v5, "ONEPLUS"

    const-string v6, "ZTE"

    const-string v7, "FERRMEOS"

    const-string v8, "SSUI"

    const-string v9, "SAMSUNG"

    const-string v10, "MEIZU"

    const-string v11, "MOTOLORA"

    const-string v12, "LENOVO"

    .line 245
    filled-new-array/range {v1 .. v12}, [Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 246
    invoke-static {p0, v0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->getFormNewThread(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_1

    :cond_5
    const-string v1, "VIVO"

    .line 247
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 248
    new-instance v0, Lcom/mbridge/msdk/optimize/a/a/h;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/optimize/a/a/h;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/mbridge/msdk/optimize/a/a/h;->a()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->oaid:Ljava/lang/String;

    goto :goto_1

    :cond_6
    const-string v1, "NUBIA"

    .line 249
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 250
    new-instance v0, Lcom/mbridge/msdk/optimize/a/a/d;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/optimize/a/a/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/mbridge/msdk/optimize/a/a/d;->a()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->oaid:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    const-string p0, ""

    .line 254
    sput-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->oaid:Ljava/lang/String;

    :cond_7
    :goto_1
    const/4 p0, 0x1

    .line 256
    sput-boolean p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->isAcquireOAID:Z

    .line 257
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->oaid:Ljava/lang/String;

    return-object p0
.end method

.method private static getProperty(Ljava/lang/String;)Ljava/lang/String;
    .locals 8

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    const-string v1, "android.os.SystemProperties"

    .line 282
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "get"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    .line 283
    const-class v5, Ljava/lang/String;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    const-class v5, Ljava/lang/String;

    const/4 v7, 0x1

    aput-object v5, v4, v7

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v6

    const-string p0, "unknown"

    aput-object p0, v3, v7

    .line 284
    invoke-virtual {v2, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p0

    :catch_0
    return-object v0
.end method

.method public static getSelfId(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 99
    sget-object v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->mSelfId:Ljava/lang/String;

    if-nez v0, :cond_1

    .line 100
    new-instance v0, Ljava/io/File;

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "/.a/track_id.bin"

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 102
    :try_start_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_0

    .line 103
    invoke-static {p0, v0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->writeInstallationFile(Landroid/content/Context;Ljava/io/File;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->mSelfId:Ljava/lang/String;

    goto :goto_0

    .line 105
    :cond_0
    invoke-static {v0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->readInstallationFile(Ljava/io/File;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->mSelfId:Ljava/lang/String;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 108
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    .line 111
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->mSelfId:Ljava/lang/String;

    if-nez p0, :cond_2

    const-string p0, ""

    :cond_2
    return-object p0
.end method

.method public static isFreeMeOS()Z
    .locals 2

    const-string v0, "ro.build.freeme.label"

    .line 261
    invoke-static {v0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 262
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "FREEMEOS"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static isSSUIOS()Z
    .locals 2

    const-string v0, "ro.ssui.product"

    .line 269
    invoke-static {v0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 270
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "unknown"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private static readInstallationFile(Ljava/io/File;)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 84
    :try_start_0
    new-instance v1, Ljava/io/RandomAccessFile;

    const-string v2, "r"

    invoke-direct {v1, p0, v2}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 85
    :try_start_1
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->length()J

    move-result-wide v2

    long-to-int p0, v2

    new-array p0, p0, [B

    .line 86
    invoke-virtual {v1, p0}, Ljava/io/RandomAccessFile;->readFully([B)V

    .line 87
    new-instance v2, Ljava/lang/String;

    invoke-direct {v2, p0}, Ljava/lang/String;-><init>([B)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 92
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->close()V

    return-object v2

    :catchall_0
    move-exception p0

    goto :goto_0

    :catchall_1
    move-exception p0

    move-object v1, v0

    .line 89
    :goto_0
    :try_start_2
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    if-eqz v1, :cond_0

    .line 92
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->close()V

    :cond_0
    return-object v0

    :catchall_2
    move-exception p0

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->close()V

    .line 94
    :cond_1
    throw p0
.end method

.method private static writeFile(Landroid/content/Context;Ljava/io/File;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 58
    invoke-virtual {p1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object p0

    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result p0

    if-nez p0, :cond_0

    .line 59
    invoke-virtual {p1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object p0

    invoke-virtual {p0}, Ljava/io/File;->mkdirs()Z

    .line 61
    :cond_0
    invoke-virtual {p1}, Ljava/io/File;->createNewFile()Z

    const/4 p0, 0x0

    .line 64
    :try_start_0
    new-instance v0, Ljava/io/FileOutputStream;

    invoke-direct {v0, p1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 65
    :try_start_1
    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/io/FileOutputStream;->write([B)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    goto :goto_0

    :catchall_1
    move-exception p1

    move-object v0, p0

    move-object p0, p1

    .line 67
    :goto_0
    :try_start_2
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    if-eqz v0, :cond_1

    .line 70
    :goto_1
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V

    :cond_1
    return-void

    :catchall_2
    move-exception p0

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V

    .line 72
    :cond_2
    throw p0
.end method

.method private static writeInstallationFile(Landroid/content/Context;Ljava/io/File;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 76
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    .line 77
    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, p1, v1}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->writeFile(Landroid/content/Context;Ljava/io/File;Ljava/lang/String;)V

    .line 78
    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
