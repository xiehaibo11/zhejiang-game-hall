.class Lcom/meizu/cloud/pushsdk/handler/a/f/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Landroid/content/Intent;

.field final synthetic b:Lcom/meizu/cloud/pushsdk/handler/a/f/a;


# direct methods
.method constructor <init>(Lcom/meizu/cloud/pushsdk/handler/a/f/a;Landroid/content/Intent;)V
    .locals 0

    iput-object p1, p0, Lcom/meizu/cloud/pushsdk/handler/a/f/a$1;->b:Lcom/meizu/cloud/pushsdk/handler/a/f/a;

    iput-object p2, p0, Lcom/meizu/cloud/pushsdk/handler/a/f/a$1;->a:Landroid/content/Intent;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    const-string v0, "BrightNotification"

    const-wide/16 v1, 0x3e8

    :try_start_0
    invoke-static {v1, v2}, Ljava/lang/Thread;->sleep(J)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "start bright notification service "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/meizu/cloud/pushsdk/handler/a/f/a$1;->a:Landroid/content/Intent;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/meizu/cloud/pushinternal/DebugLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/meizu/cloud/pushsdk/handler/a/f/a$1;->b:Lcom/meizu/cloud/pushsdk/handler/a/f/a;

    invoke-static {v1}, Lcom/meizu/cloud/pushsdk/handler/a/f/a;->a(Lcom/meizu/cloud/pushsdk/handler/a/f/a;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/meizu/cloud/pushsdk/handler/a/f/a$1;->a:Landroid/content/Intent;

    invoke-virtual {v1, v2}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "send bright notification error "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/meizu/cloud/pushinternal/DebugLogger;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
