.class public Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;
.super Ljava/lang/Object;
.source "InitEvent.java"


# instance fields
.field public app_id:Ljava/lang/Integer;

.field public app_memory:I

.field public app_use_memory:I

.field public cli_android_id:Ljava/lang/String;

.field public cli_available_ram_memory:I

.field public cli_available_rom_memory:I

.field public cli_device:Ljava/lang/String;

.field public cli_hardware:Ljava/lang/String;

.field public cli_imei:Ljava/lang/String;

.field public cli_mac_address:Ljava/lang/String;

.field public cli_model:Ljava/lang/String;

.field public cli_os:Ljava/lang/String;

.field public cli_platform:Ljava/lang/String;

.field public cli_total_ram_memory:I

.field public cli_total_rom_memory:I

.field public cli_ver:Ljava/lang/String;

.field public event:Ljava/lang/Integer;

.field public event_sequence:J

.field public func_name:Ljava/lang/String;

.field public identify_id:Ljava/lang/Integer;

.field public msg:Ljava/lang/String;

.field public net_env:Ljava/lang/String;

.field public net_ip:Ljava/lang/String;

.field public origin_trace:Ljava/lang/String;

.field public sdk_base_ver:Ljava/lang/String;

.field public sdk_datafun_ver:Ljava/lang/String;

.field public sdk_package_ver:Ljava/lang/String;

.field public sign:Ljava/lang/String;

.field public time:Ljava/lang/String;

.field public trace:Ljava/lang/String;


# direct methods
.method public constructor <init>(ILjava/lang/String;)V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->event:Ljava/lang/Integer;

    .line 5
    const-string v0, "android"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_os:Ljava/lang/String;

    .line 11
    const-string v0, "native"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_platform:Ljava/lang/String;

    .line 42
    const-string v0, "\u8fd9\u662f\u5728\u542f\u52a8\u521d\u59cb\u5316\u4e2d"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 43
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->event:Ljava/lang/Integer;

    .line 44
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->func_name:Ljava/lang/String;

    .line 45
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getOriginTrace()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->origin_trace:Ljava/lang/String;

    .line 46
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getApp_id()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->app_id:Ljava/lang/Integer;

    .line 47
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getIdentify_id()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->identify_id:Ljava/lang/Integer;

    .line 49
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getOsVersion()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_ver:Ljava/lang/String;

    .line 50
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getDeviceModel()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_model:Ljava/lang/String;

    .line 51
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getManufactory()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_hardware:Ljava/lang/String;

    .line 52
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_device:Ljava/lang/String;

    .line 53
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getNetChannelStr()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->net_env:Ljava/lang/String;

    .line 55
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getClientIp()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->net_ip:Ljava/lang/String;

    .line 56
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getDatafun_ver()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->sdk_datafun_ver:Ljava/lang/String;

    .line 57
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getApk_ver()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->sdk_package_ver:Ljava/lang/String;

    .line 58
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getYmnsdk_ver()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->sdk_base_ver:Ljava/lang/String;

    .line 59
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getAndroidId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_android_id:Ljava/lang/String;

    .line 60
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getImei()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_imei:Ljava/lang/String;

    .line 61
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getMac()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_mac_address:Ljava/lang/String;

    .line 63
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getRamAvailMem()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_available_ram_memory:I

    .line 64
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getRomAvailMem()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_available_rom_memory:I

    .line 65
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getTotalRamMemory()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_total_ram_memory:I

    .line 66
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getTotalRomMemory()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->cli_total_rom_memory:I

    .line 67
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getAppMemory()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->app_memory:I

    .line 68
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getAppUsedMemory()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->app_use_memory:I

    .line 69
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/SequenceUtils;->get()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->event_sequence:J

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/ymnsdk/ymndatalib/c;ILjava/lang/String;)V
    .locals 0

    .line 70
    invoke-direct {p0, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;-><init>(ILjava/lang/String;)V

    .line 71
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/c;->b()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->time:Ljava/lang/String;

    .line 72
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getOriginTrace()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->trace:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/ymnsdk/ymndatalib/c;ILjava/lang/String;Landroid/content/Context;)V
    .locals 0

    .line 73
    invoke-direct {p0, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;-><init>(ILjava/lang/String;)V

    .line 74
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/c;->b()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->time:Ljava/lang/String;

    .line 75
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getOriginTrace()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->trace:Ljava/lang/String;

    .line 76
    invoke-static {p4}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/FileUtils;->getYmnPackageInfo(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    .line 77
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->msg:Ljava/lang/String;

    .line 78
    const-string p2, "ymnPackageInfo"

    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/LoginSignUtils;->sign(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->sign:Ljava/lang/String;

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatafunGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
