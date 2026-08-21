.class public final Lcom/kwad/sdk/core/report/p;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/report/p$a;
    }
.end annotation


# instance fields
.field public arl:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

.field public arm:Lcom/kwai/adclient/kscommerciallogger/model/d;

.field public biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

.field public category:Ljava/lang/String;

.field public eventId:Ljava/lang/String;

.field public msg:Lorg/json/JSONObject;

.field public suffixRatio:Ljava/lang/String;

.field public tag:Ljava/lang/String;


# direct methods
.method private constructor <init>(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    iput-object v0, p0, Lcom/kwad/sdk/core/report/p;->biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    iput-object v0, p0, Lcom/kwad/sdk/core/report/p;->arl:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    iput-object v0, p0, Lcom/kwad/sdk/core/report/p;->arm:Lcom/kwai/adclient/kscommerciallogger/model/d;

    iput-object p1, p0, Lcom/kwad/sdk/core/report/p;->category:Ljava/lang/String;

    iput-object p2, p0, Lcom/kwad/sdk/core/report/p;->biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    iput-object p3, p0, Lcom/kwad/sdk/core/report/p;->arl:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    iput-object p4, p0, Lcom/kwad/sdk/core/report/p;->arm:Lcom/kwai/adclient/kscommerciallogger/model/d;

    iput-object p5, p0, Lcom/kwad/sdk/core/report/p;->eventId:Ljava/lang/String;

    iput-object p6, p0, Lcom/kwad/sdk/core/report/p;->tag:Ljava/lang/String;

    iput-object p7, p0, Lcom/kwad/sdk/core/report/p;->suffixRatio:Ljava/lang/String;

    iput-object p8, p0, Lcom/kwad/sdk/core/report/p;->msg:Lorg/json/JSONObject;

    return-void
.end method

.method synthetic constructor <init>(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;B)V
    .locals 0

    invoke-direct/range {p0 .. p8}, Lcom/kwad/sdk/core/report/p;-><init>(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method
