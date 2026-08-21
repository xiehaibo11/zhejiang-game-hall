.class public Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "SysfuncInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field private static final CHECK_OP_NO_THROW:Ljava/lang/String; = "checkOpNoThrow"

.field private static final NOTIFICATION_STATUS_FAIL:I = 0x3e85

.field private static final NOTIFICATION_STATUS_SUCCESS:I = 0x3e84

.field private static final OPPOAES_FAIL:I = 0x3e82

.field private static final OPPOAES_SUCCESS:I = 0x3e81

.field private static final OP_POST_NOTIFICATION:Ljava/lang/String; = "OP_POST_NOTIFICATION"

.field private static final PERMISSION_DOWNLOAD:I = 0x66

.field private static final PERMISSION_EMULATOR_CODE:I = 0x65

.field private static final PERMISSION_GPS_CODE:I = 0x64

.field private static final REQUEST_MANAGE_FILES_ACCESS:I = 0x3e83

.field protected static final SYSFUNC_CALL_ALL_PERMISSION:Ljava/lang/String; = "sysfunc_call_all_permission"

.field private static final SYSFUNC_CALL_ALL_PERMISSION_FAIL:I = 0x4c8

.field private static final SYSFUNC_CALL_ALL_PERMISSION_SUCCESS:I = 0x4c7

.field protected static final SYSFUNC_CALL_PHONE:Ljava/lang/String; = "sysfunc_call_phone"

.field protected static final SYSFUNC_DELETE_PRIVATE_FILE:Ljava/lang/String; = "sysfunc_delete_private_file"

.field protected static final SYSFUNC_DOWNLOADIMGSAVEPHONE:Ljava/lang/String; = "sysfunc_downLoad_Img_Save"

.field public static final SYSFUNC_DOWNLOAD_IMG_FAIL:I = 0x459

.field public static final SYSFUNC_DOWNLOAD_IMG_SUCCESS:I = 0x458

.field protected static final SYSFUNC_FUNCTION_COPY_CLIPBOARD:Ljava/lang/String; = "sysfunc_copy_clipboard"

.field protected static final SYSFUNC_FUNCTION_DELETE_APK:Ljava/lang/String; = "sysfunc_delete_apk"

.field protected static final SYSFUNC_FUNCTION_GET_BATTERY_LEVEL:Ljava/lang/String; = "sysfunc_battery_level"

.field protected static final SYSFUNC_FUNCTION_GET_BATTERY_TEMPERATURE:Ljava/lang/String; = "sysfunc_battery_temperature"

.field protected static final SYSFUNC_FUNCTION_GET_CLIPBOARDCONTENT:Ljava/lang/String; = "sysfunc_get_clipboardcontent"

.field protected static final SYSFUNC_FUNCTION_GET_GPS:Ljava/lang/String; = "sysfunc_get_gps"

.field protected static final SYSFUNC_FUNCTION_GET_NETWORK_LEVEL:Ljava/lang/String; = "sysfunc_network_level"

.field protected static final SYSFUNC_FUNCTION_GET_PING:Ljava/lang/String; = "sysfunc_get_ping"

.field protected static final SYSFUNC_FUNCTION_HIDE_BOTTOMUTMENU:Ljava/lang/String; = "sysfunc_hide_BottomUIMenu"

.field protected static final SYSFUNC_FUNCTION_INSTALL_APK:Ljava/lang/String; = "sysfunc_install_apk"

.field protected static final SYSFUNC_FUNCTION_IS_EMULATOR:Ljava/lang/String; = "sysfunc_is_emulator"

.field protected static final SYSFUNC_GET_APP_VERSION_CODE:Ljava/lang/String; = "sysfunc_get_app_version_code"

.field protected static final SYSFUNC_GET_APP_VERSION_NAME:Ljava/lang/String; = "sysfunc_get_app_version_name"

.field public static final SYSFUNC_GET_BATTERY_LEVEL_SUCCESS:I = 0x454

.field public static final SYSFUNC_GET_BATTERY_TEMPERATURE_FAIL:I = 0x45e

.field public static final SYSFUNC_GET_BATTERY_TEMPERATURE_SUCCESS:I = 0x45d

.field public static final SYSFUNC_GET_CLIPBOARDCONTENT_SUCCESS:I = 0x453

.field protected static final SYSFUNC_GET_DEVICEID:Ljava/lang/String; = "sysfunc_get_deviceid"

.field public static final SYSFUNC_GET_DEVICE_ID_SUCCESS:I = 0x4af

.field protected static final SYSFUNC_GET_DEVICE_NAME:Ljava/lang/String; = "sysfunc_get_device_name"

.field public static final SYSFUNC_GET_DEVICE_NAME_INT:I = 0x467

.field protected static final SYSFUNC_GET_MOBILE_MODEL:Ljava/lang/String; = "sysfunc_get_mobile_model"

.field protected static final SYSFUNC_GET_MOBILE_MODEL_SUCCESS:I = 0x4b8

