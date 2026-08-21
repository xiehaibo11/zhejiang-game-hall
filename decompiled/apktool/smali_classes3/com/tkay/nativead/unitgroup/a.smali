.class public abstract Lcom/tkay/nativead/unitgroup/a;
.super Lcom/tkay/core/api/BaseAd;


# static fields
.field private static final TAG:Ljava/lang/String;


# instance fields
.field public final NETWORK_UNKNOW:I

.field protected mAdSourceType:Ljava/lang/String;

.field protected mAdTrackingInfo:Lcom/tkay/core/common/f/d;

.field protected mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

.field private mNativeEventListener:Lcom/tkay/core/common/b/k;

.field protected mNetworkType:I

.field private nativePrepareInfo:Lcom/tkay/nativead/api/TYNativePrepareInfo;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 27
    const-class v0, Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/nativead/unitgroup/a;->TAG:Ljava/lang/String;

    return-void
.end method

.method protected constructor <init>()V
    .locals 2

    .line 41
    invoke-direct {p0}, Lcom/tkay/core/api/BaseAd;-><init>()V

    const/4 v0, -0x1

    .line 29
    iput v0, p0, Lcom/tkay/nativead/unitgroup/a;->NETWORK_UNKNOW:I

    const-string v1, "0"

    .line 37
    iput-object v1, p0, Lcom/tkay/nativead/unitgroup/a;->mAdSourceType:Ljava/lang/String;

    .line 39
    iput v0, p0, Lcom/tkay/nativead/unitgroup/a;->mNetworkType:I

    return-void
.end method


# virtual methods
.method public abstract bindDislikeListener(Landroid/view/View$OnClickListener;)V
.end method

.method public abstract clear(Landroid/view/View;)V
.end method

.method public abstract getAdIconView()Landroid/view/View;
.end method

.method public varargs abstract getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
.end method

.method public final getAdType()Ljava/lang/String;
    .locals 1

    .line 199
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->mAdSourceType:Ljava/lang/String;

    return-object v0
.end method

.method public getAdvertiserInfoOperate()Lcom/tkay/core/api/ITYAdvertiserInfoOperate;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final getDetail()Lcom/tkay/core/common/f/d;
    .locals 1

    .line 54
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->mAdTrackingInfo:Lcom/tkay/core/common/f/d;

    return-object v0
.end method

.method public final getNativePrepareInfo()Lcom/tkay/nativead/api/TYNativePrepareInfo;
    .locals 1

    .line 225
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->nativePrepareInfo:Lcom/tkay/nativead/api/TYNativePrepareInfo;

    return-object v0
.end method

.method public getShakeView(IILcom/tkay/core/api/ATShakeViewListener;)Landroid/view/View;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public abstract isNativeExpress()Z
.end method

.method public final notifyAdClicked()V
    .locals 2

    .line 112
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->mNativeEventListener:Lcom/tkay/core/common/b/k;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 113
    invoke-interface {v0, v1}, Lcom/tkay/core/common/b/k;->onAdClicked(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public final notifyAdDislikeClick()V
    .locals 1

    .line 185
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->mNativeEventListener:Lcom/tkay/core/common/b/k;

    if-eqz v0, :cond_0

    .line 186
    invoke-interface {v0}, Lcom/tkay/core/common/b/k;->onAdDislikeButtonClick()V

    :cond_0
    return-void
.end method

.method public final notifyAdImpression()V
    .locals 1

    .line 122
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->mNativeEventListener:Lcom/tkay/core/common/b/k;

    if-eqz v0, :cond_0

    .line 123
    invoke-interface {v0}, Lcom/tkay/core/common/b/k;->onAdImpressed()V

    :cond_0
    return-void
.end method

.method public final notifyAdVideoEnd()V
    .locals 1

    .line 142
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->mNativeEventListener:Lcom/tkay/core/common/b/k;

    if-eqz v0, :cond_0

    .line 143
    invoke-interface {v0}, Lcom/tkay/core/common/b/k;->onAdVideoEnd()V

    :cond_0
    return-void
.end method

.method public final notifyAdVideoPlayProgress(I)V
    .locals 1

    .line 173
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->mNativeEventListener:Lcom/tkay/core/common/b/k;

    if-eqz v0, :cond_0

    .line 174
    invoke-interface {v0, p1}, Lcom/tkay/core/common/b/k;->onAdVideoProgress(I)V

    :cond_0
    return-void
.end method

.method public final notifyAdVideoStart()V
    .locals 1

    .line 132
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->mNativeEventListener:Lcom/tkay/core/common/b/k;

    if-eqz v0, :cond_0

    .line 133
    invoke-interface {v0}, Lcom/tkay/core/common/b/k;->onAdVideoStart()V

    :cond_0
    return-void
.end method

.method public final notifyAdVideoVideoPlayFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 151
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "notifyAdVideoVideoPlayFail..."

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 152
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->mNativeEventListener:Lcom/tkay/core/common/b/k;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/core/common/b/l;

    if-eqz v1, :cond_0

    .line 153
    check-cast v0, Lcom/tkay/core/common/b/l;

    invoke-interface {v0, p1, p2}, Lcom/tkay/core/common/b/l;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final notifyDeeplinkCallback(Z)V
    .locals 1

    .line 163
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->mNativeEventListener:Lcom/tkay/core/common/b/k;

    if-eqz v0, :cond_0

    .line 164
    invoke-interface {v0, p1}, Lcom/tkay/core/common/b/k;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final notifyDownloadConfirm(Landroid/content/Context;Landroid/view/View;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 1

    .line 192
    iget-object v0, p0, Lcom/tkay/nativead/unitgroup/a;->mNativeEventListener:Lcom/tkay/core/common/b/k;

    if-eqz v0, :cond_0

    .line 193
    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/core/common/b/k;->onDownloadConfirmCallback(Landroid/content/Context;Landroid/view/View;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    :cond_0
    return-void
.end method

.method public abstract onPause()V
.end method

.method public abstract onResume()V
.end method

.method public abstract pauseVideo()V
.end method

.method public abstract prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
.end method

.method public abstract resumeVideo()V
.end method

.method public final setDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V
    .locals 0

    .line 215
    iput-object p1, p0, Lcom/tkay/nativead/unitgroup/a;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-void
.end method

.method public setNativeEventListener(Lcom/tkay/core/common/b/k;)V
    .locals 0

    .line 104
    iput-object p1, p0, Lcom/tkay/nativead/unitgroup/a;->mNativeEventListener:Lcom/tkay/core/common/b/k;

    return-void
.end method

.method public final setNativePrepareInfo(Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 0

    .line 221
    iput-object p1, p0, Lcom/tkay/nativead/unitgroup/a;->nativePrepareInfo:Lcom/tkay/nativead/api/TYNativePrepareInfo;

    return-void
.end method

.method public final setTrackingInfo(Lcom/tkay/core/common/f/d;)V
    .locals 0

    .line 49
    iput-object p1, p0, Lcom/tkay/nativead/unitgroup/a;->mAdTrackingInfo:Lcom/tkay/core/common/f/d;

    return-void
.end method
