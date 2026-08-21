.class public Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;
.super Ljava/lang/Object;
.source "YmndataDeviceInfo.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getAndroidId()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getAndroidId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getAppMemory()I
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getAppMemory()I

    move-result v0

    return v0
.end method

.method public static getAppUsedMemory()I
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getAppUsedMemory()I

    move-result v0

    return v0
.end method

.method public static getClientIp()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getClientIp()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDeviceId()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDeviceIdFormSPUuid()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getUuidFormSP()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDeviceModel()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceModel()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getImei()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getImei()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getMac()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getMac()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getManufactory()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getManufactory()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getNetChannelStr()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getNetChannelStr()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getOsVersion()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getOsVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getRamAvailMem()I
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getRamAvailMem()I

    move-result v0

    return v0
.end method

.method public static getRomAvailMem()I
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getRomAvailMem()I

    move-result v0

    return v0
.end method

.method public static getTotalRamMemory()I
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getTotalRamMemory()I

    move-result v0

    return v0
.end method

.method public static getTotalRomMemory()I
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getTotalRomMemory()I

    move-result v0

    return v0
.end method
