.class public Lcom/sigmob/sdk/base/common/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/f$b;


# instance fields
.field private a:Ljava/lang/String;

.field private final b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end field

.field private final c:Lcom/sigmob/sdk/base/common/f$b;

.field private d:Lcom/sigmob/sdk/base/models/LoadAdRequest;

.field private e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/util/List;Lcom/sigmob/sdk/base/common/f$b;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;",
            "Lcom/sigmob/sdk/base/common/f$b;",
            "Lcom/sigmob/sdk/base/models/LoadAdRequest;",
            ")V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "AdListCacheManger"

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/c;->a:Ljava/lang/String;

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/c;->b:Ljava/util/List;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/c;->c:Lcom/sigmob/sdk/base/common/f$b;

    iput-object p3, p0, Lcom/sigmob/sdk/base/common/c;->d:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/c;->e:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/c;->c:Lcom/sigmob/sdk/base/common/f$b;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/base/common/f$b;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
    .locals 9

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/c;->b:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    const-string v2, "--------loadEnd--------"

    if-eq p1, v0, :cond_2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->z:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/base/common/a;->A:Lcom/sigmob/sdk/base/common/a;

    :goto_0
    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "1"

    goto :goto_1

    :cond_1
    const-string v0, "0"

    :goto_1
    move-object v4, v0

    const/4 v6, 0x0

    iget-object v7, p0, Lcom/sigmob/sdk/base/common/c;->d:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    const/4 v8, 0x0

    const-string v3, "loadend"

    move-object v5, p1

    invoke-static/range {v3 .. v8}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    goto :goto_2

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/c;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/sigmob/sdk/base/common/c;->e:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_2
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/c;->e:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    move-result p1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/c;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/c;->e:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/c;->e:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-gtz p1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/c;->c:Lcom/sigmob/sdk/base/common/f$b;

    if-eqz p1, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/c;->b:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {p1, v0, p2}, Lcom/sigmob/sdk/base/common/f$b;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public a(Z)Z
    .locals 5

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/c;->b:Ljava/util/List;

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eqz p1, :cond_2

    move p1, v0

    :goto_0
    iget-object v2, p0, Lcom/sigmob/sdk/base/common/c;->b:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge p1, v2, :cond_1

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/c;->b:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result v3

    const/4 v4, 0x2

    if-eq v3, v4, :cond_0

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/c;->e:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-virtual {v2, v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setCatchVideo(Z)V

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v3

    invoke-virtual {v3, v2, p0}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V

    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/c;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "--------cache--------"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/c;->e:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/c;->e:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_3

    move v0, v1

    :cond_3
    return v0
.end method
