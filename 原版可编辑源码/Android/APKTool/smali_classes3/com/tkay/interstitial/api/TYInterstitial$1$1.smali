.class final Lcom/tkay/interstitial/api/TYInterstitial$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/api/TYInterstitial$1;->onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

.field final synthetic val$adInfo:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic val$isSuccess:Z


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Lcom/tkay/core/api/TYAdInfo;Z)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$1;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iput-object p2, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$1;->val$adInfo:Lcom/tkay/core/api/TYAdInfo;

    iput-boolean p3, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$1;->val$isSuccess:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 54
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$1;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$1;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    instance-of v0, v0, Lcom/tkay/interstitial/api/TYInterstitialExListener;

    if-eqz v0, :cond_0

    .line 55
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$1;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    check-cast v0, Lcom/tkay/interstitial/api/TYInterstitialExListener;

    iget-object v1, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$1;->val$adInfo:Lcom/tkay/core/api/TYAdInfo;

    iget-boolean v2, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$1;->val$isSuccess:Z

    invoke-interface {v0, v1, v2}, Lcom/tkay/interstitial/api/TYInterstitialExListener;->onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V

    :cond_0
    return-void
.end method
