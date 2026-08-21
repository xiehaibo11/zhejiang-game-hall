.class public Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$DeviceProfileBean;
.super Ljava/lang/Object;
.source "H5RegisterEvent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "DeviceProfileBean"
.end annotation


# instance fields
.field private deviceId:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 62
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 60
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$DeviceProfileBean;->deviceId:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 66
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
