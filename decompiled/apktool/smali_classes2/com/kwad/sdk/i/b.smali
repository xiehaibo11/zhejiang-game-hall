.class public Lcom/kwad/sdk/i/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/i/b$b;,
        Lcom/kwad/sdk/i/b$a;
    }
.end annotation


# static fields
.field static final synthetic $assertionsDisabled:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic Gf()V
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/i/b;->Gh()V

    return-void
.end method

.method public static Gg()V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/i/b$1;

    invoke-direct {v0}, Lcom/kwad/sdk/i/b$1;-><init>()V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static Gh()V
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zw()Lcom/kwad/sdk/core/response/model/SdkConfigData;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/i/b$2;

    invoke-direct {v1}, Lcom/kwad/sdk/i/b$2;-><init>()V

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1}, Lcom/kwad/sdk/core/response/model/SdkConfigData;->getAppConfigData(Ljava/lang/Object;Lcom/kwad/sdk/g/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lorg/json/JSONObject;

    if-nez v0, :cond_0

    return-void

    :cond_0
    new-instance v1, Lcom/kwad/sdk/i/b$b;

    invoke-direct {v1}, Lcom/kwad/sdk/i/b$b;-><init>()V

    :try_start_0
    invoke-virtual {v1, v0}, Lcom/kwad/sdk/i/b$b;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget v0, v1, Lcom/kwad/sdk/i/b$b;->aCZ:I

    const/4 v2, 0x1

    if-eq v0, v2, :cond_1

    return-void

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/kwad/sdk/i/b;->a(Ljava/lang/ClassLoader;Lcom/kwad/sdk/i/b$b;)Lcom/kwad/sdk/i/b$a;

    move-result-object v0

    if-eqz v0, :cond_2

    new-instance v1, Lcom/kwad/sdk/core/report/p$a;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/p$a;-><init>()V

    const-string v2, "ad_client_apm_log"

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/p$a;->dz(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v1

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/p$a;->b(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v1

    sget-object v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v1

    const-string v2, "ad_sdk_tt_sdk_info"

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/p$a;->dA(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v1

    invoke-virtual {v0}, Lcom/kwad/sdk/i/b$a;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/report/p$a;->A(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/p$a;->Cd()Lcom/kwad/sdk/core/report/p;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/p;)V

    :catchall_0
    :cond_2
    return-void
.end method

.method private static a(Ljava/lang/ClassLoader;Lcom/kwad/sdk/i/b$b;)Lcom/kwad/sdk/i/b$a;
    .locals 4

    iget-object v0, p1, Lcom/kwad/sdk/i/b$b;->aDa:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/i/b$a;

    invoke-direct {v0}, Lcom/kwad/sdk/i/b$a;-><init>()V

    iget-object v1, p1, Lcom/kwad/sdk/i/b$b;->aDb:Ljava/lang/String;

    invoke-static {v1}, Lcom/kwad/sdk/utils/s;->fu(Ljava/lang/String;)Z

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/i/b$a;->aCX:I

    iget-object v1, p1, Lcom/kwad/sdk/i/b$b;->aDc:Ljava/lang/String;

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Object;

    invoke-static {p0, v1, v3}, Lcom/kwad/sdk/utils/s;->b(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    iget-object v1, p1, Lcom/kwad/sdk/i/b$b;->aDd:Ljava/lang/String;

    new-array v3, v2, [Ljava/lang/Object;

    invoke-static {p0, v1, v3}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/i/b$a;->sdkVersion:Ljava/lang/String;

    iget-object p1, p1, Lcom/kwad/sdk/i/b$b;->aDe:Ljava/lang/String;

    new-array v1, v2, [Ljava/lang/Object;

    invoke-static {p0, p1, v1}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    iput-object p0, v0, Lcom/kwad/sdk/i/b$a;->aCY:Ljava/lang/String;

    return-object v0
.end method
