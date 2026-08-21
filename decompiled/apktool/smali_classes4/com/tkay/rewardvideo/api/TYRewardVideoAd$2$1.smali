.class final Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;->onAdLoaded()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;)V
    .locals 0

    .line 224
    iput-object p1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2$1;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 227
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2$1;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v0, :cond_0

    .line 228
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2$1;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    invoke-interface {v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoListener;->onRewardedVideoAdLoaded()V

    :cond_0
    return-void
.end method
