.class final Lcom/tkay/nativead/api/NativeAd$6$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/nativead/api/NativeAd$6;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/nativead/api/NativeAd$6;


# direct methods
.method constructor <init>(Lcom/tkay/nativead/api/NativeAd$6;)V
    .locals 0

    .line 553
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd$6$1;->this$1:Lcom/tkay/nativead/api/NativeAd$6;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 556
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$6$1;->this$1:Lcom/tkay/nativead/api/NativeAd$6;

    iget-object v0, v0, Lcom/tkay/nativead/api/NativeAd$6;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v0}, Lcom/tkay/nativead/api/NativeAd;->access$400(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/nativead/api/TYNativeEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 557
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$6$1;->this$1:Lcom/tkay/nativead/api/NativeAd$6;

    iget-object v0, v0, Lcom/tkay/nativead/api/NativeAd$6;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v0}, Lcom/tkay/nativead/api/NativeAd;->access$400(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/nativead/api/TYNativeEventListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd$6$1;->this$1:Lcom/tkay/nativead/api/NativeAd$6;

    iget-object v1, v1, Lcom/tkay/nativead/api/NativeAd$6;->val$view:Lcom/tkay/nativead/api/TYNativeAdView;

    iget-object v2, p0, Lcom/tkay/nativead/api/NativeAd$6$1;->this$1:Lcom/tkay/nativead/api/NativeAd$6;

    iget-object v2, v2, Lcom/tkay/nativead/api/NativeAd$6;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v2, v2, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    .line 558
    invoke-static {v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/api/BaseAd;)Lcom/tkay/core/common/b/i;

    move-result-object v2

    .line 557
    invoke-interface {v0, v1, v2}, Lcom/tkay/nativead/api/TYNativeEventListener;->onAdImpressed(Lcom/tkay/nativead/api/TYNativeAdView;Lcom/tkay/core/api/TYAdInfo;)V

    :cond_0
    return-void
.end method
