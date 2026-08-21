.class final Lcom/tkay/banner/api/TYBannerView$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/api/TYBannerView$1;->onBannerClicked(Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/banner/api/TYBannerView$1;

.field final synthetic val$customBannerAdapter:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView$1;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;)V
    .locals 0

    .line 90
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$1$1;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iput-object p2, p0, Lcom/tkay/banner/api/TYBannerView$1$1;->val$customBannerAdapter:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 93
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$1$1;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 94
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$1$1;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$1$1;->val$customBannerAdapter:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/banner/api/TYBannerListener;->onBannerClicked(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_0
    return-void
.end method
