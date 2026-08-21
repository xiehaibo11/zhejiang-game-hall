.class final Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/windad/Splash/WindSplashADListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;)V
    .locals 0

    .line 109
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onSplashAdClick(Ljava/lang/String;)V
    .locals 1

    .line 149
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 150
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->k(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 151
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->l(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdClicked()V

    :cond_0
    return-void
.end method

.method public final onSplashAdClose(Ljava/lang/String;)V
    .locals 1

    .line 158
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 159
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->m(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)I

    .line 160
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->n(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 161
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->o(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method

.method public final onSplashAdLoadFail(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 1

    .line 137
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    if-eqz p1, :cond_0

    .line 139
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p2, p2, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, v0, p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onSplashAdLoadSuccess(Ljava/lang/String;)V
    .locals 4

    .line 121
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 122
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->g(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->h(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAD;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 123
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    .line 124
    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->h(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAD;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/windad/Splash/WindSplashAD;->getEcpm()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object v1, v1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    iget-object v1, v1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object v2, v2, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    .line 125
    invoke-static {v2}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->h(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAD;

    move-result-object v2

    const/4 v3, 0x0

    .line 123
    invoke-static {p1, v0, v1, v2, v3}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->onC2SBiddingResultWithCache(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYBiddingListener;Ljava/lang/Object;Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 129
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->i(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 130
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->j(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_1
    return-void
.end method

.method public final onSplashAdShow(Ljava/lang/String;)V
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 113
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->e(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 114
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->f(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShow()V

    :cond_0
    return-void
.end method

.method public final onSplashAdShowError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onSplashAdSkip(Ljava/lang/String;)V
    .locals 1

    .line 168
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 169
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->p(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)I

    .line 170
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->q(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 171
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2$1;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    iget-object p1, p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->r(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method
