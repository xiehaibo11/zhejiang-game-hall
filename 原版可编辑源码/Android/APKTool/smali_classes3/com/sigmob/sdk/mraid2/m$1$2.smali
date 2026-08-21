.class Lcom/sigmob/sdk/mraid2/m$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/m$1;->a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Lorg/json/JSONObject;

.field final synthetic f:Lcom/sigmob/sdk/mraid2/m$1;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/m$1;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->f:Lcom/sigmob/sdk/mraid2/m$1;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p4, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->e:Lorg/json/JSONObject;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 4

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_2

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setFinal_url(Ljava/lang/String;)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAndroidMarket()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->c:Ljava/lang/String;

    const-string v2, "app_package_name"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->d:Ljava/lang/String;

    const-string v2, "store_package_name"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->e:Lorg/json/JSONObject;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/m$1$2;->e:Lorg/json/JSONObject;

    invoke-virtual {v3, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_1
    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setOptions(Ljava/util/Map;)V

    :cond_2
    return-void
.end method
