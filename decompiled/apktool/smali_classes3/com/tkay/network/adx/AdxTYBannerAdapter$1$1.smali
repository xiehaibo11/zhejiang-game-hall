.class final Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;
.super Lcom/tkay/basead/e/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->onAdCacheLoaded()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic b:Lcom/tkay/network/adx/AdxTYBannerAdapter$1;


# direct methods
.method constructor <init>(Lcom/tkay/network/adx/AdxTYBannerAdapter$1;Lcom/tkay/core/common/f/h;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;->b:Lcom/tkay/network/adx/AdxTYBannerAdapter$1;

    invoke-direct {p0, p2}, Lcom/tkay/basead/e/e;-><init>(Lcom/tkay/core/common/f/h;)V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;->b:Lcom/tkay/network/adx/AdxTYBannerAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 96
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 98
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;->b:Lcom/tkay/network/adx/AdxTYBannerAdapter$1;

    iget-object p1, p1, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->i(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 99
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;->b:Lcom/tkay/network/adx/AdxTYBannerAdapter$1;

    iget-object p1, p1, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->j(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 87
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;->b:Lcom/tkay/network/adx/AdxTYBannerAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->g(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 88
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;->b:Lcom/tkay/network/adx/AdxTYBannerAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->h(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClose()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 79
    invoke-super {p0}, Lcom/tkay/basead/e/e;->onAdShow()V

    .line 80
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;->b:Lcom/tkay/network/adx/AdxTYBannerAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->e(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 81
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;->b:Lcom/tkay/network/adx/AdxTYBannerAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->f(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdShow()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 1

    .line 105
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;->b:Lcom/tkay/network/adx/AdxTYBannerAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->k(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 106
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1$1;->b:Lcom/tkay/network/adx/AdxTYBannerAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/adx/AdxTYBannerAdapter$1;->a:Lcom/tkay/network/adx/AdxTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYBannerAdapter;->l(Lcom/tkay/network/adx/AdxTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 0

    return-void
.end method
