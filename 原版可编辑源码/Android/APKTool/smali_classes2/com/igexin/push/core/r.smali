.class public final Lcom/igexin/push/core/r;
.super Landroid/os/Handler;

# interfaces
.implements Landroid/content/ServiceConnection;


# static fields
.field private static volatile b:Lcom/igexin/push/core/r;


# instance fields
.field private final a:Ljava/util/concurrent/ConcurrentLinkedQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentLinkedQueue<",
            "Landroid/content/Intent;",
            ">;"
        }
    .end annotation
.end field

.field private final c:Lcom/igexin/push/core/t;

.field private d:Z

.field private volatile e:Landroid/os/Messenger;

.field private final f:Landroid/os/IBinder$DeathRecipient;


# direct methods
.method private constructor <init>()V
    .locals 4

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p0, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v0, Lcom/igexin/push/core/s;

    invoke-direct {v0, p0}, Lcom/igexin/push/core/s;-><init>(Lcom/igexin/push/core/r;)V

    iput-object v0, p0, Lcom/igexin/push/core/r;->f:Landroid/os/IBinder$DeathRecipient;

    new-instance v0, Lcom/igexin/push/core/t;

    invoke-direct {v0, p0}, Lcom/igexin/push/core/t;-><init>(Lcom/igexin/push/core/r;)V

    iput-object v0, p0, Lcom/igexin/push/core/r;->c:Lcom/igexin/push/core/t;

    new-instance v0, Ljava/util/concurrent/ConcurrentLinkedQueue;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentLinkedQueue;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/core/r;->a:Ljava/util/concurrent/ConcurrentLinkedQueue;

    iget-object v0, p0, Lcom/igexin/push/core/r;->c:Lcom/igexin/push/core/t;

    invoke-virtual {v0}, Lcom/igexin/push/core/t;->a()Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x3

    const/4 v2, 0x1

    const/4 v3, 0x0

    invoke-static {v0, v1, v2, v3}, Landroid/os/Message;->obtain(Landroid/os/Handler;III)Landroid/os/Message;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public static a()Lcom/igexin/push/core/r;
    .locals 2

    sget-object v0, Lcom/igexin/push/core/r;->b:Lcom/igexin/push/core/r;

    if-nez v0, :cond_1

    const-class v0, Lcom/igexin/push/core/r;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/igexin/push/core/r;->b:Lcom/igexin/push/core/r;

    if-nez v1, :cond_0

    new-instance v1, Lcom/igexin/push/core/r;

    invoke-direct {v1}, Lcom/igexin/push/core/r;-><init>()V

    sput-object v1, Lcom/igexin/push/core/r;->b:Lcom/igexin/push/core/r;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/igexin/push/core/r;->b:Lcom/igexin/push/core/r;

    return-object v0
.end method

.method static synthetic a(Lcom/igexin/push/core/r;)Lcom/igexin/push/core/t;
    .locals 0

    iget-object p0, p0, Lcom/igexin/push/core/r;->c:Lcom/igexin/push/core/t;

    return-object p0
.end method

.method static synthetic a(Lcom/igexin/push/core/r;Z)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/igexin/push/core/r;->a(Z)V

    return-void
.end method

.method private a(Z)V
    .locals 2

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/igexin/push/core/r;->e:Landroid/os/Messenger;

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/core/r;->e:Landroid/os/Messenger;

    invoke-virtual {v0}, Landroid/os/Messenger;->getBinder()Landroid/os/IBinder;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/r;->f:Landroid/os/IBinder$DeathRecipient;

    invoke-interface {v0, v1, p1}, Landroid/os/IBinder;->unlinkToDeath(Landroid/os/IBinder$DeathRecipient;I)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    iput-boolean p1, p0, Lcom/igexin/push/core/r;->d:Z

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/igexin/push/core/r;->e:Landroid/os/Messenger;

    :cond_0
    iget-boolean p1, p0, Lcom/igexin/push/core/r;->d:Z

    if-nez p1, :cond_1

    invoke-direct {p0}, Lcom/igexin/push/core/r;->d()V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/igexin/push/core/r;->d:Z

    :cond_1
    return-void
