.class public Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$DeviceProfileBean;
.super Ljava/lang/Object;
.source "H5LoginEvent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "DeviceProfileBean"
.end annotation


# instance fields
.field private carrier:Ljava/lang/String;

.field private deviceId:Ljava/lang/String;

.field private deviceModel:Ljava/lang/String;

.field private devicePixel:Ljava/lang/String;

.field private osVersion:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 51
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getCarrier()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$DeviceProfileBean;->carrier:Ljava/lang/String;

    .line 52
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$DeviceProfileBean;->deviceId:Ljava/lang/String;

    .line 53
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getDeviceModel()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$DeviceProfileBean;->deviceModel:Ljava/lang/String;

    .line 54
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getDevicePixel()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$DeviceProfileBean;->devicePixel:Ljava/lang/String;

    .line 55
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getOsVersion()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$DeviceProfileBean;->osVersion:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 61
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
