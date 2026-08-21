.class public final Lcom/kwad/components/core/offline/a;
.super Ljava/lang/Object;


# direct methods
.method public static as(I)V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/offline/b;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/b;-><init>()V

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/offline/b;->at(I)Lcom/kwad/components/core/offline/b;

    move-result-object p0

    const-wide/16 v0, 0x1

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/core/offline/b;->w(J)Lcom/kwad/components/core/offline/b;

    move-result-object p0

    new-instance v0, Lcom/kwad/sdk/core/report/p$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/p$a;-><init>()V

    const-string v1, "ad_client_apm_log"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dz(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->b(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/d;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    const-string v1, "offline_component_performance"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dA(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/b;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/report/p$a;->A(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/p$a;->Cd()Lcom/kwad/sdk/core/report/p;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/p;)V

    return-void
.end method

.method public static b(IJ)V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/offline/b;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/b;-><init>()V

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/offline/b;->at(I)Lcom/kwad/components/core/offline/b;

    move-result-object p0

    const-wide/16 v0, 0x2

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/core/offline/b;->w(J)Lcom/kwad/components/core/offline/b;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/core/offline/b;->x(J)Lcom/kwad/components/core/offline/b;

    move-result-object p0

    new-instance p1, Lcom/kwad/sdk/core/report/p$a;

    invoke-direct {p1}, Lcom/kwad/sdk/core/report/p$a;-><init>()V

    const-string p2, "ad_client_apm_log"

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/report/p$a;->dz(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p1

    sget-object p2, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/report/p$a;->b(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p1

    sget-object p2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p1

    sget-object p2, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/d;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p1

    const-string p2, "offline_component_performance"

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/report/p$a;->dA(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/b;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/core/report/p$a;->A(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/p$a;->Cd()Lcom/kwad/sdk/core/report/p;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/p;)V

    return-void
.end method
