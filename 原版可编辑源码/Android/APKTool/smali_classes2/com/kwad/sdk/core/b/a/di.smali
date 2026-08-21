.class public final Lcom/kwad/sdk/core/b/a/di;
.super Ljava/lang/Object;


# direct methods
.method public static AQ()V
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/sdk/core/download/DownloadParams;

    new-instance v2, Lcom/kwad/sdk/core/b/a/cn;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/cn;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
