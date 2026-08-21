.class Lcom/bianfeng/h5library/H5LoginParametersEvent;
.super Ljava/lang/Object;
.source "H5LoginParametersEvent.java"


# instance fields
.field private areaName:Ljava/lang/String;

.field private channelName:Ljava/lang/String;

.field private clientIp:Ljava/lang/String;

.field private collectVersion:Ljava/lang/String;

.field private isUserNew:Ljava/lang/String;

.field private type:I

.field private userId:Ljava/lang/String;

.field private userName:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 10
    iput v0, p0, Lcom/bianfeng/h5library/H5LoginParametersEvent;->type:I

    .line 15
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/h5library/H5EventUtils;->getVersion()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginParametersEvent;->collectVersion:Ljava/lang/String;

    .line 19
    iput-object p1, p0, Lcom/bianfeng/h5library/H5LoginParametersEvent;->areaName:Ljava/lang/String;

    .line 20
    iput-object p2, p0, Lcom/bianfeng/h5library/H5LoginParametersEvent;->isUserNew:Ljava/lang/String;

    .line 21
    iput-object p3, p0, Lcom/bianfeng/h5library/H5LoginParametersEvent;->userName:Ljava/lang/String;

    .line 22
    iput-object p4, p0, Lcom/bianfeng/h5library/H5LoginParametersEvent;->channelName:Ljava/lang/String;

    .line 23
    iput-object p5, p0, Lcom/bianfeng/h5library/H5LoginParametersEvent;->userId:Ljava/lang/String;

    .line 24
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getClientIp()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/h5library/H5LoginParametersEvent;->clientIp:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 28
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
