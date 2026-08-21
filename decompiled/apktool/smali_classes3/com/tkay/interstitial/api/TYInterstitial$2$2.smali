.class final Lcom/tkay/interstitial/api/TYInterstitial$2$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/api/TYInterstitial$2;->onAdLoadFail(Lcom/tkay/core/api/AdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/interstitial/api/TYInterstitial$2;

.field final synthetic val$adError:Lcom/tkay/core/api/AdError;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/api/TYInterstitial$2;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 175
    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial$2$2;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$2;

    iput-object p2, p0, Lcom/tkay/interstitial/api/TYInterstitial$2$2;->val$adError:Lcom/tkay/core/api/AdError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 178
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$2$2;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$2;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$2;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v0, :cond_0

    .line 179
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$2$2;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$2;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$2;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    iget-object v1, p0, Lcom/tkay/interstitial/api/TYInterstitial$2$2;->val$adError:Lcom/tkay/core/api/AdError;

    invoke-interface {v0, v1}, Lcom/tkay/interstitial/api/TYInterstitialListener;->onInterstitialAdLoadFail(Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method
