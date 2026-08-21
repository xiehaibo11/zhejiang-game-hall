.class final Lcom/tkay/network/ks/KSTYInterstitialAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYInterstitialAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)V
    .locals 0

    .line 63
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$1;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 71
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$1;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    const-string v1, ""

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$1;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->a(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)V

    return-void
.end method
