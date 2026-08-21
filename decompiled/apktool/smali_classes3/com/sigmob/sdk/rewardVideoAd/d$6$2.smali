.class Lcom/sigmob/sdk/rewardVideoAd/d$6$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/f$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/rewardVideoAd/d$6;->a(Ljava/util/List;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/rewardVideoAd/d$6;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/rewardVideoAd/d$6;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6$2;->a:Lcom/sigmob/sdk/rewardVideoAd/d$6;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 7

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6$2;->a:Lcom/sigmob/sdk/rewardVideoAd/d$6;

    iget-object v0, v0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    move-result-object v5

    const-string v1, "loadstart"

    const/4 v2, 0x0

    const/4 v4, 0x0

    const/4 v6, 0x0

    move-object v3, p1

    invoke-static/range {v1 .. v6}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->y:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
    .locals 9

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->z:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/base/common/a;->A:Lcom/sigmob/sdk/base/common/a;

    :goto_0
    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6$2;->a:Lcom/sigmob/sdk/rewardVideoAd/d$6;

    iget-object v0, v0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->b(Lcom/sigmob/sdk/rewardVideoAd/d;)Landroid/os/Handler;

    move-result-object v0

    const/16 v1, 0x2001

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "1"

    goto :goto_1

    :cond_1
    const-string v0, "0"

    :goto_1
    move-object v2, v0

    const/4 v4, 0x0

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6$2;->a:Lcom/sigmob/sdk/rewardVideoAd/d$6;

    iget-object v0, v0, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    move-result-object v5

    const/4 v6, 0x0

    const-string v1, "loadend"

    move-object v3, p1

    invoke-static/range {v1 .. v6}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result v0

    if-nez v0, :cond_3

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6$2;->a:Lcom/sigmob/sdk/rewardVideoAd/d$6;

    iget-object p2, p2, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdExpiredTime()Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    int-to-long v0, p1

    invoke-static {p2, v0, v1}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/rewardVideoAd/d;J)J

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6$2;->a:Lcom/sigmob/sdk/rewardVideoAd/d$6;

    iget-object p1, p1, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/rewardVideoAd/d;->b(Lcom/sigmob/sdk/rewardVideoAd/d;J)J

    goto :goto_2

    :cond_2
    sget-object v8, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_FILE_DOWNLOAD:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v8, p2}, Lcom/sigmob/windad/WindAdError;->setMessage(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6$2;->a:Lcom/sigmob/sdk/rewardVideoAd/d$6;

    iget-object v2, p2, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v5

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLoad_id()Ljava/lang/String;

    move-result-object v7

    const-string v4, "load"

    move-object v3, p1

    invoke-static/range {v2 .. v8}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/rewardVideoAd/d;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdError;)V

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$6$2;->a:Lcom/sigmob/sdk/rewardVideoAd/d$6;

    iget-object p1, p1, Lcom/sigmob/sdk/rewardVideoAd/d$6;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->f(Lcom/sigmob/sdk/rewardVideoAd/d;)V

    :cond_3
    :goto_2
    return-void
.end method
