.class final Lcom/tkay/interstitial/api/TYInterstitial$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/api/TYInterstitial$2;->onAdLoaded()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/interstitial/api/TYInterstitial$2;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/api/TYInterstitial$2;)V
    .locals 0

    .line 163
    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial$2$1;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 166
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$2$1;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$2;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$2;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v0, :cond_0

    .line 167
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$2$1;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$2;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$2;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    invoke-interface {v0}, Lcom/tkay/interstitial/api/TYInterstitialListener;->onInterstitialAdLoaded()V

    :cond_0
    return-void
.end method
