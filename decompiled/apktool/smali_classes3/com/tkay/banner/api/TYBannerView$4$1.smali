.class final Lcom/tkay/banner/api/TYBannerView$4$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/banner/api/TYBannerView$4;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/banner/api/TYBannerView$4;

.field final synthetic val$adCacheInfo:Lcom/tkay/core/common/f/a;


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView$4;Lcom/tkay/core/common/f/a;)V
    .locals 0

    .line 472
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$4$1;->this$1:Lcom/tkay/banner/api/TYBannerView$4;

    iput-object p2, p0, Lcom/tkay/banner/api/TYBannerView$4$1;->val$adCacheInfo:Lcom/tkay/core/common/f/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 475
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView$4$1;->this$1:Lcom/tkay/banner/api/TYBannerView$4;

    iget-object v0, v0, Lcom/tkay/banner/api/TYBannerView$4;->this$0:Lcom/tkay/banner/api/TYBannerView;

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView$4$1;->val$adCacheInfo:Lcom/tkay/core/common/f/a;

    iget-object v2, p0, Lcom/tkay/banner/api/TYBannerView$4$1;->this$1:Lcom/tkay/banner/api/TYBannerView$4;

    iget-boolean v2, v2, Lcom/tkay/banner/api/TYBannerView$4;->val$currentRefreshStatus:Z

    invoke-static {v0, v1, v2}, Lcom/tkay/banner/api/TYBannerView;->access$900(Lcom/tkay/banner/api/TYBannerView;Lcom/tkay/core/common/f/a;Z)V

    return-void
.end method
