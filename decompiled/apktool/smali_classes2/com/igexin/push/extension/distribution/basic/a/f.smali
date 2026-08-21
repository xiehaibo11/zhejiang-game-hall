.class Lcom/igexin/push/extension/distribution/basic/a/f;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/igexin/push/extension/distribution/basic/b/b;

.field final synthetic b:Lcom/igexin/push/core/bean/PushTaskBean;

.field final synthetic c:Lcom/igexin/push/extension/distribution/basic/a/e;


# direct methods
.method constructor <init>(Lcom/igexin/push/extension/distribution/basic/a/e;Lcom/igexin/push/extension/distribution/basic/b/b;Lcom/igexin/push/core/bean/PushTaskBean;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/a/f;->c:Lcom/igexin/push/extension/distribution/basic/a/e;

    iput-object p2, p0, Lcom/igexin/push/extension/distribution/basic/a/f;->a:Lcom/igexin/push/extension/distribution/basic/b/b;

    iput-object p3, p0, Lcom/igexin/push/extension/distribution/basic/a/f;->b:Lcom/igexin/push/core/bean/PushTaskBean;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    :try_start_0
    new-instance v1, Landroid/content/Intent;

    const-string v2, "android.intent.action.MAIN"

    invoke-direct {v1, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const/high16 v2, 0x10000000

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    const-string v2, "android.intent.category.HOME"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {v0, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/a/f;->a:Lcom/igexin/push/extension/distribution/basic/b/b;

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/b/b;->getDoActionId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/extension/distribution/basic/a/f;->b:Lcom/igexin/push/core/bean/PushTaskBean;

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/a/f;->b:Lcom/igexin/push/core/bean/PushTaskBean;

    invoke-virtual {v2}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/igexin/push/extension/distribution/basic/a/f;->a:Lcom/igexin/push/extension/distribution/basic/b/b;

    invoke-virtual {v3}, Lcom/igexin/push/extension/distribution/basic/b/b;->getDoActionId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "StartHomeAction | "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    :goto_0
    return-void
.end method
