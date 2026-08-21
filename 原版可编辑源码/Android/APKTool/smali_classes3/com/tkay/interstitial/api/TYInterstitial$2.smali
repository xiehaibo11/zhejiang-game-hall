.class Lcom/tkay/interstitial/api/TYInterstitial$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/b/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/interstitial/api/TYInterstitial;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/interstitial/api/TYInterstitial;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/api/TYInterstitial;)V
    .locals 0

    .line 160
    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial$2;->this$0:Lcom/tkay/interstitial/api/TYInterstitial;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAdLoadFail(Lcom/tkay/core/api/AdError;)V
    .locals 2

    .line 175
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/api/TYInterstitial$2$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/api/TYInterstitial$2$2;-><init>(Lcom/tkay/interstitial/api/TYInterstitial$2;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onAdLoaded()V
    .locals 2

    .line 163
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/api/TYInterstitial$2$1;

    invoke-direct {v1, p0}, Lcom/tkay/interstitial/api/TYInterstitial$2$1;-><init>(Lcom/tkay/interstitial/api/TYInterstitial$2;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
