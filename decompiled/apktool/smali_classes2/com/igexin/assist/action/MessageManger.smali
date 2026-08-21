.class public Lcom/igexin/assist/action/MessageManger;
.super Ljava/lang/Object;


# instance fields
.field private a:Ljava/util/concurrent/ExecutorService;

.field private b:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {}, Ljava/util/concurrent/Executors;->newSingleThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/assist/action/MessageManger;->a:Ljava/util/concurrent/ExecutorService;

    return-void
.end method

.method synthetic constructor <init>(Lcom/igexin/assist/action/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/assist/action/MessageManger;-><init>()V

    return-void
.end method

.method private a(Lcom/igexin/assist/action/d;)Lcom/igexin/push/core/bean/PushTaskBean;
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    new-instance v2, Lcom/igexin/push/core/bean/PushTaskBean;

    invoke-direct {v2}, Lcom/igexin/push/core/bean/PushTaskBean;-><init>()V

    invoke-virtual {p1}, Lcom/igexin/assist/action/d;->d()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppid(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/igexin/assist/action/d;->c()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/igexin/push/core/bean/PushTaskBean;->setMessageId(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/igexin/assist/action/d;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Lcom/igexin/push/core/bean/PushTaskBean;->setTaskId(Ljava/lang/String;)V

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Lcom/igexin/push/core/bean/PushTaskBean;->setId(Ljava/lang/String;)V

    sget-object p1, Lcom/igexin/push/core/d;->b:Ljava/lang/String;

    invoke-virtual {v2, p1}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppKey(Ljava/lang/String;)V

    const/4 p1, 0x1

    invoke-virtual {v2, p1}, Lcom/igexin/push/core/bean/PushTaskBean;->setCurrentActionid(I)V

    return-object v2
.end method

.method private a(Landroid/content/Context;Lcom/igexin/assist/action/d;)V
    .locals 3

    sget-object v0, Lcom/igexin/push/core/d;->h:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/igexin/assist/util/AssistUtils;->startGetuiService(Landroid/content/Context;)V

    :cond_0
    if-nez p2, :cond_1

    return-void

    :cond_1
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    sget v0, Lcom/igexin/push/core/CoreConsts;->j:I

    iput v0, p1, Landroid/os/Message;->what:I

    invoke-virtual {p2}, Lcom/igexin/assist/action/d;->f()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    invoke-virtual {p2}, Lcom/igexin/assist/action/d;->f()Ljava/lang/String;

    move-result-object v1

    const-string v2, "content"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/igexin/assist/action/d;->a()[B

    move-result-object v1

    if-eqz v1, :cond_2

    invoke-virtual {p2}, Lcom/igexin/assist/action/d;->a()[B

    move-result-object p2

    const-string v1, "payload"

    invoke-virtual {v0, v1, p2}, Landroid/os/Bundle;->putByteArray(Ljava/lang/String;[B)V

    :cond_2
    invoke-virtual {p1, v0}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/igexin/push/core/c;->a(Landroid/os/Message;)Z

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Z)V
    .locals 1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/igexin/push/core/b/d;

    invoke-direct {v0, p1}, Lcom/igexin/push/core/b/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, p2}, Lcom/igexin/push/core/b/d;->c(Ljava/lang/String;)V

    sget-object p1, Lcom/igexin/push/core/d;->h:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-direct {p0, p2, p3}, Lcom/igexin/assist/action/MessageManger;->a(Ljava/lang/String;Z)V

    goto :goto_0

    :cond_1
    new-instance p1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v0, Lcom/igexin/assist/action/a;

    invoke-direct {v0, p0, p2, p3}, Lcom/igexin/assist/action/a;-><init>(Lcom/igexin/assist/action/MessageManger;Ljava/lang/String;Z)V

    const-wide/16 p2, 0x3e8

    invoke-virtual {p1, v0, p2, p3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/igexin/assist/action/MessageManger;Landroid/content/Context;Lcom/igexin/assist/action/d;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/igexin/assist/action/MessageManger;->a(Landroid/content/Context;Lcom/igexin/assist/action/d;)V

    return-void
.end method

.method static synthetic a(Lcom/igexin/assist/action/MessageManger;Landroid/content/Context;Ljava/lang/String;Z)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/igexin/assist/action/MessageManger;->a(Landroid/content/Context;Ljava/lang/String;Z)V

    return-void
.end method

.method static synthetic a(Lcom/igexin/assist/action/MessageManger;Lcom/igexin/assist/action/d;Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/igexin/assist/action/MessageManger;->a(Lcom/igexin/assist/action/d;Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/igexin/assist/action/MessageManger;Ljava/lang/String;Z)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/igexin/assist/action/MessageManger;->a(Ljava/lang/String;Z)V

    return-void
.end method

.method private a(Lcom/igexin/assist/action/d;Landroid/content/Context;)V
    .locals 11

    if-eqz p1, :cond_2

    if-nez p2, :cond_0

    goto/16 :goto_1

    :cond_0
    :try_start_0
    new-instance v0, Lcom/igexin/push/core/b/d;

    invoke-direct {v0, p2}, Lcom/igexin/push/core/b/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {p1}, Lcom/igexin/assist/action/d;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/b/d;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v0, "1"

    goto :goto_0

    :cond_1
    const-string v2, "0"

    invoke-virtual {p1}, Lcom/igexin/assist/action/d;->b()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/igexin/push/core/b/d;->b(Ljava/lang/String;)V

    move-object v0, v2

    :goto_0
    new-instance v2, Landroid/os/Bundle;

    invoke-direct {v2}, Landroid/os/Bundle;-><init>()V

    const-string v3, "action"

    const/16 v4, 0x2711

    invoke-virtual {v2, v3, v4}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string v3, "transmit_data"

    new-instance v10, Lcom/igexin/sdk/message/GTTransmitMessage;

    invoke-virtual {p1}, Lcom/igexin/assist/action/d;->b()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p1}, Lcom/igexin/assist/action/d;->c()Ljava/lang/String;

    move-result-object v6

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/igexin/assist/action/d;->c()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, ":"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/igexin/assist/action/d;->b()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p1}, Lcom/igexin/assist/action/d;->a()[B

    move-result-object v8

    const/4 v9, 0x0

    move-object v4, v10

    invoke-direct/range {v4 .. v9}, Lcom/igexin/sdk/message/GTTransmitMessage;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[BZ)V

    invoke-virtual {v10, v1}, Lcom/igexin/sdk/message/GTTransmitMessage;->setRepeatMessage(Z)Lcom/igexin/sdk/message/GTTransmitMessage;

    move-result-object v1

    invoke-virtual {v2, v3, v1}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, p2}, Lcom/igexin/assist/action/MessageManger;->getBrandCode(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p2, p1, v0}, Lcom/igexin/assist/action/MessageManger;->feedbackPushMessage(Landroid/content/Context;Lcom/igexin/assist/action/d;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    :goto_1
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/igexin/push/core/r;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method private a(Ljava/lang/String;Z)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "other token = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Assist_MessageManger"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    invoke-direct {p0, p1}, Lcom/igexin/assist/action/MessageManger;->a(Ljava/lang/String;)V

    if-nez p2, :cond_0

    :try_start_0
    sget-object v0, Lcom/igexin/push/core/d;->B:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    :cond_0
    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/igexin/push/core/b/i;->c(Ljava/lang/String;)Z

    sget-boolean p1, Lcom/igexin/push/core/d;->n:Z

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/core/a/e;->f()V

    goto :goto_0

    :cond_1
    if-eqz p2, :cond_2

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object p1

    const-string p2, ""

    invoke-virtual {p1, p2}, Lcom/igexin/push/core/b/i;->d(Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_2
    :goto_0
    return-void
.end method

.method public static getInstance()Lcom/igexin/assist/action/MessageManger;
    .locals 1

    invoke-static {}, Lcom/igexin/assist/action/c;->a()Lcom/igexin/assist/action/MessageManger;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public addMessage(Lcom/igexin/assist/MessageBean;)V
    .locals 2

    iget-object v0, p0, Lcom/igexin/assist/action/MessageManger;->a:Ljava/util/concurrent/ExecutorService;

    if-eqz v0, :cond_0

    new-instance v1, Lcom/igexin/assist/action/b;

    invoke-direct {v1, p0, p1}, Lcom/igexin/assist/action/b;-><init>(Lcom/igexin/assist/action/MessageManger;Lcom/igexin/assist/MessageBean;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public feedbackPushMessage(Landroid/content/Context;Lcom/igexin/assist/action/d;Ljava/lang/String;)V
    .locals 4

    :try_start_0
    sget-object v0, Lcom/igexin/push/core/d;->h:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object p1

    invoke-direct {p0, p2}, Lcom/igexin/assist/action/MessageManger;->a(Lcom/igexin/assist/action/d;)Lcom/igexin/push/core/bean/PushTaskBean;

    move-result-object p2

    invoke-virtual {p1, p2, p3}, Lcom/igexin/push/core/a/e;->a(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/igexin/push/core/b/d;

    invoke-direct {v0, p1}, Lcom/igexin/push/core/b/d;-><init>(Landroid/content/Context;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "id"

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "messageid"

    invoke-virtual {p2}, Lcom/igexin/assist/action/d;->c()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "taskid"

    invoke-virtual {p2}, Lcom/igexin/assist/action/d;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "multaid"

    invoke-virtual {p1, v1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p3, "timestamp"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, p3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {p2}, Lcom/igexin/assist/action/d;->b()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2, p1}, Lcom/igexin/push/core/b/d;->a(Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :goto_0
    return-void
.end method

.method public getBrandCode(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/assist/action/MessageManger;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object p1, p0, Lcom/igexin/assist/action/MessageManger;->b:Ljava/lang/String;

    return-object p1

    :cond_0
    invoke-static {p1}, Lcom/igexin/assist/sdk/a;->d(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string p1, "2"

    :goto_0
    iput-object p1, p0, Lcom/igexin/assist/action/MessageManger;->b:Ljava/lang/String;

    goto :goto_1

    :cond_1
    invoke-static {p1}, Lcom/igexin/assist/sdk/a;->b(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string p1, "3"

    goto :goto_0

    :cond_2
    invoke-static {p1}, Lcom/igexin/assist/sdk/a;->c(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_3

    const-string p1, "4"

    goto :goto_0

    :cond_3
    invoke-static {p1}, Lcom/igexin/assist/sdk/a;->e(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_4

    const-string p1, "5"

    goto :goto_0

    :cond_4
    invoke-static {p1}, Lcom/igexin/assist/sdk/a;->f(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_5

    const-string p1, "6"

    goto :goto_0

    :cond_5
    invoke-static {p1}, Lcom/igexin/assist/sdk/a;->g(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_6

    const-string p1, "7"

    goto :goto_0

    :cond_6
    :goto_1
    iget-object p1, p0, Lcom/igexin/assist/action/MessageManger;->b:Ljava/lang/String;

    return-object p1
.end method

.method public log(Ljava/lang/String;)V
    .locals 1

    invoke-static {}, Lcom/igexin/b/a/c/a/f;->a()Lcom/igexin/b/a/c/a/f;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/igexin/b/a/c/a/f;->a(Ljava/lang/String;)V

    return-void
.end method
