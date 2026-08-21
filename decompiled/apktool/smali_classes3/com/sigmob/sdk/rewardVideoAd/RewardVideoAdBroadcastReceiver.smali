.class public Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;
.super Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;


# static fields
.field private static a:Landroid/content/IntentFilter;


# instance fields
.field private b:Lcom/sigmob/sdk/rewardVideoAd/e$a;

.field private c:Lcom/sigmob/sdk/base/models/BaseAdUnit;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/rewardVideoAd/e$a;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p3}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->b:Lcom/sigmob/sdk/rewardVideoAd/e$a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->a()Landroid/content/IntentFilter;

    return-void
.end method


# virtual methods
.method public a()Landroid/content/IntentFilter;
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    if-nez v0, :cond_0

    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.rewardedvideo.play"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.rewardedvideo.skip"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.rewardedvideo.playFail"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.rewardedvideo.complete"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.rewardedvideo.Close"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    return-object v0
.end method

.method public b(Landroid/content/BroadcastReceiver;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->b:Lcom/sigmob/sdk/rewardVideoAd/e$a;

    return-void
.end method

.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 6

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->b:Lcom/sigmob/sdk/rewardVideoAd/e$a;

    if-eqz p1, :cond_8

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-nez p1, :cond_0

    goto/16 :goto_2

    :cond_0
    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->a(Landroid/content/Intent;)Z

    move-result p1

    if-nez p1, :cond_1

    return-void

    :cond_1
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const/4 v0, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v1

    const/4 v2, 0x4

    const/4 v3, 0x3

    const/4 v4, 0x2

    const/4 v5, 0x1

    sparse-switch v1, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v1, "com.sigmob.action.rewardedvideo.playFail"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move v0, v4

    goto :goto_0

    :sswitch_1
    const-string v1, "com.sigmob.action.rewardedvideo.complete"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move v0, v3

    goto :goto_0

    :sswitch_2
    const-string v1, "com.sigmob.action.rewardedvideo.skip"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move v0, v5

    goto :goto_0

    :sswitch_3
    const-string v1, "com.sigmob.action.rewardedvideo.play"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 v0, 0x0

    goto :goto_0

    :sswitch_4
    const-string v1, "com.sigmob.action.rewardedvideo.Close"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move v0, v2

    :cond_2
    :goto_0
    if-eqz v0, :cond_7

    if-eq v0, v5, :cond_6

    const/4 p1, 0x0

    if-eq v0, v4, :cond_5

    if-eq v0, v3, :cond_4

    if-eq v0, v2, :cond_3

    goto :goto_2

    :cond_3
    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->b:Lcom/sigmob/sdk/rewardVideoAd/e$a;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {p2, v0}, Lcom/sigmob/sdk/rewardVideoAd/e$a;->i(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_1

    :cond_4
    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->b:Lcom/sigmob/sdk/rewardVideoAd/e$a;

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/rewardVideoAd/e$a;->f(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_2

    :cond_5
    const-string v0, "error"

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->b:Lcom/sigmob/sdk/rewardVideoAd/e$a;

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {v0, v1, p2}, Lcom/sigmob/sdk/rewardVideoAd/e$a;->c(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    :goto_1
    invoke-virtual {p0, p0}, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    goto :goto_2

    :cond_6
    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->b:Lcom/sigmob/sdk/rewardVideoAd/e$a;

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/rewardVideoAd/e$a;->h(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_2

    :cond_7
    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->b:Lcom/sigmob/sdk/rewardVideoAd/e$a;

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/RewardVideoAdBroadcastReceiver;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/rewardVideoAd/e$a;->g(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_8
    :goto_2
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x7d503a4f -> :sswitch_4
        -0x670f2bc5 -> :sswitch_3
        -0x670dd17a -> :sswitch_2
        -0x43e86140 -> :sswitch_1
        0x4fc789f9 -> :sswitch_0
    .end sparse-switch
.end method
