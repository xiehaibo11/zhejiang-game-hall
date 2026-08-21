.class Lcom/reyun/tracking/b/a/j;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# instance fields
.field final synthetic a:Lcom/reyun/tracking/b/a/i;


# direct methods
.method constructor <init>(Lcom/reyun/tracking/b/a/i;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/b/a/j;->a:Lcom/reyun/tracking/b/a/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    iget-object p1, p0, Lcom/reyun/tracking/b/a/j;->a:Lcom/reyun/tracking/b/a/i;

    invoke-static {p2}, Lcom/reyun/tracking/b/b/j;->a(Landroid/os/IBinder;)Lcom/reyun/tracking/b/b/i;

    move-result-object p2

    iput-object p2, p1, Lcom/reyun/tracking/b/a/i;->b:Lcom/reyun/tracking/b/b/i;

    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    iget-object p1, p0, Lcom/reyun/tracking/b/a/j;->a:Lcom/reyun/tracking/b/a/i;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/reyun/tracking/b/a/i;->b:Lcom/reyun/tracking/b/b/i;

    return-void
.end method
