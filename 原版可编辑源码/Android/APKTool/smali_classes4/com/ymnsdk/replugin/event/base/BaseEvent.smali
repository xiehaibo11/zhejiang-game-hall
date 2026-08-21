.class public Lcom/ymnsdk/replugin/event/base/BaseEvent;
.super Ljava/lang/Object;
.source "BaseEvent.java"


# static fields
.field private static final SAVE_DEVICE_ID_FILE_PATH:Ljava/lang/String; = ".tidbf"

.field private static final SAVE_DEVICE_ID_SP_PATH:Ljava/lang/String; = "pref.deviceid.key.bf"


# instance fields
.field private app_use_memory:I

.field private cli_device:Ljava/lang/String;

.field private cli_idfv:Ljava/lang/String;

.field private cli_platform:Ljava/lang/String;

.field private cli_total_rom_memory:J

.field private cli_ver:Ljava/lang/String;

.field private deviceidSp_id:Ljava/lang/String;

.field private event:I

.field private event_sequence:I

.field private msg:Ljava/lang/String;

.field private rst_code:I

.field private sdk_package_ver:Ljava/lang/String;

.field private sdk_third_ver:Ljava/lang/String;

.field private sign:Ljava/lang/String;

.field private svr_cluster:Ljava/lang/String;

.field private svr_node:Ljava/lang/String;

.field private time:Ljava/lang/String;

.field private trace:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 3

    .line 45
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "deviceid_sp_id"

    .line 25
    iput-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->deviceidSp_id:Ljava/lang/String;

    const/4 v0, 0x0

    .line 28
    iput v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->event:I

    const-wide/16 v1, 0x0

    .line 41
    iput-wide v1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_total_rom_memory:J

    .line 42
    iput v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->event_sequence:I

    const/4 v0, -0x1

    .line 43
    iput v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->app_use_memory:I

    .line 46
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getRepluginTrace()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->trace:Ljava/lang/String;

    .line 47
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/BaseEvent;->getAndroid(Landroid/app/Activity;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_idfv:Ljava/lang/String;

    .line 50
    :try_start_0
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/BaseEvent;->getAndroid(Landroid/app/Activity;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_device:Ljava/lang/String;

    .line 51
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/SystemUtils;->getRFC3339(Ljava/lang/Long;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->time:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 54
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 56
    :goto_0
    invoke-static {}, Lcom/ymnsdk/replugin/RePluginSdk;->getFrameworkVersion()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->sdk_third_ver:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;I)V
    .locals 0

    .line 61
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;)V

    .line 62
    iput p2, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->event:I

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 66
    invoke-direct {p0, p1, p2}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;I)V

    .line 67
    iput p3, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->rst_code:I

    .line 68
    iput-object p4, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->msg:Ljava/lang/String;

    .line 69
    iput-object p5, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_ver:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;IJI)V
    .locals 0

    .line 73
    invoke-direct {p0, p1, p2}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;I)V

    .line 74
    iput p3, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->rst_code:I

    .line 75
    iput-object p4, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->msg:Ljava/lang/String;

    .line 76
    iput-object p5, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_ver:Ljava/lang/String;

    .line 77
    iput p6, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->event_sequence:I

    .line 78
    iput-wide p7, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_total_rom_memory:J

    .line 79
    iput p9, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->app_use_memory:I

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 84
    invoke-direct {p0, p1, p2}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;I)V

    .line 85
    iput-object p3, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->svr_cluster:Ljava/lang/String;

    .line 86
    iput-object p4, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->svr_node:Ljava/lang/String;

    .line 87
    iput-object p5, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->sdk_package_ver:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 92
    invoke-direct/range {p0 .. p5}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 93
    iput-object p6, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_platform:Ljava/lang/String;

    return-void
.end method

.method private getAndroid(Landroid/app/Activity;)Ljava/lang/String;
    .locals 0

    .line 234
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getAndroidId()Ljava/lang/String;

    move-result-object p1

    .line 235
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setAndroidId(Ljava/lang/String;)V

    return-object p1
.end method