.field protected static final SYSFUNC_GET_MOBILE_NAME:Ljava/lang/String; = "sysfunc_get_mobile_name"

.field public static final SYSFUNC_GET_MOBILE_NAME_CODE:I = 0x466

.field public static final SYSFUNC_GET_NETWORK_LEVEL_SUCCESS:I = 0x455

.field protected static final SYSFUNC_GET_NET_TYPE:Ljava/lang/String; = "sysfunc_get_net_type"

.field public static final SYSFUNC_GET_NET_TYPE_SUCCESS:I = 0x4b6

.field protected static final SYSFUNC_GET_NOTIFICATION_STATUS:Ljava/lang/String; = "sysfunc_get_notification_status"

.field protected static final SYSFUNC_GET_OAID:Ljava/lang/String; = "sysfunc_get_oaid"

.field protected static final SYSFUNC_GET_OAID_FAIL:I = 0x4ba

.field protected static final SYSFUNC_GET_OAID_SUCCESS:I = 0x4b9

.field protected static final SYSFUNC_GET_OPPOAES:Ljava/lang/String; = "sysfunc_get_oppoaes"

.field protected static final SYSFUNC_GET_PACKAGE_ID:Ljava/lang/String; = "sysfunc_get_package_id"

.field public static final SYSFUNC_GET_PACKAGE_ID_SUCCESS:I = 0x4b0

.field public static final SYSFUNC_GET_PING_RESULT:I = 0x45f

.field public static final SYSFUNC_GET_SCREENSHOT_IMG_SUCCESS:I = 0x462

.field protected static final SYSFUNC_GET_SYS_VERSION:Ljava/lang/String; = "sysfunc_get_sys_version"

.field public static final SYSFUNC_GET_SYS_VERSION_SUCCESS:I = 0x4b7

.field protected static final SYSFUNC_GET_VERSION_CODE:I = 0x4bc

.field protected static final SYSFUNC_GET_VERSION_NAME:I = 0x4bb

.field public static final SYSFUNC_IS_EMULATOR:I = 0x451

.field protected static final SYSFUNC_IS_FROM_VIVO:Ljava/lang/String; = "sysfunc_is_from_vivo"

.field public static final SYSFUNC_IS_FROM_VIVO_FALSE:I = 0x457

.field public static final SYSFUNC_IS_FROM_VIVO_TRUE:I = 0x456

.field protected static final SYSFUNC_IS_INSTALL:Ljava/lang/String; = "sysfunc_is_install"

.field public static final SYSFUNC_IS_INSTALLED:I = 0x4b4

.field public static final SYSFUNC_IS_NOT_INSTALL:I = 0x4b5

.field public static final SYSFUNC_IS_PHONE:I = 0x452

.field protected static final SYSFUNC_LOCAL_NOTIFICATION:Ljava/lang/String; = "sysfunc_local_notification"

.field protected static final SYSFUNC_NETWORK_NO:I = 0x4c6

.field protected static final SYSFUNC_NETWORK_OTHER:I = 0x4c5

.field protected static final SYSFUNC_NETWORK_SNIFFING_CLOSE:Ljava/lang/String; = "sysfunc_network-sniffing_close"

.field protected static final SYSFUNC_NETWORK_SNIFFING_OPEN:Ljava/lang/String; = "sysfunc_network-sniffing_open"

.field protected static final SYSFUNC_NETWORK_WIFI:I = 0x4c4

.field public static final SYSFUNC_NO_INSTALL_VIVO:I = 0x45a

.field protected static final SYSFUNC_OPEN_APP:Ljava/lang/String; = "sysfunc_open_app"

.field protected static final SYSFUNC_OPEN_APP_ACTIVITY:Ljava/lang/String; = "sysfunc_open_app_activity"

.field protected static final SYSFUNC_OPEN_APP_ACTIVITY_FAIL:I = 0x4be

.field protected static final SYSFUNC_OPEN_APP_ACTIVITY_SUCCESS:I = 0x4bd

.field protected static final SYSFUNC_OPEN_BROWSER:Ljava/lang/String; = "sysfunc_open_browser"

.field protected static final SYSFUNC_OPEN_QQGROUP:Ljava/lang/String; = "sysfunc_open_qqgroup"

.field public static final SYSFUNC_OPEN_QQ_FAIL:I = 0x45c

.field public static final SYSFUNC_OPEN_QQ_SUCCEED:I = 0x45b

.field protected static final SYSFUNC_SAVE_IMAGE_TO_GALLERY:Ljava/lang/String; = "sysfunc_save_image_to_gallery"

.field public static final SYSFUNC_SAVE_IMAGE_TO_GALLERY_FAIL:I = 0x465

.field public static final SYSFUNC_SAVE_IMAGE_TO_GALLERY_SUCCESS:I = 0x464

.field protected static final SYSFUNC_SET_SPLASH_NAME:Ljava/lang/String; = "sysfunc_set_splash_name"

.field protected static final SYSFUNC_SPKEY_OAID:Ljava/lang/String; = "sysfunc_spkey_oaid"

