.class public Lcom/igexin/sdk/GTIntentService;
.super Landroid/app/Service;


# static fields
.field private static final REMOTE_CLINET_RECEIVED:I = 0x2

.field private static final REMOTE_MSG_RECEIVED:I = 0x1


# instance fields
.field public final TAG:Ljava/lang/String;

.field private final client:Landroid/os/Messenger;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/sdk/GTIntentService;->TAG:Ljava/lang/String;

    new-instance v0, Landroid/os/Messenger;

    new-instance v1, Lcom/igexin/sdk/a;

    invoke-direct {v1, p0}, Lcom/igexin/sdk/a;-><init>(Lcom/igexin/sdk/GTIntentService;)V

    invoke-direct {v0, v1}, Landroid/os/Messenger;-><init>(Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/igexin/sdk/GTIntentService;->client:Landroid/os/Messenger;

    return-void
.end method


# virtual methods
.method public final onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 2

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onBind "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/igexin/sdk/GTIntentService;->client:Landroid/os/Messenger;

    invoke-virtual {p1}, Landroid/os/Messenger;->getBinder()Landroid/os/IBinder;

    move-result-object p1

    return-object p1
.end method

.method public onCreate()V
    .locals 0

    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    return-void
.end method

.method public onDestroy()V
    .locals 0

    invoke-super {p0}, Landroid/app/Service;->onDestroy()V

    return-void
.end method

.method public onNotificationMessageArrived(Landroid/content/Context;Lcom/igexin/sdk/message/GTNotificationMessage;)V
    .locals 0

    return-void
.end method

.method public onNotificationMessageClicked(Landroid/content/Context;Lcom/igexin/sdk/message/GTNotificationMessage;)V
    .locals 0

    return-void
.end method

.method public onReceiveClientId(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onReceiveCommandResult(Landroid/content/Context;Lcom/igexin/sdk/message/GTCmdMessage;)V
    .locals 0

    return-void
.end method

.method public onReceiveDeviceToken(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onReceiveMessageData(Landroid/content/Context;Lcom/igexin/sdk/message/GTTransmitMessage;)V
    .locals 0

    return-void
.end method

.method public onReceiveOnlineState(Landroid/content/Context;Z)V
    .locals 0

    return-void
.end method

.method public onReceiveServicePid(Landroid/content/Context;I)V
    .locals 0

    return-void
.end method

.method public onStartCommand(Landroid/content/Intent;II)I
    .locals 0

    if-eqz p1, :cond_0

    invoke-virtual {p0, p0, p1}, Lcom/igexin/sdk/GTIntentService;->processOnHandleIntent(Landroid/content/Context;Landroid/content/Intent;)V

    :cond_0
    const/4 p1, 0x2

    return p1
.end method

.method public onUnbind(Landroid/content/Intent;)Z
    .locals 0

    invoke-super {p0, p1}, Landroid/app/Service;->onUnbind(Landroid/content/Intent;)Z

    move-result p1

    return p1
.end method

.method public processOnHandleIntent(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 3

    if-eqz p2, :cond_7

    if-nez p1, :cond_0

    goto/16 :goto_1

    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    if-eqz v0, :cond_7

    const-string v1, "action"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_7

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    instance-of v2, v2, Ljava/lang/Integer;

    if-nez v2, :cond_1

    goto/16 :goto_1

    :cond_1
    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const/16 v2, 0x2711

    if-eq v1, v2, :cond_6

    const/16 v2, 0x2712

    if-eq v1, v2, :cond_5

    const/16 v2, 0x2717

    if-eq v1, v2, :cond_4

    const/16 v2, 0x2718

    if-eq v1, v2, :cond_3

    const/16 v2, 0x2720

    if-eq v1, v2, :cond_2

    packed-switch v1, :pswitch_data_0

    goto/16 :goto_1

    :pswitch_0
    const-string p2, "deviceToken"

    invoke-virtual {v0, p2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/igexin/sdk/GTIntentService;->onReceiveDeviceToken(Landroid/content/Context;Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "onHandleIntent() = received device token "

    goto/16 :goto_0

    :pswitch_1
    const-string v0, "notification_clicked"

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object p2

    check-cast p2, Lcom/igexin/sdk/message/GTNotificationMessage;

    invoke-virtual {p0, p1, p2}, Lcom/igexin/sdk/GTIntentService;->onNotificationMessageClicked(Landroid/content/Context;Lcom/igexin/sdk/message/GTNotificationMessage;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "onHandleIntent() notification clicked "

    goto/16 :goto_0

    :pswitch_2
    const-string v0, "notification_arrived"

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object p2

    check-cast p2, Lcom/igexin/sdk/message/GTNotificationMessage;

    invoke-virtual {p0, p1, p2}, Lcom/igexin/sdk/GTIntentService;->onNotificationMessageArrived(Landroid/content/Context;Lcom/igexin/sdk/message/GTNotificationMessage;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "onHandleIntent() = notification arrived "

    goto/16 :goto_0

    :pswitch_3
    const-string v0, "cmd_msg"

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v1

    check-cast v1, Lcom/igexin/sdk/message/GTCmdMessage;

    invoke-virtual {p0, p1, v1}, Lcom/igexin/sdk/GTIntentService;->onReceiveCommandResult(Landroid/content/Context;Lcom/igexin/sdk/message/GTCmdMessage;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onHandleIntent() = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_2
    const-string v0, "revocation_taskId"

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/igexin/sdk/GTIntentService;->revocationTransmitMsg(Landroid/content/Context;Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "onHandleIntent() message revocation "

    goto :goto_0

    :cond_3
    const-string p2, "pid"

    invoke-virtual {v0, p2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p0, p1, p2}, Lcom/igexin/sdk/GTIntentService;->onReceiveServicePid(Landroid/content/Context;I)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "onHandleIntent() = get sdk service pid "

    goto :goto_0

    :cond_4
    const-string p2, "onlineState"

    invoke-virtual {v0, p2}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result p2

    invoke-virtual {p0, p1, p2}, Lcom/igexin/sdk/GTIntentService;->onReceiveOnlineState(Landroid/content/Context;Z)V

    goto :goto_1

    :cond_5
    const-string p2, "clientid"

    invoke-virtual {v0, p2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/igexin/sdk/GTIntentService;->onReceiveClientId(Landroid/content/Context;Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "onHandleIntent() = received client id "

    goto :goto_0

    :cond_6
    const-string v0, "transmit_data"

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object p2

    check-cast p2, Lcom/igexin/sdk/message/GTTransmitMessage;

    invoke-virtual {p0, p1, p2}, Lcom/igexin/sdk/GTIntentService;->onReceiveMessageData(Landroid/content/Context;Lcom/igexin/sdk/message/GTTransmitMessage;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "onHandleIntent() = received msg data "

    :goto_0
    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    :cond_7
    :goto_1
    return-void

    :pswitch_data_0
    .packed-switch 0x271a
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public revocationTransmitMsg(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
