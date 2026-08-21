.class final Lcom/tkay/network/ks/KSTYSplashAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYSplashAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/Map;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Lcom/tkay/network/ks/KSTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYSplashAdapter;Ljava/util/Map;Ljava/util/Map;)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->c:Lcom/tkay/network/ks/KSTYSplashAdapter;

    iput-object p2, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->a:Ljava/util/Map;

    iput-object p3, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->b:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 80
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->c:Lcom/tkay/network/ks/KSTYSplashAdapter;

    const-string v1, ""

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/ks/KSTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 5

    .line 68
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->c:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->getMixedFormatAdType()I

    move-result v0

    if-nez v0, :cond_1

    .line 69
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->a:Ljava/util/Map;

    const-string v1, "video_sound"

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 70
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->a:Ljava/util/Map;

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 72
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->c:Lcom/tkay/network/ks/KSTYSplashAdapter;

    new-instance v1, Lcom/tkay/network/ks/KSTYAdapter;

    invoke-direct {v1}, Lcom/tkay/network/ks/KSTYAdapter;-><init>()V

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->c:Lcom/tkay/network/ks/KSTYSplashAdapter;

    iget-object v2, v2, Lcom/tkay/network/ks/KSTYSplashAdapter;->e:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->a:Ljava/util/Map;

    iget-object v4, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->b:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/network/ks/KSTYSplashAdapter;->thirdPartyLoad(Lcom/tkay/core/api/TYBaseAdAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return-void

    .line 74
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$1;->c:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->a(Lcom/tkay/network/ks/KSTYSplashAdapter;)V

    return-void
.end method
