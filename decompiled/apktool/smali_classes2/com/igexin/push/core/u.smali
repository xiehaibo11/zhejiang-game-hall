.class Lcom/igexin/push/core/u;
.super Landroid/os/Handler;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/r;

.field final synthetic b:Lcom/igexin/push/core/t;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/t;Landroid/os/Looper;Lcom/igexin/push/core/r;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/u;->b:Lcom/igexin/push/core/t;

    iput-object p3, p0, Lcom/igexin/push/core/u;->a:Lcom/igexin/push/core/r;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    :try_start_0
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x2

    const/4 v2, 0x1

    if-eq v0, v2, :cond_3

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/igexin/push/core/u;->b:Lcom/igexin/push/core/t;

    iget-object v0, v0, Lcom/igexin/push/core/t;->a:Lcom/igexin/push/core/r;

    iget p1, p1, Landroid/os/Message;->arg1:I

    if-nez p1, :cond_2

    goto :goto_0

    :cond_2
    const/4 v2, 0x0

    :goto_0
    invoke-static {v0, v2}, Lcom/igexin/push/core/r;->a(Lcom/igexin/push/core/r;Z)V

    goto :goto_1

    :cond_3
    iget-object v0, p0, Lcom/igexin/push/core/u;->b:Lcom/igexin/push/core/t;

    iget-object v0, v0, Lcom/igexin/push/core/t;->a:Lcom/igexin/push/core/r;

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Landroid/os/IBinder;

    invoke-static {v0, p1}, Lcom/igexin/push/core/r;->a(Lcom/igexin/push/core/r;Landroid/os/IBinder;)Z

    move-result p1

    if-eqz p1, :cond_4

    invoke-virtual {p0, v1}, Lcom/igexin/push/core/u;->removeMessages(I)V

    invoke-virtual {p0, v2}, Lcom/igexin/push/core/u;->removeMessages(I)V

    iget-object p1, p0, Lcom/igexin/push/core/u;->b:Lcom/igexin/push/core/t;

    iget-object p1, p1, Lcom/igexin/push/core/t;->a:Lcom/igexin/push/core/r;

    invoke-static {p1}, Lcom/igexin/push/core/r;->b(Lcom/igexin/push/core/r;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_4
    :goto_1
    return-void
.end method
