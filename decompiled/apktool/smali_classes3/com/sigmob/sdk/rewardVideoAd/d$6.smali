.class Lcom/sigmob/sdk/rewardVideoAd/d$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/network/d$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/rewardVideoAd/d;->b(Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/rewardVideoAd/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/rewardVideoAd/d;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 1

    const-string p3, "0"

    const-string v0, "respond"

    invoke-static {v0, p3, p4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    invoke-static {v0, p3, p1, p2, p4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    return-void
.end method

.method public a(Ljava/util/List;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;",
            "Lcom/sigmob/sdk/base/models/LoadAdRequest;",
            ")V"
        }
    .end annotation

    if-eqz p1, :cond_4

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_4

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v2, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v2, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/rewardVideoAd/d;Ljava/util/List;)Ljava/util/List;

    const/4 v2, 0x0

    new-instance v3, Lcom/sigmob/sdk/rewardVideoAd/d$6$1;

    invoke-direct {v3, p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d$6$1;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d$6;Ljava/util/List;)V

    const-string v4, "respond"

    const-string v5, "1"

    invoke-static {v4, v5, v2, p2, v3}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {p2}, Lcom/sigmob/sdk/rewardVideoAd/d;->d(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/rewardVideoAd/e;

    move-result-object p2

    invoke-virtual {p2, v1}, Lcom/sigmob/sdk/rewardVideoAd/e;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result p2

    if-nez p2, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    sget-object p2, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

    invoke-static {p1, p2}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/rewardVideoAd/d;Lcom/sigmob/windad/WindAdError;)V

    return-void

    :cond_0
    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {p2}, Lcom/sigmob/sdk/rewardVideoAd/d;->e(Lcom/sigmob/sdk/rewardVideoAd/d;)V

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_channel()Ljava/lang/String;

    move-result-object p2

    const-string v2, "1000"

    invoke-virtual {p2, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_1

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object p2

    invoke-virtual {p2, v1}, Lcom/sigmob/sdk/base/common/f;->e(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_1
    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result p2

    if-eqz p2, :cond_2

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdExpiredTime()Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    int-to-long v2, v2

    invoke-static {p2, v2, v3}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/rewardVideoAd/d;J)J

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {p2, v2, v3}, Lcom/sigmob/sdk/rewardVideoAd/d;->b(Lcom/sigmob/sdk/rewardVideoAd/d;J)J

    :cond_2
    invoke-static {p1}, Lcom/sigmob/sdk/base/common/f;->a(Ljava/util/List;)V

    new-instance p2, Lcom/sigmob/sdk/rewardVideoAd/d$6$2;

    invoke-direct {p2, p0}, Lcom/sigmob/sdk/rewardVideoAd/d$6$2;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d$6;)V

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v2

    sget-object v3, Lcom/sigmob/sdk/base/common/l;->i:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v3

    if-ne v2, v3, :cond_3

    new-instance v2, Lcom/sigmob/sdk/base/common/c;

    iget-object v3, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v3}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    move-result-object v3

    invoke-direct {v2, p1, p2, v3}, Lcom/sigmob/sdk/base/common/c;-><init>(Ljava/util/List;Lcom/sigmob/sdk/base/common/f$b;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    invoke-virtual {v2, v0}, Lcom/sigmob/sdk/base/common/c;->a(Z)Z

    move-result p1

    if-eqz p1, :cond_4

    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {p2}, Lcom/sigmob/sdk/rewardVideoAd/d;->d(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/rewardVideoAd/e;

    move-result-object p2

    invoke-virtual {p2, p1, v1}, Lcom/sigmob/sdk/rewardVideoAd/e;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_0

    :cond_3
    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result p1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_4

    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->d(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/rewardVideoAd/e;

    move-result-object v0

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/rewardVideoAd/e;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object p1

    invoke-virtual {p1, v1, p2}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V

    :cond_4
    :goto_0
    return-void
.end method
