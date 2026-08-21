.class final Lcom/tkay/network/ks/KSTYNativeAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsNativeAd$AdInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYNativeAd;->a(Landroid/view/ViewGroup;Ljava/util/List;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/ks/KSTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYNativeAd;)V
    .locals 0

    .line 145
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd$1;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final handleDownloadDialog(Landroid/content/DialogInterface$OnClickListener;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public final onAdClicked(Landroid/view/View;Lcom/kwad/sdk/api/KsNativeAd;)V
    .locals 0

    .line 148
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd$1;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/ks/KSTYNativeAd;->notifyAdClicked()V

    return-void
.end method

.method public final onAdShow(Lcom/kwad/sdk/api/KsNativeAd;)V
    .locals 3

    .line 153
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYNativeAd$1;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-virtual {v1}, Lcom/tkay/network/ks/KSTYNativeAd;->getShowId()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    invoke-direct {v2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/ks/KSTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V

    .line 154
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd$1;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/ks/KSTYNativeAd;->notifyAdImpression()V

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
