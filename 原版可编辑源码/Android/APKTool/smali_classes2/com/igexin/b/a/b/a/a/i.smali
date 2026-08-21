.class Lcom/igexin/b/a/b/a/a/i;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/b/a/b/a/a/a/c;


# instance fields
.field final synthetic a:Lcom/igexin/b/a/b/a/a/f;


# direct methods
.method constructor <init>(Lcom/igexin/b/a/b/a/a/f;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/b/a/b/a/a/i;->a:Lcom/igexin/b/a/b/a/a/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/igexin/b/a/b/a/a/m;)V
    .locals 1

    invoke-static {}, Lcom/igexin/push/util/j;->b()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/i;->a:Lcom/igexin/b/a/b/a/a/f;

    invoke-static {v0, p1}, Lcom/igexin/b/a/b/a/a/f;->a(Lcom/igexin/b/a/b/a/a/f;Lcom/igexin/b/a/b/a/a/m;)V

    :cond_0
    return-void
.end method

.method public a(Lcom/igexin/b/a/b/e;)V
    .locals 1

    iget-object p1, p0, Lcom/igexin/b/a/b/a/a/i;->a:Lcom/igexin/b/a/b/a/a/f;

    invoke-static {p1}, Lcom/igexin/b/a/b/a/a/f;->a(Lcom/igexin/b/a/b/a/a/f;)Landroid/os/Handler;

    move-result-object p1

    sget-object v0, Lcom/igexin/b/a/b/a/a/q;->f:Lcom/igexin/b/a/b/a/a/q;

    invoke-virtual {v0}, Lcom/igexin/b/a/b/a/a/q;->ordinal()I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    return-void
.end method

.method public a(Ljava/lang/Exception;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "GS-M|w ex = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object p1, p0, Lcom/igexin/b/a/b/a/a/i;->a:Lcom/igexin/b/a/b/a/a/f;

    invoke-static {p1}, Lcom/igexin/b/a/b/a/a/f;->b(Lcom/igexin/b/a/b/a/a/f;)V

    return-void
.end method
