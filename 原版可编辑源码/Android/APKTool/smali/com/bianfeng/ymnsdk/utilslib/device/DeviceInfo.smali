.class public Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;
.super Ljava/lang/Object;
.source "DeviceInfo.java"


# static fields
.field private static volatile deviceInfo:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;


# instance fields
.field private appMemory:I

.field private appUsedMemory:I

.field private availRamMemory:I

.field private availRomMemory:I

.field private carrier:Ljava/lang/String;

.field private clientIp:Ljava/lang/String;

.field private devcieid:Ljava/lang/String;

.field private deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

.field private devicePixel:Ljava/lang/String;

.field private mContext:Landroid/content/Context;

.field private memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

.field private totalRamMemory:I

.field private totalRomMemory:I


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 132
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devcieid:Ljava/lang/String;

    .line 39
    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;
    .locals 2

    .line 45
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceInfo:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    if-nez v0, :cond_1

    .line 46
    const-class v0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    monitor-enter v0

    .line 47
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceInfo:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    if-nez v1, :cond_0

    .line 48
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceInfo:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    .line 50
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 52
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceInfo:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    return-object v0
.end method

.method private initCarrier(Landroid/content/Context;)Ljava/lang/String;
    .locals 4
    .param p1, "mContext"    # Landroid/content/Context;

    .line 207
    :try_start_0
    const-string v0, "phone"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 208
    .local v0, "sTelManager":Landroid/telephony/TelephonyManager;
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getNetworkOperatorName()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->carrier:Ljava/lang/String;

    .line 209
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->carrier:Ljava/lang/String;

    if-eqz v1, :cond_0

    .line 211
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_isp:Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->carrier:Ljava/lang/String;

    invoke-static {v1, v2, v3}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 215
    .end local v0    # "sTelManager":Landroid/telephony/TelephonyManager;
    :cond_0
    goto :goto_0

    .line 213
    :catch_0
    move-exception v0

    .line 214
    .local v0, "e":Ljava/lang/Exception;
    const-string v1, "unknown"

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->carrier:Ljava/lang/String;

    .line 216
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->carrier:Ljava/lang/String;

    return-object v0
.end method

.method private initClientIp()V
    .locals 8

    .line 175
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->isAgreeprivacy()Z

    move-result v0

    const-string v1, "unknown"

    if-nez v0, :cond_0

    .line 176
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    .line 177
    return-void

    .line 180
    :cond_0
    :try_start_0
    invoke-static {}, Ljava/net/NetworkInterface;->getNetworkInterfaces()Ljava/util/Enumeration;

    move-result-object v0

    .line 181
    .local v0, "en":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/net/NetworkInterface;>;"
    if-nez v0, :cond_1

    .line 182
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    .line 183
    return-void

    .line 185
    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v2

    if-eqz v2, :cond_4

    .line 186
    invoke-interface {v0}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/net/NetworkInterface;

    .line 187
    .local v2, "netIface":Ljava/net/NetworkInterface;
    invoke-virtual {v2}, Ljava/net/NetworkInterface;->getInetAddresses()Ljava/util/Enumeration;

    move-result-object v3

    .line 188
    .local v3, "ipAddrs":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/net/InetAddress;>;"
    :goto_1
    invoke-interface {v3}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v4

    if-eqz v4, :cond_3

    .line 189
    invoke-interface {v3}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/net/InetAddress;

    .line 190
    .local v4, "ip":Ljava/net/InetAddress;
    invoke-virtual {v4}, Ljava/net/InetAddress;->isLoopbackAddress()Z

    move-result v5

    if-eqz v5, :cond_2

    goto :goto_1

    .line 191
    :cond_2
    invoke-virtual {v4}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    .line 193
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v5

    sget-object v6, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_ip:Ljava/lang/String;

    iget-object v7, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    invoke-static {v5, v6, v7}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/net/SocketException; {:try_start_0 .. :try_end_0} :catch_0

    .line 194
    .end local v4    # "ip":Ljava/net/InetAddress;
    goto :goto_1

    .line 195
    .end local v2    # "netIface":Ljava/net/NetworkInterface;
    .end local v3    # "ipAddrs":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/net/InetAddress;>;"
    :cond_3
    goto :goto_0

    .line 199
    .end local v0    # "en":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/net/NetworkInterface;>;"
    :cond_4
    goto :goto_2

    .line 196
    :catch_0
    move-exception v0

    .line 197
    .local v0, "ex":Ljava/net/SocketException;
    invoke-virtual {v0}, Ljava/net/SocketException;->printStackTrace()V

    .line 198
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    .line 200
    .end local v0    # "ex":Ljava/net/SocketException;
    :goto_2
    return-void
.end method


# virtual methods
.method public getAndroidId()Ljava/lang/String;
    .locals 2

    .line 116
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    if-eqz v0, :cond_0

    .line 117
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getAndroidId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 119
    :cond_0
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    .line 120
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getAndroidId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getAppMemory()I
    .locals 1

    .line 262
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->appMemory:I

    return v0
.end method

.method public getAppUsedMemory()I
    .locals 1

    .line 266
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->appUsedMemory:I

    return v0
.end method

.method public getCarrier()Ljava/lang/String;
    .locals 1

    .line 95
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->carrier:Ljava/lang/String;

    return-object v0
.end method

