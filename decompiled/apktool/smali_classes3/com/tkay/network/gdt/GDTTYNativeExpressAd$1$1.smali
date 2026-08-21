.class final Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/ads/nativ/NativeExpressMediaListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->onRenderSuccess(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;)V
    .locals 0

    .line 93
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onVideoCached(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 0

    return-void
.end method

.method public final onVideoComplete(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 0

    .line 126
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    invoke-virtual {p1}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->notifyAdVideoEnd()V

    return-void
.end method

.method public final onVideoError(Lcom/qq/e/ads/nativ/NativeExpressADView;Lcom/qq/e/comm/util/AdError;)V
    .locals 2

    .line 131
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v0, p2}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->notifyAdVideoVideoPlayFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onVideoInit(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 0

    return-void
.end method

.method public final onVideoLoading(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 0

    return-void
.end method

.method public final onVideoPageClose(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 0

    return-void
.end method

.method public final onVideoPageOpen(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 0

    return-void
.end method

.method public final onVideoPause(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 0

    return-void
.end method

.method public final onVideoReady(Lcom/qq/e/ads/nativ/NativeExpressADView;J)V
    .locals 0

    return-void
.end method

.method public final onVideoStart(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 0

    .line 116
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    invoke-virtual {p1}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->notifyAdVideoStart()V

    return-void
.end method
