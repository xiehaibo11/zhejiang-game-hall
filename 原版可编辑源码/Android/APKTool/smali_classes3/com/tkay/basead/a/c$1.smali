.class final Lcom/tkay/basead/a/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/a/c$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/c;)V
    .locals 0

    .line 96
    iput-object p1, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-boolean v0, v0, Lcom/tkay/basead/a/c;->o:Z

    if-eqz v0, :cond_0

    return-void

    .line 102
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->s:Lcom/tkay/basead/a/c$b;

    if-eqz v0, :cond_1

    .line 103
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->s:Lcom/tkay/basead/a/c$b;

    invoke-interface {v0}, Lcom/tkay/basead/a/c$b;->a()V

    :cond_1
    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 129
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-boolean v0, v0, Lcom/tkay/basead/a/c;->o:Z

    if-eqz v0, :cond_0

    return-void

    .line 132
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->s:Lcom/tkay/basead/a/c$b;

    if-eqz v0, :cond_1

    .line 133
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->s:Lcom/tkay/basead/a/c$b;

    invoke-interface {v0, p1}, Lcom/tkay/basead/a/c$b;->a(Z)V

    :cond_1
    return-void
.end method

.method public final b()V
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-boolean v0, v0, Lcom/tkay/basead/a/c;->o:Z

    if-eqz v0, :cond_0

    return-void

    .line 112
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->s:Lcom/tkay/basead/a/c$b;

    if-eqz v0, :cond_1

    .line 113
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->s:Lcom/tkay/basead/a/c$b;

    invoke-interface {v0}, Lcom/tkay/basead/a/c$b;->b()V

    :cond_1
    return-void
.end method

.method public final c()V
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-boolean v0, v0, Lcom/tkay/basead/a/c;->o:Z

    if-eqz v0, :cond_0

    return-void

    .line 122
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->s:Lcom/tkay/basead/a/c$b;

    if-eqz v0, :cond_1

    .line 123
    iget-object v0, p0, Lcom/tkay/basead/a/c$1;->a:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->s:Lcom/tkay/basead/a/c$b;

    invoke-interface {v0}, Lcom/tkay/basead/a/c$b;->c()V

    :cond_1
    return-void
.end method
