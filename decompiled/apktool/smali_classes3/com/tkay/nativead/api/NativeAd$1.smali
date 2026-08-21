.class final Lcom/tkay/nativead/api/NativeAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/b/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/nativead/api/NativeAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/common/f/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/nativead/api/NativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/nativead/api/NativeAd;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd$1;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked(Landroid/view/View;)V
    .locals 2

    .line 98
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$1;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v1, v0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {v0, v1, p1}, Lcom/tkay/nativead/api/NativeAd;->handleClick(Lcom/tkay/nativead/api/TYNativeAdView;Landroid/view/View;)V

    return-void
.end method

.method public final onAdDislikeButtonClick()V
    .locals 2

    .line 78
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$1;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v1, v0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {v0, v1}, Lcom/tkay/nativead/api/NativeAd;->handleAdDislikeButtonClick(Lcom/tkay/nativead/api/TYNativeAdView;)V

    return-void
.end method

.method public final onAdImpressed()V
    .locals 2

    .line 93
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$1;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v1, v0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {v0, v1}, Lcom/tkay/nativead/api/NativeAd;->handleImpression(Lcom/tkay/nativead/api/TYNativeAdView;)V

    return-void
.end method

.method public final onAdVideoEnd()V
    .locals 2

    .line 108
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$1;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v1, v0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {v0, v1}, Lcom/tkay/nativead/api/NativeAd;->handleVideoEnd(Lcom/tkay/nativead/api/TYNativeAdView;)V

    return-void
.end method

.method public final onAdVideoProgress(I)V
    .locals 2

    .line 113
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$1;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v1, v0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {v0, v1, p1}, Lcom/tkay/nativead/api/NativeAd;->handleVideoProgress(Lcom/tkay/nativead/api/TYNativeAdView;I)V

    return-void
.end method

.method public final onAdVideoStart()V
    .locals 2

    .line 103
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$1;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v1, v0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {v0, v1}, Lcom/tkay/nativead/api/NativeAd;->handleVideoStart(Lcom/tkay/nativead/api/TYNativeAdView;)V

    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 2

    .line 83
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$1;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v1, v0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {v0, v1, p1}, Lcom/tkay/nativead/api/NativeAd;->handleDeeplinkCallback(Lcom/tkay/nativead/api/TYNativeAdView;Z)V

    return-void
.end method

.method public final onDownloadConfirmCallback(Landroid/content/Context;Landroid/view/View;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 1

    .line 88
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$1;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/nativead/api/NativeAd;->handleDownloadConfirm(Landroid/content/Context;Landroid/view/View;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    return-void
.end method
