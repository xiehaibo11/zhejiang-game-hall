.class final Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/mbridge/msdk/out/MBSplashShowListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->a(Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)V
    .locals 0

    .line 162
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 187
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->q(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 188
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->r(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdClicked()V

    :cond_0
    return-void
.end method

.method public final onAdTick(Lcom/mbridge/msdk/out/MBridgeIds;J)V
    .locals 0

    return-void
.end method

.method public final onDismiss(Lcom/mbridge/msdk/out/MBridgeIds;I)V
    .locals 0

    .line 194
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->s(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    if-eqz p1, :cond_3

    const/4 p1, 0x1

    if-eq p2, p1, :cond_2

    const/4 p1, 0x2

    if-eq p2, p1, :cond_1

    const/4 p1, 0x3

    if-eq p2, p1, :cond_0

    .line 209
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->z(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    goto :goto_0

    .line 205
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->x(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)I

    .line 206
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->y(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    return-void

    .line 201
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->v(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)I

    .line 202
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->w(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    return-void

    .line 197
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->t(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)I

    .line 198
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->u(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_3
    :goto_0
    return-void
.end method

.method public final onShowFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 2

    .line 177
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->a()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "onShowFailed: "

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 178
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->m(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)I

    .line 179
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->n(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 180
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->o(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    const-string v0, "4006"

    const-string v1, ""

    invoke-static {v0, v1, p2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShowFail(Lcom/tkay/core/api/AdError;)V

    .line 181
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->p(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdDismiss()V

    :cond_0
    return-void
.end method

.method public final onShowSuccessed(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 166
    :try_start_0
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    iget-object v2, v2, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->i:Lcom/mbridge/msdk/out/MBSplashHandler;

    invoke-direct {v1, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 170
    :catchall_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->k(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 171
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter$3;->a:Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;->l(Lcom/tkay/network/mintegral/MintegralTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdShow()V

    :cond_0
    return-void
.end method

.method public final onZoomOutPlayFinish(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final onZoomOutPlayStart(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method
