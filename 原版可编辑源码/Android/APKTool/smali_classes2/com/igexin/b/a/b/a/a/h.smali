.class Lcom/igexin/b/a/b/a/a/h;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/b/a/b/a/a/a/b;


# instance fields
.field final synthetic a:Lcom/igexin/b/a/b/a/a/f;


# direct methods
.method constructor <init>(Lcom/igexin/b/a/b/a/a/f;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/b/a/b/a/a/h;->a:Lcom/igexin/b/a/b/a/a/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/igexin/b/a/b/e;)V
    .locals 1

    iget-object p1, p0, Lcom/igexin/b/a/b/a/a/h;->a:Lcom/igexin/b/a/b/a/a/f;

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

    const-string v1, "GS-M|r ex = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "end of stream"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/igexin/push/d/b;->a()Lcom/igexin/push/d/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/d/b;->d()V

    :cond_0
    iget-object p1, p0, Lcom/igexin/b/a/b/a/a/h;->a:Lcom/igexin/b/a/b/a/a/f;

    invoke-static {p1}, Lcom/igexin/b/a/b/a/a/f;->b(Lcom/igexin/b/a/b/a/a/f;)V

    return-void
.end method
