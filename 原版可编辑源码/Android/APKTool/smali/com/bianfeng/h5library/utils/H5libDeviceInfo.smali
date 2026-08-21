.class public Lcom/bianfeng/h5library/utils/H5libDeviceInfo;
.super Ljava/lang/Object;
.source "H5libDeviceInfo.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getCarrier()Ljava/lang/String;
    .locals 1

    .line 16
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getCarrier()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getClientIp()Ljava/lang/String;
    .locals 1

    .line 8
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getClientIp()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDeviceId()Ljava/lang/String;
    .locals 1

    .line 20
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDeviceModel()Ljava/lang/String;
    .locals 1

    .line 12
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceModel()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDevicePixel()Ljava/lang/String;
    .locals 1

    .line 28
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDevicePixel()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getOsVersion()Ljava/lang/String;
    .locals 1

    .line 24
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getOsVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
