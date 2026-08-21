.class final Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)V
    .locals 0

    .line 228
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 236
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    const-string v1, ""

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 1

    .line 231
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->A(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)V

    return-void
.end method
