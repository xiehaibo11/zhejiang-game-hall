.class Lcom/sigmob/sdk/rewardVideoAd/d$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/rewardVideoAd/d;->a(Ljava/util/List;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/List;

.field final synthetic b:Lcom/sigmob/sdk/rewardVideoAd/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/rewardVideoAd/d;Ljava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$3;->b:Lcom/sigmob/sdk/rewardVideoAd/d;

    iput-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d$3;->a:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 3

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$3;->a:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "ad_count"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setOptions(Ljava/util/Map;)V

    :cond_0
    return-void
.end method
