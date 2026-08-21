.class final Lcom/tkay/network/ks/KSTYInitManager$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYInitManager$2;->onSuccess()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/ks/KSTYInitManager$2;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYInitManager$2;)V
    .locals 0

    .line 187
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYInitManager$2$1;->a:Lcom/tkay/network/ks/KSTYInitManager$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 190
    new-instance v0, Lcom/tkay/network/ks/KSBidRequestInfo;

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInitManager$2$1;->a:Lcom/tkay/network/ks/KSTYInitManager$2;

    iget-object v1, v1, Lcom/tkay/network/ks/KSTYInitManager$2;->a:Ljava/util/Map;

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager$2$1;->a:Lcom/tkay/network/ks/KSTYInitManager$2;

    iget-object v2, v2, Lcom/tkay/network/ks/KSTYInitManager$2;->b:Ljava/util/Map;

    invoke-direct {v0, v1, v2}, Lcom/tkay/network/ks/KSBidRequestInfo;-><init>(Ljava/util/Map;Ljava/util/Map;)V

    .line 192
    invoke-virtual {v0}, Lcom/tkay/network/ks/KSBidRequestInfo;->isValid()Z

    move-result v1

    if-nez v1, :cond_1

    .line 193
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInitManager$2$1;->a:Lcom/tkay/network/ks/KSTYInitManager$2;

    iget-object v0, v0, Lcom/tkay/network/ks/KSTYInitManager$2;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    if-eqz v0, :cond_0

    .line 194
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInitManager$2$1;->a:Lcom/tkay/network/ks/KSTYInitManager$2;

    iget-object v0, v0, Lcom/tkay/network/ks/KSTYInitManager$2;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    const-string v1, "Network BidToken or Custom bid info is Empty."

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onFailed(Ljava/lang/String;)V

    :cond_0
    return-void

    .line 199
    :cond_1
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInitManager$2$1;->a:Lcom/tkay/network/ks/KSTYInitManager$2;

    iget-object v1, v1, Lcom/tkay/network/ks/KSTYInitManager$2;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    if-eqz v1, :cond_2

    .line 200
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInitManager$2$1;->a:Lcom/tkay/network/ks/KSTYInitManager$2;

    iget-object v1, v1, Lcom/tkay/network/ks/KSTYInitManager$2;->c:Lcom/tkay/core/api/TYBidRequestInfoListener;

    invoke-interface {v1, v0}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onSuccess(Lcom/tkay/core/api/TYBidRequestInfo;)V

    :cond_2
    return-void
.end method
