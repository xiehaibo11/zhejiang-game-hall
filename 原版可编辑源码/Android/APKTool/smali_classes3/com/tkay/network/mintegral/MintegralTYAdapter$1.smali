.class final Lcom/tkay/network/mintegral/MintegralTYAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/mbridge/msdk/out/NativeAdvancedAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYAdapter;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/tkay/network/mintegral/MintegralTYAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYAdapter;Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;Landroid/content/Context;)V
    .locals 0

    .line 116
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;->c:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;->a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;->b:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final closeFullScreen(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final onClick(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final onClose(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final onLeaveApp(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final onLoadFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 0

    .line 119
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;->c:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 120
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;->c:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->b(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    invoke-interface {p1, p2, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    .line 122
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;->a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeAdvancedAdListener;)V

    return-void
.end method

.method public final onLoadSuccessed(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 127
    new-instance p1, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;->a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    const/4 v2, 0x0

    invoke-direct {p1, v0, v1, v2}, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;-><init>(Landroid/content/Context;Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;Z)V

    .line 128
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;->c:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->c(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 129
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 130
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 132
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    new-array p1, p1, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 133
    invoke-interface {v0, p1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 134
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;->c:Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-static {v0}, Lcom/tkay/network/mintegral/MintegralTYAdapter;->d(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_0
    return-void
.end method

.method public final onLogImpression(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final showFullScreen(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method
