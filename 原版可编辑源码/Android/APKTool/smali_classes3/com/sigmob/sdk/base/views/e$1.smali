.class Lcom/sigmob/sdk/base/views/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/m$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/views/e;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/views/e;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/e;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/e$1;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Z)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/e$1;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-static {v0}, Lcom/sigmob/sdk/base/views/e;->a(Lcom/sigmob/sdk/base/views/e;)Lcom/sigmob/sdk/base/common/m$a;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/base/common/m$a;->a(Z)V

    :cond_0
    return-void
.end method

.method public a(ZJ)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/e$1;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-static {v0}, Lcom/sigmob/sdk/base/views/e;->a(Lcom/sigmob/sdk/base/views/e;)Lcom/sigmob/sdk/base/common/m$a;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2, p3}, Lcom/sigmob/sdk/base/common/m$a;->b(ZJ)V

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/e$1;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/e;->d()V

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/views/e$1;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/e;->e()V

    :goto_0
    return-void
.end method

.method public b(Z)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/e$1;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-static {v0}, Lcom/sigmob/sdk/base/views/e;->a(Lcom/sigmob/sdk/base/views/e;)Lcom/sigmob/sdk/base/common/m$a;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/base/common/m$a;->b(Z)V

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/e$1;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/e;->g()V

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/views/e$1;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/e;->e()V

    :goto_0
    return-void
.end method

.method public b(ZJ)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/e$1;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-static {v0}, Lcom/sigmob/sdk/base/views/e;->a(Lcom/sigmob/sdk/base/views/e;)Lcom/sigmob/sdk/base/common/m$a;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2, p3}, Lcom/sigmob/sdk/base/common/m$a;->b(ZJ)V

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/e$1;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/e;->f()V

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/views/e$1;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/e;->e()V

    :goto_0
    return-void
.end method
