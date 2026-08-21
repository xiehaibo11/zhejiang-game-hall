.class final Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYBannerAdapter;->a(Landroid/app/Activity;Lcom/bykv/vk/openvk/TTNtExpressObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V
    .locals 0

    .line 360
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onCancel()V
    .locals 0

    return-void
.end method

.method public final onRefuse()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method

.method public final onSelected(ILjava/lang/String;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 375
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->r(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 376
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->s(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClose()V

    :cond_0
    return-void
.end method

.method public final onSelected(ILjava/lang/String;Z)V
    .locals 0

    .line 368
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->p(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 369
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClose()V

    :cond_0
    return-void
.end method

.method public final onShow()V
    .locals 0

    return-void
.end method
