.class final Lcom/tkay/network/gdt/GDTTYNativeAd$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/ads/nativ/NativeADMediaListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYNativeAd;->prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYNativeAd;)V
    .locals 0

    .line 249
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$3;->a:Lcom/tkay/network/gdt/GDTTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onVideoClicked()V
    .locals 0

    return-void
.end method

.method public final onVideoCompleted()V
    .locals 1

    .line 281
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$3;->a:Lcom/tkay/network/gdt/GDTTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->notifyAdVideoEnd()V

    return-void
.end method

.method public final onVideoError(Lcom/qq/e/comm/util/AdError;)V
    .locals 3

    .line 286
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$3;->a:Lcom/tkay/network/gdt/GDTTYNativeAd;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->notifyAdVideoVideoPlayFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onVideoInit()V
    .locals 0

    return-void
.end method

.method public final onVideoLoaded(I)V
    .locals 0

    return-void
.end method

.method public final onVideoLoading()V
    .locals 0

    return-void
.end method

.method public final onVideoPause()V
    .locals 0

    return-void
.end method

.method public final onVideoReady()V
    .locals 0

    return-void
.end method

.method public final onVideoResume()V
    .locals 0

    return-void
.end method

.method public final onVideoStart()V
    .locals 1

    .line 268
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$3;->a:Lcom/tkay/network/gdt/GDTTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->notifyAdVideoStart()V

    return-void
.end method

.method public final onVideoStop()V
    .locals 0

    return-void
.end method
