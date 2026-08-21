.class final Lcom/kwad/components/ad/interstitial/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/e;->loadInterstitialAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic hC:Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/e$1;->hC:Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/e$1;->hC:Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;

    sget-object v1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v1, v1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object v3, v3, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "sdk not init"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method
