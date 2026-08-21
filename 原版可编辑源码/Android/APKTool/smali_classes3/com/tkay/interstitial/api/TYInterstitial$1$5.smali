.class final Lcom/tkay/interstitial/api/TYInterstitial$1$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/api/TYInterstitial$1;->onInterstitialAdVideoError(Lcom/tkay/core/api/AdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

.field final synthetic val$errorCode:Lcom/tkay/core/api/AdError;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 111
    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$5;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iput-object p2, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$5;->val$errorCode:Lcom/tkay/core/api/AdError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 114
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$5;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v0, :cond_0

    .line 115
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$5;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    iget-object v1, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$5;->val$errorCode:Lcom/tkay/core/api/AdError;

    invoke-interface {v0, v1}, Lcom/tkay/interstitial/api/TYInterstitialListener;->onInterstitialAdVideoError(Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method
