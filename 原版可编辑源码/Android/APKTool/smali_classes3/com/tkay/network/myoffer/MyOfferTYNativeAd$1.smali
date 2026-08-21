.class final Lcom/tkay/network/myoffer/MyOfferTYNativeAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/myoffer/MyOfferTYNativeAd;-><init>(Landroid/content/Context;Lcom/tkay/basead/f/e;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/myoffer/MyOfferTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/myoffer/MyOfferTYNativeAd;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd$1;->a:Lcom/tkay/network/myoffer/MyOfferTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd$1;->a:Lcom/tkay/network/myoffer/MyOfferTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 48
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 50
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd$1;->a:Lcom/tkay/network/myoffer/MyOfferTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->notifyAdClicked()V

    return-void
.end method

.method public final onAdClosed()V
    .locals 0

    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 36
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYNativeAd$1;->a:Lcom/tkay/network/myoffer/MyOfferTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/myoffer/MyOfferTYNativeAd;->notifyAdImpression()V

    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 0

    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 0

    return-void
.end method
