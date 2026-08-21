.class final Lcom/tkay/china/a/a/d$a;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/china/a/a/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/a/a/d;


# direct methods
.method private constructor <init>(Lcom/tkay/china/a/a/d;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/china/a/a/d;B)V
    .locals 0

    .line 75
    invoke-direct {p0, p1}, Lcom/tkay/china/a/a/d$a;-><init>(Lcom/tkay/china/a/a/d;)V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    .line 83
    iget-object p1, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {p2}, Lcom/tkay/china/a/a/c$a;->a(Landroid/os/IBinder;)Lcom/tkay/china/a/a/c;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/tkay/china/a/a/d;->a(Lcom/tkay/china/a/a/d;Lcom/tkay/china/a/a/c;)Lcom/tkay/china/a/a/c;

    .line 84
    iget-object p1, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {p1}, Lcom/tkay/china/a/a/d;->a(Lcom/tkay/china/a/a/d;)Lcom/tkay/china/a/a/c;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 86
    :try_start_0
    iget-object p1, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {p1}, Lcom/tkay/china/a/a/d;->b(Lcom/tkay/china/a/a/d;)Lcom/tkay/china/a/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 87
    iget-object p1, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {p1}, Lcom/tkay/china/a/a/d;->b(Lcom/tkay/china/a/a/d;)Lcom/tkay/china/a/a;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {p2}, Lcom/tkay/china/a/a/d;->a(Lcom/tkay/china/a/a/d;)Lcom/tkay/china/a/a/c;

    move-result-object p2

    invoke-interface {p2}, Lcom/tkay/china/a/a/c;->a()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {v0}, Lcom/tkay/china/a/a/d;->a(Lcom/tkay/china/a/a/d;)Lcom/tkay/china/a/a/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/china/a/a/c;->b()Z

    move-result v0

    invoke-interface {p1, p2, v0}, Lcom/tkay/china/a/a;->a(Ljava/lang/String;Z)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 100
    :cond_0
    :goto_0
    iget-object p1, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {p1}, Lcom/tkay/china/a/a/d;->c(Lcom/tkay/china/a/a/d;)V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 96
    :try_start_1
    iget-object p2, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {p2}, Lcom/tkay/china/a/a/d;->b(Lcom/tkay/china/a/a/d;)Lcom/tkay/china/a/a;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 97
    iget-object p2, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {p2}, Lcom/tkay/china/a/a/d;->b(Lcom/tkay/china/a/a/d;)Lcom/tkay/china/a/a;

    move-result-object p2

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    invoke-interface {p2}, Lcom/tkay/china/a/a;->a()V

    goto :goto_0

    :catch_1
    move-exception p1

    .line 91
    iget-object p2, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {p2}, Lcom/tkay/china/a/a/d;->b(Lcom/tkay/china/a/a/d;)Lcom/tkay/china/a/a;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 92
    iget-object p2, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {p2}, Lcom/tkay/china/a/a/d;->b(Lcom/tkay/china/a/a/d;)Lcom/tkay/china/a/a;

    move-result-object p2

    invoke-virtual {p1}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    invoke-interface {p2}, Lcom/tkay/china/a/a;->a()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 100
    :goto_1
    iget-object p2, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    invoke-static {p2}, Lcom/tkay/china/a/a/d;->c(Lcom/tkay/china/a/a/d;)V

    .line 101
    throw p1

    :cond_1
    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    .line 108
    iget-object p1, p0, Lcom/tkay/china/a/a/d$a;->a:Lcom/tkay/china/a/a/d;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/tkay/china/a/a/d;->a(Lcom/tkay/china/a/a/d;Lcom/tkay/china/a/a/c;)Lcom/tkay/china/a/a/c;

    return-void
.end method
