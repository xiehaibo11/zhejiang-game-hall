.class final Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;->onAdLoadFail(Lcom/tkay/core/api/AdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;

.field final synthetic val$adError:Lcom/tkay/core/api/AdError;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 236
    iput-object p1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2$2;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;

    iput-object p2, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2$2;->val$adError:Lcom/tkay/core/api/AdError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 239
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2$2;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v0, :cond_0

    .line 240
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2$2;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    iget-object v1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2$2;->val$adError:Lcom/tkay/core/api/AdError;

    invoke-interface {v0, v1}, Lcom/tkay/rewardvideo/api/TYRewardVideoListener;->onRewardedVideoAdFailed(Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method
