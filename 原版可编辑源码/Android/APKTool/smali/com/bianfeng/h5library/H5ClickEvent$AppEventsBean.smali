.class public Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean;
.super Ljava/lang/Object;
.source "H5ClickEvent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/h5library/H5ClickEvent;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "AppEventsBean"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;
    }
.end annotation


# instance fields
.field private id:Ljava/lang/String;

.field private label:Ljava/lang/String;

.field private parameters:Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;

.field private startTime:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    .line 65
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 66
    iput-object p1, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean;->id:Ljava/lang/String;

    .line 67
    iput-object p2, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean;->label:Ljava/lang/String;

    .line 68
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean;->startTime:Ljava/lang/String;

    .line 69
    new-instance p1, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;

    move-object v0, p1

    move-object v1, p3

    move-object v2, p4

    move-object v3, p5

    move-object v4, p6

    move-object v5, p7

    invoke-direct/range {v0 .. v5}, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean;->parameters:Lcom/bianfeng/h5library/H5ClickEvent$AppEventsBean$ParametersBean;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 73
    invoke-static {p0}, Lcom/bianfeng/h5library/utils/H5libGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
