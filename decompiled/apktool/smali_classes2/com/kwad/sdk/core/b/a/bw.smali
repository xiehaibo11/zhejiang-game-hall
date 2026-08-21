.class public final Lcom/kwad/sdk/core/b/a/bw;
.super Ljava/lang/Object;


# direct methods
.method public static AQ()V
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/components/ad/splashscreen/local/SplashSkipViewModel;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ic;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ic;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/components/ad/splashscreen/local/a;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hz;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hz;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/if;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/if;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;

    new-instance v2, Lcom/kwad/sdk/core/b/a/gt;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/gt;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ia;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ia;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
