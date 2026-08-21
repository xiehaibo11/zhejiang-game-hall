.class final Lcom/tkay/nativead/api/NativeAd$9;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/nativead/api/NativeAd;->handleAdDislikeButtonClick(Lcom/tkay/nativead/api/TYNativeAdView;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/nativead/api/NativeAd;

.field final synthetic val$view:Lcom/tkay/nativead/api/TYNativeAdView;


# direct methods
.method constructor <init>(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/nativead/api/TYNativeAdView;)V
    .locals 0

    .line 634
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd$9;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iput-object p2, p0, Lcom/tkay/nativead/api/NativeAd$9;->val$view:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 637
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$9;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v0}, Lcom/tkay/nativead/api/NativeAd;->access$500(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/nativead/api/TYNativeDislikeListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 638
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$9;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v0}, Lcom/tkay/nativead/api/NativeAd;->access$500(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/nativead/api/TYNativeDislikeListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd$9;->val$view:Lcom/tkay/nativead/api/TYNativeAdView;

    iget-object v2, p0, Lcom/tkay/nativead/api/NativeAd$9;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v2, v2, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-static {v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/api/BaseAd;)Lcom/tkay/core/common/b/i;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/nativead/api/TYNativeDislikeListener;->onAdCloseButtonClick(Lcom/tkay/nativead/api/TYNativeAdView;Lcom/tkay/core/api/TYAdInfo;)V

    :cond_0
    return-void
.end method
