.class final Lcom/kwad/sdk/core/report/KSLoggerReporter$1;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/KSLoggerReporter$a;)V
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

    iput-object p1, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$1;->arh:Lcom/kwad/sdk/core/report/KSLoggerReporter$a;

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/report/KSLoggerReporter$1;->arh:Lcom/kwad/sdk/core/report/KSLoggerReporter$a;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->c(Lcom/kwad/sdk/core/report/KSLoggerReporter$a;)V

    invoke-static {}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->mH()Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    invoke-static {}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->mI()V

    return-void
.end method
