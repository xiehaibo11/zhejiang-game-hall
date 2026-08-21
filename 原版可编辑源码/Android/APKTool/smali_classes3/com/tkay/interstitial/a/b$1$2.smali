.class final Lcom/tkay/interstitial/a/b$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/a/b$1;->onInterstitialAutoLoadFail(Ljava/lang/String;Lcom/tkay/core/api/AdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/core/api/AdError;

.field final synthetic c:Lcom/tkay/interstitial/a/b$1;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/a/b$1;Ljava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 53
    iput-object p1, p0, Lcom/tkay/interstitial/a/b$1$2;->c:Lcom/tkay/interstitial/a/b$1;

    iput-object p2, p0, Lcom/tkay/interstitial/a/b$1$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/interstitial/a/b$1$2;->b:Lcom/tkay/core/api/AdError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 56
    iget-object v0, p0, Lcom/tkay/interstitial/a/b$1$2;->c:Lcom/tkay/interstitial/a/b$1;

    iget-object v0, v0, Lcom/tkay/interstitial/a/b$1;->a:Lcom/tkay/interstitial/a/b;

    invoke-static {v0}, Lcom/tkay/interstitial/a/b;->a(Lcom/tkay/interstitial/a/b;)Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 57
    iget-object v0, p0, Lcom/tkay/interstitial/a/b$1$2;->c:Lcom/tkay/interstitial/a/b$1;

    iget-object v0, v0, Lcom/tkay/interstitial/a/b$1;->a:Lcom/tkay/interstitial/a/b;

    invoke-static {v0}, Lcom/tkay/interstitial/a/b;->a(Lcom/tkay/interstitial/a/b;)Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/interstitial/a/b$1$2;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/interstitial/a/b$1$2;->b:Lcom/tkay/core/api/AdError;

    invoke-interface {v0, v1, v2}, Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;->onInterstitialAutoLoadFail(Ljava/lang/String;Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method
