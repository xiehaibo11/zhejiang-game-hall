.class Lcom/sigmob/sdk/mraid2/m$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/m;->a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field final synthetic b:Lcom/sigmob/sdk/base/models/ClickCommon;

.field final synthetic c:Lorg/json/JSONObject;

.field final synthetic d:Lcom/sigmob/sdk/mraid2/m;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/m;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/ClickCommon;Lorg/json/JSONObject;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/m$2;->d:Lcom/sigmob/sdk/mraid2/m;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid2/m$2;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p3, p0, Lcom/sigmob/sdk/mraid2/m$2;->b:Lcom/sigmob/sdk/base/models/ClickCommon;

    iput-object p4, p0, Lcom/sigmob/sdk/mraid2/m$2;->c:Lorg/json/JSONObject;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 4

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_1

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$2;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_scene_id()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setScene_id(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$2;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_scene_desc()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setScene_desc(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$2;->b:Lcom/sigmob/sdk/base/models/ClickCommon;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setIs_deeplink(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$2;->b:Lcom/sigmob/sdk/base/models/ClickCommon;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->clickUrl:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setFinal_url(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$2;->b:Lcom/sigmob/sdk/base/models/ClickCommon;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->clickCoordinate:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setCoordinate(Ljava/lang/String;)V

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    aput-object v2, v0, v1

    const-string v1, "%.2f"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setVtime(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$2;->c:Lorg/json/JSONObject;

    if-eqz v0, :cond_1

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/m$2;->c:Lorg/json/JSONObject;

    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/m$2;->c:Lorg/json/JSONObject;

    invoke-virtual {v3, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setOptions(Ljava/util/Map;)V

    :cond_1
    return-void
.end method
