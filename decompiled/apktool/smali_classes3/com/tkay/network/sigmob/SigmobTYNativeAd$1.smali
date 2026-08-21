.class final Lcom/tkay/network/sigmob/SigmobTYNativeAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/windad/natives/NativeADEventListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYNativeAd;->prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/sigmob/SigmobTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYNativeAd;)V
    .locals 0

    .line 117
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd$1;->a:Lcom/tkay/network/sigmob/SigmobTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 1

    .line 125
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd$1;->a:Lcom/tkay/network/sigmob/SigmobTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->notifyAdClicked()V

    return-void
.end method

.method public final onAdDetailDismiss()V
    .locals 0

    return-void
.end method

.method public final onAdDetailShow()V
    .locals 0

    return-void
.end method

.method public final onAdError(Lcom/sigmob/windad/WindAdError;)V
    .locals 0

    return-void
.end method

.method public final onAdExposed()V
    .locals 1

    .line 120
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd$1;->a:Lcom/tkay/network/sigmob/SigmobTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->notifyAdImpression()V

    return-void
.end method
