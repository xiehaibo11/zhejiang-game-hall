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

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 121
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devcieid:Ljava/lang/String;

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;
    .locals 2

    .line 42
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceInfo:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    if-nez v0, :cond_1

    .line 43
    const-class v0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    monitor-enter v0

    .line 44
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceInfo:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    if-nez v1, :cond_0

    .line 45
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceInfo:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    .line 47
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 49
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceInfo:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    return-object v0
.end method

.method private initCarrier(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    :try_start_0
    const-string v0, "phone"

    .line 194
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/telephony/TelephonyManager;

    .line 195
    invoke-virtual {p1}, Landroid/telephony/TelephonyManager;->getNetworkOperatorName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->carrier:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p1, "unknown"

    .line 197
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->carrier:Ljava/lang/String;

    .line 199
    :goto_0
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->carrier:Ljava/lang/String;

    return-object p1
.end method

.method private initClientIp()V
    .locals 5

    .line 164
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->isAgreeprivacy()Z

    move-result v0

    const-string v1, "unknown"

    if-nez v0, :cond_0

    .line 165
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    return-void

    .line 169
    :cond_0
    :try_start_0
    invoke-static {}, Ljava/net/NetworkInterface;->getNetworkInterfaces()Ljava/util/Enumeration;

    move-result-object v0

    if-nez v0, :cond_1

    .line 171
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    return-void

    .line 174
    :cond_1
    invoke-interface {v0}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 175
    invoke-interface {v0}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/net/NetworkInterface;

    .line 176
    invoke-virtual {v2}, Ljava/net/NetworkInterface;->getInetAddresses()Ljava/util/Enumeration;

    move-result-object v2

    .line 177
    :goto_0
    invoke-interface {v2}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 178
    invoke-interface {v2}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/net/InetAddress;

    .line 179
    invoke-virtual {v3}, Ljava/net/InetAddress;->isLoopbackAddress()Z

    move-result v4

    if-eqz v4, :cond_2

    goto :goto_0

    .line 180
    :cond_2
    invoke-virtual {v3}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;
    :try_end_0
    .catch Ljava/net/SocketException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 184
    invoke-virtual {v0}, Ljava/net/SocketException;->printStackTrace()V

    .line 185
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    :cond_3
    return-void
.end method


# virtual methods
.method public getAndroidId()Ljava/lang/String;
    .locals 2

    .line 105
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    if-eqz v0, :cond_0

    .line 106
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getAndroidId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 108
    :cond_0
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    .line 109
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getAndroidId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getAppMemory()I
    .locals 1

    .line 245
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->appMemory:I

    return v0
.end method

.method public getAppUsedMemory()I
    .locals 1

    .line 249
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->appUsedMemory:I

    return v0
.end method

.method public getCarrier()Ljava/lang/String;
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->carrier:Ljava/lang/String;

    return-object v0
.end method

.method public getClientIp()Ljava/lang/String;
    .locals 1

    .line 92
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 93
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->initClientIp()V

    .line 95
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->clientIp:Ljava/lang/String;

    return-object v0
.end method

.method public getDevcieidWithH()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getDeviceId()Ljava/lang/String;
    .locals 1

    .line 99
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->initDevcieId()V

    .line 100
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devcieid:Ljava/lang/String;

    return-object v0
.end method

.method public getDeviceModel()Ljava/lang/String;
    .locals 1

    .line 80
    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    return-object v0
.end method

.method public getDeviceName()Ljava/lang/String;
    .locals 1

    .line 253
    sget-object v0, Landroid/os/Build;->DEVICE:Ljava/lang/String;

    return-object v0
.end method

.method public getDeviceOS()Ljava/lang/String;
    .locals 1

    const-string v0, "android"

    return-object v0
.end method

.method public getDevicePixel()Ljava/lang/String;
    .locals 1

    .line 88
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devicePixel:Ljava/lang/String;

    return-object v0
.end method

.method public getDeviceVersionCode()Ljava/lang/String;
    .locals 1

    .line 71
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getImei()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getMac()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getManufactory()Ljava/lang/String;
    .locals 1

    .line 58
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    return-object v0
.end method

.method public getManufacturer()Ljava/lang/String;
    .locals 1

    .line 257
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    return-object v0
.end method

.method public getNetChannelStr()Ljava/lang/String;
    .locals 1

    .line 154
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getNetworkState(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const-string v0, ""

    return-object v0
.end method

.method public getOsVersion()Ljava/lang/String;
    .locals 2

    .line 67
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Android+"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getRamAvailMem()I
    .locals 2

    .line 219
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    if-eqz v0, :cond_0

    .line 220
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRamAvailMem()I

    move-result v0

    return v0

    .line 222
    :cond_0
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    .line 223
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRamAvailMem()I

    move-result v0

    return v0
.end method

.method public getRomAvailMem()I
    .locals 2

    .line 228
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    if-eqz v0, :cond_0

    .line 229
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRomAvailMem()I

    move-result v0

    return v0

    .line 231
    :cond_0
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    .line 232
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRomAvailMem()I

    move-result v0

    return v0
.end method

.method public getTotalRamMemory()I
    .locals 1

    .line 237
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->totalRamMemory:I

    return v0
.end method

.method public getTotalRomMemory()I
    .locals 1

    .line 241
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->totalRomMemory:I

    return v0
.end method

.method public getUuid()Ljava/lang/String;
    .locals 3

    .line 261
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

.method public init(Landroid/content/Context;)V
    .locals 1

    .line 124
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->mContext:Landroid/content/Context;

    .line 125
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    .line 126
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    .line 127
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRamTotalMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->totalRamMemory:I

    .line 128
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRomTotalMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->totalRomMemory:I

    .line 129
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRamAvailMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->availRamMemory:I

    .line 130
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getRomAvailMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->availRomMemory:I

    .line 131
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getAppMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->appMemory:I

    .line 132
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->memoryInfo:Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->getAppUsedMem()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->appUsedMemory:I

    .line 133
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->initDevicePixel(Landroid/content/Context;)V

    .line 134
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->initCarrier(Landroid/content/Context;)Ljava/lang/String;

    return-void
.end method

.method public initDevcieId()V
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    if-eqz v0, :cond_0

    .line 141
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devcieid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 142
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->deviceID:Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceID;->getDevcieId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devcieid:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public initDevicePixel(Landroid/content/Context;)V
    .locals 3

    .line 206
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    .line 207
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "*"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Landroid/util/DisplayMetrics;->densityDpi:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->devicePixel:Ljava/lang/String;

    return-void
.end method
