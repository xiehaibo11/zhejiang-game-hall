.class final Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;Landroid/content/Context;Ljava/util/Map;)V
    .locals 0

    .line 87
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;->c:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    iput-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;->b:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 91
    :try_start_0
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;->b:Ljava/util/Map;

    new-instance v3, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1$1;

    invoke-direct {v3, p0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1$1;-><init>(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;)V

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 107
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;->c:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, ""

    invoke-static {v1, v2, v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
