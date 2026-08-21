.class final Lcom/kwad/sdk/l$1;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/l;->S(J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic ahm:J


# direct methods
.method constructor <init>(J)V
    .locals 0

    iput-wide p1, p0, Lcom/kwad/sdk/l$1;->ahm:J

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 4

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNe:Lcom/kwai/adclient/kscommerciallogger/model/d;

    new-instance v1, Lcom/kwad/sdk/commercial/model/SDKInitMsg;

    invoke-direct {v1}, Lcom/kwad/sdk/commercial/model/SDKInitMsg;-><init>()V

    iget-wide v2, p0, Lcom/kwad/sdk/l$1;->ahm:J

    invoke-virtual {v1, v2, v3}, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->setLaunchIntervalTime(J)Lcom/kwad/sdk/commercial/model/SDKInitMsg;

    move-result-object v1

    invoke-static {}, Lcom/kwad/sdk/l;->xS()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->setInitCount(I)Lcom/kwad/sdk/commercial/model/SDKInitMsg;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->setInitStatus(I)Lcom/kwad/sdk/commercial/model/SDKInitMsg;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "ad_client_apm_log"

    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/d;Lorg/json/JSONObject;)V

    return-void
.end method
