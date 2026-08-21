.class final Lcom/tkay/network/sigmob/SigmobTYInitManager$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->onSuccess()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/sigmob/SigmobTYInitManager$1;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYInitManager$1;)V
    .locals 0

    .line 450
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYInitManager$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 453
    new-instance v0, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYInitManager$1;

    iget-object v1, v1, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->a:Ljava/util/Map;

    invoke-direct {v0, v1}, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;-><init>(Ljava/util/Map;)V

    .line 455
    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;->isValid()Z

    move-result v1

    if-nez v1, :cond_1

    .line 456
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYInitManager$1;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    if-eqz v0, :cond_0

    .line 457
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYInitManager$1;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    const-string v1, "Network BidToken or Custom bid info is Empty."

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onFailed(Ljava/lang/String;)V

    :cond_0
    return-void

    .line 462
    :cond_1
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYInitManager$1;

    iget-object v1, v1, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    if-eqz v1, :cond_2

    .line 463
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYInitManager$1;

    iget-object v1, v1, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    invoke-interface {v1, v0}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onSuccess(Lcom/tkay/core/api/TYBidRequestInfo;)V

    :cond_2
    return-void
.end method
