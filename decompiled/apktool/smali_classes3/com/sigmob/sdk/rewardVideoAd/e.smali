.class public Lcom/sigmob/sdk/rewardVideoAd/e;
.super Lcom/sigmob/sdk/base/common/ai;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/rewardVideoAd/e$a;
    }
.end annotation


# instance fields
.field private d:Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;

.field private e:Z


# direct methods
.method protected constructor <init>(Lcom/sigmob/sdk/base/common/m$b;Z)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/common/ai;-><init>(Lcom/sigmob/sdk/base/common/m$b;)V

    iput-boolean p2, p0, Lcom/sigmob/sdk/rewardVideoAd/e;->e:Z

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V
    .locals 11

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/base/common/ai;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/e;->b:Lcom/sigmob/sdk/base/common/m$b;

    instance-of v0, v0, Lcom/sigmob/sdk/rewardVideoAd/e$a;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/e;->b:Lcom/sigmob/sdk/base/common/m$b;

    check-cast v1, Lcom/sigmob/sdk/rewardVideoAd/e$a;

    iget-object v2, p0, Lcom/sigmob/sdk/rewardVideoAd/e;->a:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v2}, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;-><init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/rewardVideoAd/e$a;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/e;->d:Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;

    invoke-virtual {v0, v0}, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->a(Landroid/content/BroadcastReceiver;)V

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    const/4 v1, 0x4

    const/4 v2, 0x1

    if-eq v0, v2, :cond_1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    if-ne v0, v1, :cond_3

    :cond_1
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v0

    sget-object v3, Lcom/sigmob/sdk/base/common/l;->h:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v3

    if-ne v0, v3, :cond_2

    const-string v0, "mraid"

    goto :goto_0

    :cond_2
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v0

    sget-object v3, Lcom/sigmob/sdk/base/common/l;->i:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v3

    if-ne v0, v3, :cond_3

    const-string v0, "mraid_two"

    goto :goto_0

    :cond_3
    const-string v0, "reward"

    :goto_0
    if-eqz p2, :cond_4

    iget-boolean v3, p0, Lcom/sigmob/sdk/rewardVideoAd/e;->e:Z

    const-string v4, "isHalfInterstitial"

    invoke-virtual {p2, v4, v3}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    :cond_4
    const/4 v6, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    const-string v5, "vopen"

    move-object v7, p1

    invoke-static/range {v5 .. v10}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v3

    if-ne v3, v1, :cond_6

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->theme_data:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    if-eq p1, v2, :cond_5

    iget-boolean p1, p0, Lcom/sigmob/sdk/rewardVideoAd/e;->e:Z

    if-eqz p1, :cond_6

    :cond_5
    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object p1

    const-class v1, Lcom/sigmob/sdk/base/common/TransparentAdActivity;

    goto :goto_1

    :cond_6
    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object p1

    const-class v1, Lcom/sigmob/sdk/base/common/AdActivity;

    :goto_1
    iget-object v2, p0, Lcom/sigmob/sdk/rewardVideoAd/e;->a:Ljava/lang/String;

    invoke-static {p1, v1, v2, p2, v0}, Lcom/sigmob/sdk/base/common/AdActivity;->a(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ")V"
        }
    .end annotation

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/base/common/ai;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/common/ai;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/e;->d:Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;

    if-eqz p1, :cond_0

    invoke-virtual {p1, p1}, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    :cond_0
    return-void
.end method
