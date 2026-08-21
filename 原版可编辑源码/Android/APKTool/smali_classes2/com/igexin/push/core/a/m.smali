.class Lcom/igexin/push/core/a/m;
.super Lcom/igexin/push/f/b;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/a/l;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/a/l;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/a/m;->a:Lcom/igexin/push/core/a/l;

    invoke-direct {p0}, Lcom/igexin/push/f/b;-><init>()V

    return-void
.end method


# virtual methods
.method protected a()V
    .locals 8

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Lcom/igexin/push/core/b/d;

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/igexin/push/core/b/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1}, Lcom/igexin/push/core/b/d;->c()Lorg/json/JSONObject;

    move-result-object v2

    if-nez v2, :cond_0

    return-void

    :cond_0
    invoke-virtual {v2}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v5

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "LoginResultAction|send unFeedback taskid = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    new-array v6, v0, [Ljava/lang/Object;

    invoke-static {v4, v6}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v4, "appid"

    sget-object v6, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {v5, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "appkey"

    sget-object v6, Lcom/igexin/push/core/d;->b:Ljava/lang/String;

    invoke-virtual {v5, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v4

    const-string v6, "multaid"

    invoke-virtual {v5, v6}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lcom/igexin/push/core/a/e;->a(Lorg/json/JSONObject;Ljava/lang/String;)V

    invoke-interface {v3}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    :cond_1
    invoke-virtual {v1}, Lcom/igexin/push/core/b/d;->d()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "LoginResultAction|feedbackMultiBrandPushMessage exception :"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_1
    return-void
.end method
