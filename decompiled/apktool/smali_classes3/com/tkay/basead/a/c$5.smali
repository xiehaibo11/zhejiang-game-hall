.class final Lcom/tkay/basead/a/c$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/c;->b(Lcom/tkay/basead/c/i;Z)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/tkay/basead/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/c;Z)V
    .locals 0

    .line 337
    iput-object p1, p0, Lcom/tkay/basead/a/c$5;->b:Lcom/tkay/basead/a/c;

    iput-boolean p2, p0, Lcom/tkay/basead/a/c$5;->a:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 340
    iget-object v0, p0, Lcom/tkay/basead/a/c$5;->b:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz v0, :cond_0

    .line 341
    iget-boolean v0, p0, Lcom/tkay/basead/a/c$5;->a:Z

    if-nez v0, :cond_0

    .line 342
    iget-object v0, p0, Lcom/tkay/basead/a/c$5;->b:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    invoke-interface {v0}, Lcom/tkay/basead/a/c$b;->b()V

    .line 346
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/c$5;->b:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz v0, :cond_1

    .line 347
    iget-object v0, p0, Lcom/tkay/basead/a/c$5;->b:Lcom/tkay/basead/a/c;

    iget-object v0, v0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    invoke-interface {v0}, Lcom/tkay/basead/a/c$b;->c()V

    :cond_1
    return-void
.end method
