.class public Lcom/bianfeng/h5library/H5ClickEvent$DeviceProfileBean;
.super Ljava/lang/Object;
.source "H5ClickEvent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/h5library/H5ClickEvent;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "DeviceProfileBean"
.end annotation


# instance fields
.field private carrier:Ljava/lang/String;

.field private deviceId:Ljava/lang/String;

.field private deviceModel:Ljava/lang/String;

.field private device_os:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 51
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 46
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getDeviceModel()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5ClickEvent$DeviceProfileBean;->deviceModel:Ljava/lang/String;

    .line 47
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getCarrier()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5ClickEvent$DeviceProfileBean;->carrier:Ljava/lang/String;

    .line 48
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5ClickEvent$DeviceProfileBean;->deviceId:Ljava/lang/String;

    const-string v0, "Android"

    .line 49
    iput-object v0, p0, Lcom/bianfeng/h5library/H5ClickEvent$DeviceProfileBean;->device_os:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 55
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
