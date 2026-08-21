.class public final enum Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/report/KSLoggerReporter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "ReportClient"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

.field public static final enum CONVERT_DPLINK:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

.field public static final enum CONVERT_H5WEB:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

.field public static final enum CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

.field public static final enum RESPONE_MONITOR:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;


# instance fields
.field private mCategory:Ljava/lang/String;

.field private mEventId:Ljava/lang/String;

.field private mSubIniter:Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    new-instance v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const/4 v1, 0x0

    const-string v2, "ad_client_apm_log"

    const-string v3, "CORE_CONVERT"

    const-string v4, "ad_convert_method_call"

    invoke-direct {v0, v3, v1, v2, v4}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    new-instance v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const/4 v3, 0x1

    const-string v4, "CONVERT_H5WEB"

    const-string v5, "ad_h5convert_method"

    invoke-direct {v0, v4, v3, v2, v5}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CONVERT_H5WEB:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    new-instance v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const/4 v4, 0x2

    const-string v5, "CONVERT_DPLINK"

    const-string v6, "ad_dplink_convert_method"

    invoke-direct {v0, v5, v4, v2, v6}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CONVERT_DPLINK:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    new-instance v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    new-instance v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient$1;

    invoke-direct {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient$1;-><init>()V

    const/4 v5, 0x3

    const-string v6, "RESPONE_MONITOR"

    invoke-direct {v0, v6, v5, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;-><init>(Ljava/lang/String;ILcom/kwad/sdk/core/report/KSLoggerReporter$b$a;)V

    sput-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->RESPONE_MONITOR:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const/4 v2, 0x4

    new-array v2, v2, [Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v6, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    aput-object v6, v2, v1

    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CONVERT_H5WEB:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    aput-object v1, v2, v3

    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CONVERT_DPLINK:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    aput-object v1, v2, v4

    aput-object v0, v2, v5

    sput-object v2, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->$VALUES:[Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILcom/kwad/sdk/core/report/KSLoggerReporter$b$a;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;",
            ")V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput-object p3, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->mSubIniter:Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput-object p3, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->mCategory:Ljava/lang/String;

    iput-object p4, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->mEventId:Ljava/lang/String;

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;
    .locals 1

    const-class v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    return-object p0
.end method

.method public static values()[Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->$VALUES:[Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    invoke-virtual {v0}, [Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    return-object v0
.end method


# virtual methods
.method public final buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    iget-object v1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->mCategory:Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->mEventId:Ljava/lang/String;

    invoke-direct {v0, v1, v2, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)V

    const-string p1, "method_name"

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->c(Ljava/lang/String;Ljava/lang/Object;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    return-object p1
.end method

.method public final buildNormalApmReporter()Lcom/kwad/sdk/core/report/KSLoggerReporter$b;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    iget-object v1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->mSubIniter:Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;-><init>(Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;)V

    return-object v0
.end method
