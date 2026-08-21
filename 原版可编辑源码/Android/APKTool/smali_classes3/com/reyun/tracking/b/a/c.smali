.class public Lcom/reyun/tracking/b/a/c;
.super Ljava/lang/Object;


# instance fields
.field a:Lcom/reyun/tracking/b/b/c;

.field b:Landroid/content/ServiceConnection;

.field private c:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/reyun/tracking/b/a/d;

    invoke-direct {v0, p0}, Lcom/reyun/tracking/b/a/d;-><init>(Lcom/reyun/tracking/b/a/c;)V

    iput-object v0, p0, Lcom/reyun/tracking/b/a/c;->b:Landroid/content/ServiceConnection;

    iput-object p1, p0, Lcom/reyun/tracking/b/a/c;->c:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public a(Lcom/reyun/tracking/b/d;)V
    .locals 4

    :try_start_0
    iget-object v0, p0, Lcom/reyun/tracking/b/a/c;->c:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "com.zui.deviceidservice"

    const-string v2, "com.zui.deviceidservice.DeviceidService"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    iget-object v1, p0, Lcom/reyun/tracking/b/a/c;->c:Landroid/content/Context;

    iget-object v2, p0, Lcom/reyun/tracking/b/a/c;->b:Landroid/content/ServiceConnection;

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v2, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/reyun/tracking/b/a/c;->a:Lcom/reyun/tracking/b/b/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/reyun/tracking/b/a/c;->a:Lcom/reyun/tracking/b/b/c;

    invoke-interface {v0}, Lcom/reyun/tracking/b/b/c;->a()Ljava/lang/String;

    move-result-object v0

    if-eqz p1, :cond_0

    const/4 v1, 0x0

    invoke-interface {p1, v0, v1}, Lcom/reyun/tracking/b/d;->a(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method
