.class Lcom/xiaomi/push/bb$b;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# instance fields
.field final synthetic a:Lcom/xiaomi/push/bb;


# direct methods
.method private constructor <init>(Lcom/xiaomi/push/bb;)V
    .locals 0

    iput-object p1, p0, Lcom/xiaomi/push/bb$b;->a:Lcom/xiaomi/push/bb;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/xiaomi/push/bb;Lcom/xiaomi/push/bc;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/xiaomi/push/bb$b;-><init>(Lcom/xiaomi/push/bb;)V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    iget-object p1, p0, Lcom/xiaomi/push/bb$b;->a:Lcom/xiaomi/push/bb;

    invoke-static {p1}, Lcom/xiaomi/push/bb;->a(Lcom/xiaomi/push/bb;)Lcom/xiaomi/push/bb$a;

    move-result-object p1

    if-eqz p1, :cond_0

    return-void

    :cond_0
    new-instance p1, Ljava/lang/Thread;

    new-instance v0, Lcom/xiaomi/push/bd;

    invoke-direct {v0, p0, p2}, Lcom/xiaomi/push/bd;-><init>(Lcom/xiaomi/push/bb$b;Landroid/os/IBinder;)V

    invoke-direct {p1, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {p1}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
