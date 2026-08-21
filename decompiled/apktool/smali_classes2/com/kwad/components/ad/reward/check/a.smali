.class public final Lcom/kwad/components/ad/reward/check/a;
.super Ljava/lang/Object;


# direct methods
.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJILjava/lang/String;)V
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;-><init>(J)V

    const/4 p0, 0x2

    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->setRequestStatus(I)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->setCheckType(I)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    move-result-object p0

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->setEnviType(I)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p2, p3}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->setDataLoadInterval(J)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p4}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->setCode(I)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p5}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide p1

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->i(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static c(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;-><init>(J)V

    const/4 p0, 0x1

    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->setRequestStatus(I)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->setCheckType(I)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    move-result-object p0

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->setEnviType(I)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->i(Lorg/json/JSONObject;)V

    return-void
.end method
