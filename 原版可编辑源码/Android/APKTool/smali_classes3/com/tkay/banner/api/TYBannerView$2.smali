.class Lcom/tkay/banner/api/TYBannerView$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/b/a;


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

    .line 157
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAdLoadFail(Lcom/tkay/core/api/AdError;)V
    .locals 2

    .line 173
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/banner/api/TYBannerView$2$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/banner/api/TYBannerView$2$2;-><init>(Lcom/tkay/banner/api/TYBannerView$2;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    .line 186
    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {p1}, Lcom/tkay/banner/api/TYBannerView;->access$300(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/a/a;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {p1}, Lcom/tkay/banner/api/TYBannerView;->access$400(Lcom/tkay/banner/api/TYBannerView;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {p1}, Lcom/tkay/banner/api/TYBannerView;->access$500(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/b/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/banner/b/a;->a()Z

    move-result p1

    if-nez p1, :cond_0

    .line 187
    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {p1}, Lcom/tkay/banner/api/TYBannerView;->access$600(Lcom/tkay/banner/api/TYBannerView;)Ljava/lang/String;

    .line 188
    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView$2;->this$0:Lcom/tkay/banner/api/TYBannerView;

    invoke-static {p1}, Lcom/tkay/banner/api/TYBannerView;->access$500(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/b/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/banner/b/a;->b()V

    :cond_0
    return-void
.end method

.method public onAdLoaded()V
    .locals 2

    .line 160
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/banner/api/TYBannerView$2$1;

    invoke-direct {v1, p0}, Lcom/tkay/banner/api/TYBannerView$2$1;-><init>(Lcom/tkay/banner/api/TYBannerView$2;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
