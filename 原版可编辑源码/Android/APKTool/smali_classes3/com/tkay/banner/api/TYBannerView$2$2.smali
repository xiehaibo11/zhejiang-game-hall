.class final Lcom/tkay/banner/api/TYBannerView$2$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/api/TYBannerView$2;->onAdLoadFail(Lcom/tkay/core/api/AdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/banner/api/TYBannerView$2;

.field final synthetic val$adError:Lcom/tkay/core/api/AdError;


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView$2;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 173
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$2$2;->this$1:Lcom/tkay/banner/api/TYBannerView$2;

    iput-object p2, p0, Lcom/tkay/banner/api/TYBannerView$2$2;->val$adError:Lcom/tkay/core/api/AdError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 176
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$2$2;->this$1:Lcom/tkay/banner/api/TYBannerView$2;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$2$2;->this$1:Lcom/tkay/banner/api/TYBannerView$2;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$100(Lcom/tkay/banner/api/TYBannerView;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 177
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$2$2;->this$1:Lcom/tkay/banner/api/TYBannerView$2;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iget-boolean v0, v0, Lcom/tkay/banner/api/TYBannerView;->mIsRefresh:Z

    if-eqz v0, :cond_0

    .line 178
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$2$2;->this$1:Lcom/tkay/banner/api/TYBannerView$2;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$2$2;->val$adError:Lcom/tkay/core/api/AdError;

    invoke-interface {v0, v1}, Lcom/tkay/banner/api/TYBannerListener;->onBannerAutoRefreshFail(Lcom/tkay/core/api/AdError;)V

    return-void

    .line 180
    :cond_0
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$2$2;->this$1:Lcom/tkay/banner/api/TYBannerView$2;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$2$2;->val$adError:Lcom/tkay/core/api/AdError;

    invoke-interface {v0, v1}, Lcom/tkay/banner/api/TYBannerListener;->onBannerFailed(Lcom/tkay/core/api/AdError;)V

    :cond_1
    return-void
.end method
