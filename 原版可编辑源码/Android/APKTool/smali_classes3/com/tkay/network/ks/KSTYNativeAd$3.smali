.class final Lcom/tkay/network/ks/KSTYNativeAd$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;


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

    .line 218
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYNativeAd$3;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onVideoPlayComplete()V
    .locals 1

    .line 231
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$3;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->notifyAdVideoEnd()V

    return-void
.end method

.method public final onVideoPlayError(II)V
    .locals 2

    .line 236
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "KuaiShou Video play error:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "tkay"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 237
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$3;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/tkay/network/ks/KSTYNativeAd;->notifyAdVideoVideoPlayFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onVideoPlayPause()V
    .locals 0

    return-void
.end method

.method public final onVideoPlayReady()V
    .locals 0

    return-void
.end method

.method public final onVideoPlayResume()V
    .locals 0

    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 1

    .line 226
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYNativeAd$3;->a:Lcom/tkay/network/ks/KSTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYNativeAd;->notifyAdVideoStart()V

    return-void
.end method
