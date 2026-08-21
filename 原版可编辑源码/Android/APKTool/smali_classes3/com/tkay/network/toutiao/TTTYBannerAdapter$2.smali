.class final Lcom/tkay/network/toutiao/TTTYBannerAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTBnObject$AdInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/toutiao/TTTYBannerAdapter;
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

    .line 113
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked(Landroid/view/View;I)V
    .locals 0

    .line 117
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->c(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 118
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->d(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClicked()V

    :cond_0
    return-void
.end method

.method public final onAdShow(Landroid/view/View;I)V
    .locals 0

    .line 124
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->e(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    iget-boolean p1, p1, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->h:Z

    if-nez p1, :cond_0

    .line 125
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->f(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdShow()V

    .line 126
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$2;->a:Lcom/tkay/network/toutiao/TTTYBannerAdapter;

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->h:Z

    :cond_0
    return-void
.end method
