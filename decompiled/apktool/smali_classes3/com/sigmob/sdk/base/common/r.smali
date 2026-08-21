.class public Lcom/sigmob/sdk/base/common/r;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/ab;


# instance fields
.field private final a:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/sigmob/sdk/base/common/q;",
            ">;"
        }
    .end annotation
.end field

.field private b:Lcom/sigmob/sdk/base/models/BaseAdUnit;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/r;->a:Ljava/util/Set;

    new-instance v1, Lcom/sigmob/sdk/base/common/aa;

    invoke-direct {v1}, Lcom/sigmob/sdk/base/common/aa;-><init>()V

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void
.end method


# virtual methods
.method public a()V
    .locals 3

    const-string v0, "endDisplaySession() called"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/r;->a:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/common/q;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/r;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {v1, v2}, Lcom/sigmob/sdk/base/common/q;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    goto :goto_0

    :cond_0
    return-void
.end method

.method public a(II)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onVideoPrepared() called  mDuration = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/r;->a:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/common/q;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/r;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {v1, v2, p1, p2}, Lcom/sigmob/sdk/base/common/q;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;II)Z

    goto :goto_0

    :cond_0
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/common/a;I)V
    .locals 3

    const-string v0, "startDeferredDisplaySession() called"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/r;->a:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/common/q;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/r;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {v1, v2, p1, p2}, Lcom/sigmob/sdk/base/common/q;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;I)Z

    goto :goto_0

    :cond_0
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/r;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/r;->a:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/common/q;

    invoke-interface {v1, p1}, Lcom/sigmob/sdk/base/common/q;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    invoke-virtual {p1, p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setSessionManager(Lcom/sigmob/sdk/base/common/ab;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public a(ZI)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/r;->a:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/common/q;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/r;->b:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {v1, v2, p1, p2}, Lcom/sigmob/sdk/base/common/q;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;ZI)Z

    goto :goto_0

    :cond_0
    return-void
.end method
