.class Lcom/reyun/tracking/b/a/o;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# instance fields
.field final synthetic a:Lcom/reyun/tracking/b/a/n;


# direct methods
.method constructor <init>(Lcom/reyun/tracking/b/a/n;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/b/a/o;->a:Lcom/reyun/tracking/b/a/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    :try_start_0
    iget-object p1, p0, Lcom/reyun/tracking/b/a/o;->a:Lcom/reyun/tracking/b/a/n;

    iget-object p1, p1, Lcom/reyun/tracking/b/a/n;->c:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {p1, p2}, Ljava/util/concurrent/LinkedBlockingQueue;->put(Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
