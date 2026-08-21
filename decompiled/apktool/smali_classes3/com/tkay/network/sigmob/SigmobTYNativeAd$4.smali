.class final Lcom/tkay/network/sigmob/SigmobTYNativeAd$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;


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

    .line 189
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd$4;->a:Lcom/tkay/network/sigmob/SigmobTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onCancel()V
    .locals 0

    return-void
.end method

.method public final onSelected(ILjava/lang/String;Z)V
    .locals 0

    .line 197
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYNativeAd$4;->a:Lcom/tkay/network/sigmob/SigmobTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/sigmob/SigmobTYNativeAd;->notifyAdDislikeClick()V

    return-void
.end method

.method public final onShow()V
    .locals 0

    return-void
.end method
