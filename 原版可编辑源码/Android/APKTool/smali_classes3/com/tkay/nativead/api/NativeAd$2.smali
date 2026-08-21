.class final Lcom/tkay/nativead/api/NativeAd$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/nativead/api/NativeAd;->handleVideoProgress(Lcom/tkay/nativead/api/TYNativeAdView;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/nativead/api/NativeAd;

.field final synthetic val$progress:I

.field final synthetic val$view:Lcom/tkay/nativead/api/TYNativeAdView;


# direct methods
.method constructor <init>(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/nativead/api/TYNativeAdView;I)V
    .locals 0

    .line 673
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd$2;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iput-object p2, p0, Lcom/tkay/nativead/api/NativeAd$2;->val$view:Lcom/tkay/nativead/api/TYNativeAdView;

    iput p3, p0, Lcom/tkay/nativead/api/NativeAd$2;->val$progress:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 676
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$2;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v0}, Lcom/tkay/nativead/api/NativeAd;->access$400(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/nativead/api/TYNativeEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 677
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$2;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v0}, Lcom/tkay/nativead/api/NativeAd;->access$400(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/nativead/api/TYNativeEventListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd$2;->val$view:Lcom/tkay/nativead/api/TYNativeAdView;

    iget v2, p0, Lcom/tkay/nativead/api/NativeAd$2;->val$progress:I

    invoke-interface {v0, v1, v2}, Lcom/tkay/nativead/api/TYNativeEventListener;->onAdVideoProgress(Lcom/tkay/nativead/api/TYNativeAdView;I)V

    :cond_0
    return-void
.end method
