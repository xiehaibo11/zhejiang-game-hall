.class Lcom/sigmob/sdk/rewardVideoAd/d$1;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/rewardVideoAd/d;-><init>(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/rewardVideoAd/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/rewardVideoAd/d;Landroid/os/Looper;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$1;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    iget p1, p1, Landroid/os/Message;->what:I

    const/16 v0, 0x2001

    if-eq p1, v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$1;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/czhj/sdk/common/models/AdStatus;

    move-result-object p1

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    if-ne p1, v1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$1;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->b(Lcom/sigmob/sdk/rewardVideoAd/d;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$1;->a:Lcom/sigmob/sdk/rewardVideoAd/d;

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_TIME_OUT:Lcom/sigmob/windad/WindAdError;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/rewardVideoAd/d;Lcom/sigmob/windad/WindAdError;)V

    :cond_1
    :goto_0
    return-void
.end method
