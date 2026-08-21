.class Lcom/sigmob/sdk/rewardVideoAd/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/windad/WindAdError;

.field final synthetic b:Lcom/sigmob/sdk/rewardVideoAd/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/rewardVideoAd/d;Lcom/sigmob/windad/WindAdError;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$2;->b:Lcom/sigmob/sdk/rewardVideoAd/d;

    iput-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d$2;->a:Lcom/sigmob/windad/WindAdError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d$2;->b:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->i(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/rewardVideoAd/f;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d$2;->a:Lcom/sigmob/windad/WindAdError;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d$2;->b:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->i(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/rewardVideoAd/f;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$2;->a:Lcom/sigmob/windad/WindAdError;

    iget-object v2, p0, Lcom/sigmob/sdk/rewardVideoAd/d$2;->b:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v2}, Lcom/sigmob/sdk/rewardVideoAd/d;->h(Lcom/sigmob/sdk/rewardVideoAd/d;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/rewardVideoAd/f;->onVideoAdLoadError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d$2;->b:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->i(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/rewardVideoAd/f;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d$2;->b:Lcom/sigmob/sdk/rewardVideoAd/d;

    invoke-static {v1}, Lcom/sigmob/sdk/rewardVideoAd/d;->h(Lcom/sigmob/sdk/rewardVideoAd/d;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/rewardVideoAd/f;->onVideoAdLoadSuccess(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
