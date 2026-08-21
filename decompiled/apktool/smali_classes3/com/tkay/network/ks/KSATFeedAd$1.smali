.class final Lcom/tkay/network/ks/KSATFeedAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsFeedAd$AdInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSATFeedAd;->a(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/ks/KSATFeedAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSATFeedAd;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/tkay/network/ks/KSATFeedAd$1;->a:Lcom/tkay/network/ks/KSATFeedAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 1

    .line 63
    iget-object v0, p0, Lcom/tkay/network/ks/KSATFeedAd$1;->a:Lcom/tkay/network/ks/KSATFeedAd;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSATFeedAd;->notifyAdClicked()V

    return-void
.end method

.method public final onAdShow()V
    .locals 4

    .line 68
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/ks/KSATFeedAd$1;->a:Lcom/tkay/network/ks/KSATFeedAd;

    invoke-virtual {v1}, Lcom/tkay/network/ks/KSATFeedAd;->getShowId()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/ks/KSATFeedAd$1;->a:Lcom/tkay/network/ks/KSATFeedAd;

    iget-object v3, v3, Lcom/tkay/network/ks/KSATFeedAd;->b:Lcom/kwad/sdk/api/KsFeedAd;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/ks/KSTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V

    .line 69
    iget-object v0, p0, Lcom/tkay/network/ks/KSATFeedAd$1;->a:Lcom/tkay/network/ks/KSATFeedAd;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSATFeedAd;->notifyAdImpression()V

    return-void
.end method

.method public final onDislikeClicked()V
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/tkay/network/ks/KSATFeedAd$1;->a:Lcom/tkay/network/ks/KSATFeedAd;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSATFeedAd;->notifyAdDislikeClick()V

    return-void
.end method

.method public final onDownloadTipsDialogDismiss()V
    .locals 0

    return-void
.end method

.method public final onDownloadTipsDialogShow()V
    .locals 0

    return-void
.end method
