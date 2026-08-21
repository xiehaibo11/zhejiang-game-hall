.class public Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;
.super Ljava/lang/Object;
.source "H5LoginEvent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/h5library/H5LoginEvent;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "AppEventsBean"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$AppProfileBean;,
        Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$DeviceProfileBean;
    }
.end annotation


# instance fields
.field private appProfile:Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$AppProfileBean;

.field private deviceProfile:Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$DeviceProfileBean;

.field private id:I

.field private label:Ljava/lang/String;

.field private parameters:Lcom/bianfeng/h5library/H5LoginParametersEvent;

.field private startTime:J

.field private uniqueId:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 29
    new-instance v0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$AppProfileBean;

    invoke-direct {v0}, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$AppProfileBean;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;->appProfile:Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$AppProfileBean;

    const/4 v0, 0x4

    .line 30
    iput v0, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;->id:I

    const-string v0, "login"

    .line 31
    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;->label:Ljava/lang/String;

    .line 37
    new-instance v0, Lcom/bianfeng/h5library/H5LoginParametersEvent;

    move-object v1, v0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object v6, p5

    invoke-direct/range {v1 .. v6}, Lcom/bianfeng/h5library/H5LoginParametersEvent;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;->parameters:Lcom/bianfeng/h5library/H5LoginParametersEvent;

    .line 38
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;->startTime:J

    .line 39
    new-instance p1, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$DeviceProfileBean;

    invoke-direct {p1}, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$DeviceProfileBean;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;->deviceProfile:Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean$DeviceProfileBean;

    return-void
.end method


# virtual methods
.method public setUniqueId(Ljava/lang/String;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;->uniqueId:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 47
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
