.class final Lcom/tkay/interstitial/a/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/interstitial/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/interstitial/a/b;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/a/b;)V
    .locals 0

    .line 38
    iput-object p1, p0, Lcom/tkay/interstitial/a/b$1;->a:Lcom/tkay/interstitial/a/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onInterstitialAutoLoadFail(Ljava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 2

    .line 53
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/a/b$1$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/interstitial/a/b$1$2;-><init>(Lcom/tkay/interstitial/a/b$1;Ljava/lang/String;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onInterstitialAutoLoaded(Ljava/lang/String;)V
    .locals 2

    .line 41
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/interstitial/a/b$1$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/interstitial/a/b$1$1;-><init>(Lcom/tkay/interstitial/a/b$1;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
