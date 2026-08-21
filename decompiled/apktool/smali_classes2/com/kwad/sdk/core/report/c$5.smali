.class final Lcom/kwad/sdk/core/report/c$5;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/report/c;->c(Lcom/kwad/sdk/core/report/n;)V
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


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/report/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/c$5;->aqK:Lcom/kwad/sdk/core/report/c;

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

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "\u7acb\u5373\u4e0a\u62a5 onSuccess action= "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/report/c$5;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {v1}, Lcom/kwad/sdk/core/report/c;->f(Lcom/kwad/sdk/core/report/c;)Lcom/kwad/sdk/core/report/g;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " result "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/BatchReportResult;->getResult()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "BaseBatchReporter"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

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

    iget-object p1, p0, Lcom/kwad/sdk/core/report/c$5;->aqK:Lcom/kwad/sdk/core/report/c;

    new-instance p2, Lcom/kwad/sdk/core/report/c$5$1;

    invoke-direct {p2, p0}, Lcom/kwad/sdk/core/report/c$5$1;-><init>(Lcom/kwad/sdk/core/report/c$5;)V

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/report/c;->a(Lcom/kwad/sdk/core/report/n;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p2, Lcom/kwad/sdk/core/response/model/BatchReportResult;

    invoke-direct {p0, p2}, Lcom/kwad/sdk/core/report/c$5;->a(Lcom/kwad/sdk/core/response/model/BatchReportResult;)V

    return-void
.end method
