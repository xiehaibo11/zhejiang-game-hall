.class final Lcom/tkay/network/gdt/GDTTYNativeAd$2;
.super Lcom/qq/e/ads/nativ/NativeADEventListenerWithClickInfo;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYNativeAd;->a(Lcom/qq/e/ads/nativ/NativeUnifiedADData;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

.field final synthetic b:Lcom/tkay/network/gdt/GDTTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYNativeAd;Lcom/qq/e/ads/nativ/NativeUnifiedADData;)V
    .locals 0

    .line 154
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$2;->b:Lcom/tkay/network/gdt/GDTTYNativeAd;

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$2;->a:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-direct {p0}, Lcom/qq/e/ads/nativ/NativeADEventListenerWithClickInfo;-><init>()V

    return-void
.end method


# virtual methods
.method public final onADClicked(Landroid/view/View;)V
    .locals 1

    .line 164
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$2;->b:Lcom/tkay/network/gdt/GDTTYNativeAd;

    iput-object p1, v0, Lcom/tkay/network/gdt/GDTTYNativeAd;->h:Landroid/view/View;

    .line 165
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "onADClicked...."

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "GDTTYNativeAd"

    invoke-static {v0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 166
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$2;->b:Lcom/tkay/network/gdt/GDTTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->notifyAdClicked()V

    return-void
.end method

.method public final onADError(Lcom/qq/e/comm/util/AdError;)V
    .locals 0

    return-void
.end method

.method public final onADExposed()V
    .locals 4

    .line 157
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$2;->b:Lcom/tkay/network/gdt/GDTTYNativeAd;

    invoke-virtual {v1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->getShowId()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$2;->a:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V

    .line 158
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$2;->b:Lcom/tkay/network/gdt/GDTTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYNativeAd;->notifyAdImpression()V

    return-void
.end method

.method public final onADStatusChanged()V
    .locals 0

    return-void
.end method
