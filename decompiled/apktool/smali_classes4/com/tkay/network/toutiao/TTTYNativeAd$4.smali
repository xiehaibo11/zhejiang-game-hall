.class final Lcom/tkay/network/toutiao/TTTYNativeAd$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYNativeAd;->a(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/app/Activity;

.field final synthetic b:Lcom/tkay/network/toutiao/TTTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYNativeAd;Landroid/app/Activity;)V
    .locals 0

    .line 276
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$4;->b:Lcom/tkay/network/toutiao/TTTYNativeAd;

    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$4;->a:Landroid/app/Activity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 279
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$4;->b:Lcom/tkay/network/toutiao/TTTYNativeAd;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    if-nez p1, :cond_0

    return-void

    .line 283
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$4;->b:Lcom/tkay/network/toutiao/TTTYNativeAd;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYNativeAd;->a:Lcom/bykv/vk/openvk/TTNtObject;

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYNativeAd$4;->a:Landroid/app/Activity;

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/TTNtObject;->getDislikeDialog(Landroid/app/Activity;)Lcom/bykv/vk/openvk/TTVfDislike;

    move-result-object p1

    .line 284
    new-instance v0, Lcom/tkay/network/toutiao/TTTYNativeAd$4$1;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYNativeAd$4$1;-><init>(Lcom/tkay/network/toutiao/TTTYNativeAd$4;)V

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/TTVfDislike;->setDislikeInteractionCallback(Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;)V

    .line 310
    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTVfDislike;->isShow()Z

    move-result v0

    if-nez v0, :cond_1

    .line 311
    invoke-interface {p1}, Lcom/bykv/vk/openvk/TTVfDislike;->showDislikeDialog()V

    :cond_1
    return-void
.end method
