.class public Lcom/bianfeng/seppellita/bean/DeviceBean;
.super Ljava/lang/Object;
.source "DeviceBean.java"


# instance fields
.field private aaid:Ljava/lang/String;

.field private android_id:Ljava/lang/String;

.field private context:Landroid/content/Context;

.field private device_id:Ljava/lang/String;

.field private device_name:Ljava/lang/String;

.field private isp:Ljava/lang/String;

.field private manufacturer:Ljava/lang/String;

.field private model:Ljava/lang/String;

.field private network:Ljava/lang/String;

.field private oaid:Ljava/lang/String;

.field private os:Ljava/lang/String;

.field private os_version:Ljava/lang/String;

.field private session_id:Ljava/lang/String;

.field private vaid:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string p2, ""

    .line 28
    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->oaid:Ljava/lang/String;

    .line 29
    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->aaid:Ljava/lang/String;

    .line 30
    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->vaid:Ljava/lang/String;

    .line 34
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->context:Landroid/content/Context;

    .line 35
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getNetworkState(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->network:Ljava/lang/String;

    .line 36
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceOS()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->os:Ljava/lang/String;

    .line 37
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceVersionCode()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->os_version:Ljava/lang/String;

    .line 38
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->device_name:Ljava/lang/String;

    .line 39
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getCarrier()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->isp:Ljava/lang/String;

    .line 40
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getAndroidId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->android_id:Ljava/lang/String;

    .line 41
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->device_id:Ljava/lang/String;

    .line 42
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getManufacturer()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->manufacturer:Ljava/lang/String;

    .line 43
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceModel()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->model:Ljava/lang/String;

    .line 44
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getUuid()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->session_id:Ljava/lang/String;

    .line 46
    invoke-direct {p0}, Lcom/bianfeng/seppellita/bean/DeviceBean;->initDeviceid()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Z)V
    .locals 0

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string p2, ""

    .line 28
    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->oaid:Ljava/lang/String;

    .line 29
    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->aaid:Ljava/lang/String;

    .line 30
    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->vaid:Ljava/lang/String;

    .line 52
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->context:Landroid/content/Context;

    if-eqz p3, :cond_0

    .line 54
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/IntenetUtil;->getNetworkState(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->network:Ljava/lang/String;

    .line 55
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceOS()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->os:Ljava/lang/String;

    .line 56
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceVersionCode()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->os_version:Ljava/lang/String;

    .line 57
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->device_name:Ljava/lang/String;

    .line 58
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getCarrier()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->isp:Ljava/lang/String;

    .line 59
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getAndroidId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->android_id:Ljava/lang/String;

    .line 60
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->device_id:Ljava/lang/String;

    .line 61
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getManufacturer()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->manufacturer:Ljava/lang/String;

    .line 62
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceModel()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->model:Ljava/lang/String;

    .line 63
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getUuid()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->session_id:Ljava/lang/String;

    .line 65
    invoke-direct {p0}, Lcom/bianfeng/seppellita/bean/DeviceBean;->initDeviceid()V

    :cond_0
    return-void
.end method

.method private initDeviceid()V
    .locals 0

    return-void
.end method


# virtual methods
.method public getAaid()Ljava/lang/String;
    .locals 1

    .line 158
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->aaid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    .line 159
    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->aaid:Ljava/lang/String;

    .line 162
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->aaid:Ljava/lang/String;

    return-object v0
.end method

.method public getAndroid_id()Ljava/lang/String;
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->android_id:Ljava/lang/String;

    return-object v0
.end method

.method public getDevice_id()Ljava/lang/String;
    .locals 1

    .line 114
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->device_id:Ljava/lang/String;

    return-object v0
.end method

.method public getDevice_name()Ljava/lang/String;
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->device_name:Ljava/lang/String;

    return-object v0
.end method

.method public getImei()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getIsp()Ljava/lang/String;
    .locals 1

    .line 106
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->isp:Ljava/lang/String;

    return-object v0
.end method

.method public getMac()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getManufacturer()Ljava/lang/String;
    .locals 1

    .line 118
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->manufacturer:Ljava/lang/String;

    return-object v0
.end method

.method public getModel()Ljava/lang/String;
    .locals 1

    .line 122
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->model:Ljava/lang/String;

    return-object v0
.end method

.method public getNetwork()Ljava/lang/String;
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->network:Ljava/lang/String;

    return-object v0
.end method

.method public getOaid()Ljava/lang/String;
    .locals 1

    .line 150
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->oaid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    .line 151
    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->oaid:Ljava/lang/String;

    .line 154
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->oaid:Ljava/lang/String;

    return-object v0
.end method

.method public getOs()Ljava/lang/String;
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->os:Ljava/lang/String;

    return-object v0
.end method

.method public getOs_version()Ljava/lang/String;
    .locals 1

    .line 98
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->os_version:Ljava/lang/String;

    return-object v0
.end method

.method public getSession_id()Ljava/lang/String;
    .locals 1

    .line 126
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->session_id:Ljava/lang/String;

    return-object v0
.end method

.method public getVaid()Ljava/lang/String;
    .locals 1

    .line 166
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->vaid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    .line 167
    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->vaid:Ljava/lang/String;

    .line 170
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DeviceBean;->vaid:Ljava/lang/String;

    return-object v0
.end method
