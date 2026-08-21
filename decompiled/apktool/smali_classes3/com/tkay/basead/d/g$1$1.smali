.class final Lcom/tkay/basead/d/g$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/out/q;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/g$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/d/g$1;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/g$1;)V
    .locals 0

    .line 57
    iput-object p1, p0, Lcom/tkay/basead/d/g$1$1;->a:Lcom/tkay/basead/d/g$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/tkay/basead/d/g$1$1;->a:Lcom/tkay/basead/d/g$1;

    iget-object v0, v0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 61
    iget-object v0, p0, Lcom/tkay/basead/d/g$1$1;->a:Lcom/tkay/basead/d/g$1;

    iget-object v0, v0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->h:Lcom/tkay/basead/e/a;

    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdShow()V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 74
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/d/g$1$1$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/d/g$1$1$1;-><init>(Lcom/tkay/basead/d/g$1$1;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 67
    iget-object v0, p0, Lcom/tkay/basead/d/g$1$1;->a:Lcom/tkay/basead/d/g$1;

    iget-object v0, v0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 68
    iget-object v0, p0, Lcom/tkay/basead/d/g$1$1;->a:Lcom/tkay/basead/d/g$1;

    iget-object v0, v0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->h:Lcom/tkay/basead/e/a;

    const-string v1, "40002"

    invoke-static {v1, p1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onShowFailed(Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/tkay/basead/d/g$1$1;->a:Lcom/tkay/basead/d/g$1;

    iget-object v0, v0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 85
    iget-object v0, p0, Lcom/tkay/basead/d/g$1$1;->a:Lcom/tkay/basead/d/g$1;

    iget-object v0, v0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v0, v0, Lcom/tkay/basead/d/g;->h:Lcom/tkay/basead/e/a;

    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdClosed()V

    .line 87
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/g$1$1;->a:Lcom/tkay/basead/d/g$1;

    iget-object v0, v0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    invoke-virtual {v0}, Lcom/tkay/basead/d/g;->d()V

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
