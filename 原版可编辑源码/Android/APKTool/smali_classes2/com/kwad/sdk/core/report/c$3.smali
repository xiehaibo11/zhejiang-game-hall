.class final Lcom/kwad/sdk/core/report/c$3;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/report/c;->a(Ljava/util/List;Ljava/util/concurrent/atomic/AtomicBoolean;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "TR;",
        "Lcom/kwad/sdk/core/response/model/BatchReportResult;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic aqK:Lcom/kwad/sdk/core/report/c;

.field final synthetic aqL:Ljava/util/List;

.field final synthetic aqM:Ljava/util/concurrent/atomic/AtomicBoolean;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/report/c;Ljava/util/List;Ljava/util/concurrent/atomic/AtomicBoolean;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/c$3;->aqK:Lcom/kwad/sdk/core/report/c;

    iput-object p2, p0, Lcom/kwad/sdk/core/report/c$3;->aqL:Ljava/util/List;

    iput-object p3, p0, Lcom/kwad/sdk/core/report/c$3;->aqM:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/sdk/core/response/model/BatchReportResult;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/response/model/BatchReportResult;",
            ")V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/core/report/c$3;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/c;->b(Lcom/kwad/sdk/core/report/c;)Lcom/kwad/sdk/core/report/o;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/c$3;->aqL:Ljava/util/List;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/core/report/o;->t(Ljava/util/List;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/c$3;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/c;->d(Lcom/kwad/sdk/core/report/c;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/report/c$3;->aqM:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/report/c$3;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/c;->e(Lcom/kwad/sdk/core/report/c;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/report/c$3;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/BatchReportResult;->getInterval()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/c;->ad(J)V

    iget-object p1, p0, Lcom/kwad/sdk/core/report/c$3;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {p1}, Lcom/kwad/sdk/core/report/c;->a(Lcom/kwad/sdk/core/report/c;)J

    move-result-wide v0

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/core/report/c;->a(Lcom/kwad/sdk/core/report/c;J)V

    return-void
.end method


# virtual methods
.method public final onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;I",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    iget-object p1, p0, Lcom/kwad/sdk/core/report/c$3;->aqM:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    iget-object p1, p0, Lcom/kwad/sdk/core/report/c$3;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {p1}, Lcom/kwad/sdk/core/report/c;->d(Lcom/kwad/sdk/core/report/c;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/core/report/c$3;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {p1}, Lcom/kwad/sdk/core/report/c;->e(Lcom/kwad/sdk/core/report/c;)V

    :cond_0
    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p2, Lcom/kwad/sdk/core/response/model/BatchReportResult;

    invoke-direct {p0, p2}, Lcom/kwad/sdk/core/report/c$3;->a(Lcom/kwad/sdk/core/response/model/BatchReportResult;)V

    return-void
.end method
