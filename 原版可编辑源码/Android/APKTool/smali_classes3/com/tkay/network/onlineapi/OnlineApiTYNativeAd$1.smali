.class final Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/h;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;)V
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 49
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 51
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->notifyAdClicked()V

    return-void
.end method

.method public final onAdClosed()V
    .locals 0

    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 37
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->notifyAdImpression()V

    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd$1;->a:Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;

    invoke-virtual {v0, p1}, Lcom/tkay/network/onlineapi/OnlineApiTYNativeAd;->notifyDeeplinkCallback(Z)V

    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 0

    return-void
.end method
