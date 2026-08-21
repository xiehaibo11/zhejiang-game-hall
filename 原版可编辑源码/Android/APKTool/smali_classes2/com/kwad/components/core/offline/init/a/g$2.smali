.class final Lcom/kwad/components/core/offline/init/a/g$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/ILoggerReporter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/offline/init/a/g;->loggerReporter()Lcom/kwad/components/offline/api/core/api/ILoggerReporter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic LR:Lcom/kwad/components/core/offline/init/a/g;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/offline/init/a/g;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/a/g$2;->LR:Lcom/kwad/components/core/offline/init/a/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final reportEvent(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 6

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    sget-object v3, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    move-object v0, p1

    move-object v1, p2

    move-object v4, p3

    move-object v5, p4

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method
