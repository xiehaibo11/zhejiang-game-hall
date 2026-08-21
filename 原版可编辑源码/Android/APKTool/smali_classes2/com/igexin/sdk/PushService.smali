.class public Lcom/igexin/sdk/PushService;
.super Landroid/app/Service;


# instance fields
.field private final a:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/sdk/PushService;->a:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 2

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/content/Intent;->getType()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Landroid/content/Intent;->getType()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, ""

    :goto_0
    const-string v1, "GB-"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "PB-"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_1

    :cond_1
    const-string v1, "SERVER_LOG"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {}, Lcom/igexin/b/a/c/a/f;->a()Lcom/igexin/b/a/c/a/f;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/b/a/c/a/f;->b()Landroid/os/IBinder;

    move-result-object p1

    return-object p1

    :cond_2
    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/igexin/push/core/x;->a(Landroid/app/Service;Landroid/content/Intent;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1

    :cond_3
    :goto_1
    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p0, p1, v1, v1}, Lcom/igexin/push/core/x;->a(Landroid/app/Service;Landroid/content/Intent;II)I

    const/4 p1, 0x0

    return-object p1
.end method

.method public onCreate()V
    .locals 1

    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/igexin/push/core/x;->a(Landroid/content/Context;)V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/x;->b()V

    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 1

    invoke-super {p0, p1, p2, p3}, Landroid/app/Service;->onStartCommand(Landroid/content/Intent;II)I

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2, p3}, Lcom/igexin/push/core/x;->a(Landroid/app/Service;Landroid/content/Intent;II)I

    const/4 p1, 0x2

    return p1
.end method

.method public onUnbind(Landroid/content/Intent;)Z
    .locals 0

    invoke-super {p0, p1}, Landroid/app/Service;->onUnbind(Landroid/content/Intent;)Z

    move-result p1

    return p1
.end method
