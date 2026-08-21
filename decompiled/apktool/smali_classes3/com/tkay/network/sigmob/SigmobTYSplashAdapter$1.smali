.class final Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Ljava/util/Map;

.field final synthetic d:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;->d:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    iput-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;->b:Ljava/util/Map;

    iput-object p4, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;->c:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 95
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;->d:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    const-string v1, ""

    invoke-static {v0, v1, p1}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 5

    .line 83
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;->d:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->getMixedFormatAdType()I

    move-result v0

    if-nez v0, :cond_0

    .line 84
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;->d:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYAdapter;

    invoke-direct {v1}, Lcom/tkay/network/sigmob/SigmobTYAdapter;-><init>()V

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;->b:Ljava/util/Map;

    iget-object v4, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;->c:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->thirdPartyLoad(Lcom/tkay/core/api/TYBaseAdAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return-void

    .line 86
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;->d:Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)V

    return-void
.end method
