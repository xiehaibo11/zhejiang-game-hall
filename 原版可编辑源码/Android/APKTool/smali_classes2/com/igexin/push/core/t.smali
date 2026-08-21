.class final Lcom/igexin/push/core/t;
.super Ljava/lang/Object;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/r;

.field private final b:Landroid/os/Handler;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/r;)V
    .locals 2

    iput-object p1, p0, Lcom/igexin/push/core/t;->a:Lcom/igexin/push/core/r;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "GTIS-HANDLER"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    new-instance v1, Lcom/igexin/push/core/u;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {v1, p0, v0, p1}, Lcom/igexin/push/core/u;-><init>(Lcom/igexin/push/core/t;Landroid/os/Looper;Lcom/igexin/push/core/r;)V

    iput-object v1, p0, Lcom/igexin/push/core/t;->b:Landroid/os/Handler;

    return-void
.end method


# virtual methods
.method a()Landroid/os/Handler;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/t;->b:Landroid/os/Handler;

    return-object v0
.end method