.field protected static final SYSFUNC_START_SCREENSHOT:Ljava/lang/String; = "sysfunc_start_sceenshot"

.field protected static final SYSFUNC_START_SCREENSHOT_ACTIVITY:Ljava/lang/String; = "sysfunc_start_sceenshot_activity"

.field public static final SYSFUNC_START_SCREENSHOT_ACTIVITY_SUCCESS:I = 0x463

.field protected static final SYSFUNC_START_SCREENSHOT_ADD_WATERMARK:Ljava/lang/String; = "sysfunc_start_screenshot_add_watermark"

.field public static final SYSFUNC_START_SCREENSHOT_FAIL:I = 0x461

.field public static final SYSFUNC_START_SCREENSHOT_SUCCESS:I = 0x460

.field protected static final SYSFUNC_SYSMESSAGEBOX:Ljava/lang/String; = "sysfunc_message_box"

.field public static final SYSFUNC_SYSMESSAGEBOX_NEGATIVE:I = 0x4b3

.field public static final SYSFUNC_SYSMESSAGEBOX_NEUTRAL:I = 0x4b2

.field public static final SYSFUNC_SYSMESSAGEBOX_POSITIVE:I = 0x4b1


# instance fields
.field appIdsUpdater:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

.field private isInitialized:Z

.field private isRegisterReceiver:Z

.field private isStartScreenShot:Z

.field netReceiver:Landroid/content/BroadcastReceiver;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 69
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    const/4 v0, 0x0

    .line 184
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isRegisterReceiver:Z

    .line 188
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isInitialized:Z

    .line 189
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isStartScreenShot:Z

    .line 1007
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$12;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$12;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->appIdsUpdater:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    .line 1086
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$13;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$13;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->netReceiver:Landroid/content/BroadcastReceiver;

    return-void
.end method

