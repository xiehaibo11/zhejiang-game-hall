.class final Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

.field final synthetic val$adInfo:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic val$context:Landroid/content/Context;

.field final synthetic val$networkConfirmInfo:Lcom/tkay/core/api/TYNetworkConfirmInfo;


# direct methods
.method constructor <init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

    iput-object p2, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;->val$context:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;->val$adInfo:Lcom/tkay/core/api/TYAdInfo;

    iput-object p4, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;->val$networkConfirmInfo:Lcom/tkay/core/api/TYNetworkConfirmInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 68
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    instance-of v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    if-eqz v0, :cond_1

    .line 69
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v0, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    check-cast v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    iget-object v1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;->val$context:Landroid/content/Context;

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;->this$1:Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

    iget-object v1, v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;->this$0:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v1, v1, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mContext:Landroid/content/Context;

    :cond_0
    iget-object v2, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;->val$adInfo:Lcom/tkay/core/api/TYAdInfo;

    iget-object v3, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1$6;->val$networkConfirmInfo:Lcom/tkay/core/api/TYNetworkConfirmInfo;

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    :cond_1
    return-void
.end method
