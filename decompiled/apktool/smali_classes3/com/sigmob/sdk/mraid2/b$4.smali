.class Lcom/sigmob/sdk/mraid2/b$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/network/d$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/b;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid2/b;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/sigmob/sdk/mraid2/b;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/b;Lcom/sigmob/sdk/mraid2/b;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/b$4;->c:Lcom/sigmob/sdk/mraid2/b;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid2/b$4;->a:Lcom/sigmob/sdk/mraid2/b;

    iput-object p3, p0, Lcom/sigmob/sdk/mraid2/b$4;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 2

    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->g()Ljava/lang/String;

    move-result-object p3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "-----------onErrorResponse---------"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p3, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object p3, p0, Lcom/sigmob/sdk/mraid2/b$4;->a:Lcom/sigmob/sdk/mraid2/b;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$4;->b:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-virtual {p3, v0, v1, p1, p2}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/BidResponse;ILjava/lang/String;)V

    const-string p1, "respond"

    const-string p2, "0"

    invoke-static {p1, p2, p4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    return-void
.end method

.method public a(Ljava/util/List;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;",
            "Lcom/sigmob/sdk/base/models/LoadAdRequest;",
            ")V"
        }
    .end annotation

    if-eqz p1, :cond_0

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/mraid2/b;->g()Ljava/lang/String;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "-----------onSuccess---------"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/b$4;->c:Lcom/sigmob/sdk/mraid2/b;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid2/b;->d(Lcom/sigmob/sdk/mraid2/b;)Ljava/util/List;

    move-result-object p2

    invoke-interface {p2, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/b$4;->a:Lcom/sigmob/sdk/mraid2/b;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/b$4;->b:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/b$4;->c:Lcom/sigmob/sdk/mraid2/b;

    invoke-static {v1, p1}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/b;Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    move-result-object v1

    const/4 v2, 0x0

    const/4 v3, 0x0

    invoke-virtual {p2, v0, v1, v2, v3}, Lcom/sigmob/sdk/mraid2/b;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/BidResponse;ILjava/lang/String;)V

    new-instance p2, Lcom/sigmob/sdk/mraid2/b$4$1;

    invoke-direct {p2, p0, p1}, Lcom/sigmob/sdk/mraid2/b$4$1;-><init>(Lcom/sigmob/sdk/mraid2/b$4;Ljava/util/List;)V

    const-string p1, "respond"

    const-string v0, "1"

    invoke-static {p1, v0, v3, p2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_0
    return-void
.end method
