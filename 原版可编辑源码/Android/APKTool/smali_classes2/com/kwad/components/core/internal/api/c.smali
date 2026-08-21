.class public final Lcom/kwad/components/core/internal/api/c;
.super Ljava/lang/Object;


# instance fields
.field private KV:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/internal/api/b;",
            ">;"
        }
    .end annotation
.end field

.field private KW:Z

.field private KX:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/internal/api/c;->KV:Ljava/util/List;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/internal/api/c;->KW:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/internal/api/c;->KX:Z

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/internal/api/b;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/internal/api/c;->KV:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/core/internal/api/b;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/internal/api/c;->KV:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final h(Lcom/kwad/components/core/internal/api/a;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "notifyAdEnter: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", hadNotifiedEnter: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/kwad/components/core/internal/api/c;->KX:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "KsAdListenerHolder"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/kwad/components/core/internal/api/c;->KX:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/internal/api/c;->KV:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/internal/api/b;

    invoke-interface {v1, p1}, Lcom/kwad/components/core/internal/api/b;->c(Lcom/kwad/components/core/internal/api/a;)V

    goto :goto_0

    :cond_1
    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/internal/api/c;->KX:Z

    return-void
.end method

.method public final i(Lcom/kwad/components/core/internal/api/a;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "notifyAdExit: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", hadNotifiedExit: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/kwad/components/core/internal/api/c;->KW:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "KsAdListenerHolder"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/kwad/components/core/internal/api/c;->KW:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/internal/api/c;->KV:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/internal/api/b;

    invoke-interface {v1, p1}, Lcom/kwad/components/core/internal/api/b;->d(Lcom/kwad/components/core/internal/api/a;)V

    goto :goto_0

    :cond_1
    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/internal/api/c;->KW:Z

    return-void
.end method
