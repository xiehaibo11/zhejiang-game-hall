.class public final Lcom/kwad/sdk/core/b/a/bs;
.super Ljava/lang/Object;


# direct methods
.method public static AQ()V
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/df;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/df;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/dd;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/dd;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
