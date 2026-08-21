.class final Lcom/tkay/interstitial/a/a$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/b$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/a/a;->a(Landroid/app/Activity;Lcom/tkay/interstitial/a/d;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/common/f/d;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/interstitial/a/d;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/interstitial/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/a/a;Lcom/tkay/interstitial/a/d;Ljava/lang/String;)V
    .locals 0

    .line 388
    iput-object p1, p0, Lcom/tkay/interstitial/a/a$5;->c:Lcom/tkay/interstitial/a/a;

    iput-object p2, p0, Lcom/tkay/interstitial/a/a$5;->a:Lcom/tkay/interstitial/a/d;

    iput-object p3, p0, Lcom/tkay/interstitial/a/a$5;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 391
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$5;->a:Lcom/tkay/interstitial/a/d;

    if-eqz v0, :cond_0

    .line 392
    invoke-virtual {v0}, Lcom/tkay/interstitial/a/d;->onInterstitialAdShow()V

    :cond_0
    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 431
    iget-object p1, p0, Lcom/tkay/interstitial/a/a$5;->a:Lcom/tkay/interstitial/a/d;

    if-eqz p1, :cond_0

    .line 432
    invoke-virtual {p1}, Lcom/tkay/interstitial/a/d;->onInterstitialAdClicked()V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 398
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$5;->a:Lcom/tkay/interstitial/a/d;

    if-eqz v0, :cond_0

    .line 399
    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/interstitial/a/d;->onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Z)V
    .locals 0

    return-void
.end method

.method public final b()V
    .locals 1

    .line 405
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$5;->a:Lcom/tkay/interstitial/a/d;

    if-eqz v0, :cond_0

    .line 406
    invoke-virtual {v0}, Lcom/tkay/interstitial/a/d;->onInterstitialAdVideoStart()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 1

    .line 412
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$5;->a:Lcom/tkay/interstitial/a/d;

    if-eqz v0, :cond_0

    .line 413
    invoke-virtual {v0}, Lcom/tkay/interstitial/a/d;->onInterstitialAdVideoEnd()V

    :cond_0
    return-void
.end method

.method public final d()V
    .locals 0

    return-void
.end method

.method public final e()V
    .locals 2

    .line 423
    invoke-static {}, Lcom/tkay/basead/e/b;->a()Lcom/tkay/basead/e/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/interstitial/a/a$5;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/e/b;->b(Ljava/lang/String;)V

    .line 424
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$5;->a:Lcom/tkay/interstitial/a/d;

    if-eqz v0, :cond_0

    .line 425
    invoke-virtual {v0}, Lcom/tkay/interstitial/a/d;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method
