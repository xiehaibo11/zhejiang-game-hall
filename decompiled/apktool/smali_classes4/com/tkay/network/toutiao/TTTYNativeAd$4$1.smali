.class final Lcom/tkay/network/toutiao/TTTYNativeAd$4$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYNativeAd$4;->onClick(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYNativeAd$4;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYNativeAd$4;)V
    .locals 0

    .line 284
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$4$1;->a:Lcom/tkay/network/toutiao/TTTYNativeAd$4;

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

    .line 297
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$4$1;->a:Lcom/tkay/network/toutiao/TTTYNativeAd$4;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYNativeAd$4;->b:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->notifyAdDislikeClick()V

    return-void
.end method

.method public final onSelected(ILjava/lang/String;Z)V
    .locals 0

    .line 292
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$4$1;->a:Lcom/tkay/network/toutiao/TTTYNativeAd$4;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYNativeAd$4;->b:Lcom/tkay/network/toutiao/TTTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/toutiao/TTTYNativeAd;->notifyAdDislikeClick()V

    return-void
.end method

.method public final onShow()V
    .locals 0

    return-void
.end method
