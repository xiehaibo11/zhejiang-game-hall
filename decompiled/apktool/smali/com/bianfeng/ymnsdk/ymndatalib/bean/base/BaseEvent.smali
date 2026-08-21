.class public Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;
.super Ljava/lang/Object;
.source "BaseEvent.java"


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

.field public order_no:Ljava/lang/String;

.field public origin_trace:Ljava/lang/String;

.field public perfix_uid:Ljava/lang/String;

.field public platform_id:Ljava/lang/Integer;

.field public rst_code:Ljava/lang/Integer;

.field public rst_cost:I

.field public rst_msg:Ljava/lang/String;

.field public sdk_base_ver:Ljava/lang/String;

.field public sdk_datafun_ver:Ljava/lang/String;

.field public sdk_package_ver:Ljava/lang/String;

.field public sdk_plugin_ver:Ljava/lang/String;

.field public sdk_third_ver:Ljava/lang/String;

.field public server_name:Ljava/lang/String;

.field public sign:Ljava/lang/String;

.field public sub_rst_code:I

.field public sub_rst_msg:Ljava/lang/String;

.field public third_uid:Ljava/lang/String;

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

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->event:Ljava/lang/Integer;

    .line 5
    const-string v0, "android"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_os:Ljava/lang/String;

    .line 11
    const-string v0, "native"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_platform:Ljava/lang/String;

    .line 57
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->event:Ljava/lang/Integer;

    .line 58
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->func_name:Ljava/lang/String;

    .line 59
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/SequenceUtils;->get()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->event_sequence:J

    .line 60
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getOriginTrace()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->origin_trace:Ljava/lang/String;

    .line 61
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getApp_id()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->app_id:Ljava/lang/Integer;

    .line 62
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getIdentify_id()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->identify_id:Ljava/lang/Integer;

    .line 63
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_device:Ljava/lang/String;

    .line 64
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getNetChannelStr()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->net_env:Ljava/lang/String;

    .line 65
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getClientIp()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->net_ip:Ljava/lang/String;

    .line 66
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getRamAvailMem()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_available_ram_memory:I

    .line 67
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getAppMemory()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->app_memory:I

    .line 68
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getAppUsedMemory()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->app_use_memory:I

    .line 70
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getOsVersion()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_ver:Ljava/lang/String;

    .line 71
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getDeviceModel()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_model:Ljava/lang/String;

    .line 72
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getManufactory()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_hardware:Ljava/lang/String;

    .line 74
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getDatafun_ver()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->sdk_datafun_ver:Ljava/lang/String;

    .line 75
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getApk_ver()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->sdk_package_ver:Ljava/lang/String;

    .line 76
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getYmnsdk_ver()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->sdk_base_ver:Ljava/lang/String;

    .line 77
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getAndroidId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_android_id:Ljava/lang/String;

    .line 78
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getImei()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_imei:Ljava/lang/String;

    .line 79
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getMac()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_mac_address:Ljava/lang/String;

    .line 81
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getRomAvailMem()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_available_rom_memory:I

    .line 82
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getTotalRamMemory()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_total_ram_memory:I

    .line 83
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getTotalRomMemory()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->cli_total_rom_memory:I

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/ymnsdk/ymndatalib/a;ILjava/lang/String;)V
    .locals 0

    .line 112
    invoke-direct {p0, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(ILjava/lang/String;)V

    .line 113
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/a;->c()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->time:Ljava/lang/String;

    .line 114
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/a;->a()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->rst_code:Ljava/lang/Integer;

    .line 115
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/a;->b()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->msg:Ljava/lang/String;

    .line 116
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getOriginTrace()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->trace:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/ymnsdk/ymndatalib/b;ILjava/lang/String;)V
    .locals 0

    .line 102
    invoke-direct {p0, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(ILjava/lang/String;)V

    .line 103
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getLoginTrace()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->trace:Ljava/lang/String;

    .line 104
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getLogin_platform_id()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->platform_id:Ljava/lang/Integer;

    .line 105
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getLogin_Sdk_plugin_ver()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->sdk_plugin_ver:Ljava/lang/String;

    .line 106
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getLogin_sdk_third_ver()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->sdk_third_ver:Ljava/lang/String;

    .line 107
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/b;->d()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->server_name:Ljava/lang/String;

    .line 108
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/b;->b()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->msg:Ljava/lang/String;

    .line 109
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/b;->e()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->third_uid:Ljava/lang/String;

    .line 110
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/b;->c()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->perfix_uid:Ljava/lang/String;

    .line 111
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/b;->a()Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->setResponseData(Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;)V

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/ymnsdk/ymndatalib/c;ILjava/lang/String;)V
    .locals 0

    .line 93
    invoke-direct {p0, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(ILjava/lang/String;)V

    .line 94
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/c;->b()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->time:Ljava/lang/String;

    .line 95
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/c;->a()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->msg:Ljava/lang/String;

    .line 96
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getOriginTrace()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->trace:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/ymnsdk/ymndatalib/d;ILjava/lang/String;)V
    .locals 0

    .line 84
    invoke-direct {p0, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(ILjava/lang/String;)V

    .line 85
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getPayTrace()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->trace:Ljava/lang/String;

    .line 86
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getPay_platform_id()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->platform_id:Ljava/lang/Integer;

    .line 87
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getPay_Sdk_plugin_ver()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->sdk_plugin_ver:Ljava/lang/String;

    .line 88
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getPay_sdk_third_ver()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->sdk_third_ver:Ljava/lang/String;

    .line 89
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/d;->d()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->server_name:Ljava/lang/String;

    .line 90
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/d;->b()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->msg:Ljava/lang/String;

    .line 91
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/d;->c()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->order_no:Ljava/lang/String;

    .line 92
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/d;->a()Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->setResponseData(Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;)V

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/ymnsdk/ymndatalib/e;ILjava/lang/String;)V
    .locals 0

    .line 97
    invoke-direct {p0, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(ILjava/lang/String;)V

    .line 99
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/e;->b()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->msg:Ljava/lang/String;

    .line 100
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/e;->c()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->trace:Ljava/lang/String;

    .line 101
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/e;->a()Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->setResponseData(Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;)V

    return-void
.end method

.method private setResponseData(Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 1
    :cond_0
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->getRst_code()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->rst_code:Ljava/lang/Integer;

    .line 2
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->getRst_msg()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->rst_msg:Ljava/lang/String;

    .line 3
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->getRst_cost()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->rst_cost:I

    .line 4
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->getSub_rst_code()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->sub_rst_code:I

    .line 5
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->getSub_rst_msg()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->sub_rst_msg:Ljava/lang/String;

    .line 6
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;->getTime()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->time:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/LoginSignUtils;->sign(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->sign:Ljava/lang/String;

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatafunGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
