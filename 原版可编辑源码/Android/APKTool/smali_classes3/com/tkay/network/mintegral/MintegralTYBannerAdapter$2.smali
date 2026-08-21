.class final Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;Landroid/content/Context;Ljava/util/Map;)V
    .locals 0

    .line 228
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$2;->c:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$2;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$2;->b:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 236
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$2;->c:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->k(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 237
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$2;->c:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->l(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const-string v1, ""

    invoke-interface {v0, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onSuccess()V
    .locals 3

    .line 231
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$2;->c:Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$2;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter$2;->b:Ljava/util/Map;

    invoke-static {v0, v1, v2}, Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;->a(Lcom/tkay/network/mintegral/MintegralTYBannerAdapter;Landroid/content/Context;Ljava/util/Map;)V

    return-void
.end method
