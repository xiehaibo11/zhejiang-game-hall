.class final Lcom/tkay/banner/api/TYBannerView$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/api/TYBannerView;->notifyBannerShow(Landroid/content/Context;Lcom/tkay/core/common/f/a;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/banner/api/TYBannerView;

.field final synthetic val$adCacheInfo:Lcom/tkay/core/common/f/a;

.field final synthetic val$adTrackingInfo:Lcom/tkay/core/common/f/d;

.field final synthetic val$baseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

.field final synthetic val$context:Landroid/content/Context;

.field final synthetic val$isRefresh:Z

.field final synthetic val$timestamp:J


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView;Lcom/tkay/core/common/f/d;Landroid/content/Context;Lcom/tkay/core/common/f/a;Lcom/tkay/core/api/TYBaseAdAdapter;JZ)V
    .locals 0

    .line 535
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$5;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iput-object p2, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    iput-object p3, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$context:Landroid/content/Context;

    iput-object p4, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$adCacheInfo:Lcom/tkay/core/common/f/a;

    iput-object p5, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$baseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

    iput-wide p6, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$timestamp:J

    iput-boolean p8, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$isRefresh:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 538
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    if-eqz v0, :cond_0

    .line 541
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$5;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {v0}, Lcom/tkay/banner/api/TYBannerView;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/s;->a(Landroid/content/Context;Lcom/tkay/core/common/f/d;)V

    .line 544
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$context:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$adCacheInfo:Lcom/tkay/core/common/f/a;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Lcom/tkay/core/common/f/a;)V

    .line 546
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$context:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/16 v2, 0xd

    iget-object v3, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$adTrackingInfo:Lcom/tkay/core/common/f/d;

    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$baseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v4

    iget-wide v5, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$timestamp:J

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)V

    .line 548
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$baseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->supportImpressionCallback()Z

    move-result v0

    if-nez v0, :cond_0

    .line 549
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$5;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$context:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$baseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

    iget-boolean v3, p0, Lcom/tkay/banner/api/TYBannerView$5;->val$isRefresh:Z

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/banner/api/TYBannerView;->access$1100(Lcom/tkay/banner/api/TYBannerView;Landroid/content/Context;Lcom/tkay/core/api/TYBaseAdAdapter;Z)V

    :cond_0
    return-void
.end method
