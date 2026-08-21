.class Lcom/sigmob/sdk/splash/i$5$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/splash/i$5;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/common/af;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/sigmob/sdk/splash/i$5;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/i$5;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i$5$2;->b:Lcom/sigmob/sdk/splash/i$5;

    iput-object p2, p0, Lcom/sigmob/sdk/splash/i$5$2;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 3

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$5$2;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setFinal_url(Ljava/lang/String;)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i$5$2;->b:Lcom/sigmob/sdk/splash/i$5;

    iget-object v1, v1, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {v1}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAndroidMarket()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;->app_package_name:Ljava/lang/String;

    const-string v2, "app_package_name"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v1, p0, Lcom/sigmob/sdk/splash/i$5$2;->b:Lcom/sigmob/sdk/splash/i$5;

    iget-object v1, v1, Lcom/sigmob/sdk/splash/i$5;->c:Lcom/sigmob/sdk/splash/i;

    invoke-static {v1}, Lcom/sigmob/sdk/splash/i;->c(Lcom/sigmob/sdk/splash/i;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAndroidMarket()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;->appstore_package_name:Ljava/lang/String;

    const-string v2, "store_package_name"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setOptions(Ljava/util/Map;)V

    :cond_0
    return-void
.end method
