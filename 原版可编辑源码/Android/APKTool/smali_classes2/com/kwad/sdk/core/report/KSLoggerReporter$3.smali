.class final Lcom/kwad/sdk/core/report/KSLoggerReporter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwai/adclient/kscommerciallogger/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/report/KSLoggerReporter;->b(Lcom/kwad/sdk/core/report/KSLoggerReporter$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic arh:Lcom/kwad/sdk/core/report/KSLoggerReporter$a;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/report/KSLoggerReporter$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$3;->arh:Lcom/kwad/sdk/core/report/KSLoggerReporter$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private V(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$3;->arh:Lcom/kwad/sdk/core/report/KSLoggerReporter$a;

    const/4 v1, 0x0

    invoke-interface {v0, p1, p2, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$a;->j(Ljava/lang/String;Ljava/lang/String;Z)V

    return-void
.end method


# virtual methods
.method public final U(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$3;->V(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
