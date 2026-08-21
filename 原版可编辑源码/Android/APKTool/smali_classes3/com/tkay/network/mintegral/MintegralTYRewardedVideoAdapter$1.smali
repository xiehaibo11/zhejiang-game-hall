.class final Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;)V
    .locals 0

    .line 83
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;->c:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;->b:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 94
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;->c:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 95
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;->c:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const-string v1, ""

    invoke-interface {v0, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onSuccess()V
    .locals 2

    .line 87
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;->c:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;->a:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;Landroid/content/Context;)V

    .line 89
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;->c:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$1;->b:Ljava/util/Map;

    invoke-virtual {v0, v1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->startLoad(Ljava/util/Map;)V

    return-void
.end method
