.class public Lcom/sigmob/sdk/nativead/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/ab;


# instance fields
.field private final a:Ljava/util/HashSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashSet<",
            "Lcom/sigmob/sdk/nativead/d;",
            ">;"
        }
    .end annotation
.end field

.field private b:I

.field private c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private d:Z

.field private e:I

.field private f:I


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/nativead/e;->b:I

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/sigmob/sdk/nativead/e;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput v0, p0, Lcom/sigmob/sdk/nativead/e;->f:I

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/e;->a:Ljava/util/HashSet;

    new-instance v1, Lcom/sigmob/sdk/nativead/d;

    invoke-direct {v1}, Lcom/sigmob/sdk/nativead/d;-><init>()V

    invoke-virtual {v0, v1}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    return-void
.end method


# virtual methods
.method public a()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/e;->a:Ljava/util/HashSet;

    invoke-virtual {v0}, Ljava/util/HashSet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/nativead/d;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/e;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/nativead/d;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/e;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setSessionManager(Lcom/sigmob/sdk/base/common/ab;)V

    iput-object v2, p0, Lcom/sigmob/sdk/nativead/e;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    goto :goto_0

    :cond_0
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/common/a;I)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/e;->a:Ljava/util/HashSet;

    invoke-virtual {v0}, Ljava/util/HashSet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/nativead/d;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/e;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1, v2, p1, p2}, Lcom/sigmob/sdk/nativead/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;I)Z

    goto :goto_0

    :cond_0
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/e;->a:Ljava/util/HashSet;

    invoke-virtual {v0}, Ljava/util/HashSet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/nativead/d;

    invoke-virtual {v1, p1}, Lcom/sigmob/sdk/nativead/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/e;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setSessionManager(Lcom/sigmob/sdk/base/common/ab;)V

    goto :goto_0

    :cond_0
    return-void
.end method
