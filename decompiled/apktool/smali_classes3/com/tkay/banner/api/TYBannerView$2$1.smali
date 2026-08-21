.class final Lcom/tkay/banner/api/TYBannerView$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/api/TYBannerView$2;->onAdLoaded()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/banner/api/TYBannerView$2;


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView$2;)V
    .locals 0

    .line 160
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$2$1;->this$1:Lcom/tkay/banner/api/TYBannerView$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 163
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$2$1;->this$1:Lcom/tkay/banner/api/TYBannerView$2;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$2$1;->this$1:Lcom/tkay/banner/api/TYBannerView$2;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iget-boolean v0, v0, Lcom/tkay/banner/api/TYBannerView;->mIsRefresh:Z

    if-nez v0, :cond_0

    .line 164
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$2$1;->this$1:Lcom/tkay/banner/api/TYBannerView$2;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {v0}, Lcom/tkay/banner/api/TYBannerView;->access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/banner/api/TYBannerListener;->onBannerLoaded()V

    .line 166
    :cond_0
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$2$1;->this$1:Lcom/tkay/banner/api/TYBannerView$2;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {v0}, Lcom/tkay/banner/api/TYBannerView;->controlShow()V

    return-void
.end method
