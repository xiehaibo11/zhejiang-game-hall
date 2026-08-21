.class Lcom/igexin/sdk/e;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/igexin/sdk/PushManager;


# direct methods
.method constructor <init>(Lcom/igexin/sdk/PushManager;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/sdk/e;->b:Lcom/igexin/sdk/PushManager;

    iput-object p2, p0, Lcom/igexin/sdk/e;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/igexin/sdk/e;->b:Lcom/igexin/sdk/PushManager;

    iget-object v1, p0, Lcom/igexin/sdk/e;->a:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/igexin/sdk/PushManager;->a(Lcom/igexin/sdk/PushManager;Landroid/content/Context;)Landroid/app/Application;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/igexin/sdk/e;->b:Lcom/igexin/sdk/PushManager;

    invoke-static {v1}, Lcom/igexin/sdk/PushManager;->a(Lcom/igexin/sdk/PushManager;)Lcom/igexin/push/core/g;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/Application;->unregisterActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    iget-object v0, p0, Lcom/igexin/sdk/e;->b:Lcom/igexin/sdk/PushManager;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/igexin/sdk/PushManager;->a(Lcom/igexin/sdk/PushManager;Lcom/igexin/push/core/g;)Lcom/igexin/push/core/g;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
