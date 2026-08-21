.class final Lcom/kwad/components/core/c/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/c/d;->c(Lcom/kwad/components/core/p/a/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Im:Lcom/kwad/components/core/c/d;

.field final synthetic bv:Lcom/kwad/components/core/p/a/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/c/d;Lcom/kwad/components/core/p/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/c/d$2;->Im:Lcom/kwad/components/core/c/d;

    iput-object p2, p0, Lcom/kwad/components/core/c/d$2;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/c/d$2;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/p/a/a;->getPosId()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/kwad/components/core/c/e;->p(J)Lcom/kwad/components/core/c/e;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/c/d$2$1;

    invoke-direct {v1, p0, v0}, Lcom/kwad/components/core/c/d$2$1;-><init>(Lcom/kwad/components/core/c/d$2;Lcom/kwad/components/core/c/e;)V

    invoke-static {v1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    iget-object v1, p0, Lcom/kwad/components/core/c/d$2;->Im:Lcom/kwad/components/core/c/d;

    invoke-static {v1}, Lcom/kwad/components/core/c/d;->a(Lcom/kwad/components/core/c/d;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/c/e;->isDefault()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/c/e;->isEnable()Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/core/c/d$2;->Im:Lcom/kwad/components/core/c/d;

    invoke-static {v1}, Lcom/kwad/components/core/c/d;->c(Lcom/kwad/components/core/c/d;)Landroid/util/SparseArray;

    move-result-object v1

    invoke-virtual {v0}, Lcom/kwad/components/core/c/e;->mq()I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/c/c;

    goto :goto_1

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/c/d$2;->Im:Lcom/kwad/components/core/c/d;

    invoke-static {v0}, Lcom/kwad/components/core/c/d;->b(Lcom/kwad/components/core/c/d;)Lcom/kwad/components/core/c/c;

    move-result-object v0

    :goto_1
    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/c/d$2;->Im:Lcom/kwad/components/core/c/d;

    invoke-static {v0}, Lcom/kwad/components/core/c/d;->c(Lcom/kwad/components/core/c/d;)Landroid/util/SparseArray;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/c/c;

    :cond_2
    iget-object v1, p0, Lcom/kwad/components/core/c/d$2;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-interface {v0, v1}, Lcom/kwad/components/core/c/c;->c(Lcom/kwad/components/core/p/a/a;)V

    return-void
.end method
