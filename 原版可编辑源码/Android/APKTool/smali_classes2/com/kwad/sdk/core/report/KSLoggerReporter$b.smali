.class public final Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/report/KSLoggerReporter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;
    }
.end annotation


# instance fields
.field private ari:Lorg/json/JSONObject;

.field private arj:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

.field private ark:Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;

.field private mCategory:Ljava/lang/String;

.field private mEventId:Ljava/lang/String;

.field private mTag:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->ari:Lorg/json/JSONObject;

    iput-object p1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->ark:Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;

    return-void
.end method

.method constructor <init>(Ljava/lang/String;Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->ari:Lorg/json/JSONObject;

    iput-object p3, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->arj:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    iput-object p1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->mCategory:Ljava/lang/String;

    iput-object p2, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->mEventId:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final W(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
    .locals 1

    const-string v0, "error_name"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->c(Ljava/lang/String;Ljava/lang/Object;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    const-string p1, "error_data"

    invoke-virtual {p0, p1, p2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->c(Ljava/lang/String;Ljava/lang/Object;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    return-object p0
.end method

.method public final a(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->arj:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    return-object p0
.end method

.method public final aK(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
    .locals 5

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cd(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v2

    iget-object v4, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v4, :cond_0

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {p1}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdStyle()I

    move-result p1

    invoke-static {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->cs(I)Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->arj:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    :cond_0
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    const-string v0, "creative_id"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->c(Ljava/lang/String;Ljava/lang/Object;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    const-string v0, "llsid"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->c(Ljava/lang/String;Ljava/lang/Object;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    return-object p0
.end method

.method public final be(Z)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
    .locals 1

    sget-object p1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    const-string v0, "is_api_native"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->c(Ljava/lang/String;Ljava/lang/Object;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    return-object p1
.end method

.method public final c(Ljava/lang/String;Ljava/lang/Object;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->ari:Lorg/json/JSONObject;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/u;->a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    return-object p0
.end method

.method public final ct(I)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
    .locals 1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v0, "ad_num"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->c(Ljava/lang/String;Ljava/lang/Object;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    return-object p1
.end method

.method public final dw(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->mCategory:Ljava/lang/String;

    return-object p0
.end method

.method public final dx(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->mEventId:Ljava/lang/String;

    return-object p0
.end method

.method public final dy(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->mTag:Ljava/lang/String;

    return-object p0
.end method

.method public final report()V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->ark:Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->ark:Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;->a(Lcom/kwad/sdk/core/report/KSLoggerReporter$b;)V

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/report/p$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/p$a;-><init>()V

    iget-object v1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->mCategory:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dz(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->arj:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->b(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->mTag:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dB(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/d;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->mEventId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->dA(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->ari:Lorg/json/JSONObject;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/p$a;->A(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/p$a;->Cd()Lcom/kwad/sdk/core/report/p;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/p;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method
