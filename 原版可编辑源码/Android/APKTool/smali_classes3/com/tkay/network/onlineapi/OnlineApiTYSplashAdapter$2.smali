.class final Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a(Landroid/content/Context;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)V
    .locals 0

    .line 141
    iput-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 159
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 161
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 163
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->k(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 164
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->l(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 152
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->i(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 153
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->j(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 145
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->g(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 146
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->h(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShow()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 1

    .line 170
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->m(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 171
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->n(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 3

    .line 177
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->o(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 178
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;->a:Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->p(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

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
