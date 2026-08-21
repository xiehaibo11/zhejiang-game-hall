.class final Lcom/mbridge/msdk/optimize/a/a$a;
.super Ljava/lang/Object;
.source "OaidAidlUtil.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/optimize/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/optimize/a/a;


# direct methods
.method private constructor <init>(Lcom/mbridge/msdk/optimize/a/a;)V
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/optimize/a/a;Lcom/mbridge/msdk/optimize/a/a$1;)V
    .locals 0

    .line 57
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/optimize/a/a$a;-><init>(Lcom/mbridge/msdk/optimize/a/a;)V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    .line 64
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/optimize/a/c$a;->a(Landroid/os/IBinder;)Lcom/mbridge/msdk/optimize/a/c;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/optimize/a/a;->a(Lcom/mbridge/msdk/optimize/a/a;Lcom/mbridge/msdk/optimize/a/c;)Lcom/mbridge/msdk/optimize/a/c;

    .line 65
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/optimize/a/a;->a(Lcom/mbridge/msdk/optimize/a/a;)Lcom/mbridge/msdk/optimize/a/c;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 67
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/optimize/a/a;->b(Lcom/mbridge/msdk/optimize/a/a;)Lcom/mbridge/msdk/optimize/a/b;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 68
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/optimize/a/a;->b(Lcom/mbridge/msdk/optimize/a/a;)Lcom/mbridge/msdk/optimize/a/b;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/optimize/a/a;->a(Lcom/mbridge/msdk/optimize/a/a;)Lcom/mbridge/msdk/optimize/a/c;

    move-result-object p2

    invoke-interface {p2}, Lcom/mbridge/msdk/optimize/a/c;->a()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/optimize/a/a;->a(Lcom/mbridge/msdk/optimize/a/a;)Lcom/mbridge/msdk/optimize/a/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/optimize/a/c;->b()Z

    move-result v0

    invoke-interface {p1, p2, v0}, Lcom/mbridge/msdk/optimize/a/b;->a(Ljava/lang/String;Z)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 79
    :cond_0
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/optimize/a/a;->c(Lcom/mbridge/msdk/optimize/a/a;)V

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 75
    :try_start_1
    iget-object p2, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/optimize/a/a;->b(Lcom/mbridge/msdk/optimize/a/a;)Lcom/mbridge/msdk/optimize/a/b;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 76
    iget-object p2, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/optimize/a/a;->b(Lcom/mbridge/msdk/optimize/a/a;)Lcom/mbridge/msdk/optimize/a/b;

    move-result-object p2

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/optimize/a/b;->a(Ljava/lang/String;)V

    goto :goto_0

    :catch_1
    move-exception p1

    .line 71
    iget-object p2, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/optimize/a/a;->b(Lcom/mbridge/msdk/optimize/a/a;)Lcom/mbridge/msdk/optimize/a/b;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 72
    iget-object p2, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/optimize/a/a;->b(Lcom/mbridge/msdk/optimize/a/a;)Lcom/mbridge/msdk/optimize/a/b;

    move-result-object p2

    invoke-virtual {p1}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/optimize/a/b;->a(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 79
    :goto_1
    iget-object p2, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    invoke-static {p2}, Lcom/mbridge/msdk/optimize/a/a;->c(Lcom/mbridge/msdk/optimize/a/a;)V

    .line 80
    throw p1

    :cond_1
    :goto_2
    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    .line 86
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a$a;->a:Lcom/mbridge/msdk/optimize/a/a;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/optimize/a/a;->a(Lcom/mbridge/msdk/optimize/a/a;Lcom/mbridge/msdk/optimize/a/c;)Lcom/mbridge/msdk/optimize/a/c;

    return-void
.end method
