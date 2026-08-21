.class final Lcom/tkay/expressad/foundation/g/f/d/b$a$1;
.super Lcom/tkay/expressad/foundation/g/f/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/g/f/d/b$a;->c()Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/expressad/foundation/g/f/f<",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field a:Z

.field final synthetic e:Lcom/tkay/expressad/foundation/g/f/d/b$a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/g/f/d/b$a;)V
    .locals 0

    .line 95
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->e:Lcom/tkay/expressad/foundation/g/f/d/b$a;

    invoke-direct {p0}, Lcom/tkay/expressad/foundation/g/f/f;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 105
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->a:Z

    if-nez v0, :cond_0

    .line 106
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->e:Lcom/tkay/expressad/foundation/g/f/d/b$a;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/f/d/b$a;->c(Lcom/tkay/expressad/foundation/g/f/d/b$a;)I

    .line 107
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->e:Lcom/tkay/expressad/foundation/g/f/d/b$a;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/f/d/b$a;->b(Lcom/tkay/expressad/foundation/g/f/d/b$a;)Lcom/tkay/expressad/foundation/g/f/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/foundation/g/f/e;->a()V

    .line 108
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->e:Lcom/tkay/expressad/foundation/g/f/d/b$a;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/d/b$a;->f:Lcom/tkay/expressad/foundation/g/f/d/b;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->e:Lcom/tkay/expressad/foundation/g/f/d/b$a;

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/g/f/d/b;->a(Lcom/tkay/expressad/foundation/g/f/d/b;Lcom/tkay/expressad/foundation/g/f/d/b$a;)V

    :cond_0
    return-void
.end method

.method public final a(JJ)V
    .locals 1

    .line 134
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->e:Lcom/tkay/expressad/foundation/g/f/d/b$a;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/f/d/b$a;->b(Lcom/tkay/expressad/foundation/g/f/d/b$a;)Lcom/tkay/expressad/foundation/g/f/e;

    move-result-object v0

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/tkay/expressad/foundation/g/f/e;->a(JJ)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/g/f/a/a;)V
    .locals 1

    .line 121
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->a:Z

    if-nez v0, :cond_0

    .line 122
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->e:Lcom/tkay/expressad/foundation/g/f/d/b$a;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/f/d/b$a;->b(Lcom/tkay/expressad/foundation/g/f/d/b$a;)Lcom/tkay/expressad/foundation/g/f/e;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/e;->a(Lcom/tkay/expressad/foundation/g/f/a/a;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/g/f/k;)V
    .locals 1

    .line 114
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->a:Z

    if-nez v0, :cond_0

    .line 115
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->e:Lcom/tkay/expressad/foundation/g/f/d/b$a;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/f/d/b$a;->b(Lcom/tkay/expressad/foundation/g/f/d/b$a;)Lcom/tkay/expressad/foundation/g/f/e;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/e;->a(Lcom/tkay/expressad/foundation/g/f/k;)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->e:Lcom/tkay/expressad/foundation/g/f/d/b$a;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/f/d/b$a;->b(Lcom/tkay/expressad/foundation/g/f/d/b$a;)Lcom/tkay/expressad/foundation/g/f/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/foundation/g/f/e;->b()V

    return-void
.end method

.method public final c()V
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->e:Lcom/tkay/expressad/foundation/g/f/d/b$a;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/f/d/b$a;->b(Lcom/tkay/expressad/foundation/g/f/d/b$a;)Lcom/tkay/expressad/foundation/g/f/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/foundation/g/f/e;->c()V

    const/4 v0, 0x1

    .line 129
    iput-boolean v0, p0, Lcom/tkay/expressad/foundation/g/f/d/b$a$1;->a:Z

    return-void
.end method
