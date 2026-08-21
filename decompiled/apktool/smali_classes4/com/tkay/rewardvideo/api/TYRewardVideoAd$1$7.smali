.class final Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$7;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;->onRewardedVideoAdAgainPlayStart(Lcom/tkay/core/api/TYAdInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

.field final synthetic val$adInfo:Lcom/tkay/core/api/TYAdInfo;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$7;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

    iput-object p2, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$7;->val$adInfo:Lcom/tkay/core/api/TYAdInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 80
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$7;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$7;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    instance-of v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    if-eqz v0, :cond_0

    .line 81
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$7;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    check-cast v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    iget-object v1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$7;->val$adInfo:Lcom/tkay/core/api/TYAdInfo;

    invoke-interface {v0, v1}, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;->onRewardedVideoAdAgainPlayStart(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_0
    return-void
.end method
