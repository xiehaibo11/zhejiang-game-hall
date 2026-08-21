.class final Lcom/tkay/interstitial/api/TYInterstitial$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/api/TYInterstitial$1;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

.field final synthetic val$adInfo:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic val$context:Landroid/content/Context;

.field final synthetic val$networkConfirmInfo:Lcom/tkay/core/api/TYNetworkConfirmInfo;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/api/TYInterstitial$1;Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 0

    .line 63
    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$2;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iput-object p2, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$2;->val$context:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$2;->val$adInfo:Lcom/tkay/core/api/TYAdInfo;

    iput-object p4, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$2;->val$networkConfirmInfo:Lcom/tkay/core/api/TYNetworkConfirmInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 66
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$2;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$2;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    instance-of v0, v0, Lcom/tkay/interstitial/api/TYInterstitialExListener;

    if-eqz v0, :cond_1

    .line 67
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$2;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v0, v0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    check-cast v0, Lcom/tkay/interstitial/api/TYInterstitialExListener;

    iget-object v1, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$2;->val$context:Landroid/content/Context;

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$2;->this$1:Lcom/tkay/interstitial/api/TYInterstitial$1;

    iget-object v1, v1, Lcom/tkay/interstitial/api/TYInterstitial$1;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v1, v1, Lcom/tkay/interstitial/api/TYInterstitial;->mContext:Landroid/content/Context;

    :cond_0
    iget-object v2, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$2;->val$adInfo:Lcom/tkay/core/api/TYAdInfo;

    iget-object v3, p0, Lcom/tkay/interstitial/api/TYInterstitial$1$2;->val$networkConfirmInfo:Lcom/tkay/core/api/TYNetworkConfirmInfo;

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/interstitial/api/TYInterstitialExListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    :cond_1
    return-void
.end method
