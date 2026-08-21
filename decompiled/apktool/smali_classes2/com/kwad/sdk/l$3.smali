.class final Lcom/kwad/sdk/l$3;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/l;->a(Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic IA:Ljava/lang/String;

.field final synthetic aho:Lcom/kwai/adclient/kscommerciallogger/model/d;


# direct methods
.method constructor <init>(Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/l$3;->aho:Lcom/kwai/adclient/kscommerciallogger/model/d;

    iput-object p2, p0, Lcom/kwad/sdk/l$3;->IA:Ljava/lang/String;

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/l$3;->aho:Lcom/kwai/adclient/kscommerciallogger/model/d;

    new-instance v1, Lcom/kwad/sdk/commercial/model/SDKInitMsg;

    invoke-direct {v1}, Lcom/kwad/sdk/commercial/model/SDKInitMsg;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/l;->xS()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->setInitCount(I)Lcom/kwad/sdk/commercial/model/SDKInitMsg;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/sdk/l$3;->IA:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->setErrorReason(Ljava/lang/String;)Lcom/kwad/sdk/commercial/model/SDKInitMsg;

    move-result-object v1

    const/4 v2, 0x2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->setInitStatus(I)Lcom/kwad/sdk/commercial/model/SDKInitMsg;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/commercial/model/SDKInitMsg;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "ad_client_error_log"

    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/d;Lorg/json/JSONObject;)V

    return-void
.end method
