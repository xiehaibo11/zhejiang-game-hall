.class final Lcom/tkay/interstitial/api/TYInterstitial$1$8;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/api/TYInterstitial$1;->onInterstitialAdShow(Lcom/tkay/core/api/TYAdInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

.field final synthetic val$entity:Lcom/tkay/core/api/TYAdInfo;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    .line 149
    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$8;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iput-object p2, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$8;->val$entity:Lcom/tkay/core/api/TYAdInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 152
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$8;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v0, :cond_0

    .line 153
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$8;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    iget-object v1, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$8;->val$entity:Lcom/tkay/core/api/TYAdInfo;

    invoke-interface {v0, v1}, Lcom/tkay/interstitial/api/TYInterstitialListener;->onInterstitialAdShow(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_0
    return-void
.end method
