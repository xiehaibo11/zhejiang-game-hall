.class final Lcom/vivo/push/q$a;
.super Landroid/os/Handler;


# instance fields
.field final synthetic a:Lcom/vivo/push/q;


# direct methods
.method public constructor <init>(Lcom/vivo/push/q;Landroid/os/Looper;)V
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/q$a;->a:Lcom/vivo/push/q;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 1

    iget-object v0, p0, Lcom/vivo/push/q$a;->a:Lcom/vivo/push/q;

    invoke-virtual {v0, p1}, Lcom/vivo/push/q;->b(Landroid/os/Message;)V

    return-void
.end method
