.class public final Lcom/mbridge/msdk/optimize/a/a/b;
.super Ljava/lang/Object;
.source "LenovoDeviceHelper.java"


# instance fields
.field a:Lcom/mbridge/msdk/optimize/a/b/b;

.field b:Landroid/content/ServiceConnection;

.field private c:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    new-instance v0, Lcom/mbridge/msdk/optimize/a/a/b$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/optimize/a/a/b$1;-><init>(Lcom/mbridge/msdk/optimize/a/a/b;)V

    iput-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/b;->b:Landroid/content/ServiceConnection;

    .line 21
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/b;->c:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/optimize/a/b;)V
    .locals 4

    .line 27
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/b;->c:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    .line 28
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "com.zui.deviceidservice"

    const-string v2, "com.zui.deviceidservice.DeviceidService"

    .line 29
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 30
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/b;->c:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/a/a/b;->b:Landroid/content/ServiceConnection;

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v2, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 32
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/b;->a:Lcom/mbridge/msdk/optimize/a/b/b;

    if-eqz v0, :cond_0

    .line 33
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/b;->a:Lcom/mbridge/msdk/optimize/a/b/b;

    invoke-interface {v0}, Lcom/mbridge/msdk/optimize/a/b/b;->a()Ljava/lang/String;

    move-result-object v0

    if-eqz p1, :cond_0

    const/4 v1, 0x0

    .line 35
    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/optimize/a/b;->a(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 40
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method
