.class final Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/ads/interstitial2/UnifiedInterstitialMediaListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->c(Landroid/content/Context;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V
    .locals 0

    .line 378
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onVideoComplete()V
    .locals 1

    .line 406
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->J(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 407
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->K(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoError(Lcom/qq/e/comm/util/AdError;)V
    .locals 3

    .line 413
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->L(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 414
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->M(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onVideoInit()V
    .locals 0

    return-void
.end method

.method public final onVideoLoading()V
    .locals 0

    return-void
.end method

.method public final onVideoPageClose()V
    .locals 0

    return-void
.end method

.method public final onVideoPageOpen()V
    .locals 0

    return-void
.end method

.method public final onVideoPause()V
    .locals 0

    return-void
.end method

.method public final onVideoReady(J)V
    .locals 0

    return-void
.end method

.method public final onVideoStart()V
    .locals 0

    return-void
.end method
