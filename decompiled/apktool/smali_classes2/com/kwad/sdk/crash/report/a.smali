.class public final Lcom/kwad/sdk/crash/report/a;
.super Ljava/lang/Object;


# direct methods
.method public static b(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/report/r;

    const-wide/16 v1, 0x27e3

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/report/r;-><init>(J)V

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->getReportMsg()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/report/r;->errorMsg:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method
