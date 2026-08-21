.class final Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYSplashAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Ljava/util/Map;

.field final synthetic d:Lcom/tkay/network/toutiao/TTTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 0

    .line 82
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->d:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->b:Ljava/util/Map;

    iput-object p4, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->c:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 98
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->d:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    const-string v1, ""

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 5

    .line 86
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->d:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->getMixedFormatAdType()I

    move-result v0

    if-nez v0, :cond_0

    .line 87
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->d:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    new-instance v1, Lcom/tkay/network/toutiao/TTTYAdapter;

    invoke-direct {v1}, Lcom/tkay/network/toutiao/TTTYAdapter;-><init>()V

    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->b:Ljava/util/Map;

    iget-object v4, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->c:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->thirdPartyLoad(Lcom/tkay/core/api/TYBaseAdAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return-void

    .line 89
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->d:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->b:Ljava/util/Map;

    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->c:Ljava/util/Map;

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a(Lcom/tkay/network/toutiao/TTTYSplashAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 92
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$1;->d:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, ""

    invoke-virtual {v1, v2, v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
