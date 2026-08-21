.class public Lcom/igexin/push/core/a/e;
.super Lcom/igexin/push/core/a/a;


# static fields
.field private static b:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/igexin/push/core/a/a;",
            ">;"
        }
    .end annotation
.end field

.field private static c:Lcom/igexin/push/core/a/e;


# instance fields
.field private a:Ljava/util/concurrent/ExecutorService;


# direct methods
.method private constructor <init>()V
    .locals 8

    invoke-direct {p0}, Lcom/igexin/push/core/a/a;-><init>()V

    new-instance v7, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v5, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v6, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v6}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    const/4 v1, 0x0

    const/4 v2, 0x1

    const-wide/16 v3, 0x1e

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V

    iput-object v7, p0, Lcom/igexin/push/core/a/e;->a:Ljava/util/concurrent/ExecutorService;

    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    sput-object v0, Lcom/igexin/push/core/a/e;->b:Landroid/util/SparseArray;

    new-instance v1, Lcom/igexin/push/core/a/j;

    invoke-direct {v1}, Lcom/igexin/push/core/a/j;-><init>()V

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    sget-object v0, Lcom/igexin/push/core/a/e;->b:Landroid/util/SparseArray;

    new-instance v1, Lcom/igexin/push/core/a/l;

    invoke-direct {v1}, Lcom/igexin/push/core/a/l;-><init>()V

    const/4 v2, 0x5

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    sget-object v0, Lcom/igexin/push/core/a/e;->b:Landroid/util/SparseArray;

    new-instance v1, Lcom/igexin/push/core/a/n;

    invoke-direct {v1}, Lcom/igexin/push/core/a/n;-><init>()V

    const/16 v2, 0x25

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    sget-object v0, Lcom/igexin/push/core/a/e;->b:Landroid/util/SparseArray;

    new-instance v1, Lcom/igexin/push/core/a/s;

    invoke-direct {v1}, Lcom/igexin/push/core/a/s;-><init>()V

    const/16 v2, 0x9

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    sget-object v0, Lcom/igexin/push/core/a/e;->b:Landroid/util/SparseArray;

    new-instance v1, Lcom/igexin/push/core/a/r;

    invoke-direct {v1}, Lcom/igexin/push/core/a/r;-><init>()V

    const/16 v2, 0x14

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    sget-object v0, Lcom/igexin/push/core/a/e;->b:Landroid/util/SparseArray;

    new-instance v1, Lcom/igexin/push/core/a/i;

    invoke-direct {v1}, Lcom/igexin/push/core/a/i;-><init>()V

    const/16 v2, 0x1a

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    sget-object v0, Lcom/igexin/push/core/a/e;->b:Landroid/util/SparseArray;

    new-instance v1, Lcom/igexin/push/core/a/k;

    invoke-direct {v1}, Lcom/igexin/push/core/a/k;-><init>()V

    const/16 v2, 0x61

    invoke-virtual {v0, v2, v1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    return-void
.end method

.method public static a()Lcom/igexin/push/core/a/e;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/a/e;->c:Lcom/igexin/push/core/a/e;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/core/a/e;

    invoke-direct {v0}, Lcom/igexin/push/core/a/e;-><init>()V

    sput-object v0, Lcom/igexin/push/core/a/e;->c:Lcom/igexin/push/core/a/e;

    :cond_0
    sget-object v0, Lcom/igexin/push/core/a/e;->c:Lcom/igexin/push/core/a/e;

    return-object v0
.end method

.method public static a(J)Z
    .locals 0

    invoke-static {p0, p1}, Lcom/igexin/push/util/a;->a(J)Z

    move-result p0

    return p0
.end method

.method private m()V
    .locals 2

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/e/a;->i()V

    invoke-static {}, Lcom/igexin/push/core/w;->a()Lcom/igexin/push/core/w;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/w;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "CoreAction|network changed check condition status"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/core/w;->a()Lcom/igexin/push/core/w;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/w;->d()V

    :cond_0
    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;)Ljava/lang/Class;
    .locals 1

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/igexin/push/core/x;->c(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object p1

    return-object p1
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ":"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public a(Landroid/content/Intent;)V
    .locals 3

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "CoreAction|onServiceInitialize ##"

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/igexin/push/core/c;->a(Z)Z

    sput-boolean v0, Lcom/igexin/push/core/d;->o:Z

    sget-boolean p1, Lcom/igexin/push/core/d;->n:Z

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/core/r;->c()V

    const/4 p1, 0x1

    sput-boolean p1, Lcom/igexin/push/core/d;->o:Z

    :cond_0
    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object p1

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p1, v1}, Lcom/igexin/push/core/x;->b(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_2

    sget-object p1, Lcom/igexin/push/core/d;->U:Ljava/lang/String;

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object p1

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p1, v1}, Lcom/igexin/push/core/x;->c(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    sget-object v1, Lcom/igexin/push/core/CoreConsts;->n:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1}, Lcom/igexin/b/b/a;->b([B)[B

    move-result-object p1

    if-eqz p1, :cond_2

    sget-object v1, Lcom/igexin/push/core/d;->U:Ljava/lang/String;

    invoke-static {p1, v1, v0}, Lcom/igexin/push/util/c;->a([BLjava/lang/String;Z)V

    goto :goto_0

    :cond_1
    new-instance p1, Ljava/io/File;

    sget-object v1, Lcom/igexin/push/core/d;->U:Ljava/lang/String;

    invoke-direct {p1, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    move-result p1

    if-eqz p1, :cond_2

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "del "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/igexin/push/core/d;->U:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " success ~~~"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public a(Landroid/os/Bundle;)V
    .locals 1

    invoke-static {}, Lcom/igexin/push/core/v;->a()Lcom/igexin/push/core/v;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/igexin/push/core/v;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method public a(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "405"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "ok"

    invoke-virtual {p0, p1, p2, v0}, Lcom/igexin/push/core/a/e;->a(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;Ljava/lang/String;)V
    .locals 9

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v3, "action"

    const-string v4, "pushmessage_feedback"

    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "appid"

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getAppid()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "id"

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "appkey"

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getAppKey()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "messageid"

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "taskid"

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "actionid"

    invoke-virtual {v0, v3, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "result"

    invoke-virtual {v0, v3, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p3, "timestamp"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, p3, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    new-instance p3, Lcom/igexin/push/d/c/b;

    invoke-direct {p3}, Lcom/igexin/push/d/c/b;-><init>()V

    invoke-virtual {p3}, Lcom/igexin/push/d/c/b;->b()V

    long-to-int v0, v1

    iput v0, p3, Lcom/igexin/push/d/c/b;->a:I

    const-string v0, "17258000"

    iput-object v0, p3, Lcom/igexin/push/d/c/b;->d:Ljava/lang/String;

    iput-object v3, p3, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    iput-object v0, p3, Lcom/igexin/push/d/c/b;->g:Ljava/lang/String;

    sget-boolean v0, Lcom/igexin/push/core/d;->n:Z

    if-eqz v0, :cond_0

    move-wide v5, v1

    goto :goto_0

    :cond_0
    const-wide/16 v4, 0x0

    move-wide v5, v4

    :goto_0
    invoke-static {}, Lcom/igexin/push/core/b/e;->a()Lcom/igexin/push/core/b/e;

    move-result-object v7

    new-instance v8, Lcom/igexin/push/core/bean/h;

    const/4 v4, 0x3

    move-object v0, v8

    invoke-direct/range {v0 .. v6}, Lcom/igexin/push/core/bean/h;-><init>(JLjava/lang/String;BJ)V

    invoke-virtual {v7, v8}, Lcom/igexin/push/core/b/e;->a(Lcom/igexin/push/core/bean/h;)V

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "C-"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p3}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;)I

    :cond_1
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "feedback|"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "|"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x0

    new-array p2, p2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method

.method a(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/igexin/push/core/a/e;->a:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/igexin/push/core/a/f;

    invoke-direct {v1, p0, p1}, Lcom/igexin/push/core/a/f;-><init>(Lcom/igexin/push/core/a/e;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method a(Lorg/json/JSONObject;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    new-instance v0, Lcom/igexin/push/core/bean/PushTaskBean;

    invoke-direct {v0}, Lcom/igexin/push/core/bean/PushTaskBean;-><init>()V

    invoke-virtual {v0, p1}, Lcom/igexin/push/core/bean/PushTaskBean;->parse(Lorg/json/JSONObject;)V

    invoke-virtual {p0, v0, p2}, Lcom/igexin/push/core/a/e;->a(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "CoreAction "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x0

    new-array p2, p2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    return-void
.end method

.method public a(Lcom/igexin/b/a/d/e;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public a(Lcom/igexin/push/d/c/c;)Z
    .locals 4

    const/4 v0, 0x0

    if-eqz p1, :cond_5

    sget-object v1, Lcom/igexin/push/core/a/e;->b:Landroid/util/SparseArray;

    iget v2, p1, Lcom/igexin/push/d/c/c;->i:I

    invoke-virtual {v1, v2}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/igexin/push/core/a/a;

    instance-of v2, p1, Lcom/igexin/push/d/c/h;

    if-nez v2, :cond_0

    instance-of v2, p1, Lcom/igexin/push/d/c/k;

    if-nez v2, :cond_0

    instance-of v2, p1, Lcom/igexin/push/d/c/l;

    if-nez v2, :cond_0

    instance-of v2, p1, Lcom/igexin/push/d/c/o;

    if-nez v2, :cond_0

    instance-of v2, p1, Lcom/igexin/push/d/c/p;

    if-nez v2, :cond_0

    instance-of v2, p1, Lcom/igexin/push/d/c/f;

    if-eqz v2, :cond_1

    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "CoreAction|receive : "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " resp ~~~~"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v2, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/b/a/a/f;->a()Lcom/igexin/b/a/b/a/a/f;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/igexin/b/a/b/a/a/f;->a(Ljava/lang/String;)V

    :cond_1
    instance-of v0, p1, Lcom/igexin/push/d/c/k;

    if-nez v0, :cond_2

    instance-of v0, p1, Lcom/igexin/push/d/c/l;

    if-nez v0, :cond_2

    instance-of v0, p1, Lcom/igexin/push/d/c/o;

    if-eqz v0, :cond_3

    :cond_2
    const-wide/16 v2, 0x0

    sput-wide v2, Lcom/igexin/push/core/d;->F:J

    invoke-static {}, Lcom/igexin/push/c/i;->a()Lcom/igexin/push/c/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/i;->d()Lcom/igexin/push/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/a;->b()V

    :cond_3
    if-eqz v1, :cond_4

    invoke-virtual {v1, p1}, Lcom/igexin/push/core/a/a;->a(Ljava/lang/Object;)Z

    :cond_4
    invoke-static {}, Lcom/igexin/push/f/b/b;->i()Lcom/igexin/push/f/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/f/b/b;->j()V

    const/4 p1, 0x1

    return p1

    :cond_5
    return v0
.end method

.method public a(Ljava/lang/Object;)Z
    .locals 3

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v0

    instance-of v1, p1, Lcom/igexin/push/d/c/c;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    if-eqz v0, :cond_0

    check-cast p1, Lcom/igexin/push/d/c/c;

    invoke-virtual {v0, p1}, Lcom/igexin/push/e/a;->a(Lcom/igexin/push/d/c/c;)V

    goto :goto_0

    :cond_0
    instance-of v1, p1, Lcom/igexin/push/d/b/b;

    if-eqz v1, :cond_1

    new-array p1, v2, [Ljava/lang/Object;

    const-string v1, "CoreAction|TcpExceptionNotify###"

    invoke-static {v1, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {v0}, Lcom/igexin/push/e/a;->f()V

    goto :goto_0

    :cond_1
    instance-of p1, p1, Lcom/igexin/push/d/b/a;

    if-eqz p1, :cond_3

    new-array p1, v2, [Ljava/lang/Object;

    const-string v1, "CoreAction|TcpDisconnectSuccessNotify ###"

    invoke-static {v1, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-boolean p1, Lcom/igexin/push/core/d;->n:Z

    if-eqz p1, :cond_2

    sput-boolean v2, Lcom/igexin/push/core/d;->n:Z

    new-array p1, v2, [Ljava/lang/Object;

    const-string v1, "CoreAction|broadcast online state = offline"

    invoke-static {v1, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/core/r;->b()V

    :cond_2
    invoke-virtual {v0}, Lcom/igexin/push/e/a;->g()V

    :cond_3
    :goto_0
    return v2
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    invoke-static {}, Lcom/igexin/push/core/w;->a()Lcom/igexin/push/core/w;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/igexin/push/core/w;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public a(Lorg/json/JSONObject;Lcom/igexin/push/core/bean/PushTaskBean;)Z
    .locals 1

    invoke-static {}, Lcom/igexin/push/core/w;->a()Lcom/igexin/push/core/w;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/igexin/push/core/w;->a(Lorg/json/JSONObject;Lcom/igexin/push/core/bean/PushTaskBean;)Z

    move-result p1

    return p1
.end method

.method public b()V
    .locals 4

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "CoreAction|send heart beat data ........"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "H-"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/igexin/push/d/c/f;

    invoke-direct {v2}, Lcom/igexin/push/d/c/f;-><init>()V

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;Z)I

    return-void
.end method

.method public b(Landroid/content/Intent;)V
    .locals 3

    if-eqz p1, :cond_1

    const-string v0, "isSlave"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "CoreAction|onServiceInitializeForSlave isSlave ="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/igexin/push/core/c;->a(Z)Z

    sget-boolean p1, Lcom/igexin/push/core/d;->n:Z

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/core/r;->c()V

    :cond_1
    return-void
.end method

.method public b(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V
    .locals 1

    const-string v0, "ok"

    invoke-virtual {p0, p1, p2, v0}, Lcom/igexin/push/core/a/e;->a(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method b(Ljava/lang/String;)V
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "action"

    const-string v2, "received"

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "id"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lcom/igexin/push/d/c/n;

    invoke-direct {v0}, Lcom/igexin/push/d/c/n;-><init>()V

    invoke-virtual {v0}, Lcom/igexin/push/d/c/b;->b()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    long-to-int v1, v1

    iput v1, v0, Lcom/igexin/push/d/c/b;->a:I

    const-string v1, "17258000"

    iput-object v1, v0, Lcom/igexin/push/d/c/b;->d:Ljava/lang/String;

    iput-object p1, v0, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    sget-object p1, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    iput-object p1, v0, Lcom/igexin/push/d/c/b;->g:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "C-"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1, v0}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;)I

    return-void
.end method

.method public c()V
    .locals 6

    sget-boolean v0, Lcom/igexin/push/core/d;->n:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v2

    const-wide/high16 v4, 0x4049000000000000L    # 50.0

    mul-double/2addr v2, v4

    const-wide/high16 v4, 0x4069000000000000L    # 200.0

    add-double/2addr v2, v4

    double-to-int v0, v2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "CoreAction|screen on or onresume, resetDelay = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    int-to-long v0, v0

    sput-wide v0, Lcom/igexin/push/core/d;->F:J

    invoke-static {}, Lcom/igexin/push/f/b/f;->i()Lcom/igexin/push/f/b/f;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/f/b/f;->j()V

    goto :goto_0

    :cond_0
    new-array v0, v1, [Ljava/lang/Object;

    const-string v1, "CoreAction|resetDelayTime, ignore ~~~~~"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    return-void
.end method

.method public c(Landroid/content/Intent;)V
    .locals 6

    const-string v0, "accesstoken"

    if-eqz p1, :cond_8

    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    if-nez v1, :cond_0

    goto/16 :goto_2

    :cond_0
    const/4 v1, 0x0

    :try_start_0
    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "CoreAction|action = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    new-array v4, v1, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string v3, "android.net.conn.CONNECTIVITY_CHANGE"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    if-eqz p1, :cond_8

    invoke-direct {p0}, Lcom/igexin/push/core/a/e;->m()V

    goto/16 :goto_2

    :cond_1
    sget-object v3, Lcom/igexin/push/core/CoreConsts;->b:Ljava/lang/String;

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-static {}, Lcom/igexin/push/core/w;->a()Lcom/igexin/push/core/w;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/igexin/push/core/w;->a(Landroid/content/Intent;)V

    goto/16 :goto_2

    :cond_2
    sget-object v3, Lcom/igexin/push/core/CoreConsts;->a:Ljava/lang/String;

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_4

    const-string v2, "checkpackage"

    invoke-virtual {p1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "CoreAction|checkpackage = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " , accesstoken = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    new-array v5, v1, [Ljava/lang/Object;

    invoke-static {v4, v5}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz v2, :cond_8

    if-eqz v3, :cond_8

    sget-object v3, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_8

    sget-object v2, Lcom/igexin/push/core/CoreConsts;->b:Ljava/lang/String;

    invoke-virtual {p1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    sget-object v2, Lcom/igexin/push/core/d;->ad:Ljava/lang/String;

    invoke-virtual {p1, v0, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0, p1}, Landroid/content/Context;->sendBroadcast(Landroid/content/Intent;)V

    new-instance v0, Lcom/igexin/push/core/bean/PushTaskBean;

    invoke-direct {v0}, Lcom/igexin/push/core/bean/PushTaskBean;-><init>()V

    const-string v2, "appid"

    invoke-virtual {p1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppid(Ljava/lang/String;)V

    const-string v2, "messageid"

    invoke-virtual {p1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/igexin/push/core/bean/PushTaskBean;->setMessageId(Ljava/lang/String;)V

    const-string v2, "taskid"

    invoke-virtual {p1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/igexin/push/core/bean/PushTaskBean;->setTaskId(Ljava/lang/String;)V

    const-string v2, "id"

    invoke-virtual {p1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/igexin/push/core/bean/PushTaskBean;->setId(Ljava/lang/String;)V

    sget-object v2, Lcom/igexin/push/core/d;->b:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppKey(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    const-string v2, "feedbackid"

    invoke-virtual {p1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    add-int/lit16 v2, v2, 0x753a

    invoke-virtual {v0, v2}, Lcom/igexin/push/core/bean/PushTaskBean;->setCurrentActionid(I)V

    const-string v3, "isFloat"

    invoke-virtual {p1, v3, v1}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v3

    if-eqz v3, :cond_3

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "notifyFloat:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "bigStyle"

    invoke-virtual {p1, v4}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_0
    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    :cond_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "notifyStyle:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "notifyStyle"

    invoke-virtual {p1, v4}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :goto_1
    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2, p1}, Lcom/igexin/push/core/a/e;->a(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :cond_4
    :try_start_2
    const-string p1, "android.intent.action.TIME_SET"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_5

    sget p1, Lcom/igexin/push/config/j;->b:I

    if-eqz p1, :cond_8

    invoke-static {}, Lcom/igexin/push/a/a/c;->c()Lcom/igexin/push/a/a/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/a/a/c;->d()V

    goto :goto_2

    :cond_5
    const-string p1, "android.intent.action.SCREEN_ON"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_7

    const/4 p1, 0x1

    sput p1, Lcom/igexin/push/core/d;->s:I

    invoke-static {}, Lcom/igexin/push/core/w;->a()Lcom/igexin/push/core/w;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/core/w;->b()Z

    move-result p1

    if-eqz p1, :cond_6

    invoke-static {}, Lcom/igexin/push/core/w;->a()Lcom/igexin/push/core/w;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/core/w;->d()V

    :cond_6
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x1a

    if-lt p1, v0, :cond_8

    invoke-virtual {p0}, Lcom/igexin/push/core/a/e;->c()V

    goto :goto_2

    :cond_7
    const-string p1, "android.intent.action.SCREEN_OFF"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_8

    sput v1, Lcom/igexin/push/core/d;->s:I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "CoreAction"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v1, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :catch_0
    :cond_8
    :goto_2
    return-void
.end method

.method public c(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/igexin/push/core/a/e;->a:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/igexin/push/core/a/h;

    invoke-direct {v1, p0, p1, p2}, Lcom/igexin/push/core/a/h;-><init>(Lcom/igexin/push/core/a/e;Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method d()V
    .locals 10

    const-string v0, "extraData"

    const/4 v1, 0x0

    :try_start_0
    invoke-static {}, Lcom/igexin/push/core/b/e;->a()Lcom/igexin/push/core/b/e;

    move-result-object v2

    invoke-virtual {v2}, Lcom/igexin/push/core/b/e;->b()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/igexin/push/core/bean/h;

    invoke-virtual {v3}, Lcom/igexin/push/core/bean/h;->d()J

    move-result-wide v4

    const-wide/16 v6, 0x2710

    add-long/2addr v4, v6

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    cmp-long v4, v4, v8

    if-lez v4, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-virtual {v3}, Lcom/igexin/push/core/bean/h;->b()Ljava/lang/String;

    move-result-object v2

    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance v2, Lcom/igexin/push/d/c/b;

    invoke-direct {v2}, Lcom/igexin/push/d/c/b;-><init>()V

    invoke-virtual {v2}, Lcom/igexin/push/d/c/b;->b()V

    long-to-int v4, v4

    iput v4, v2, Lcom/igexin/push/d/c/b;->a:I

    const-string v4, "17258000"

    iput-object v4, v2, Lcom/igexin/push/d/c/b;->d:Ljava/lang/String;

    invoke-virtual {v8, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-virtual {v8, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-static {v4, v1}, Lcom/igexin/push/util/d;->a([BI)[B

    move-result-object v4

    iput-object v4, v2, Lcom/igexin/push/d/c/b;->f:Ljava/lang/Object;

    invoke-virtual {v8, v0}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    :cond_1
    invoke-virtual {v3}, Lcom/igexin/push/core/bean/h;->b()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v2, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    iput-object v0, v2, Lcom/igexin/push/d/c/b;->g:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "freshral|"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/igexin/push/core/bean/h;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v4, v1, [Ljava/lang/Object;

    invoke-static {v0, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/core/b/e;->a()Lcom/igexin/push/core/b/e;

    move-result-object v0

    invoke-virtual {v3}, Lcom/igexin/push/core/bean/h;->a()J

    move-result-wide v3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    add-long/2addr v8, v6

    invoke-virtual {v0, v3, v4, v8, v9}, Lcom/igexin/push/core/b/e;->a(JJ)Z

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "C-"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3, v2}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "CoreActionfreshRAL error :"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    :goto_1
    return-void
.end method

.method e()V
    .locals 5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v3, "action"

    const-string v4, "request_deviceid"

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "id"

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Lcom/igexin/push/d/c/b;

    invoke-direct {v3}, Lcom/igexin/push/d/c/b;-><init>()V

    invoke-virtual {v3}, Lcom/igexin/push/d/c/b;->b()V

    long-to-int v0, v0

    iput v0, v3, Lcom/igexin/push/d/c/b;->a:I

    const-string v0, "17258000"

    iput-object v0, v3, Lcom/igexin/push/d/c/b;->d:Ljava/lang/String;

    iput-object v2, v3, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    iput-object v0, v3, Lcom/igexin/push/d/c/b;->g:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "C-"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, v3}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;)I

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "CoreAction|deviceidReq"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method

.method public f()V
    .locals 4

    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/igexin/push/core/d;->H:J

    sub-long/2addr v0, v2

    const-wide/32 v2, 0x5265c00

    cmp-long v0, v0, v2

    const/4 v1, 0x0

    if-lez v0, :cond_0

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/b/i;->b(I)Z

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Lcom/igexin/push/core/b/i;->d(J)Z

    :cond_0
    sget v0, Lcom/igexin/push/core/d;->am:I

    const/4 v2, 0x5

    if-gt v0, v2, :cond_1

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    sget v2, Lcom/igexin/push/core/d;->am:I

    const/4 v3, 0x1

    add-int/2addr v2, v3

    invoke-virtual {v0, v2}, Lcom/igexin/push/core/b/i;->b(I)Z

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v2, Lcom/igexin/push/core/a/g;

    invoke-direct {v2, p0}, Lcom/igexin/push/core/a/g;-><init>(Lcom/igexin/push/core/a/e;)V

    invoke-virtual {v0, v2, v1, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public g()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public h()V
    .locals 13

    new-instance v0, Ljava/text/SimpleDateFormat;

    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v1

    const-string v2, "yyyy-MM-dd"

    invoke-direct {v0, v2, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;Ljava/util/Locale;)V

    new-instance v1, Ljava/util/Date;

    invoke-direct {v1}, Ljava/util/Date;-><init>()V

    invoke-virtual {v0, v1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/io/File;

    const-string v3, "/sdcard/libs//"

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    sget-object v4, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    if-nez v4, :cond_0

    const-string v4, "unknowPacageName"

    :cond_0
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v5

    if-nez v5, :cond_1

    return-void

    :cond_1
    invoke-virtual {v2}, Ljava/io/File;->list()[Ljava/lang/String;

    move-result-object v2

    if-nez v2, :cond_2

    return-void

    :cond_2
    array-length v5, v2

    const/4 v6, 0x0

    move v7, v6

    :goto_0
    if-ge v7, v5, :cond_5

    aget-object v8, v2, v7

    invoke-virtual {v8}, Ljava/lang/String;->length()I

    move-result v8

    aget-object v9, v2, v7

    invoke-virtual {v9, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_4

    aget-object v9, v2, v7

    const-string v10, ".log"

    invoke-virtual {v9, v10}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_4

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v9

    add-int/lit8 v9, v9, 0xe

    if-le v8, v9, :cond_4

    aget-object v9, v2, v7

    add-int/lit8 v10, v8, -0xf

    invoke-virtual {v9, v6, v10}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v4, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-nez v9, :cond_3

    goto :goto_1

    :cond_3
    aget-object v9, v2, v7

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v10

    add-int/lit8 v10, v10, 0x1

    add-int/lit8 v8, v8, -0x4

    invoke-virtual {v9, v10, v8}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v8

    :try_start_0
    invoke-virtual {v0, v8}, Ljava/text/SimpleDateFormat;->parse(Ljava/lang/String;)Ljava/util/Date;

    move-result-object v8

    invoke-virtual {v0, v1}, Ljava/text/SimpleDateFormat;->parse(Ljava/lang/String;)Ljava/util/Date;

    move-result-object v9

    invoke-virtual {v9}, Ljava/util/Date;->getTime()J

    move-result-wide v9

    invoke-virtual {v8}, Ljava/util/Date;->getTime()J

    move-result-wide v11

    sub-long/2addr v9, v11

    const-wide/32 v11, 0x5265c00

    div-long/2addr v9, v11

    invoke-static {v9, v10}, Ljava/lang/Math;->abs(J)J

    move-result-wide v8

    const-wide/16 v10, 0x6

    cmp-long v8, v8, v10

    if-lez v8, :cond_4

    new-instance v8, Ljava/io/File;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v10, v2, v7

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-direct {v8, v9}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v8}, Ljava/io/File;->exists()Z

    move-result v9

    if-eqz v9, :cond_4

    invoke-virtual {v8}, Ljava/io/File;->delete()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_4
    :goto_1
    add-int/lit8 v7, v7, 0x1

    goto :goto_0

    :cond_5
    return-void
.end method

.method public i()V
    .locals 0

    invoke-static {}, Lcom/igexin/push/util/a;->d()V

    return-void
.end method

.method public j()V
    .locals 7

    sget v0, Lcom/igexin/push/core/d;->ac:I

    add-int/lit8 v0, v0, -0x64

    if-gez v0, :cond_0

    const/4 v0, 0x0

    :cond_0
    sput v0, Lcom/igexin/push/core/d;->ac:I

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-object v2, Lcom/igexin/push/core/d;->ab:Ljava/util/HashMap;

    invoke-virtual {v2}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    sub-long v3, v0, v3

    const-wide/32 v5, 0x36ee80

    cmp-long v3, v3, v5

    if-lez v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    :cond_2
    return-void
.end method

.method public k()V
    .locals 4

    sget-wide v0, Lcom/igexin/push/core/d;->L:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    cmp-long v0, v0, v2

    if-gez v0, :cond_0

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/b/i;->a(Z)Z

    :cond_0
    return-void
.end method

.method public l()V
    .locals 4

    sget-boolean v0, Lcom/igexin/push/core/d;->W:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    invoke-static {}, Lcom/igexin/push/f/b/b;->i()Lcom/igexin/push/f/b/b;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3, v1}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result v0

    sput-boolean v0, Lcom/igexin/push/core/d;->W:Z

    :cond_0
    sget-boolean v0, Lcom/igexin/push/core/d;->X:Z

    if-nez v0, :cond_1

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    invoke-static {}, Lcom/igexin/push/f/b/f;->i()Lcom/igexin/push/f/b/f;

    move-result-object v2

    invoke-virtual {v0, v2, v1, v1}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result v0

    sput-boolean v0, Lcom/igexin/push/core/d;->X:Z

    :cond_1
    sget-boolean v0, Lcom/igexin/push/core/d;->Y:Z

    if-nez v0, :cond_2

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->d()V

    :cond_2
    return-void
.end method
