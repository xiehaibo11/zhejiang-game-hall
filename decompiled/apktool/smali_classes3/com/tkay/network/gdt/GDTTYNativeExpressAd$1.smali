.class final Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/ads/nativ/NativeExpressAD$NativeExpressADListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYNativeExpressAd;-><init>(Landroid/content/Context;Ljava/lang/String;IIIIILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYNativeExpressAd;)V
    .locals 0

    .line 45
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onADClicked(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 0

    .line 159
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    invoke-virtual {p1}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->notifyAdClicked()V

    return-void
.end method

.method public final onADClosed(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 0

    .line 164
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    invoke-virtual {p1}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->notifyAdDislikeClick()V

    return-void
.end method

.method public final onADExposure(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 3

    .line 153
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->getShowId()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object v2, v2, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    invoke-direct {v1, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V

    .line 154
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    invoke-virtual {p1}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->notifyAdImpression()V

    return-void
.end method

.method public final onADLeftApplication(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 0

    return-void
.end method

.method public final onADLoaded(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/qq/e/ads/nativ/NativeExpressADView;",
            ">;)V"
        }
    .end annotation

    .line 57
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    .line 58
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qq/e/ads/nativ/NativeExpressADView;

    .line 59
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    invoke-virtual {p1}, Lcom/qq/e/ads/nativ/NativeExpressADView;->getExtraInfo()Ljava/util/Map;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->setNetworkInfoMap(Ljava/util/Map;)V

    .line 60
    invoke-virtual {p1}, Lcom/qq/e/ads/nativ/NativeExpressADView;->render()V

    return-void

    .line 62
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    if-eqz p1, :cond_1

    .line 63
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    const-string v0, ""

    const-string v1, "GDT Ad request success but no Ad return."

    invoke-interface {p1, v0, v1}, Lcom/tkay/network/gdt/a;->notifyError(Ljava/lang/String;Ljava/lang/String;)V

    .line 65
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    return-void
.end method

.method public final onNoAD(Lcom/qq/e/comm/util/AdError;)V
    .locals 3

    .line 49
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    if-eqz v0, :cond_0

    .line 50
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/network/gdt/a;->notifyError(Ljava/lang/String;Ljava/lang/String;)V

    .line 52
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    return-void
.end method

.method public final onRenderFail(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 2

    .line 73
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    if-eqz p1, :cond_0

    .line 74
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    const-string v0, ""

    const-string v1, "GDT onRenderFail"

    invoke-interface {p1, v0, v1}, Lcom/tkay/network/gdt/a;->notifyError(Ljava/lang/String;Ljava/lang/String;)V

    .line 76
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    return-void
.end method

.method public final onRenderSuccess(Lcom/qq/e/ads/nativ/NativeExpressADView;)V
    .locals 3

    .line 81
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iput-object p1, v0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    .line 83
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    invoke-virtual {p1}, Lcom/qq/e/ads/nativ/NativeExpressADView;->getBoundData()Lcom/qq/e/comm/pi/AdData;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 85
    invoke-interface {p1}, Lcom/qq/e/comm/pi/AdData;->getAdPatternType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 86
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    const-string v1, "1"

    invoke-static {v0, v1}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->a(Lcom/tkay/network/gdt/GDTTYNativeExpressAd;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_0

    .line 88
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    const-string v1, "2"

    invoke-static {v0, v1}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b(Lcom/tkay/network/gdt/GDTTYNativeExpressAd;Ljava/lang/String;)Ljava/lang/String;

    .line 91
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    if-eqz p1, :cond_2

    invoke-interface {p1}, Lcom/qq/e/comm/pi/AdData;->getVideoDuration()I

    move-result p1

    div-int/lit16 p1, p1, 0x3e8

    int-to-double v1, p1

    goto :goto_1

    :cond_2
    const-wide/16 v1, 0x0

    :goto_1
    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->setVideoDuration(D)V

    .line 93
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    new-instance v0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1$1;

    invoke-direct {v0, p0}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1$1;-><init>(Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;)V

    invoke-virtual {p1, v0}, Lcom/qq/e/ads/nativ/NativeExpressADView;->setMediaListener(Lcom/qq/e/ads/nativ/NativeExpressMediaListener;)V

    .line 145
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    if-eqz p1, :cond_3

    .line 146
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    const/4 v0, 0x1

    new-array v0, v0, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    aput-object v2, v0, v1

    invoke-interface {p1, v0}, Lcom/tkay/network/gdt/a;->notifyLoaded([Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;)V

    .line 148
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->c:Lcom/tkay/network/gdt/a;

    return-void
.end method
