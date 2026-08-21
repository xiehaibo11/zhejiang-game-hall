.class Lcom/tkay/banner/api/TYBannerView$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/api/TYBannerView;->notifyBannerImpression(Landroid/content/Context;Lcom/tkay/core/api/TYBaseAdAdapter;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/banner/api/TYBannerView;

.field final synthetic val$adTrackingInfo:Lcom/tkay/core/common/f/d;

.field final synthetic val$baseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

.field final synthetic val$context:Landroid/content/Context;

.field final synthetic val$isRefresh:Z


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView;Lcom/tkay/core/common/f/d;Landroid/content/Context;Lcom/tkay/core/api/TYBaseAdAdapter;Z)V
    .locals 0

    .line 558
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$6;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iput-object p2, p0, Lcom/tkay/banner/api/TYBannerView$6;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    iput-object p3, p0, Lcom/tkay/banner/api/TYBannerView$6;->val$context:Landroid/content/Context;

    iput-object p4, p0, Lcom/tkay/banner/api/TYBannerView$6;->val$baseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

    iput-boolean p5, p0, Lcom/tkay/banner/api/TYBannerView$6;->val$isRefresh:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 563
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$6;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->c:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 564
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$6;->val$context:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$6;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    iget-object v2, p0, Lcom/tkay/banner/api/TYBannerView$6;->val$baseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v2

    const/4 v3, 0x4

    invoke-virtual {v0, v3, v1, v2}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;)V

    .line 566
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/banner/api/TYBannerView$6$1;

    invoke-direct {v1, p0}, Lcom/tkay/banner/api/TYBannerView$6$1;-><init>(Lcom/tkay/banner/api/TYBannerView$6;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