.method private getBfDataLocal(Landroid/app/Activity;)Ljava/lang/String;
    .locals 3

    .line 269
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/BaseEvent;->getDeviceidFromBfdataSp(Landroid/app/Activity;)Ljava/lang/String;

    move-result-object p1

    .line 270
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 271
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "bfdata-sp->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object p1

    .line 275
    :cond_0
    :try_start_0
    new-instance v0, Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardBaseDir()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".tidbf"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadFileFromSDCard(Ljava/lang/String;)[B

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/String;-><init>([B)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object p1, v0

    .line 278
    :catch_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "bfdata-file->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object p1
.end method

.method private getDeviceidFromBfdataSp(Landroid/app/Activity;)Ljava/lang/String;
    .locals 1

    const-string v0, "pref.deviceid.key.bf"

    .line 303
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getStringFromBfData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private getDeviceidFromFile()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    .line 285
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->isSDCardMounted()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 286
    new-instance v1, Ljava/lang/String;

    const-string v2, "ymn-data-fun.tidbf"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->readFileToSDCardPublicDir(Ljava/lang/String;)[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>([B)V

    goto :goto_0

    :cond_0
    move-object v1, v0

    .line 288
    :goto_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 289
    new-instance v1, Ljava/lang/String;

    const-string v2, "ymn-data-fun.ymntidbf"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->readFileToSDCardPrivateFilesDir(Ljava/lang/String;)[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>([B)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-object v1

    :catch_0
    return-object v0
.end method

.method private getDeviceidFromSp()Ljava/lang/String;
    .locals 1

    .line 307
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->deviceidSp_id:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private getLocalDeviceId(Landroid/app/Activity;)Ljava/lang/String;
    .locals 2

    .line 246
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/BaseEvent;->getBfDataLocal(Landroid/app/Activity;)Ljava/lang/String;

    move-result-object p1

    .line 247
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p1

    .line 250
    :cond_0
    invoke-direct {p0}, Lcom/ymnsdk/replugin/event/base/BaseEvent;->getDeviceidFromSp()Ljava/lang/String;

    move-result-object p1

    .line 251
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 252
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Local-df-sp->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object p1

    .line 256
    :cond_1
    invoke-direct {p0}, Lcom/ymnsdk/replugin/event/base/BaseEvent;->getDeviceidFromFile()Ljava/lang/String;

    move-result-object p1

    .line 257
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 258
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Local-file-sp->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-object p1

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method

.method private sign(Ljava/lang/Object;)Ljava/lang/String;
    .locals 8

    .line 311
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/BaseEvent;->toTreeMap(Ljava/lang/Object;)Ljava/util/TreeMap;

    move-result-object p1

    .line 312
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    .line 313
    invoke-virtual {p1}, Ljava/util/TreeMap;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 314
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 315
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 316
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    goto :goto_0

    :cond_0
    const-string v4, "event"

    .line 319
    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    const-string v5, "cli_total_rom_memory"

    const-string v6, "&"

    const-string v7, "="

    if-nez v4, :cond_1

    const-string v4, "rst_code"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_1

    const-string v4, "event_sequence"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_1

    const-string v4, "app_use_memory"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 320
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    .line 322
    :cond_1
    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 324
    invoke-static {v2}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v2

    .line 325
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v2}, Ljava/lang/Double;->longValue()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto/16 :goto_0

    .line 328
    :cond_2
    invoke-static {v2}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v2

    .line 329
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v2}, Ljava/lang/Double;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(I)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto/16 :goto_0

    :cond_3
    const-string p1, "0a1b70067129eb9835b27b79d026b95c"

    .line 334
    invoke-virtual {v0, p1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 335
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u7b7e\u540d\u524d\u662f\uff1a"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "ymn"

    invoke-static {v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 336
    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/security/Md5Utils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private toTreeMap(Ljava/lang/Object;)Ljava/util/TreeMap;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 341
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-class v1, Ljava/util/TreeMap;

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/TreeMap;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    .line 343
    :catch_0
    new-instance p1, Ljava/util/TreeMap;

    invoke-direct {p1}, Ljava/util/TreeMap;-><init>()V

    return-object p1
.end method


# virtual methods
.method public getApp_use_memory()I
    .locals 1

    .line 225
    iget v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->app_use_memory:I

    return v0
.end method

.method public getCli_device()Ljava/lang/String;
    .locals 1

    .line 137
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_device:Ljava/lang/String;

    return-object v0
.end method

.method public getCli_idfv()Ljava/lang/String;
    .locals 1

    .line 129
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_idfv:Ljava/lang/String;

    return-object v0
.end method

.method public getCli_platform()Ljava/lang/String;
    .locals 1

    .line 169
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_platform:Ljava/lang/String;

    return-object v0
.end method

.method public getCli_total_rom_memory()J
    .locals 2

    .line 209
    iget-wide v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_total_rom_memory:J

    return-wide v0
.end method

.method public getCli_ver()Ljava/lang/String;
    .locals 1

    .line 193
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_ver:Ljava/lang/String;

    return-object v0
.end method

.method public getEvent()I
    .locals 1

    .line 105
    iget v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->event:I

    return v0
.end method

.method public getEvent_sequence()I
    .locals 1

    .line 217
    iget v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->event_sequence:I

    return v0
.end method

.method public getMsg()Ljava/lang/String;
    .locals 1

    .line 153
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->msg:Ljava/lang/String;

    return-object v0
.end method

.method public getRst_code()I
    .locals 1

    .line 145
    iget v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->rst_code:I

    return v0
.end method

.method public getSdk_package_ver()Ljava/lang/String;
    .locals 1

    .line 201
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->sdk_package_ver:Ljava/lang/String;

    return-object v0
.end method

.method public getSdk_third_ver()Ljava/lang/String;
    .locals 1

    .line 161
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->sdk_third_ver:Ljava/lang/String;

    return-object v0
.end method

.method public getSign()Ljava/lang/String;
    .locals 1

    .line 121
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->sign:Ljava/lang/String;

    return-object v0
.end method

.method public getSvr_cluster()Ljava/lang/String;
    .locals 1

    .line 177
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->svr_cluster:Ljava/lang/String;

    return-object v0
.end method

.method public getSvr_node()Ljava/lang/String;
    .locals 1

    .line 185
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->svr_node:Ljava/lang/String;

    return-object v0
.end method

.method public getTime()Ljava/lang/String;
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->time:Ljava/lang/String;

    return-object v0
.end method

.method public getTrace()Ljava/lang/String;
    .locals 1

    .line 97
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->trace:Ljava/lang/String;

    return-object v0
.end method

.method public setApp_use_memory(I)V
    .locals 0

    .line 229
    iput p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->app_use_memory:I

    return-void
.end method

.method public setCli_device(Ljava/lang/String;)V
    .locals 0

    .line 141
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_device:Ljava/lang/String;

    return-void
.end method

.method public setCli_idfv(Ljava/lang/String;)V
    .locals 0

    .line 133
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_idfv:Ljava/lang/String;

    return-void
.end method

.method public setCli_platform(Ljava/lang/String;)V
    .locals 0

    .line 173
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_platform:Ljava/lang/String;

    return-void
.end method

.method public setCli_total_rom_memory(J)V
    .locals 0

    .line 213
    iput-wide p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_total_rom_memory:J

    return-void
.end method

.method public setCli_ver(Ljava/lang/String;)V
    .locals 0

    .line 197
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->cli_ver:Ljava/lang/String;

    return-void
.end method

.method public setEvent(I)V
    .locals 0

    .line 109
    iput p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->event:I

    return-void
.end method

.method public setEvent_sequence(I)V
    .locals 0

    .line 221
    iput p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->event_sequence:I

    return-void
.end method

.method public setMsg(Ljava/lang/String;)V
    .locals 0

    .line 157
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->msg:Ljava/lang/String;

    return-void
.end method

.method public setRst_code(I)V
    .locals 0

    .line 149
    iput p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->rst_code:I

    return-void
.end method

.method public setSdk_package_ver(Ljava/lang/String;)V
    .locals 0

    .line 205
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->sdk_package_ver:Ljava/lang/String;

    return-void
.end method

.method public setSdk_third_ver(Ljava/lang/String;)V
    .locals 0

    .line 165
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->sdk_third_ver:Ljava/lang/String;

    return-void
.end method

.method public setSign(Ljava/lang/String;)V
    .locals 0

    .line 125
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->sign:Ljava/lang/String;

    return-void
.end method

.method public setSvr_cluster(Ljava/lang/String;)V
    .locals 0

    .line 181
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->svr_cluster:Ljava/lang/String;

    return-void
.end method

.method public setSvr_node(Ljava/lang/String;)V
    .locals 0

    .line 189
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->svr_node:Ljava/lang/String;

    return-void
.end method

.method public setTime(Ljava/lang/String;)V
    .locals 0

    .line 117
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->time:Ljava/lang/String;

    return-void
.end method

.method public setTrace(Ljava/lang/String;)V
    .locals 0

    .line 101
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->trace:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 349
    invoke-direct {p0, p0}, Lcom/ymnsdk/replugin/event/base/BaseEvent;->sign(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ymnsdk/replugin/event/base/BaseEvent;->sign:Ljava/lang/String;

    .line 350
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
