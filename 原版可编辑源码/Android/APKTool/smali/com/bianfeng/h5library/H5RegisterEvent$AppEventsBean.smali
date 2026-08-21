.class public Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;
.super Ljava/lang/Object;
.source "H5RegisterEvent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/h5library/H5RegisterEvent;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "AppEventsBean"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;,
        Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$DeviceProfileBean;,
        Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$AppProfileBean;
    }
.end annotation


# instance fields
.field private appProfile:Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$AppProfileBean;

.field private deviceProfile:Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$DeviceProfileBean;

.field private id:Ljava/lang/String;

.field private label:Ljava/lang/String;

.field private parameters:Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;

.field private startTime:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "6"

    .line 30
    iput-object v0, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;->id:Ljava/lang/String;

    const-string v0, "register"

    .line 31
    iput-object v0, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;->label:Ljava/lang/String;

    .line 32
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;->startTime:Ljava/lang/String;

    .line 33
    new-instance v0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$AppProfileBean;

    invoke-direct {v0}, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$AppProfileBean;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;->appProfile:Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$AppProfileBean;

    .line 38
    new-instance v0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;

    invoke-direct {v0, p1, p2, p3, p4}, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;->parameters:Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$ParametersBean;

    .line 39
    new-instance p1, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$DeviceProfileBean;

    invoke-direct {p1}, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$DeviceProfileBean;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean;->deviceProfile:Lcom/bianfeng/h5library/H5RegisterEvent$AppEventsBean$DeviceProfileBean;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 43
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
