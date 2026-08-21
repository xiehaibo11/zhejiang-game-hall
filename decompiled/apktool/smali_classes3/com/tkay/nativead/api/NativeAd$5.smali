.class final Lcom/tkay/nativead/api/NativeAd$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/nativead/api/NativeAd;->recordShow(Lcom/tkay/nativead/api/TYNativeAdView;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/nativead/api/NativeAd;

.field final synthetic val$adTrackingInfo:Lcom/tkay/core/common/f/d;


# direct methods
.method constructor <init>(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/core/common/f/d;)V
    .locals 0

    .line 415
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd$5;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iput-object p2, p0, Lcom/tkay/nativead/api/NativeAd$5;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 9

    .line 418
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$5;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v0}, Lcom/tkay/nativead/api/NativeAd;->access$000(Lcom/tkay/nativead/api/NativeAd;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 421
    :cond_0
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$5;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v0}, Lcom/tkay/nativead/api/NativeAd;->access$100(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/core/common/f/a;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 423
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$5;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd$5;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    invoke-static {v0, v1}, Lcom/tkay/nativead/api/NativeAd;->access$200(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/core/common/f/d;)V

    .line 425
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 428
    :try_start_0
    iget-object v2, p0, Lcom/tkay/nativead/api/NativeAd$5;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v2

    const-string v3, "_"

    invoke-virtual {v2, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    .line 429
    array-length v3, v2

    add-int/lit8 v3, v3, -0x1

    aget-object v2, v2, v3

    invoke-static {v2}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 431
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    move-wide v7, v0

    .line 434
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$5;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v0, v0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$5;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v0, v0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    instance-of v0, v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v0, :cond_1

    .line 435
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$5;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v0, v0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    check-cast v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd$5;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->setShowId(Ljava/lang/String;)V

    .line 438
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd$5;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v1}, Lcom/tkay/nativead/api/NativeAd;->access$300(Lcom/tkay/nativead/api/NativeAd;)Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/nativead/api/NativeAd$5;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v2}, Lcom/tkay/nativead/api/NativeAd;->access$100(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/core/common/f/a;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Lcom/tkay/core/common/f/a;)V

    .line 441
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$5;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v0}, Lcom/tkay/nativead/api/NativeAd;->access$300(Lcom/tkay/nativead/api/NativeAd;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v3

    const/16 v4, 0xd

    iget-object v5, p0, Lcom/tkay/nativead/api/NativeAd$5;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$5;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v0}, Lcom/tkay/nativead/api/NativeAd;->access$100(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/core/common/f/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v6

    invoke-virtual/range {v3 .. v8}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)V

    :cond_2
    return-void
.end method
