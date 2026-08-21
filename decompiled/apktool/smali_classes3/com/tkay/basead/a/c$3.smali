.class final Lcom/tkay/basead/a/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/i;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/c/i;

.field final synthetic b:Lcom/tkay/basead/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/c;Lcom/tkay/basead/c/i;)V
    .locals 0

    .line 200
    iput-object p1, p0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iput-object p2, p0, Lcom/tkay/basead/a/c$3;->a:Lcom/tkay/basead/c/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 204
    iget-object v0, p0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iget-object v1, p0, Lcom/tkay/basead/a/c$3;->a:Lcom/tkay/basead/c/i;

    invoke-static {v0, v1}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/a/c;Lcom/tkay/basead/c/i;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 210
    iget-object v1, p0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iget-object v1, v1, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->l()I

    move-result v1

    const/4 v2, 0x2

    const/4 v3, 0x1

    if-eq v1, v2, :cond_2

    .line 211
    iget-object v0, p0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iget-object v1, p0, Lcom/tkay/basead/a/c$3;->a:Lcom/tkay/basead/c/i;

    invoke-static {v0, v1}, Lcom/tkay/basead/a/c;->b(Lcom/tkay/basead/a/c;Lcom/tkay/basead/c/i;)Z

    move-result v0

    if-eqz v0, :cond_1

    move v0, v3

    goto :goto_0

    :cond_1
    move v0, v2

    :cond_2
    :goto_0
    if-ne v0, v3, :cond_3

    .line 218
    iget-object v1, p0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iget-object v1, v1, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->l()I

    move-result v1

    if-ne v1, v3, :cond_3

    return-void

    .line 224
    :cond_3
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v1

    .line 225
    iget-object v2, p0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iget-object v2, v2, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->D()I

    move-result v2

    const/4 v4, 0x4

    if-ne v2, v4, :cond_4

    iget-object v2, p0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iget-object v2, v2, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/j;->o()I

    move-result v2

    if-ne v3, v2, :cond_4

    if-eqz v1, :cond_4

    if-eq v0, v3, :cond_4

    .line 226
    iget-object v2, p0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iget-object v2, v2, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iget-object v3, v3, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    iget-object v4, p0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iget-object v4, v4, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    new-instance v5, Lcom/tkay/basead/a/c$3$1;

    invoke-direct {v5, p0, v0}, Lcom/tkay/basead/a/c$3$1;-><init>(Lcom/tkay/basead/a/c$3;I)V

    invoke-interface {v1, v2, v3, v4, v5}, Lcom/tkay/core/api/IExHandler;->openApkConfirmDialog(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/g/a;)V

    return-void

    .line 244
    :cond_4
    iget-object v1, p0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iget-object v2, p0, Lcom/tkay/basead/a/c$3;->a:Lcom/tkay/basead/c/i;

    invoke-static {v1, v0, v2}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/a/c;ILcom/tkay/basead/c/i;)V

    return-void
.end method
