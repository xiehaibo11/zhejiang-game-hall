.class final Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->onSuccess()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYInitManager$3;)V
    .locals 0

    .line 421
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 424
    new-instance v0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget-object v1, v1, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget-object v2, v2, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->b:Ljava/util/Map;

    iget-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget-object v3, v3, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->f:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-virtual {v3}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;-><init>(Landroid/content/Context;Ljava/util/Map;Ljava/lang/String;)V

    .line 425
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget v1, v1, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->c:I

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    .line 426
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget-object v1, v1, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->b:Ljava/util/Map;

    invoke-virtual {v0, v1}, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->fillBannerData(Ljava/util/Map;)V

    .line 429
    :cond_0
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget v1, v1, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->c:I

    if-nez v1, :cond_1

    .line 430
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget-object v1, v1, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->b:Ljava/util/Map;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget-object v2, v2, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->d:Ljava/util/Map;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->fillNativeExpressData(Ljava/util/Map;Ljava/util/Map;)V

    .line 433
    :cond_1
    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->isValid()Z

    move-result v1

    if-nez v1, :cond_3

    .line 434
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget-object v0, v0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->e:Lcom/tkay/core/api/TYBidRequestInfoListener;

    if-eqz v0, :cond_2

    .line 435
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget-object v0, v0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->e:Lcom/tkay/core/api/TYBidRequestInfoListener;

    const-string v1, "Network BidToken or Custom bid info is Empty."

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onFailed(Ljava/lang/String;)V

    :cond_2
    return-void

    .line 440
    :cond_3
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget-object v1, v1, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->e:Lcom/tkay/core/api/TYBidRequestInfoListener;

    if-eqz v1, :cond_4

    .line 441
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager$3$1;->a:Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    iget-object v1, v1, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;->e:Lcom/tkay/core/api/TYBidRequestInfoListener;

    invoke-interface {v1, v0}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onSuccess(Lcom/tkay/core/api/TYBidRequestInfo;)V

    :cond_4
    return-void
.end method
