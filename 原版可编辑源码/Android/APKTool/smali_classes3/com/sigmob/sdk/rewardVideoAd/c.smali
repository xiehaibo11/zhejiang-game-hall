.class public Lcom/sigmob/sdk/rewardVideoAd/c;
.super Ljava/lang/Object;


# instance fields
.field private final a:Lcom/sigmob/sdk/rewardVideoAd/d;


# direct methods
.method public constructor <init>(Z)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;-><init>(Z)V

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/c;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/c;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/rewardVideoAd/g;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/c;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/rewardVideoAd/g;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/rewardVideoAd/f;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/c;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/rewardVideoAd/f;)V

    return-void
.end method

.method public a()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/c;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->a()Z

    move-result v0

    return v0
.end method

.method public b()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/c;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->b()V

    :cond_0
    return-void
.end method

.method public c()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/c;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->c()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public d()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/c;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->d()Ljava/util/List;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method
