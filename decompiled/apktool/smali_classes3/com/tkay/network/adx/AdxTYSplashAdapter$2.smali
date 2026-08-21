.class final Lcom/tkay/network/adx/AdxTYSplashAdapter$2;
.super Lcom/tkay/basead/e/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/adx/AdxTYSplashAdapter;->show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic b:Lcom/tkay/network/adx/AdxTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/adx/AdxTYSplashAdapter;Lcom/tkay/core/common/f/h;)V
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-direct {p0, p2}, Lcom/tkay/basead/e/e;-><init>(Lcom/tkay/core/common/f/h;)V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 101
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 103
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->k(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 104
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->l(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdClicked()V

    :cond_1
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 92
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->i(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 93
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->j(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method

.method public final onAdShow()V
    .locals 1

    .line 84
    invoke-super {p0}, Lcom/tkay/basead/e/e;->onAdShow()V

    .line 85
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->g(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 86
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->h(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShow()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->m(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 111
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->n(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 3

    .line 117
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->o(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 118
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYSplashAdapter$2;->b:Lcom/tkay/network/adx/AdxTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/adx/AdxTYSplashAdapter;->p(Lcom/tkay/network/adx/AdxTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

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
