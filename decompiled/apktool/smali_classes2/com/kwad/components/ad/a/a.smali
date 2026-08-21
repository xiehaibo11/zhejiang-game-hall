.class public final Lcom/kwad/components/ad/a/a;
.super Lcom/kwad/components/core/p/a;


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/p/a/a;)V
    .locals 2

    invoke-direct {p0, p1}, Lcom/kwad/components/core/p/a;-><init>(Lcom/kwad/components/core/p/a/a;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const-string p1, "requestTime"

    invoke-virtual {p0, p1, v0, v1}, Lcom/kwad/components/ad/a/a;->putBody(Ljava/lang/String;J)V

    return-void
.end method


# virtual methods
.method public final getUrl()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/h;->xc()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
