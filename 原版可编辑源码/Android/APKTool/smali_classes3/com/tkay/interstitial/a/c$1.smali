.class final Lcom/tkay/interstitial/a/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/a/c;->onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic b:Z

.field final synthetic c:Lcom/tkay/interstitial/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/a/c;Lcom/tkay/core/api/TYAdInfo;Z)V
    .locals 0

    .line 28
    iput-object p1, p0, Lcom/tkay/interstitial/a/c$1;->c:Lcom/tkay/interstitial/a/c;

    iput-object p2, p0, Lcom/tkay/interstitial/a/c$1;->a:Lcom/tkay/core/api/TYAdInfo;

    iput-boolean p3, p0, Lcom/tkay/interstitial/a/c$1;->b:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 31
    iget-object v0, p0, Lcom/tkay/interstitial/a/c$1;->c:Lcom/tkay/interstitial/a/c;

    iget-object v0, v0, Lcom/tkay/interstitial/a/c;->a:Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;

    if-eqz v0, :cond_0

    .line 32
    iget-object v0, p0, Lcom/tkay/interstitial/a/c$1;->c:Lcom/tkay/interstitial/a/c;

    iget-object v0, v0, Lcom/tkay/interstitial/a/c;->a:Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;

    iget-object v1, p0, Lcom/tkay/interstitial/a/c$1;->a:Lcom/tkay/core/api/TYAdInfo;

    iget-boolean v2, p0, Lcom/tkay/interstitial/a/c$1;->b:Z

    invoke-virtual {v0, v1, v2}, Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;->onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V

    :cond_0
    return-void
.end method