.end method

.method private a(Landroid/os/IBinder;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    new-instance v1, Landroid/os/Messenger;

    invoke-direct {v1, p1}, Landroid/os/Messenger;-><init>(Landroid/os/IBinder;)V

    iput-object v1, p0, Lcom/igexin/push/core/r;->e:Landroid/os/Messenger;

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/core/r;->f:Landroid/os/IBinder$DeathRecipient;

    invoke-interface {p1, v1, v0}, Landroid/os/IBinder;->linkToDeath(Landroid/os/IBinder$DeathRecipient;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MsgServerSender|linkToDeath to iservice ex = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method static synthetic a(Lcom/igexin/push/core/r;Landroid/os/IBinder;)Z
    .locals 0

    invoke-direct {p0, p1}, Lcom/igexin/push/core/r;->a(Landroid/os/IBinder;)Z

    move-result p0

    return p0
.end method

.method private b(Landroid/content/Intent;)V
    .locals 4

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/igexin/push/core/r;->e:Landroid/os/Messenger;

    const/4 v1, 0x0

    if-nez v0, :cond_1

    new-array v0, v1, [Ljava/lang/Object;

    const-string v2, "MsgServerSender|realSend, remoteMessenger is null"

    invoke-static {v2, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    if-eqz v0, :cond_3

    const-string v2, "action"

    invoke-virtual {v0, v2}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_3

    invoke-virtual {v0, v2}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    instance-of v3, v3, Ljava/lang/Integer;

    if-nez v3, :cond_2

    goto :goto_0

    :cond_2
    invoke-virtual {v0, v2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "MsgServerSender|realSend action = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/4 v2, 0x1

    iput v2, v0, Landroid/os/Message;->what:I

    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    :try_start_0
    iget-object p1, p0, Lcom/igexin/push/core/r;->e:Landroid/os/Messenger;

    invoke-virtual {p1, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MsgServerSender|realSend iservice error = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    instance-of p1, p1, Landroid/os/DeadObjectException;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/igexin/push/core/r;->c:Lcom/igexin/push/core/t;

    invoke-virtual {p1}, Lcom/igexin/push/core/t;->a()Landroid/os/Handler;

    move-result-object p1

    const/4 v0, 0x2

    invoke-static {p1, v0, v1, v1}, Landroid/os/Message;->obtain(Landroid/os/Handler;III)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    :cond_3
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/igexin/push/core/r;)V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/core/r;->e()V

    return-void
.end method

.method private d()V
    .locals 5

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "MsgServerSender|try to bind iservice"

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :try_start_0
    new-instance v1, Landroid/content/Intent;

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v3

    sget-object v4, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v3, v4}, Lcom/igexin/push/core/x;->d(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const/4 v3, 0x1

    invoke-virtual {v2, v1, p0, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "bind iservice error = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "MsgServerSender"

    invoke-static {v3, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "MsgServerSender|bind iservice error = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    return-void
.end method

.method private e()V
    .locals 1

    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/igexin/push/core/r;->a:Ljava/util/concurrent/ConcurrentLinkedQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentLinkedQueue;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/igexin/push/core/r;->a:Ljava/util/concurrent/ConcurrentLinkedQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentLinkedQueue;->poll()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Intent;

    if-eqz v0, :cond_0

    invoke-direct {p0, v0}, Lcom/igexin/push/core/r;->b(Landroid/content/Intent;)V

    goto :goto_0

    :cond_1
    return-void
.end method


# virtual methods
.method public a(I)V
    .locals 3

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const/16 v2, 0x2718

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string v1, "pid"

    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    invoke-virtual {p0, v0}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method public a(Landroid/content/Intent;)V
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/core/r;->e:Landroid/os/Messenger;

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/igexin/push/core/r;->b(Landroid/content/Intent;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/igexin/push/core/r;->a:Ljava/util/concurrent/ConcurrentLinkedQueue;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentLinkedQueue;->add(Ljava/lang/Object;)Z

    :goto_0
    return-void
.end method

.method public a(Landroid/os/Bundle;)V
    .locals 1

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    invoke-virtual {v0, p1}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-virtual {p0, v0}, Lcom/igexin/push/core/r;->a(Landroid/content/Intent;)V

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 3

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const/16 v2, 0x271d

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string v1, "deviceToken"

    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const/16 v2, 0x271a

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    new-instance v1, Lcom/igexin/sdk/message/SetTagCmdMessage;

    const/16 v2, 0x2719

    invoke-direct {v1, p1, p2, v2}, Lcom/igexin/sdk/message/SetTagCmdMessage;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    const-string p1, "cmd_msg"

    invoke-virtual {v0, p1, v1}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    invoke-virtual {p0, v0}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const/16 v2, 0x271b

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    new-instance v1, Lcom/igexin/sdk/message/GTNotificationMessage;

    invoke-direct {v1, p1, p2, p3, p4}, Lcom/igexin/sdk/message/GTNotificationMessage;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "notification_arrived"

    invoke-virtual {v0, p1, v1}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    invoke-virtual {p0, v0}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 9

    sget-object v0, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    new-instance p1, Landroid/os/Bundle;

    invoke-direct {p1}, Landroid/os/Bundle;-><init>()V

    const/16 v0, 0x271a

    const-string v1, "action"

    invoke-virtual {p1, v1, v0}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    new-instance v0, Lcom/igexin/sdk/message/FeedbackCmdMessage;

    const/16 v8, 0x2716

    move-object v2, v0

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-wide v6, p5

    invoke-direct/range {v2 .. v8}, Lcom/igexin/sdk/message/FeedbackCmdMessage;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JI)V

    const-string p2, "cmd_msg"

    invoke-virtual {p1, p2, v0}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    invoke-virtual {p0, p1}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/core/bean/PushTaskBean;)V
    .locals 10

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "broadcastPayload"

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "MsgServerSender"

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v1, 0x0

    if-eqz p4, :cond_1

    invoke-virtual {p4}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    goto :goto_0

    :cond_1
    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object p4

    invoke-virtual {p4, p1, p2}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p4

    sget-object v2, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    invoke-interface {v2, p4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Lcom/igexin/push/core/bean/PushTaskBean;

    if-eqz p4, :cond_2

    invoke-virtual {p4}, Lcom/igexin/push/core/bean/PushTaskBean;->getMsgExtra()[B

    move-result-object v1

    :cond_2
    :goto_0
    move-object v8, v1

    if-eqz v8, :cond_7

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "startapp|broadcast|payload = "

    invoke-virtual {p4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/lang/String;

    invoke-direct {v1, v8}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {p4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    new-array v1, v3, [Ljava/lang/Object;

    invoke-static {p4, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-object p4, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {p4}, Lcom/igexin/assist/sdk/a;->i(Landroid/content/Context;)Z

    move-result p4

    if-eqz p4, :cond_3

    new-instance p4, Lcom/igexin/push/core/b/d;

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {p4, v1}, Lcom/igexin/push/core/b/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {p4, p1}, Lcom/igexin/push/core/b/d;->a(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_4

    invoke-virtual {p4, p1}, Lcom/igexin/push/core/b/d;->b(Ljava/lang/String;)V

    goto :goto_1

    :cond_3
    move v1, v3

    :cond_4
    :goto_1
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MsgServerSender | broadcastPayload().isMsgRepeated = "

    invoke-virtual {p4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    new-array v2, v3, [Ljava/lang/Object;

    invoke-static {p4, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz p5, :cond_5

    invoke-virtual {p5}, Lcom/igexin/push/core/bean/PushTaskBean;->isOfflineMessage()Z

    move-result p4

    if-eqz p4, :cond_5

    move v9, v0

    goto :goto_2

    :cond_5
    move v9, v3

    :goto_2
    sget-object p4, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    if-eqz p4, :cond_6

    sget-object p4, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {p4, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_6

    new-instance p3, Landroid/os/Bundle;

    invoke-direct {p3}, Landroid/os/Bundle;-><init>()V

    const/16 p4, 0x2711

    const-string p5, "action"

    invoke-virtual {p3, p5, p4}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    new-instance p4, Lcom/igexin/sdk/message/GTTransmitMessage;

    new-instance p5, Ljava/lang/StringBuilder;

    invoke-direct {p5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "GT_"

    invoke-virtual {p5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    new-instance p5, Ljava/lang/StringBuilder;

    invoke-direct {p5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p5, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ":"

    invoke-virtual {p5, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    move-object v4, p4

    move-object v5, p1

    invoke-direct/range {v4 .. v9}, Lcom/igexin/sdk/message/GTTransmitMessage;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[BZ)V

    invoke-virtual {p4, v1}, Lcom/igexin/sdk/message/GTTransmitMessage;->setRepeatMessage(Z)Lcom/igexin/sdk/message/GTTransmitMessage;

    move-result-object p1

    const-string p2, "transmit_data"

    invoke-virtual {p3, p2, p1}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    invoke-virtual {p0, p3}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    :cond_6
    return-void

    :cond_7
    new-array p1, v3, [Ljava/lang/Object;

    const-string p2, "startapp|broadcast|payload is empty!"

    invoke-static {p2, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method

.method public b()V
    .locals 3

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const/16 v2, 0x2717

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    sget-boolean v1, Lcom/igexin/push/core/d;->n:Z

    const-string v2, "onlineState"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    invoke-virtual {p0, v0}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 3

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const/16 v2, 0x2720

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string v1, "revocation_taskId"

    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method public b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const/16 v1, 0x271a

    const-string v2, "action"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    new-instance v2, Lcom/igexin/sdk/message/BindAliasCmdMessage;

    invoke-direct {v2, p1, p2, v1}, Lcom/igexin/sdk/message/BindAliasCmdMessage;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    const-string p1, "cmd_msg"

    invoke-virtual {v0, p1, v2}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    invoke-virtual {p0, v0}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method public b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const/16 v2, 0x271c

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    new-instance v1, Lcom/igexin/sdk/message/GTNotificationMessage;

    invoke-direct {v1, p1, p2, p3, p4}, Lcom/igexin/sdk/message/GTNotificationMessage;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "notification_clicked"

    invoke-virtual {v0, p1, v1}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    invoke-virtual {p0, v0}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method public c()V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "clientid is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PushService"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "broadcastClientId|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const/16 v2, 0x2712

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    sget-object v1, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    const-string v2, "clientid"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method public c(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const/16 v2, 0x271a

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    new-instance v1, Lcom/igexin/sdk/message/UnBindAliasCmdMessage;

    const/16 v2, 0x271b

    invoke-direct {v1, p1, p2, v2}, Lcom/igexin/sdk/message/UnBindAliasCmdMessage;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    const-string p1, "cmd_msg"

    invoke-virtual {v0, p1, v1}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    invoke-virtual {p0, v0}, Lcom/igexin/push/core/r;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method public handleMessage(Landroid/os/Message;)V
    .locals 1

    iget v0, p1, Landroid/os/Message;->what:I

    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    return-void
.end method

.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    const/4 p1, 0x0

    new-array p1, p1, [Ljava/lang/Object;

    const-string v0, "MsgServerSender|remote iservice connected "

    invoke-static {v0, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object p1, p0, Lcom/igexin/push/core/r;->c:Lcom/igexin/push/core/t;

    invoke-virtual {p1}, Lcom/igexin/push/core/t;->a()Landroid/os/Handler;

    move-result-object p1

    const/4 v0, 0x1

    invoke-static {p1, v0, p2}, Landroid/os/Message;->obtain(Landroid/os/Handler;ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 2

    const/4 p1, 0x0

    new-array v0, p1, [Ljava/lang/Object;

    const-string v1, "MsgServerSender|remote iservice disConnected ~~~"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/igexin/push/core/r;->c:Lcom/igexin/push/core/t;

    invoke-virtual {v0}, Lcom/igexin/push/core/t;->a()Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1, p1, p1}, Landroid/os/Message;->obtain(Landroid/os/Handler;III)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method
