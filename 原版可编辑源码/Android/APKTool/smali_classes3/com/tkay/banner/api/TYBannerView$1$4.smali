.class final Lcom/tkay/banner/api/TYBannerView$1$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/api/TYBannerView$1;->onDeeplinkCallback(Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/banner/api/TYBannerView$1;

.field final synthetic val$customBannerAdapter:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

.field final synthetic val$isSuccess:Z


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView$1;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V
    .locals 0

    .line 134
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$1$4;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iput-object p2, p0, Lcom/tkay/banner/api/TYBannerView$1$4;->val$customBannerAdapter:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    iput-boolean p3, p0, Lcom/tkay/banner/api/TYBannerView$1$4;->val$isSuccess:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 137
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$1$4;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$1$4;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/banner/api/TYBannerExListener;

    if-eqz v0, :cond_0

    .line 138
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$1$4;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    check-cast v0, Lcom/tkay/banner/api/TYBannerExListener;

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$1$4;->this$1:Lcom/tkay/banner/api/TYBannerView$1;

    iget-object v1, v1, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iget-boolean v1, v1, Lcom/tkay/banner/api/TYBannerView;->mIsRefresh:Z

    iget-object v2, p0, Lcom/tkay/banner/api/TYBannerView$1$4;->val$customBannerAdapter:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    invoke-static {v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v2

    iget-boolean v3, p0, Lcom/tkay/banner/api/TYBannerView$1$4;->val$isSuccess:Z

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/banner/api/TYBannerExListener;->onDeeplinkCallback(ZLcom/tkay/core/api/TYAdInfo;Z)V

    :cond_0
    return-void
.end method
