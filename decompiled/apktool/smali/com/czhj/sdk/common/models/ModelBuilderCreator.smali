.class public Lcom/czhj/sdk/common/models/ModelBuilderCreator;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static createAdSlot()Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 1

    new-instance v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/AdSlot$Builder;-><init>()V

    return-object v0
.end method

.method public static createApp()Lcom/czhj/sdk/common/models/App$Builder;
    .locals 3

    new-instance v0, Lcom/czhj/sdk/common/models/App$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/App$Builder;-><init>()V

    :try_start_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getAppPackageName()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getAppPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/App$Builder;->app_package(Ljava/lang/String;)Lcom/czhj/sdk/common/models/App$Builder;

    :cond_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getOrientationInt()Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/App$Builder;->orientation(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/App$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/App$Builder;->name(Ljava/lang/String;)Lcom/czhj/sdk/common/models/App$Builder;

    :cond_1
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    if-lt v1, v2, :cond_2

    invoke-static {}, Landroid/security/NetworkSecurityPolicy;->getInstance()Landroid/security/NetworkSecurityPolicy;

    move-result-object v1

    invoke-virtual {v1}, Landroid/security/NetworkSecurityPolicy;->isCleartextTrafficPermitted()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    :goto_0
    iput-object v1, v0, Lcom/czhj/sdk/common/models/App$Builder;->support_http:Ljava/lang/Boolean;

    goto :goto_1

    :cond_2
    const/4 v1, 0x1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    goto :goto_0

    :goto_1
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getAppVersion()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    invoke-static {v1}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createVersion(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Version$Builder;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/czhj/sdk/common/models/Version$Builder;->version_str(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Version$Builder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/Version$Builder;->build()Lcom/czhj/sdk/common/models/Version;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/App$Builder;->app_version(Lcom/czhj/sdk/common/models/Version;)Lcom/czhj/sdk/common/models/App$Builder;

    :cond_3
    const-string v1, "android"

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/App$Builder;->idfv(Ljava/lang/String;)Lcom/czhj/sdk/common/models/App$Builder;

    iget-object v1, v0, Lcom/czhj/sdk/common/models/App$Builder;->sdk_ext_cap:Ljava/util/List;

    const/4 v2, 0x3

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v1

    const-string v2, "App Builder failed"

    invoke-static {v2, v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_2
    return-object v0
.end method

.method public static createDevice()Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 4

    new-instance v0, Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/Device$Builder;-><init>()V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->isTablet()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x5

    goto :goto_0

    :cond_0
    const/4 v1, 0x4

    :goto_0
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->device_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Device$Builder;

    const/4 v1, 0x2

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->os_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Device$Builder;

    :try_start_0
    new-instance v1, Lcom/czhj/sdk/common/models/Size$Builder;

    invoke-direct {v1}, Lcom/czhj/sdk/common/models/Size$Builder;-><init>()V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getRealMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget v2, v2, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    iput-object v2, v1, Lcom/czhj/sdk/common/models/Size$Builder;->height:Ljava/lang/Integer;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getRealMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget v2, v2, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    iput-object v2, v1, Lcom/czhj/sdk/common/models/Size$Builder;->width:Ljava/lang/Integer;

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Size$Builder;->build()Lcom/czhj/sdk/common/models/Size;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->resolution(Lcom/czhj/sdk/common/models/Size;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getBatteryLevel()Ljava/lang/Float;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->battery_level(Ljava/lang/Float;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getBatteryState()Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->battery_state(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getBatterySaveEnable()Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->battery_save_enabled(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getDensityDpi()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->dpi(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceOsVersion()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createVersion(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Version$Builder;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Version$Builder;->build()Lcom/czhj/sdk/common/models/Version;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->os_version(Lcom/czhj/sdk/common/models/Version;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceManufacturer()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->vendor(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->isRoot()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->is_root(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/Device$Builder;

    new-instance v1, Lcom/czhj/sdk/common/models/Size$Builder;

    invoke-direct {v1}, Lcom/czhj/sdk/common/models/Size$Builder;-><init>()V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceScreenHeightDip()Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/Size$Builder;->height(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Size$Builder;

    move-result-object v1

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceScreenWidthDip()Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/Size$Builder;->width(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Size$Builder;

    move-result-object v1

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceModel()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceModel()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/czhj/sdk/common/models/Device$Builder;->model(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;

    :cond_1
    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Size$Builder;->build()Lcom/czhj/sdk/common/models/Size;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->screen_size(Lcom/czhj/sdk/common/models/Size;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createGeo()Lcom/czhj/sdk/common/models/Geo$Builder;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Geo$Builder;->build()Lcom/czhj/sdk/common/models/Geo;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->geo(Lcom/czhj/sdk/common/models/Geo;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getTotalSpace()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->disk_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->device_name(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;

    :cond_2
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getBootSystemTime()Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->start_timestamp(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceOSLevel()Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->android_api_level(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getSystemTotalMemorySize()Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->mem_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getTotalSpace()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->total_disk_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getFreeSpace()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->free_disk_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getSDCardPath()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->getTotalSpace()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/czhj/sdk/common/models/Device$Builder;->sd_total_disk_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;

    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->getFreeSpace()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->sd_free_disk_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;

    :cond_3
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getBootId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->boot_mark(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;

    :cond_4
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getUpdateId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->update_mark(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    const-string v2, "Device Builder failed"

    invoke-static {v2, v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_5
    :goto_1
    return-object v0
.end method

.method public static createDeviceId()Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 6

    new-instance v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/DeviceId$Builder;-><init>()V

    :try_start_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getAndroidId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->udid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    :cond_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getAdvertisingId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->gaid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    :cond_1
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getUid()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->uid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    :cond_2
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    :cond_3
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceSerial()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_uuid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    :cond_4
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getIMSI()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imsi(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    :cond_5
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceId(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei1(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    :cond_6
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    const/4 v3, 0x1

    invoke-virtual {v1, v3}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceId(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_7

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei2(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    :cond_7
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceBrand()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->brand(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    :cond_8
    :try_start_1
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getOAID()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_9

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->oaid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    :try_start_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getOAID "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    :cond_9
    :goto_0
    :try_start_3
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getVAID()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_a

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->vaid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v1

    :try_start_4
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getVAID "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :cond_a
    :goto_1
    :try_start_5
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getCustomController()Lcom/czhj/sdk/common/CustomController;

    move-result-object v1

    if-eqz v1, :cond_e

    invoke-virtual {v1}, Lcom/czhj/sdk/common/CustomController;->isCanUsePhoneState()Z

    move-result v4

    if-nez v4, :cond_b

    move v4, v3

    goto :goto_2

    :cond_b
    move v4, v2

    :goto_2
    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v0, v4}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_imei(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    invoke-virtual {v1}, Lcom/czhj/sdk/common/CustomController;->getDevOaid()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_c

    move v4, v3

    goto :goto_3

    :cond_c
    move v4, v2

    :goto_3
    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v0, v4}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_oaid(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    invoke-virtual {v1}, Lcom/czhj/sdk/common/CustomController;->isCanUseAndroidId()Z

    move-result v1

    if-nez v1, :cond_d

    move v2, v3

    :cond_d
    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_android_id(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    goto :goto_4

    :catchall_2
    move-exception v1

    :try_start_6
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getCustomController "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    goto :goto_4

    :catchall_3
    move-exception v1

    const-string v2, "DeviceId Builder failed"

    invoke-static {v2, v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_e
    :goto_4
    return-object v0
.end method

.method public static createGeo()Lcom/czhj/sdk/common/models/Geo$Builder;
    .locals 4

    new-instance v0, Lcom/czhj/sdk/common/models/Geo$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/Geo$Builder;-><init>()V

    :try_start_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceLocale()Ljava/util/Locale;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/Locale;->getCountry()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Geo$Builder;->country(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Geo$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceLocale()Ljava/util/Locale;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Geo$Builder;->language(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Geo$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getLocation()Landroid/location/Location;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v2

    double-to-float v2, v2

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/czhj/sdk/common/models/Geo$Builder;->lat(Ljava/lang/Float;)Lcom/czhj/sdk/common/models/Geo$Builder;

    invoke-virtual {v1}, Landroid/location/Location;->getLongitude()D

    move-result-wide v2

    double-to-float v2, v2

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/czhj/sdk/common/models/Geo$Builder;->lon(Ljava/lang/Float;)Lcom/czhj/sdk/common/models/Geo$Builder;

    invoke-virtual {v1}, Landroid/location/Location;->hasAccuracy()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Landroid/location/Location;->getAccuracy()F

    move-result v1

    float-to-double v1, v1

    invoke-static {v1, v2}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v1

    :goto_0
    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Geo$Builder;->accuracy(Ljava/lang/Double;)Lcom/czhj/sdk/common/models/Geo$Builder;

    goto :goto_1

    :cond_0
    const-wide v1, 0x407f400000000000L    # 500.0

    invoke-static {v1, v2}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v1

    goto :goto_0

    :cond_1
    :goto_1
    invoke-static {}, Ljava/util/TimeZone;->getDefault()Ljava/util/TimeZone;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/TimeZone;->getID()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Geo$Builder;->timeZone(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Geo$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v1

    const-string v2, "Geo Builder failed"

    invoke-static {v2, v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_2
    return-object v0
.end method

.method public static createNetwork()Lcom/czhj/sdk/common/models/Network$Builder;
    .locals 3

    new-instance v0, Lcom/czhj/sdk/common/models/Network$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/Network$Builder;-><init>()V

    :try_start_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getActiveNetworkType()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Network$Builder;->connection_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Network$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getNetworkOperatorForUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Network$Builder;->operator(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;

    :cond_0
    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getUserAgent()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Network$Builder;->ua(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;

    :cond_1
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getActiveNetworkType()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Network$Builder;->connection_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Network$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getMacAddress()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Network$Builder;->mac(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;

    :cond_2
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getWifimac()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Network$Builder;->wifi_mac(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;

    :cond_3
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getWifiName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Network$Builder;->wifi_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;

    :cond_4
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getNetworkOperatorName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Network$Builder;->carrier_name(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    const-string v2, "Network Builder failed"

    invoke-static {v2, v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_5
    :goto_0
    return-object v0
.end method

.method private static createVersion(III)Lcom/czhj/sdk/common/models/Version$Builder;
    .locals 1

    new-instance v0, Lcom/czhj/sdk/common/models/Version$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/Version$Builder;-><init>()V

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/czhj/sdk/common/models/Version$Builder;->major(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Version$Builder;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/czhj/sdk/common/models/Version$Builder;->micro(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Version$Builder;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/czhj/sdk/common/models/Version$Builder;->minor(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Version$Builder;

    return-object v0
.end method

.method public static createVersion(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Version$Builder;
    .locals 4

    const-string v0, "\\."

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    const/4 v0, 0x0

    :try_start_0
    array-length v1, p0

    const/4 v2, 0x2

    const/4 v3, 0x1

    if-le v1, v2, :cond_0

    aget-object v1, p0, v0

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    aget-object v3, p0, v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    aget-object p0, p0, v2

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    goto :goto_0

    :cond_0
    array-length v1, p0

    if-le v1, v3, :cond_1

    aget-object v1, p0, v0

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    aget-object p0, p0, v3

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    move v3, p0

    move p0, v0

    :goto_0
    move v0, v1

    goto :goto_1

    :cond_1
    array-length v1, p0

    if-lez v1, :cond_2

    aget-object p0, p0, v0

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move v3, v0

    move v0, p0

    move p0, v3

    goto :goto_1

    :catchall_0
    :cond_2
    move p0, v0

    move v3, p0

    :goto_1
    invoke-static {v0, p0, v3}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createVersion(III)Lcom/czhj/sdk/common/models/Version$Builder;

    move-result-object p0

    return-object p0
.end method

.method public static createWXProgramReq()Lcom/czhj/sdk/common/models/WXProgramReq$Builder;
    .locals 8

    new-instance v0, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;-><init>()V

    :try_start_0
    const-string v1, "com.tencent.mm.opensdk.openapi.WXAPIFactory"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "createWXAPI"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    const-class v5, Ljava/lang/String;

    const/4 v7, 0x1

    aput-object v5, v4, v7

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    invoke-virtual {v2, v7}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/sdk/common/ClientMetadata;->getContext()Landroid/content/Context;

    move-result-object v4

    aput-object v4, v3, v6

    const-string v4, ""

    aput-object v4, v3, v7

    invoke-virtual {v2, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    const-string v3, "isWXAppInstalled"

    new-array v4, v6, [Ljava/lang/Class;

    invoke-virtual {v2, v3, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    invoke-virtual {v2, v7}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v3, v6, [Ljava/lang/Object;

    invoke-virtual {v2, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    const-string v4, "getWXAppSupportAPI"

    new-array v5, v6, [Ljava/lang/Class;

    invoke-virtual {v3, v4, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    invoke-virtual {v3, v7}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v4, v6, [Ljava/lang/Object;

    invoke-virtual {v3, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const-string v3, "com.tencent.mm.opensdk.constants.Build"

    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    const-string v4, "SDK_INT"

    invoke-virtual {v3, v4}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v3

    invoke-virtual {v3, v7}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->wx_installed(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/WXProgramReq$Builder;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->wx_api_ver(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/WXProgramReq$Builder;

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->opensdk_ver(Ljava/lang/String;)Lcom/czhj/sdk/common/models/WXProgramReq$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-object v0
.end method