.method static synthetic access$002(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isStartScreenShot:Z

    return p1
.end method

.method public static delAllFile(Ljava/lang/String;)Z
    .locals 6

    .line 980
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 981
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    .line 984
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v1

    if-nez v1, :cond_1

    return v2

    .line 987
    :cond_1
    invoke-virtual {v0}, Ljava/io/File;->list()[Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    .line 989
    :goto_0
    array-length v3, v0

    if-ge v2, v3, :cond_5

    .line 990
    sget-object v3, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {p0, v3}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 991
    new-instance v3, Ljava/io/File;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v0, v2

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    goto :goto_1

    .line 993
    :cond_2
    new-instance v3, Ljava/io/File;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v0, v2

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 995
    :goto_1
    invoke-virtual {v3}, Ljava/io/File;->isFile()Z

    move-result v4

    if-eqz v4, :cond_3

    .line 996
    invoke-virtual {v3}, Ljava/io/File;->delete()Z

    .line 998
    :cond_3
    invoke-virtual {v3}, Ljava/io/File;->isDirectory()Z

    move-result v3

    if-eqz v3, :cond_4

    .line 999
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v0, v2

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->delAllFile(Ljava/lang/String;)Z

    .line 1000
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v0, v2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->delFolder(Ljava/lang/String;)V

    const/4 v1, 0x1

    :cond_4
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_5
    return v1
.end method

.method public static delFolder(Ljava/lang/String;)V
    .locals 1

    .line 958
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->delAllFile(Ljava/lang/String;)Z

    .line 960
    invoke-virtual {p0}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object p0

    .line 961
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 962
    invoke-virtual {v0}, Ljava/io/File;->delete()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 964
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private initReceiver()V
    .locals 4

    .line 1149
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isRegisterReceiver:Z

    const-string v1, "ymnsdk"

    if-nez v0, :cond_0

    .line 1150
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v2, "android.net.ethernet.ETHERNET_STATE_CHANGED"

    .line 1151
    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v2, "android.net.ethernet.STATE_CHANGE"

    .line 1152
    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v2, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 1153
    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v2, "android.net.wifi.WIFI_STATE_CHANGED"

    .line 1154
    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v2, "android.net.wifi.STATE_CHANGE"

    .line 1155
    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 1156
    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 1157
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->netReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v2, v3, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    const/4 v0, 0x1

    .line 1158
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isRegisterReceiver:Z

    const-string v0, "initReceiver"

    .line 1159
    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :cond_0
    const-string v0, "no---initReceiver"

    .line 1161
    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private isLocationEnabled()Z
    .locals 2

    .line 968
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "location"

    invoke-virtual {v0, v1}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/location/LocationManager;

    const-string v1, "gps"

    .line 969
    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "network"

    .line 970
    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

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

.method public static isPad(Landroid/content/Context;)Z
    .locals 1

    .line 367
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

.method private saveImage(Ljava/lang/String;)V
    .locals 7

    const-string v0, ""

    const-string v1, "bf_picture"

    .line 761
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, ".jpg"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "/data/"

    .line 762
    invoke-virtual {p1, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 763
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    :cond_0
    const/4 v3, 0x0

    .line 766
    :try_start_0
    new-instance v4, Ljava/io/FileInputStream;

    invoke-direct {v4, p1}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V

    .line 767
    invoke-static {v4}, Landroid/graphics/BitmapFactory;->decodeStream(Ljava/io/InputStream;)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 770
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    sget-object v5, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 772
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 773
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v4

    if-nez v4, :cond_1

    .line 774
    invoke-virtual {v1}, Ljava/io/File;->mkdir()Z

    .line 777
    :cond_1
    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v1, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 778
    :try_start_1
    new-instance v1, Ljava/io/FileOutputStream;

    invoke-direct {v1, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    .line 779
    sget-object v5, Landroid/graphics/Bitmap$CompressFormat;->JPEG:Landroid/graphics/Bitmap$CompressFormat;

    const/16 v6, 0x50

    invoke-virtual {p1, v5, v6, v1}, Landroid/graphics/Bitmap;->compress(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z

    .line 780
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->flush()V

    .line 781
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    goto :goto_0

    :catch_1
    move-exception p1

    move-object v4, v3

    :goto_0
    const-string v1, "\u627e\u4e0d\u5230\u56fe\u7247"

    .line 783
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 784
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 789
    :goto_1
    :try_start_2
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p1

    .line 790
    invoke-virtual {v4}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    .line 789
    invoke-static {p1, v1, v2, v3}, Landroid/provider/MediaStore$Images$Media;->insertImage(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    :try_end_2
    .catch Ljava/io/FileNotFoundException; {:try_start_2 .. :try_end_2} :catch_2

    .line 797
    new-instance p1, Ljava/io/File;

    invoke-virtual {v4}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p1, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 800
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x18

    if-lt v1, v2, :cond_2

    .line 801
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".fileprovider"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 802
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, p1}, Landroid/support/v4/content/FileProvider;->getUriForFile(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Landroid/net/Uri;

    goto :goto_2

    .line 804
    :cond_2
    invoke-static {p1}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    .line 806
    :goto_2
    invoke-static {p1}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p1

    .line 807
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    const-string v3, "android.intent.action.MEDIA_SCANNER_SCAN_FILE"

    invoke-direct {v2, v3, p1}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {v1, v2}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;)V

    const/16 p1, 0x464

    const-string v1, "\u56fe\u7247\u4fdd\u5b58\u6210\u529f"

    .line 808
    invoke-virtual {p0, p1, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    const-string p1, "1111111111"

    .line 809
    invoke-static {p1, v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 810
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->delFolder(Ljava/lang/String;)V

    return-void

    :catch_2
    move-exception p1

    .line 792
    invoke-virtual {p1}, Ljava/io/FileNotFoundException;->printStackTrace()V

    const/16 p1, 0x465

    const-string v0, "\u56fe\u7247\u4fdd\u5b58\u5931\u8d25"

    .line 793
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method


# virtual methods
.method public callPermission()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_call_all_permission"
    .end annotation

    .line 592
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1e

    if-lt v0, v1, :cond_0

    .line 593
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.settings.MANAGE_APP_ALL_FILES_ACCESS_PERMISSION"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 594
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "package:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 595
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    const/16 v2, 0x3e83

    invoke-virtual {v1, v0, v2}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V

    goto :goto_0

    :cond_0
    const-string v0, "SDK_INT is below 30"

    .line 597
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public callPhoneNum(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_call_phone"
    .end annotation

    .line 561
    new-instance v0, Landroid/content/Intent;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "tel:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    const-string v1, "android.intent.action.DIAL"

    invoke-direct {v0, v1, p1}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    const/high16 p1, 0x10000000

    .line 562
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 563
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method public checkApkExist(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 2

    .line 1068
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 1073
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    invoke-virtual {p1, p2, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p1, 0x1

    return p1

    :catch_0
    return v1
.end method

.method public copyClipbardo(Ljava/lang/String;)V
    .locals 0
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_copy_clipboard"
    .end annotation

    .line 283
    invoke-static {p1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->CopyToClipboard(Ljava/lang/String;Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    return-void
.end method

.method public deleteApk(Ljava/lang/String;)V
    .locals 0
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_delete_apk"
    .end annotation

    .line 278
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->deleteApk(Ljava/lang/String;)V

    return-void
.end method

.method public deletePrivateFile(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_delete_private_file"
    .end annotation

    .line 1136
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getFilesDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    .line 1137
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    add-int/lit8 v1, v1, -0x5

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 1138
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1139
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1140
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 1141
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/utils/FileUtils;->deleteQuietly(Ljava/io/File;)Z

    :cond_0
    return-void
.end method

.method public downLoadImgSavePhone(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_downLoad_Img_Save"
    .end annotation

    .line 533
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$6;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$6;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    const/16 v2, 0x66

    invoke-static {v0, v2, v1}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->getDownLoadPermissions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 555
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/ImgDownload;->donwloadImg(Landroid/content/Context;Ljava/lang/String;Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    :cond_0
    return-void
.end method

.method public getBatteryLevel()V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_battery_level"
    .end annotation

    .line 386
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "android.intent.action.BATTERY_CHANGED"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    move-result-object v0

    const-string v1, "level"

    const/4 v2, 0x0

    .line 388
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    const/16 v2, 0x64

    const-string v3, "scale"

    .line 390
    invoke-virtual {v0, v3, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    mul-int/lit8 v1, v1, 0x64

    .line 392
    div-int/2addr v1, v0

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v2, "\u7535\u91cf\u662f\uff1a"

    invoke-static {v2, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 393
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x454

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public getBatteryTemperature()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_battery_temperature"
    .end annotation

    .line 399
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "android.intent.action.BATTERY_CHANGED"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    const-string v2, "temperature"

    .line 402
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    const/16 v1, 0x45d

    .line 404
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    .line 405
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u6e29\u5ea6\u662f\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto :goto_0

    :cond_0
    const/16 v0, 0x45e

    const-string v1, "\u6e29\u5ea6\u83b7\u53d6\u5931\u8d25"

    .line 407
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public getClipBoardContent()Ljava/lang/String;
    .locals 3

    .line 461
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;->isYmnClipAllow()Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    .line 463
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "clipboard"

    invoke-virtual {v0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/ClipboardManager;

    if-eqz v0, :cond_1

    .line 464
    invoke-virtual {v0}, Landroid/content/ClipboardManager;->hasPrimaryClip()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 465
    invoke-virtual {v0}, Landroid/content/ClipboardManager;->getPrimaryClip()Landroid/content/ClipData;

    move-result-object v0

    const/4 v2, 0x0

    .line 466
    invoke-virtual {v0, v2}, Landroid/content/ClipData;->getItemAt(I)Landroid/content/ClipData$Item;

    move-result-object v0

    .line 467
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Landroid/content/ClipData$Item;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_1
    return-object v1
.end method

.method public getClipboardcontent()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_clipboardcontent"
    .end annotation

    .line 374
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$3;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$3;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    return-void
.end method

.method public getCps()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_gps"
    .end annotation

    .line 288
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$1;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    const/16 v2, 0x65

    invoke-static {v0, v2, v1}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->getLocationPermissions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 310
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->GetLatitudeAndLongitude(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    :cond_0
    return-void
.end method

.method public getDeviceId()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_deviceid"
    .end annotation

    .line 576
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/DeviceInfoManager;->getUniqueId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x4af

    .line 577
    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public getDeviceName()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_device_name"
    .end annotation

    .line 854
    invoke-static {}, Landroid/bluetooth/BluetoothAdapter;->getDefaultAdapter()Landroid/bluetooth/BluetoothAdapter;

    move-result-object v0

    .line 855
    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->getName()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x467

    .line 856
    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public getMobileModel()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_mobile_model"
    .end annotation

    .line 918
    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 919
    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    const/16 v1, 0x4b8

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public getMobileName()V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_mobile_name"
    .end annotation

    .line 815
    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    .line 817
    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v1

    const-string v2, "samsung"

    const-string v3, "vivo"

    sparse-switch v1, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v1, "HUAWEI"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    goto :goto_1

    :sswitch_1
    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x6

    goto :goto_1

    :sswitch_2
    const-string v1, "Meizu"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x4

    goto :goto_1

    :sswitch_3
    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_1

    :sswitch_4
    const-string v1, "Sony"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x7

    goto :goto_1

    :sswitch_5
    const-string v1, "OPPO"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x2

    goto :goto_1

    :sswitch_6
    const-string v1, "LG"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x8

    goto :goto_1

    :sswitch_7
    const-string v1, "Xiaomi"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x5

    goto :goto_1

    :sswitch_8
    const-string v1, "Coolpad"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x3

    goto :goto_1

    :cond_0
    :goto_0
    const/4 v0, -0x1

    :goto_1
    packed-switch v0, :pswitch_data_0

    const-string v2, ""

    goto :goto_2

    :pswitch_0
    const-string v2, "lg"

    goto :goto_2

    :pswitch_1
    const-string v2, "sony"

    goto :goto_2

    :pswitch_2
    const-string v2, "xiaomi"

    goto :goto_2

    :pswitch_3
    const-string v2, "meizu"

    goto :goto_2

    :pswitch_4
    const-string v2, "coolpad"

    goto :goto_2

    :pswitch_5
    const-string v2, "oppo"

    goto :goto_2

    :pswitch_6
    move-object v2, v3

    goto :goto_2

    :pswitch_7
    const-string v2, "huawei"

    .line 848
    :goto_2
    :pswitch_8
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u8be5\u624b\u673a\u662f"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/16 v0, 0x466

    .line 849
    invoke-virtual {p0, v0, v2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void

    :sswitch_data_0
    .sparse-switch
        -0x64059776 -> :sswitch_8
        -0x63e01f25 -> :sswitch_7
        0x97b -> :sswitch_6
        0x251fa0 -> :sswitch_5
        0x276947 -> :sswitch_4
        0x373cac -> :sswitch_3
        0x46c94ac -> :sswitch_2
        0x6f28bffa -> :sswitch_1
        0x7fa995e7 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_8
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public getNetLevel()V
    .locals 3

    .line 424
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "connectivity"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    const/4 v1, 0x1

    .line 425
    invoke-virtual {v0, v1}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 426
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 427
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "wifi"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/wifi/WifiManager;

    .line 428
    invoke-virtual {v0}, Landroid/net/wifi/WifiManager;->getConnectionInfo()Landroid/net/wifi/WifiInfo;

    move-result-object v0

    .line 429
    invoke-virtual {v0}, Landroid/net/wifi/WifiInfo;->getBSSID()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 431
    invoke-virtual {v0}, Landroid/net/wifi/WifiInfo;->getSSID()Ljava/lang/String;

    .line 433
    invoke-virtual {v0}, Landroid/net/wifi/WifiInfo;->getRssi()I

    move-result v1

    const/4 v2, 0x6

    invoke-static {v1, v2}, Landroid/net/wifi/WifiManager;->calculateSignalLevel(II)I

    move-result v1

    .line 435
    invoke-virtual {v0}, Landroid/net/wifi/WifiInfo;->getLinkSpeed()I

    const/16 v0, 0x455

    .line 439
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 442
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "phone"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/telephony/TelephonyManager;

    .line 443
    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$5;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$5;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    const/16 v2, 0x100

    invoke-virtual {v0, v1, v2}, Landroid/telephony/TelephonyManager;->listen(Landroid/telephony/PhoneStateListener;I)V

    :cond_1
    :goto_0
    return-void
.end method

.method public getNetType()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_net_type"
    .end annotation

    .line 904
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/utils/IntenetUtil;->getNetworkState(Landroid/content/Context;)I

    move-result v0

    .line 905
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 906
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x4b6

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public getOAID()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_oaid"
    .end annotation

    .line 1026
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->appIdsUpdater:Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    .line 1027
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper;->getOAID(Landroid/content/Context;)V

    return-void
.end method

.method public getPackageId()V
    .locals 5
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_package_id"
    .end annotation

    .line 861
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 864
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v1

    .line 866
    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/InputStreamReader;

    const-string v4, "soureIdConfig.json"

    .line 867
    invoke-virtual {v1, v4}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v1

    invoke-direct {v3, v1}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 869
    :goto_0
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 870
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 873
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    .line 875
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x4b0

    .line 876
    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public getPing(Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_ping"
    .end annotation

    .line 413
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/PingAsyncTask;

    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$4;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$4;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    invoke-direct {v0, p1, v1}, Lcom/bianfeng/ymnsdk/sysfunc/PingAsyncTask;-><init>(Ljava/lang/String;Lcom/bianfeng/ymnsdk/sysfunc/PingCallback;)V

    const/4 p1, 0x0

    new-array p1, p1, [Ljava/lang/Void;

    .line 418
    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/PingAsyncTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "16"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "sysfunc"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0x3a

    return v0
.end method

.method public getSYSVersion()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_sys_version"
    .end annotation

    .line 912
    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 913
    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    const/16 v1, 0x4b7

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "3.0.1"

    return-object v0
.end method

.method public get_app_version_code()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_app_version_code"
    .end annotation

    .line 1050
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getVerCode()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x4bc

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public get_app_version_name()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_app_version_name"
    .end annotation

    .line 1045
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getVerName()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x4bb

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public installApk(Ljava/lang/String;)V
    .locals 0
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_install_apk"
    .end annotation

    .line 273
    invoke-static {p1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->installApk(Ljava/lang/String;Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    return-void
.end method

.method public isEmulator()V
    .locals 5
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_is_emulator"
    .end annotation

    .line 317
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isPad(Landroid/content/Context;)Z

    move-result v0

    const/16 v1, 0x452

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    const-string v0, "\u662f\u5e73\u677f"

    .line 318
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 319
    invoke-virtual {p0, v1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 321
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const/16 v3, 0x65

    new-instance v4, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$2;

    invoke-direct {v4, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$2;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    invoke-static {v0, v3, v4}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->getEmulatorPermissions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 349
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/utils/SimulatorUtil;->isSimulator(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "\u662f\u6a21\u62df\u5668"

    .line 350
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/16 v0, 0x451

    .line 351
    invoke-virtual {p0, v0, v2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string v0, "\u662f\u624b\u673a"

    .line 353
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 354
    invoke-virtual {p0, v1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public isFromVivoCenter()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_is_from_vivo"
    .end annotation

    .line 475
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_1

    const-string v1, "fromPackage"

    .line 477
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 478
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "============="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 479
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "com.vivo.game"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "\u662f\u4ecevivo\u4e2d\u5fc3\u8fc7\u6765\u7684============="

    .line 481
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const/16 v1, 0x456

    .line 482
    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v0, "================\u4e0d\u662f\u4ecevivo\u4e2d\u5fc3\u8fc7\u6765\u7684"

    .line 484
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const/16 v0, 0x457

    const-string v1, "not from vivo center enter"

    .line 485
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public isInstall(Ljava/lang/String;)V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_is_install"
    .end annotation

    .line 882
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const/4 v1, 0x0

    .line 883
    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->getInstalledPackages(I)Ljava/util/List;

    move-result-object v0

    .line 884
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    if-eqz v0, :cond_0

    .line 887
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-ge v1, v3, :cond_0

    .line 888
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/content/pm/PackageInfo;

    iget-object v3, v3, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    .line 889
    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 893
    :cond_0
    invoke-interface {v2, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "\u5b89\u88c5\u4e86"

    .line 894
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/16 p1, 0x4b4

    const-string v0, "\u5df2\u5b89\u88c5\u8be5\u5e94\u7528"

    .line 895
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_1

    :cond_1
    const-string p1, "\u672a\u5b89\u88c5"

    .line 897
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/16 p1, 0x4b5

    const-string v0, "\u672a\u5b89\u88c5\u8be5\u5e94\u7528"

    .line 898
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_1
    return-void
.end method

.method public network_sniffing_close()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_network-sniffing_close"
    .end annotation

    .line 1128
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->netReceiver:Landroid/content/BroadcastReceiver;

    if-eqz v0, :cond_0

    .line 1129
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->netReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const/4 v0, 0x0

    .line 1130
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->netReceiver:Landroid/content/BroadcastReceiver;

    :cond_0
    return-void
.end method

.method public network_sniffing_open()V
    .locals 0
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_network-sniffing_open"
    .end annotation

    .line 1123
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->initReceiver()V

    return-void
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 0

    .line 1167
    invoke-super {p0, p1, p1, p3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onActivityResult(IILandroid/content/Intent;)V

    const/16 p2, 0x3e83

    if-ne p1, p2, :cond_1

    .line 1169
    invoke-static {}, Landroid/os/Environment;->isExternalStorageEmulated()Z

    move-result p1

    if-eqz p1, :cond_0

    const/16 p1, 0x4c7

    const-string p2, "Environment isExternalStorageEmulated"

    .line 1170
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    const/16 p1, 0x4c8

    const-string p2, "Environment is not ExternalStorageEmulated"

    .line 1172
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public onDestroy()V
    .locals 2

    .line 924
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onDestroy()V

    .line 925
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->stop(Landroid/content/Context;)V

    const-string v0, "ymnsdk---onDestroy"

    const-string v1, "onDestroy"

    .line 926
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 927
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->netReceiver:Landroid/content/BroadcastReceiver;

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isRegisterReceiver:Z

    if-eqz v0, :cond_0

    .line 928
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->netReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const/4 v0, 0x0

    .line 929
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isRegisterReceiver:Z

    :cond_0
    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 0

    .line 214
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 215
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->init(Landroid/content/Context;)V

    .line 216
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->initReceiver()V

    const/4 p1, 0x1

    .line 217
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isInitialized:Z

    return-void
.end method

.method public onNewIntent(Landroid/content/Intent;)V
    .locals 1

    .line 582
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onNewIntent(Landroid/content/Intent;)V

    .line 583
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/app/Activity;->setIntent(Landroid/content/Intent;)V

    return-void
.end method

.method public onPause()V
    .locals 1

    .line 935
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onPause()V

    .line 936
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isInitialized:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isStartScreenShot:Z

    if-eqz v0, :cond_0

    const-string v0, "into onPause"

    .line 937
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 938
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->stop(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 1

    .line 944
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onResume()V

    .line 945
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isInitialized:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isStartScreenShot:Z

    if-eqz v0, :cond_0

    const-string v0, "into onResume"

    .line 946
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 947
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->start(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method public openApp(Ljava/lang/String;)V
    .locals 0
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_open_app"
    .end annotation

    .line 528
    invoke-static {p1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncPlus;->openApp(Ljava/lang/String;Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    return-void
.end method

.method public openBrowser(Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_open_browser"
    .end annotation

    .line 568
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 569
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const-string p1, "android.intent.action.VIEW"

    .line 570
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 571
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method public open_activity(Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_set_splash_name"
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    const-string v0, "sysfunc_open_activity"

    .line 1082
    invoke-static {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public open_app_activity(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_open_app_activity"
    .end annotation

    .line 1055
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->checkApkExist(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 1056
    new-instance p1, Landroid/content/Intent;

    const-string v0, "android.intent.action.VIEW"

    invoke-direct {p1, v0}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 1057
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    const/high16 v0, 0x10000000

    .line 1058
    invoke-virtual {p1, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 1059
    invoke-virtual {p1, p2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 1060
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    const/16 p1, 0x4bd

    const-string p2, "\u6253\u5f00\u6210\u529f"

    .line 1061
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    const/16 p1, 0x4be

    const-string p2, "\u672a\u5b89\u88c5\u8be5\u5e94\u7528"

    .line 1063
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public saveImageToGallery(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_save_image_to_gallery"
    .end annotation

    .line 730
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$11;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$11;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    const/16 v2, 0x66

    invoke-static {v0, v2, v1}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->getDownLoadPermissions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 752
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->saveImage(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public showLocalNotification(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_local_notification"
    .end annotation

    .line 261
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;->getInstance()Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;

    move-result-object v0

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v0, v1, p1, p2}, Lcom/bianfeng/ymnsdk/sysfunc/LocalNotificationUtils;->sendNotification(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public startActivityWithScreenShot()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_start_sceenshot_activity"
    .end annotation

    .line 724
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotActivity;->start(Landroid/content/Context;)V

    const/16 v0, 0x463

    const-string v1, "\u542f\u52a8\u4e86\u4e00\u4e2aactivity"

    .line 725
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public startScreenShotListen()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        alias = "sysfunc_start_screenshot"
        name = "sysfunc_start_sceenshot"
    .end annotation

    .line 668
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$9;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    const/16 v2, 0x66

    invoke-static {v0, v2, v1}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->getScreenShotPermissions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 702
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->getInstance()Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$10;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$10;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->setCallback(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;)V

    .line 713
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->start(Landroid/content/Context;)V

    goto :goto_0

    :cond_0
    const/16 v0, 0x461

    const-string v1, "\u542f\u52a8\u5931\u8d25"

    .line 715
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public startScreenShotListenAndAddWaterMark(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_start_screenshot_add_watermark"
    .end annotation

    .line 607
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$7;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;Ljava/lang/String;)V

    const/16 v2, 0x66

    invoke-static {v0, v2, v1}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->getScreenShotPermissions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 643
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->getInstance()Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$8;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface$8;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi;->setCallback(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotApi$ScreenShotCallback;)V

    .line 656
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotService;->start(Landroid/content/Context;)V

    goto :goto_0

    :cond_0
    const/16 p1, 0x461

    const-string v0, "\u542f\u52a8\u5931\u8d25"

    .line 658
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public sysMessageBox(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_message_box"
    .end annotation

    .line 222
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0, p1, p2, p3, p0}, Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog;->sysMessageBox(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    return-void
.end method

.method public sysfunc_get_notification_status()V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_notification_status"
    .end annotation

    .line 226
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "notification"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    .line 227
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x3e85

    const/16 v3, 0x1a

    if-lt v1, v3, :cond_1

    .line 229
    invoke-virtual {v0}, Landroid/app/NotificationManager;->areNotificationsEnabled()Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x3e84

    const-string v1, "\u5f00\u542f\u4e86\u901a\u77e5\u6743\u9650"

    .line 230
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v0, "\u5173\u95ed\u4e86\u901a\u77e5\u6743\u9650"

    .line 232
    invoke-virtual {p0, v2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string v0, "\u5b89\u53538\u4ee5\u4e0b\u7684\u8bbe\u5907\uff0c\u6743\u9650\u672a\u77e5"

    .line 235
    invoke-virtual {p0, v2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public sysfunc_get_oppoaes(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_get_oppoaes"
    .end annotation

    .line 1033
    :try_start_0
    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/sysfunc/utils/Base64;->AESencode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const/16 p2, 0x3e81

    .line 1034
    invoke-virtual {p0, p2, p1}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/security/GeneralSecurityException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    const/16 p2, 0x3e82

    const-string v0, "\u52a0\u5bc6\u5931\u8d25"

    .line 1037
    invoke-virtual {p0, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    .line 1038
    invoke-virtual {p1}, Ljava/security/GeneralSecurityException;->printStackTrace()V

    const-string p1, ""

    return-object p1
.end method

.method protected sysfunc_hide_BottomUIMenu()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_hide_BottomUIMenu"
    .end annotation

    const-string v0, "================\u9690\u85cf\u865a\u62df\u6309\u952e"

    .line 493
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 494
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    const/16 v2, 0xb

    if-le v0, v2, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v1, :cond_0

    .line 495
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x8

    .line 496
    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 497
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_1

    .line 498
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    .line 501
    invoke-virtual {v0}, Landroid/view/View;->getSystemUiVisibility()I

    move-result v1

    or-int/lit16 v1, v1, 0x1006

    .line 503
    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    :cond_1
    :goto_0
    return-void
.end method

.method public sysfunc_open_location_settings()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_open_location_settings"
    .end annotation

    .line 265
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->isLocationEnabled()Z

    move-result v0

    if-nez v0, :cond_0

    .line 266
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.settings.LOCATION_SOURCE_SETTINGS"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 267
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    :cond_0
    return-void
.end method

.method protected sysfunc_open_qq(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "sysfunc_open_qqgroup"
    .end annotation

    .line 509
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 510
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mqqopensdkapi://bizAgent/qm/qr?url=http%3A%2F%2Fqm.qq.com%2Fcgi-bin%2Fqm%2Fqr%3Ffrom%3Dapp%26p%3Dandroid%26k%3D"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 511
    invoke-virtual {v0, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 514
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    const/16 p1, 0x45b

    const-string v0, "succeed"

    .line 515
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/16 p1, 0x45c

    const-string v0, "fail"

    .line 518
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method
