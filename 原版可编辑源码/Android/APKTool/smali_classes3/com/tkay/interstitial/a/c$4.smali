.class final Lcom/tkay/interstitial/a/c$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/a/c;->onInterstitialAdVideoEnd(Lcom/tkay/core/api/TYAdInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic b:Lcom/tkay/interstitial/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/a/c;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/tkay/interstitial/a/c$4;->b:Lcom/tkay/interstitial/a/c;

    iput-object p2, p0, Lcom/tkay/interstitial/a/c$4;->a:Lcom/tkay/core/api/TYAdInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 68
    iget-object v0, p0, Lcom/tkay/interstitial/a/c$4;->b:Lcom/tkay/interstitial/a/c;

    iget-object v0, v0, Lcom/tkay/interstitial/a/c;->a:Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;

    if-eqz v0, :cond_0

    .line 69
    iget-object v0, p0, Lcom/tkay/interstitial/a/c$4;->b:Lcom/tkay/interstitial/a/c;

    iget-object v0, v0, Lcom/tkay/interstitial/a/c;->a:Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;

    iget-object v1, p0, Lcom/tkay/interstitial/a/c$4;->a:Lcom/tkay/core/api/TYAdInfo;

    invoke-virtual {v0, v1}, Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;->onInterstitialAdVideoEnd(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_0
    return-void
.end method
