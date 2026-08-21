.class final Lcom/reyun/tracking/b/c;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# instance fields
.field final synthetic a:Lcom/reyun/tracking/b/a;


# direct methods
.method private constructor <init>(Lcom/reyun/tracking/b/a;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/reyun/tracking/b/a;Lcom/reyun/tracking/b/b;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/reyun/tracking/b/c;-><init>(Lcom/reyun/tracking/b/a;)V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    iget-object p1, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {p2}, Lcom/reyun/tracking/b/f;->a(Landroid/os/IBinder;)Lcom/reyun/tracking/b/e;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/reyun/tracking/b/a;->a(Lcom/reyun/tracking/b/a;Lcom/reyun/tracking/b/e;)Lcom/reyun/tracking/b/e;

    iget-object p1, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {p1}, Lcom/reyun/tracking/b/a;->a(Lcom/reyun/tracking/b/a;)Lcom/reyun/tracking/b/e;

    move-result-object p1

    if-eqz p1, :cond_1

    :try_start_0
    iget-object p1, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {p1}, Lcom/reyun/tracking/b/a;->b(Lcom/reyun/tracking/b/a;)Lcom/reyun/tracking/b/d;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {p1}, Lcom/reyun/tracking/b/a;->b(Lcom/reyun/tracking/b/a;)Lcom/reyun/tracking/b/d;

    move-result-object p1

    iget-object p2, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {p2}, Lcom/reyun/tracking/b/a;->a(Lcom/reyun/tracking/b/a;)Lcom/reyun/tracking/b/e;

    move-result-object p2

    invoke-interface {p2}, Lcom/reyun/tracking/b/e;->a()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {v0}, Lcom/reyun/tracking/b/a;->a(Lcom/reyun/tracking/b/a;)Lcom/reyun/tracking/b/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/reyun/tracking/b/e;->b()Z

    move-result v0

    invoke-interface {p1, p2, v0}, Lcom/reyun/tracking/b/d;->a(Ljava/lang/String;Z)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    :goto_0
    iget-object p1, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {p1}, Lcom/reyun/tracking/b/a;->c(Lcom/reyun/tracking/b/a;)V

    goto :goto_3

    :catchall_0
    move-exception p1

    goto :goto_2

    :catch_0
    move-exception p1

    :try_start_1
    iget-object p2, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {p2}, Lcom/reyun/tracking/b/a;->b(Lcom/reyun/tracking/b/a;)Lcom/reyun/tracking/b/d;

    move-result-object p2

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {p2}, Lcom/reyun/tracking/b/a;->b(Lcom/reyun/tracking/b/a;)Lcom/reyun/tracking/b/d;

    move-result-object p2

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    :goto_1
    invoke-interface {p2, p1}, Lcom/reyun/tracking/b/d;->a(Ljava/lang/String;)V

    goto :goto_0

    :catch_1
    move-exception p1

    iget-object p2, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {p2}, Lcom/reyun/tracking/b/a;->b(Lcom/reyun/tracking/b/a;)Lcom/reyun/tracking/b/d;

    move-result-object p2

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {p2}, Lcom/reyun/tracking/b/a;->b(Lcom/reyun/tracking/b/a;)Lcom/reyun/tracking/b/d;

    move-result-object p2

    invoke-virtual {p1}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :goto_2
    iget-object p2, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    invoke-static {p2}, Lcom/reyun/tracking/b/a;->c(Lcom/reyun/tracking/b/a;)V

    throw p1

    :cond_1
    :goto_3
    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    iget-object p1, p0, Lcom/reyun/tracking/b/c;->a:Lcom/reyun/tracking/b/a;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/reyun/tracking/b/a;->a(Lcom/reyun/tracking/b/a;Lcom/reyun/tracking/b/e;)Lcom/reyun/tracking/b/e;

    return-void
.end method
