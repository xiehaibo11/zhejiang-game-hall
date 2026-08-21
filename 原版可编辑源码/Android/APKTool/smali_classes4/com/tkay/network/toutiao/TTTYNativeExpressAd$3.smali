.class final Lcom/tkay/network/toutiao/TTTYNativeExpressAd$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->a(Landroid/app/Activity;)V
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

    .line 199
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$3;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onCancel()V
    .locals 0

    return-void
.end method

.method public final onRefuse()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method

.method public final onSelected(ILjava/lang/String;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 212
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$3;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-virtual {p1}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->notifyAdDislikeClick()V

    return-void
.end method

.method public final onSelected(ILjava/lang/String;Z)V
    .locals 0

    .line 207
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressAd$3;->a:Lcom/tkay/network/toutiao/TTTYNativeExpressAd;

    invoke-virtual {p1}, Lcom/tkay/network/toutiao/TTTYNativeExpressAd;->notifyAdDislikeClick()V

    return-void
.end method

.method public final onShow()V
    .locals 0

    return-void
.end method
