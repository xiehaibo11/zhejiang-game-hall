.class public final Lcom/tkay/rewardvideo/a/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;


# instance fields
.field a:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;


# direct methods
.method protected constructor <init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;)V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/c;->a:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;

    return-void
.end method


# virtual methods
.method public final onAgainReward(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 101
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$11;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/a/c$11;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
    .locals 2

    .line 29
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/rewardvideo/a/c$1;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;Z)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 2

    .line 41
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$6;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/rewardvideo/a/c$6;-><init>(Lcom/tkay/rewardvideo/a/c;Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onReward(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 183
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$5;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/a/c$5;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onRewardedVideoAdAgainPlayClicked(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 89
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$10;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/a/c$10;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onRewardedVideoAdAgainPlayEnd(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 65
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$8;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/a/c$8;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onRewardedVideoAdAgainPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 77
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$9;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/rewardvideo/a/c$9;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onRewardedVideoAdAgainPlayStart(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 53
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$7;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/a/c$7;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onRewardedVideoAdClosed(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 159
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/a/c$3;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onRewardedVideoAdFailed(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method public final onRewardedVideoAdLoaded()V
    .locals 0

    return-void
.end method

.method public final onRewardedVideoAdPlayClicked(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 171
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$4;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/a/c$4;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onRewardedVideoAdPlayEnd(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 135
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$13;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/a/c$13;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onRewardedVideoAdPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 147
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/rewardvideo/a/c$2;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onRewardedVideoAdPlayStart(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 123
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/c$12;

    invoke-direct {v1, p0, p1}, Lcom/tkay/rewardvideo/a/c$12;-><init>(Lcom/tkay/rewardvideo/a/c;Lcom/tkay/core/api/TYAdInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
