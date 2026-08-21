.class Lcom/sigmob/sdk/base/network/f$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/network/f$1;->onErrorResponse(Lcom/czhj/volley/VolleyError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/network/f$1;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/network/f$1;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/network/f$1$2;->a:Lcom/sigmob/sdk/base/network/f$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f$1$2;->a:Lcom/sigmob/sdk/base/network/f$1;

    iget-boolean v0, v0, Lcom/sigmob/sdk/base/network/f$1;->e:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f$1$2;->a:Lcom/sigmob/sdk/base/network/f$1;

    iget-object v0, v0, Lcom/sigmob/sdk/base/network/f$1;->b:Lcom/sigmob/sdk/base/common/g;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/f$1$2;->a:Lcom/sigmob/sdk/base/network/f$1;

    iget-object v1, v1, Lcom/sigmob/sdk/base/network/f$1;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/common/g;->b(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f$1$2;->a:Lcom/sigmob/sdk/base/network/f$1;

    iget-object v0, v0, Lcom/sigmob/sdk/base/network/f$1;->b:Lcom/sigmob/sdk/base/common/g;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/common/g;->a(Lcom/sigmob/sdk/base/db/a$a;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f$1$2;->a:Lcom/sigmob/sdk/base/network/f$1;

    iget-object v0, v0, Lcom/sigmob/sdk/base/network/f$1;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/g;->d()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f$1$2;->a:Lcom/sigmob/sdk/base/network/f$1;

    iget-object v0, v0, Lcom/sigmob/sdk/base/network/f$1;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/g;->c()I

    move-result v0

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/i;->Q()I

    move-result v1

    if-lt v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f$1$2;->a:Lcom/sigmob/sdk/base/network/f$1;

    iget-object v0, v0, Lcom/sigmob/sdk/base/network/f$1;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/g;->g()V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f$1$2;->a:Lcom/sigmob/sdk/base/network/f$1;

    iget-object v0, v0, Lcom/sigmob/sdk/base/network/f$1;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/g;->e()V

    :goto_0
    return-void
.end method
