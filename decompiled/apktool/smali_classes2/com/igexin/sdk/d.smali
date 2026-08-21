.class Lcom/igexin/sdk/d;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/igexin/sdk/PushManager;


# direct methods
.method constructor <init>(Lcom/igexin/sdk/PushManager;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/sdk/d;->b:Lcom/igexin/sdk/PushManager;

    iput-object p2, p0, Lcom/igexin/sdk/d;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    :try_start_0
    iget-object v0, p0, Lcom/igexin/sdk/d;->b:Lcom/igexin/sdk/PushManager;

    iget-object v1, p0, Lcom/igexin/sdk/d;->a:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/igexin/sdk/PushManager;->a(Lcom/igexin/sdk/PushManager;Landroid/content/Context;)Landroid/app/Application;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    monitor-enter p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iget-object v1, p0, Lcom/igexin/sdk/d;->b:Lcom/igexin/sdk/PushManager;

    invoke-static {v1}, Lcom/igexin/sdk/PushManager;->a(Lcom/igexin/sdk/PushManager;)Lcom/igexin/push/core/g;

    move-result-object v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/igexin/sdk/d;->b:Lcom/igexin/sdk/PushManager;

    new-instance v2, Lcom/igexin/push/core/g;

    iget-object v3, p0, Lcom/igexin/sdk/d;->a:Landroid/content/Context;

    invoke-direct {v2, v3}, Lcom/igexin/push/core/g;-><init>(Landroid/content/Context;)V

    invoke-static {v1, v2}, Lcom/igexin/sdk/PushManager;->a(Lcom/igexin/sdk/PushManager;Lcom/igexin/push/core/g;)Lcom/igexin/push/core/g;

    iget-object v1, p0, Lcom/igexin/sdk/d;->b:Lcom/igexin/sdk/PushManager;

    invoke-static {v1}, Lcom/igexin/sdk/PushManager;->a(Lcom/igexin/sdk/PushManager;)Lcom/igexin/push/core/g;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    :cond_1
    monitor-exit p0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    :goto_0
    return-void
.end method
