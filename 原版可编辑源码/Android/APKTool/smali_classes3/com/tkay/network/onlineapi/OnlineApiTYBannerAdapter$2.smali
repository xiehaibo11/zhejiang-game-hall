.class final Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->a(Landroid/content/Context;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)V
    .locals 0

    .line 113
    iput-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 133
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 135
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->n(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 136
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {p1}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->o(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 124
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->l(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 125
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->m(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClose()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->j(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 118
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->k(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdShow()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 1

    .line 142
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->p(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 143
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;->q(Lcom/tkay/network/onlineapi/OnlineApiTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 0

    return-void
.end method
