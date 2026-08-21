.class Lcom/igexin/push/core/s;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IBinder$DeathRecipient;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/r;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/r;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/s;->a:Lcom/igexin/push/core/r;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public binderDied()V
    .locals 3

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "MsgServerSender|remote iservice binderDied and reconnect !!!"

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v1, p0, Lcom/igexin/push/core/s;->a:Lcom/igexin/push/core/r;

    invoke-static {v1}, Lcom/igexin/push/core/r;->a(Lcom/igexin/push/core/r;)Lcom/igexin/push/core/t;

    move-result-object v1

    invoke-virtual {v1}, Lcom/igexin/push/core/t;->a()Landroid/os/Handler;

    move-result-object v1

    const/4 v2, 0x2

    invoke-static {v1, v2, v0, v0}, Landroid/os/Message;->obtain(Landroid/os/Handler;III)Landroid/os/Message;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method
