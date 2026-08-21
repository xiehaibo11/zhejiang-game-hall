.class public final Lcom/kwad/sdk/core/b/a/dg;
.super Ljava/lang/Object;


# direct methods
.method public static AQ()V
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/sdk/core/config/item/j$a;

    new-instance v2, Lcom/kwad/sdk/core/b/a/eh;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/eh;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/sdk/contentalliance/coupon/model/ActivityInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/f;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/f;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/sdk/core/response/model/a;

    new-instance v2, Lcom/kwad/sdk/core/b/a/gr;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/gr;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/sdk/core/response/model/SdkConfigData$CouponActiveConfig;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ca;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ca;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ei;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ei;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/sdk/core/config/item/h$a;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ef;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ef;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AR()Ljava/util/Map;

    move-result-object v0

    const-class v1, Lcom/kwad/sdk/core/response/model/SdkConfigData$TemplateConfigMap;

    new-instance v2, Lcom/kwad/sdk/core/b/a/is;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/is;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
