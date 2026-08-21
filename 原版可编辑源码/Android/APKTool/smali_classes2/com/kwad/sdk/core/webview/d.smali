.class public final Lcom/kwad/sdk/core/webview/d;
.super Ljava/lang/Object;


# instance fields
.field private ayq:J

.field private ayr:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static d(Lcom/kwad/sdk/core/webview/a/c$a;)V
    .locals 1

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/webview/a/c$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/webview/a/c$a;->getClientParams()Lcom/kwad/sdk/core/report/z$b;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/report/a;->e(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/z$b;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/webview/a/c$a;)V
    .locals 2

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->getClientParams()Lcom/kwad/sdk/core/report/z$b;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/z$b;)V

    :cond_0
    if-eqz p1, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/webview/d;->ayq:J

    :cond_1
    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/webview/a/c$a;)V
    .locals 5

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->getClientParams()Lcom/kwad/sdk/core/report/z$b;

    move-result-object v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/kwad/sdk/core/webview/d;->ayq:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/z$b;->Kh:J

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/z$b;)V

    :cond_1
    return-void
.end method

.method public final c(Lcom/kwad/sdk/core/webview/a/c$a;)V
    .locals 5

    if-eqz p1, :cond_2

    iget-boolean v0, p0, Lcom/kwad/sdk/core/webview/d;->ayr:Z

    if-nez v0, :cond_2

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/core/webview/d;->ayr:Z

    iget-wide v0, p0, Lcom/kwad/sdk/core/webview/d;->ayq:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->getClientParams()Lcom/kwad/sdk/core/report/z$b;

    move-result-object v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/a/c$a;->b(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/sdk/core/webview/a/c$a;

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->getClientParams()Lcom/kwad/sdk/core/report/z$b;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/kwad/sdk/core/webview/d;->ayq:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/z$b;->atn:J

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/sdk/core/webview/d;->ayq:J

    :cond_1
    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->getClientParams()Lcom/kwad/sdk/core/report/z$b;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/report/a;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/z$b;)V

    :cond_2
    return-void
.end method
