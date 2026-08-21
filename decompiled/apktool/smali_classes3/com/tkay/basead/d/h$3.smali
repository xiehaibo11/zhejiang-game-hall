.class final Lcom/tkay/basead/d/h$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/out/i;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/h;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/z;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/a/g;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/d/h;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/h;)V
    .locals 0

    .line 194
    iput-object p1, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 0

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 5

    .line 214
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 215
    iget-object v1, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object v1, v1, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    if-nez v1, :cond_0

    .line 216
    iget-object v1, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    new-instance v2, Lcom/tkay/basead/a/c;

    iget-object v3, v1, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object v4, v4, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    invoke-direct {v2, v0, v3, v4}, Lcom/tkay/basead/a/c;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V

    iput-object v2, v1, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    .line 218
    iget-object v0, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    new-instance v1, Lcom/tkay/basead/d/h$3$1;

    invoke-direct {v1, p0}, Lcom/tkay/basead/d/h$3$1;-><init>(Lcom/tkay/basead/d/h$3;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/a/c$b;)V

    .line 244
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    invoke-virtual {v0}, Lcom/tkay/basead/a/c;->b()Lcom/tkay/core/common/f/h;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/tkay/basead/d/a/b;->a(Lcom/tkay/core/common/f/h;Lcom/tkay/expressad/foundation/d/c;)V

    .line 245
    iget-object p1, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object p1, p1, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object p1, p1, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/d/c;->c()Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    move-result-object p1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    .line 247
    :goto_0
    new-instance v0, Lcom/tkay/basead/c/i;

    iget-object v1, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object v1, v1, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v2, ""

    invoke-direct {v0, v1, v2}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_2

    .line 249
    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result v1

    iput v1, v0, Lcom/tkay/basead/c/i;->f:I

    .line 250
    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result p1

    iput p1, v0, Lcom/tkay/basead/c/i;->e:I

    .line 253
    :cond_2
    new-instance p1, Lcom/tkay/basead/c/a;

    invoke-direct {p1}, Lcom/tkay/basead/c/a;-><init>()V

    iput-object p1, v0, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    .line 256
    iget-object p1, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object p1, p1, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    invoke-virtual {p1, v0}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/i;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final b()V
    .locals 1

    .line 207
    iget-object v0, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->b:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 208
    iget-object v0, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->b:Lcom/tkay/basead/e/a;

    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdShow()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 0

    return-void
.end method

.method public final d()V
    .locals 0

    return-void
.end method

.method public final e()V
    .locals 0

    return-void
.end method

.method public final f()V
    .locals 1

    .line 276
    iget-object v0, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->b:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 277
    iget-object v0, p0, Lcom/tkay/basead/d/h$3;->a:Lcom/tkay/basead/d/h;

    iget-object v0, v0, Lcom/tkay/basead/d/h;->b:Lcom/tkay/basead/e/a;

    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdClosed()V

    :cond_0
    return-void
.end method
