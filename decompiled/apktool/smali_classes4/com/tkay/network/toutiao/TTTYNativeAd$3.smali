.class final Lcom/tkay/network/toutiao/TTTYNativeAd$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTNtObject$AdInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYNativeAd;->prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYNativeAd;)V
    .locals 0

    .line 248
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$3;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClicked(Landroid/view/View;Lcom/bykv/vk/openvk/TTNtObject;)V
    .locals 0

    .line 251
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$3;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->notifyAdClicked()V

    return-void
.end method

.method public final onCreativeClick(Landroid/view/View;Lcom/bykv/vk/openvk/TTNtObject;)V
    .locals 0

    .line 256
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$3;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->notifyAdClicked()V

    return-void
.end method

.method public final onShow(Lcom/bykv/vk/openvk/TTNtObject;)V
    .locals 0

    .line 261
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$3;->a:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->notifyAdImpression()V

    return-void
.end method