.method public getClientIp()Ljava/lang/String;
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 104
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->initClientIp()V

    .line 106
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    return-object v0
.end method

.method public getDevcieidWithH()Ljava/lang/String;
    .locals 1

    .line 232
    const-string v0, ""

    return-object v0
.end method

.method public getDeviceId()Ljava/lang/String;
    .locals 1

    .line 110
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->initDevcieId()V

    .line 111
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devcieid:Ljava/lang/String;

    return-object v0
.end method

.method public getDeviceModel()Ljava/lang/String;
    .locals 3

    .line 90
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_model:Ljava/lang/String;

    sget-object v2, Landroid/os/Build;->MODEL:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 91
    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    return-object v0
.end method

.method public getDeviceName()Ljava/lang/String;
    .locals 1

    .line 270
    sget-object v0, Landroid/os/Build;->DEVICE:Ljava/lang/String;

    return-object v0
.end method

.method public getDeviceOS()Ljava/lang/String;
    .locals 1

    .line 228
    const-string v0, "android"

    return-object v0
.end method

.method public getDevicePixel()Ljava/lang/String;
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devicePixel:Ljava/lang/String;

    return-object v0
.end method

.method public getDeviceVersionCode()Ljava/lang/String;
    .locals 1

    .line 80
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getImei()Ljava/lang/String;
    .locals 1

    .line 125
    const/4 v0, 0x0

    return-object v0
.end method

.method public getMac()Ljava/lang/String;
    .locals 1

    .line 129
    const/4 v0, 0x0

    return-object v0
.end method

.method public getManufactory()Ljava/lang/String;
    .locals 1

    .line 65
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    return-object v0
.end method

.method public getManufacturer()Ljava/lang/String;
    .locals 1

    .line 274
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    return-object v0
.end method

.method public getNetChannelStr()Ljava/lang/String;
    .locals 2

    .line 165
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getNetworkState(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 166
    :catch_0
    move-exception v0

    .line 167
    .local v0, "e":Ljava/lang/Exception;
    const-string v1, ""

    return-object v1
.end method

.method public getOsVersion()Ljava/lang/String;
    .locals 5

    .line 75
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getPLSPName()Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->pl_os_version:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Android+"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setPLStringToSP(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 76
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getRamAvailMem()I
    .locals 2

    .line 236
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    if-eqz v0, :cond_0

    .line 237
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRamAvailMem()I

    move-result v0

    return v0

    .line 239
    :cond_0
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    .line 240
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRamAvailMem()I

    move-result v0

    return v0
.end method

.method public getRomAvailMem()I
    .locals 2

    .line 245
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    if-eqz v0, :cond_0

    .line 246
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRomAvailMem()I

    move-result v0

    return v0

    .line 248
    :cond_0
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    .line 249
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRomAvailMem()I

    move-result v0

    return v0
.end method

.method public getTotalRamMemory()I
    .locals 1

    .line 254
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->totalRamMemory:I

    return v0
.end method

.method public getTotalRomMemory()I
    .locals 1

    .line 258
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->totalRomMemory:I

    return v0
.end method

.method public getUuid()Ljava/lang/String;
    .locals 3

    .line 278
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "-"

    const-string v2, ""

    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getUuidFormSP()Ljava/lang/String;
    .locals 5

    .line 282
    const-string v0, "ymnutils_uuid"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 283
    .local v1, "uuid":Ljava/lang/String;
    const-string v2, ""

    if-eq v2, v1, :cond_0

    .line 284
    return-object v1

    .line 286
    :cond_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "-"

    invoke-virtual {v3, v4, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 288
    :try_start_0
    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_0 .. :try_end_0} :catch_0

    .line 291
    nop

    .line 292
    return-object v1

    .line 289
    :catch_0
    move-exception v0

    .line 290
    .local v0, "e":Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
    new-instance v2, Ljava/lang/RuntimeException;

    invoke-direct {v2, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v2
.end method

.method public init(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 135
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->mContext:Landroid/content/Context;

    .line 136
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    .line 137
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    .line 138
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRamTotalMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->totalRamMemory:I

    .line 139
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRomTotalMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->totalRomMemory:I

    .line 140
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRamAvailMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->availRamMemory:I

    .line 141
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRomAvailMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->availRomMemory:I

    .line 142
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getAppMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->appMemory:I

    .line 143
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getAppUsedMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->appUsedMemory:I

    .line 144
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->initDevicePixel(Landroid/content/Context;)V

    .line 145
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->initCarrier(Landroid/content/Context;)Ljava/lang/String;

    .line 147
    return-void
.end method

.method public initDevcieId()V
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    if-eqz v0, :cond_0

    .line 152
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devcieid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 153
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getDevcieId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devcieid:Ljava/lang/String;

    .line 156
    :cond_0
    return-void
.end method

.method public initDevicePixel(Landroid/content/Context;)V
    .locals 4
    .param p1, "mContext"    # Landroid/content/Context;

    .line 223
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    .line 224
    .local v0, "display":Landroid/util/DisplayMetrics;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v2, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "*"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v0, Landroid/util/DisplayMetrics;->densityDpi:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devicePixel:Ljava/lang/String;

    .line 225
    return-void
.end method

.method public setContext(Landroid/content/Context;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;

    .line 56
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->mContext:Landroid/content/Context;

    .line 57
    return-void
.end method
