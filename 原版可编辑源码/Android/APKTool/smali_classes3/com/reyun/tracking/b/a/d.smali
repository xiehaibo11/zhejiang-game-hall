.class Lcom/reyun/tracking/b/a/d;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# instance fields
.field final synthetic a:Lcom/reyun/tracking/b/a/c;


# direct methods
.method constructor <init>(Lcom/reyun/tracking/b/a/c;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/b/a/d;->a:Lcom/reyun/tracking/b/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    iget-object p1, p0, Lcom/reyun/tracking/b/a/d;->a:Lcom/reyun/tracking/b/a/c;

    new-instance v0, Lcom/reyun/tracking/b/b/e;

    invoke-direct {v0, p2}, Lcom/reyun/tracking/b/b/e;-><init>(Landroid/os/IBinder;)V

    iput-object v0, p1, Lcom/reyun/tracking/b/a/c;->a:Lcom/reyun/tracking/b/b/c;

    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
