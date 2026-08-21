.class final Lcom/tkay/banner/api/TYBannerView$3;
.super Lcom/tkay/core/common/l/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/api/TYBannerView;->registerDelayShow(Landroid/content/Context;Lcom/tkay/core/common/f/a;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/banner/api/TYBannerView;

.field final synthetic val$adCacheInfo:Lcom/tkay/core/common/f/a;

.field final synthetic val$context:Landroid/content/Context;

.field final synthetic val$isRefresh:Z


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView;Landroid/content/Context;Lcom/tkay/core/common/f/a;Z)V
    .locals 0

    .line 349
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$3;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iput-object p2, p0, Lcom/tkay/banner/api/TYBannerView$3;->val$context:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/banner/api/TYBannerView$3;->val$adCacheInfo:Lcom/tkay/core/common/f/a;

    iput-boolean p4, p0, Lcom/tkay/banner/api/TYBannerView$3;->val$isRefresh:Z

    invoke-direct {p0}, Lcom/tkay/core/common/l/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final getImpressionMinPercentageViewed()I
    .locals 1

    const/16 v0, 0x32

    return v0
.end method

.method public final getImpressionMinTimeViewed()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final recordImpression(Landroid/view/View;)V
    .locals 3

    .line 352
    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView$3;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$3;->val$context:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$3;->val$adCacheInfo:Lcom/tkay/core/common/f/a;

    iget-boolean v2, p0, Lcom/tkay/banner/api/TYBannerView$3;->val$isRefresh:Z

    invoke-static {p1, v0, v1, v2}, Lcom/tkay/banner/api/TYBannerView;->access$700(Lcom/tkay/banner/api/TYBannerView;Landroid/content/Context;Lcom/tkay/core/common/f/a;Z)V

    return-void
.end method
