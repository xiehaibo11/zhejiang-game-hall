.class Lcom/igexin/push/core/y;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Landroid/content/Intent;

.field final synthetic c:Lcom/igexin/push/core/x;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/x;Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/y;->c:Lcom/igexin/push/core/x;

    iput-object p2, p0, Lcom/igexin/push/core/y;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/igexin/push/core/y;->b:Landroid/content/Intent;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a()V
    .locals 4

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "ServiceManager|startPService by bind"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/igexin/push/core/y;->b:Landroid/content/Intent;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PB-"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    iget-object v0, p0, Lcom/igexin/push/core/y;->b:Landroid/content/Intent;

    iget-object v1, p0, Lcom/igexin/push/core/y;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/igexin/push/core/y;->c:Lcom/igexin/push/core/x;

    invoke-virtual {v2, v1}, Lcom/igexin/push/core/x;->c(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    iget-object v0, p0, Lcom/igexin/push/core/y;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/y;->b:Landroid/content/Intent;

    iget-object v2, p0, Lcom/igexin/push/core/y;->c:Lcom/igexin/push/core/x;

    invoke-static {v2}, Lcom/igexin/push/core/x;->b(Lcom/igexin/push/core/x;)Landroid/content/ServiceConnection;

    move-result-object v2

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/igexin/push/core/y;->c:Lcom/igexin/push/core/x;

    invoke-static {v0}, Lcom/igexin/push/core/x;->a(Lcom/igexin/push/core/x;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/igexin/push/core/y;->c:Lcom/igexin/push/core/x;

    sget-object v1, Lcom/igexin/push/core/d;->f:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/igexin/push/core/x;->a(Lcom/igexin/push/core/x;Ljava/lang/String;)Ljava/lang/String;

    iget-object v0, p0, Lcom/igexin/push/core/y;->c:Lcom/igexin/push/core/x;

    invoke-static {v0}, Lcom/igexin/push/core/x;->a(Lcom/igexin/push/core/x;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/igexin/push/core/y;->c:Lcom/igexin/push/core/x;

    iget-object v1, p0, Lcom/igexin/push/core/y;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/igexin/push/util/c;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/igexin/push/core/x;->a(Lcom/igexin/push/core/x;Ljava/lang/String;)Ljava/lang/String;

    :cond_0
    iget-object v0, p0, Lcom/igexin/push/core/y;->b:Landroid/content/Intent;

    iget-object v1, p0, Lcom/igexin/push/core/y;->c:Lcom/igexin/push/core/x;

    invoke-static {v1}, Lcom/igexin/push/core/x;->a(Lcom/igexin/push/core/x;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "sc"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1a

    if-lt v0, v1, :cond_1

    invoke-static {}, Lcom/igexin/push/util/a;->h()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/igexin/push/core/y;->a()V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/igexin/push/core/y;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/y;->b:Landroid/content/Intent;

    invoke-virtual {v0, v1}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ServiceManager|startPushService err\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    instance-of v0, v0, Ljava/lang/IllegalStateException;

    if-eqz v0, :cond_2

    invoke-direct {p0}, Lcom/igexin/push/core/y;->a()V

    :cond_2
    :goto_0
    return-void
.end method
