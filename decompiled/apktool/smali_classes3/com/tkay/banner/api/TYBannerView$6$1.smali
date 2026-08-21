.class final Lcom/tkay/banner/api/TYBannerView$6$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/api/TYBannerView$6;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/banner/api/TYBannerView$6;


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView$6;)V
    .locals 0

    .line 566
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$6$1;->this$1:Lcom/tkay/banner/api/TYBannerView$6;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 569
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$6$1;->this$1:Lcom/tkay/banner/api/TYBannerView$6;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$6;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 570
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$6$1;->this$1:Lcom/tkay/banner/api/TYBannerView$6;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$6;->val$baseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$6$1;->this$1:Lcom/tkay/banner/api/TYBannerView$6;

    iget-boolean v0, v0, Lcom/tkay/banner/api/TYBannerView$6;->val$isRefresh:Z

    if-eqz v0, :cond_0

    .line 571
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$6$1;->this$1:Lcom/tkay/banner/api/TYBannerView$6;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$6;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$6$1;->this$1:Lcom/tkay/banner/api/TYBannerView$6;

    iget-object v1, v1, Lcom/tkay/banner/api/TYBannerView$6;->val$baseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/banner/api/TYBannerListener;->onBannerAutoRefreshed(Lcom/tkay/core/api/TYAdInfo;)V

    return-void

    .line 573
    :cond_0
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$6$1;->this$1:Lcom/tkay/banner/api/TYBannerView$6;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$6;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$6$1;->this$1:Lcom/tkay/banner/api/TYBannerView$6;

    iget-object v1, v1, Lcom/tkay/banner/api/TYBannerView$6;->val$baseAdAdapter:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/banner/api/TYBannerListener;->onBannerShow(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_1
    return-void
.end method
