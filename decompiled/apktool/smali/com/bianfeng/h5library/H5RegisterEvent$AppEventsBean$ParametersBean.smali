.class public Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;
.super Ljava/lang/Object;
.source "H5RegisterEvent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "ParametersBean"
.end annotation


# instance fields
.field private areaName:Ljava/lang/String;

.field private channelName:Ljava/lang/String;

.field private clientIp:Ljava/lang/String;

.field private collectVersion:Ljava/lang/String;

.field private userName:Ljava/lang/String;

.field private userid:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 78
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 76
    invoke-static {}, Lcom/bianfeng/h5library/H5EventUtils;->getInstance()Lcom/bianfeng/h5library/H5EventUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/h5library/H5EventUtils;->getVersion()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;->collectVersion:Ljava/lang/String;

    .line 79
    iput-object p1, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;->userName:Ljava/lang/String;

    .line 80
    iput-object p3, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;->channelName:Ljava/lang/String;

    .line 81
    invoke-static {}, Lcom/bianfeng/h5library/utils/H5libDeviceInfo;->getClientIp()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;->clientIp:Ljava/lang/String;

    .line 82
    iput-object p2, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;->areaName:Ljava/lang/String;

    .line 83
    iput-object p4, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;->userid:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 87
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
