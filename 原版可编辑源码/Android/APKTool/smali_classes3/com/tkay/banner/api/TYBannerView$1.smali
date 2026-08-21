.class Lcom/tkay/banner/api/TYBannerView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/banner/a/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/banner/api/TYBannerView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/banner/api/TYBannerView;


# direct methods
.method constructor <init>(Lcom/tkay/banner/api/TYBannerView;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onBannerClicked(Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;)V
    .locals 2

    .line 90
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/banner/api/TYBannerView$1$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/banner/api/TYBannerView$1$1;-><init>(Lcom/tkay/banner/api/TYBannerView$1;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onBannerClose(Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;)V
    .locals 2

    .line 119
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/banner/api/TYBannerView$1$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/banner/api/TYBannerView$1$3;-><init>(Lcom/tkay/banner/api/TYBannerView$1;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    .line 128
    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/tkay/banner/api/TYBannerView;->access$102(Lcom/tkay/banner/api/TYBannerView;Z)Z

    .line 129
    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView$1;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {p1, v0}, Lcom/tkay/banner/api/TYBannerView;->access$200(Lcom/tkay/banner/api/TYBannerView;I)V

    return-void
.end method

.method public onBannerShow(Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V
    .locals 2

    .line 102
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/banner/api/TYBannerView$1$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/banner/api/TYBannerView$1$2;-><init>(Lcom/tkay/banner/api/TYBannerView$1;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onDeeplinkCallback(Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V
    .locals 2

    .line 134
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/banner/api/TYBannerView$1$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/banner/api/TYBannerView$1$4;-><init>(Lcom/tkay/banner/api/TYBannerView$1;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onDownloadConfirm(Landroid/content/Context;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 2

    .line 146
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/banner/api/TYBannerView$1$5;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/banner/api/TYBannerView$1$5;-><init>(Lcom/tkay/banner/api/TYBannerView$1;Landroid/content/Context;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
