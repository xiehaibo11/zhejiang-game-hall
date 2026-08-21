.class final Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->a(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)V
    .locals 0

    .line 104
    iput-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 122
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 124
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 126
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->i(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 127
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->j(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->g(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 116
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->h(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 108
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->e(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 109
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->f(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShow()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 0

    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 3

    .line 138
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->k(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 139
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;->a:Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->l(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->b()Ljava/lang/String;

    move-result-object p1

    const-string v2, "4006"

    invoke-static {v2, v1, p1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShowFail(Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method
