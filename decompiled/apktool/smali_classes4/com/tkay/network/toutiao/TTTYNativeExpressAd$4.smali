.class final Lcom/tkay/network/toutiao/TTTYNativeExpressAd$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYNativeExpressAd;)V
    .locals 0

    .line 231
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$4;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClicked(Landroid/view/View;I)V
    .locals 0

    .line 239
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$4;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-virtual {p1}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->notifyAdClicked()V

    return-void
.end method

.method public final onDismiss()V
    .locals 0

    return-void
.end method

.method public final onRenderFail(Landroid/view/View;Ljava/lang/String;I)V
    .locals 0

    return-void
.end method

.method public final onRenderSuccess(Landroid/view/View;FF)V
    .locals 0

    return-void
.end method

.method public final onShow(Landroid/view/View;I)V
    .locals 0

    .line 244
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a()Ljava/lang/String;

    move-result-object p1

    const-string p2, "onAdShow()"

    invoke-static {p1, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 245
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$4;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-virtual {p1}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->notifyAdImpression()V

    return-void
.end method
