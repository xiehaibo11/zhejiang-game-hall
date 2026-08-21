.class final Lcom/tkay/network/ks/KSATDrawAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSATDrawAd;-><init>(Landroid/content/Context;Lcom/kwad/sdk/api/KsDrawAd;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/kwad/sdk/api/KsDrawAd;

.field final synthetic b:Lcom/tkay/network/ks/KSATDrawAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSATDrawAd;Lcom/kwad/sdk/api/KsDrawAd;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/tkay/network/ks/KSATDrawAd$1;->b:Lcom/tkay/network/ks/KSATDrawAd;

    iput-object p2, p0, Lcom/tkay/network/ks/KSATDrawAd$1;->a:Lcom/kwad/sdk/api/KsDrawAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDrawAd$1;->b:Lcom/tkay/network/ks/KSATDrawAd;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSATDrawAd;->notifyAdClicked()V

    return-void
.end method

.method public final onAdShow()V
    .locals 4

    .line 40
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/ks/KSATDrawAd$1;->b:Lcom/tkay/network/ks/KSATDrawAd;

    invoke-virtual {v1}, Lcom/tkay/network/ks/KSATDrawAd;->getShowId()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/ks/KSATDrawAd$1;->a:Lcom/kwad/sdk/api/KsDrawAd;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/ks/KSTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V

    .line 41
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDrawAd$1;->b:Lcom/tkay/network/ks/KSATDrawAd;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSATDrawAd;->notifyAdImpression()V

    return-void
.end method

.method public final onVideoPlayEnd()V
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDrawAd$1;->b:Lcom/tkay/network/ks/KSATDrawAd;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSATDrawAd;->notifyAdVideoEnd()V

    return-void
.end method

.method public final onVideoPlayError()V
    .locals 3

    .line 66
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDrawAd$1;->b:Lcom/tkay/network/ks/KSATDrawAd;

    const-string v1, ""

    const-string v2, "KS Native Video Play Error"

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/ks/KSATDrawAd;->notifyAdVideoVideoPlayFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onVideoPlayPause()V
    .locals 0

    return-void
.end method

.method public final onVideoPlayResume()V
    .locals 0

    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDrawAd$1;->b:Lcom/tkay/network/ks/KSATDrawAd;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSATDrawAd;->notifyAdVideoStart()V

    return-void
.end method
