.class Lcom/tkay/nativead/api/NativeAd$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/nativead/api/NativeAd;->handleImpression(Lcom/tkay/nativead/api/TYNativeAdView;)V
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

    .line 533
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd$6;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iput-object p2, p0, Lcom/tkay/nativead/api/NativeAd$6;->val$view:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 536
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$6;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v0}, Lcom/tkay/nativead/api/NativeAd;->access$000(Lcom/tkay/nativead/api/NativeAd;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 540
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$6;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v0, v0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_1

    .line 543
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$6;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v0, v0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/a;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 544
    sget-object v1, Lcom/tkay/core/common/b/f$i;->c:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 547
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd$6;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v1, v0}, Lcom/tkay/nativead/api/NativeAd;->access$200(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/core/common/f/d;)V

    .line 550
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd$6;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v1}, Lcom/tkay/nativead/api/NativeAd;->access$300(Lcom/tkay/nativead/api/NativeAd;)Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/4 v2, 0x4

    iget-object v3, p0, Lcom/tkay/nativead/api/NativeAd$6;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-static {v3}, Lcom/tkay/nativead/api/NativeAd;->access$100(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/core/common/f/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v3

    invoke-virtual {v1, v2, v0, v3}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;)V

    .line 553
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/nativead/api/NativeAd$6$1;

    invoke-direct {v1, p0}, Lcom/tkay/nativead/api/NativeAd$6$1;-><init>(Lcom/tkay/nativead/api/NativeAd$6;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    const-string v0, "NativeAd"

    const-string v1, "BaseNativeAd has been destotyed."

    .line 564
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
