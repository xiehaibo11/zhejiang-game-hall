.class final Lcom/tkay/basead/d/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/out/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/d/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/d/a;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/a;)V
    .locals 0

    .line 25
    iput-object p1, p0, Lcom/tkay/basead/d/a$1;->a:Lcom/tkay/basead/d/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 0

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 45
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/d/a$1$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/d/a$1$1;-><init>(Lcom/tkay/basead/d/a$1;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final b()V
    .locals 1

    .line 38
    iget-object v0, p0, Lcom/tkay/basead/d/a$1;->a:Lcom/tkay/basead/d/a;

    iget-object v0, v0, Lcom/tkay/basead/d/a;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 39
    iget-object v0, p0, Lcom/tkay/basead/d/a$1;->a:Lcom/tkay/basead/d/a;

    iget-object v0, v0, Lcom/tkay/basead/d/a;->h:Lcom/tkay/basead/e/a;

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

    .line 77
    iget-object v0, p0, Lcom/tkay/basead/d/a$1;->a:Lcom/tkay/basead/d/a;

    iget-object v0, v0, Lcom/tkay/basead/d/a;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 78
    iget-object v0, p0, Lcom/tkay/basead/d/a$1;->a:Lcom/tkay/basead/d/a;

    iget-object v0, v0, Lcom/tkay/basead/d/a;->h:Lcom/tkay/basead/e/a;

    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdClosed()V

    .line 81
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/a$1;->a:Lcom/tkay/basead/d/a;

    invoke-virtual {v0}, Lcom/tkay/basead/d/a;->d()V

    return-void
.end method
