.class final Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;Landroid/content/Context;Ljava/util/Map;)V
    .locals 0

    .line 177
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;->c:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;->b:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 188
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;->c:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->q(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 189
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;->c:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->r(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const-string v1, ""

    invoke-interface {v0, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onSuccess()V
    .locals 2

    .line 181
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;->c:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;->a:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;Landroid/content/Context;)V

    .line 183
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;->c:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;->b:Ljava/util/Map;

    invoke-virtual {v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->startLoad(Ljava/util/Map;)V

    return-void
.end method
