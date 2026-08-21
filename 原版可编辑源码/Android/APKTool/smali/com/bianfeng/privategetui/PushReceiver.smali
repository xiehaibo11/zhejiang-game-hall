.class public Lcom/bianfeng/privategetui/PushReceiver;
.super Landroid/content/BroadcastReceiver;
.source "PushReceiver.java"


# static fields
.field public static final ACTION_LOCAL:Ljava/lang/String; = "com.bianfeng.push.action.local"

.field private static final TAG:Ljava/lang/String; = "PushReceiver"

.field public static mMessageid:Ljava/lang/String;

.field public static mTaskid:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method

.method public static final createLocalAction(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;
    .locals 2

    .line 39
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/privategetui/PushReceiver;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string p0, "com.bianfeng.push.action.local"

    .line 40
    invoke-virtual {v0, p0}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string p0, "tickerText"

    .line 41
    invoke-virtual {v0, p0, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p0, "title"

    .line 42
    invoke-virtual {v0, p0, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p0, "message"

    .line 43
    invoke-virtual {v0, p0, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    return-object v0
.end method

.method public static final processGetuiAction(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 3

    .line 48
    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object p1

    const-string v0, "action"

    .line 49
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v0

    .line 50
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "received action: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "PushReceiver"

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/16 v1, 0x2711

    if-eq v0, v1, :cond_1

    const/16 v1, 0x2712

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "clientid"

    .line 67
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 68
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "push cid:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 69
    invoke-static {p0}, Lcom/bianfeng/privategetui/PushReceiver;->setTag(Landroid/content/Context;)V

    goto :goto_0

    :cond_1
    const-string p0, "payload"

    .line 55
    invoke-virtual {p1, p0}, Landroid/os/Bundle;->getByteArray(Ljava/lang/String;)[B

    move-result-object p0

    if-eqz p0, :cond_2

    .line 57
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p0}, Ljava/lang/String;-><init>([B)V

    .line 58
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Got Payload:"

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const-string p0, "taskid"

    .line 60
    invoke-virtual {p1, p0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/privategetui/PushReceiver;->mTaskid:Ljava/lang/String;

    const-string p0, "messageid"

    .line 61
    invoke-virtual {p1, p0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/privategetui/PushReceiver;->mMessageid:Ljava/lang/String;

    const/4 p1, 0x2

    new-array p1, p1, [Ljava/lang/Object;

    const/4 v0, 0x0

    .line 63
    sget-object v1, Lcom/bianfeng/privategetui/PushReceiver;->mTaskid:Ljava/lang/String;

    aput-object v1, p1, v0

    const/4 v0, 0x1

    aput-object p0, p1, v0

    const-string p0, "taskid = %s; messageid = %s;"

    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public static final processLocalAction(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 3

    .line 29
    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.bianfeng.push.action.local"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const-string v0, "tickerText"

    .line 31
    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "title"

    .line 32
    invoke-virtual {p1, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "message"

    .line 33
    invoke-virtual {p1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 34
    invoke-static {p0, v0, v1, p1}, Lcom/bianfeng/privategetui/PushNotification;->show(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static setTag(Landroid/content/Context;)V
    .locals 5

    .line 75
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/privategetui/PushTag;->createPushTags()[Lcom/igexin/sdk/Tag;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, p0, v1, v2}, Lcom/igexin/sdk/PushManager;->setTag(Landroid/content/Context;[Lcom/igexin/sdk/Tag;Ljava/lang/String;)I

    move-result p0

    if-eqz p0, :cond_1

    const/16 v0, 0x4e21

    const-string v1, "PushReceiver"

    if-eq p0, v0, :cond_0

    const-string p0, "set tag failed, catch exception"

    .line 87
    invoke-static {v1, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :cond_0
    const-string p0, "set tag failed, error count"

    .line 84
    invoke-static {v1, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 2

    .line 23
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "received message "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PushReceiver"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 24
    invoke-static {p1, p2}, Lcom/bianfeng/privategetui/PushReceiver;->processLocalAction(Landroid/content/Context;Landroid/content/Intent;)V

    .line 25
    invoke-static {p1, p2}, Lcom/bianfeng/privategetui/PushReceiver;->processGetuiAction(Landroid/content/Context;Landroid/content/Intent;)V

    return-void
.end method
