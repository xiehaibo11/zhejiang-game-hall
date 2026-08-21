.class public Lcom/kwad/sdk/ranger/b/a;
.super Ljava/lang/Object;


# static fields
.field public static final TAG:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Ranger_"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-class v1, Lcom/kwad/sdk/ranger/b/a;

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/ranger/b/a;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/ranger/b/a/d;)V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/sdk/ranger/b/a/d;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    if-nez p0, :cond_0

    return-void

    :cond_0
    sget-object v0, Lcom/kwad/sdk/ranger/b/a;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "report Stats:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

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

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/d;->aNG:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/d;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    const-string v1, "ad_sdk_detect_info"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dA(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/report/p$a;->A(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/p$a;->Cd()Lcom/kwad/sdk/core/report/p;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/p;)V

    return-void
.end method
