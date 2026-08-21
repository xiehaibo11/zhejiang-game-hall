.class final Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/report/KSLoggerReporter$b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/report/KSLoggerReporter$b;)V
    .locals 1

    const-string v0, "ad_client_error_log"

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->dw(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    const-string v0, "response_biz_error"

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->dy(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    return-void
.end method
