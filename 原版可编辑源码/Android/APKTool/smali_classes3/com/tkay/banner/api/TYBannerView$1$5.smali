.class final Lcom/tkay/banner/api/TYBannerView$1$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/api/TYBannerView$1;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/banner/api/TYBannerView$1;

.field final synthetic val$context:Landroid/content/Context;

.field final synthetic val$customBannerAdapter:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

.field final synthetic val$networkConfirmInfo:Lcom/tkay/core/api/TYNetworkConfirmInfo;


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView$1;Landroid/content/Context;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 0

    .line 146
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$1$5;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iput-object p2, p0, Lcom/tkay/banner/api/TYBannerView$1$5;->val$context:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/banner/api/TYBannerView$1$5;->val$customBannerAdapter:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    iput-object p4, p0, Lcom/tkay/banner/api/TYBannerView$1$5;->val$networkConfirmInfo:Lcom/tkay/core/api/TYNetworkConfirmInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 149
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$1$5;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$1$5;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/banner/api/TYBannerExListener;

    if-eqz v0, :cond_0

    .line 150
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$1$5;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    check-cast v0, Lcom/tkay/banner/api/TYBannerExListener;

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$1$5;->val$context:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/banner/api/TYBannerView$1$5;->val$customBannerAdapter:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    invoke-static {v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/banner/api/TYBannerView$1$5;->val$networkConfirmInfo:Lcom/tkay/core/api/TYNetworkConfirmInfo;

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/banner/api/TYBannerExListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    :cond_0
    return-void
.end method
