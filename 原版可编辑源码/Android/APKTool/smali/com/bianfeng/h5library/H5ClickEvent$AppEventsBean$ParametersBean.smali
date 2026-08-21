.class public Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;
.super Ljava/lang/Object;
.source "H5ClickEvent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "ParametersBean"
.end annotation


# instance fields
.field private amount:Ljava/lang/String;

.field private areaName:Ljava/lang/String;

.field private channelName:Ljava/lang/String;

.field private collectVersion:Ljava/lang/String;

.field private isNewUesr:Ljava/lang/String;

.field private os_version:Ljava/lang/String;

.field private userId:Ljava/lang/String;

.field private userName:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 86
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "1"

    .line 78
    iput-object v0, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;->amount:Ljava/lang/String;

    .line 83
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getOsVersion()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;->os_version:Ljava/lang/String;

    .line 84
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/h5library/H5EventUtils;->getVersion()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;->collectVersion:Ljava/lang/String;

    .line 87
    iput-object p1, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;->userName:Ljava/lang/String;

    .line 88
    iput-object p2, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;->userId:Ljava/lang/String;

    .line 89
    iput-object p3, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;->areaName:Ljava/lang/String;

    .line 90
    iput-object p4, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;->isNewUesr:Ljava/lang/String;

    .line 91
    iput-object p5, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;->channelName:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 95
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
