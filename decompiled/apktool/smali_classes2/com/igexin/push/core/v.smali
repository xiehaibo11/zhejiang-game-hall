.class public Lcom/igexin/push/core/v;
.super Ljava/lang/Object;


# static fields
.field private static a:Lcom/igexin/push/core/v;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/igexin/push/core/v;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/v;->a:Lcom/igexin/push/core/v;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/core/v;

    invoke-direct {v0}, Lcom/igexin/push/core/v;-><init>()V

    sput-object v0, Lcom/igexin/push/core/v;->a:Lcom/igexin/push/core/v;

    :cond_0
    sget-object v0, Lcom/igexin/push/core/v;->a:Lcom/igexin/push/core/v;

    return-object v0
.end method


# virtual methods
.method public a(IILjava/lang/String;)V
    .locals 0

    sput p1, Lcom/igexin/push/config/j;->a:I

    sput p2, Lcom/igexin/push/config/j;->b:I

    invoke-static {}, Lcom/igexin/push/config/a;->a()Lcom/igexin/push/config/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/config/a;->b()V

    invoke-static {}, Lcom/igexin/push/a/a/c;->c()Lcom/igexin/push/a/a/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/a/a/c;->d()V

    return-void
.end method

.method public a(ILjava/lang/String;)V
    .locals 2

    sput p1, Lcom/igexin/push/config/j;->d:I

    invoke-static {}, Lcom/igexin/push/config/a;->a()Lcom/igexin/push/config/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/config/a;->c()V

    sget-boolean p1, Lcom/igexin/push/core/d;->n:Z

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    new-array p1, p1, [Ljava/lang/Object;

    const-string p2, "setHeartbeatInterval heartbeatReq"

    invoke-static {p2, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    sget-wide v0, Lcom/igexin/push/core/d;->M:J

    sub-long/2addr p1, v0

    const-wide/16 v0, 0x1388

    cmp-long p1, p1, v0

    if-lez p1, :cond_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    sput-wide p1, Lcom/igexin/push/core/d;->M:J

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/core/a/e;->b()V

    :cond_0
    return-void
.end method

.method public a(Landroid/os/Bundle;)V
    .locals 7

    const-string v0, "action"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PushController|action pushmanager action = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Object;

    invoke-static {v1, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    :cond_0
    const-string v1, "setTag"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v3, "sn"

    if-eqz v1, :cond_1

    const-string v0, "tags"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Lcom/igexin/push/core/v;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_1
    const-string v1, "setSilentTime"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v0, "beginHour"

    invoke-virtual {p1, v0, v2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result v0

    const-string v1, "duration"

    invoke-virtual {p1, v1, v2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result p1

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v0, p1, v1}, Lcom/igexin/push/core/v;->a(IILjava/lang/String;)V

    invoke-static {}, Lcom/igexin/assist/sdk/AssistPushManager;->getInstance()Lcom/igexin/assist/sdk/AssistPushManager;

    move-result-object v1

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v1, v2, v0, p1}, Lcom/igexin/assist/sdk/AssistPushManager;->setSilentTime(Landroid/content/Context;II)V

    goto/16 :goto_0

    :cond_2
    const-string v1, "sendMessage"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v4, "taskid"

    if-eqz v1, :cond_3

    new-array v0, v2, [Ljava/lang/Object;

    const-string v1, "PushController onPushManagerMessage recevie action : sendMessage"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p1, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "extraData"

    invoke-virtual {p1, v1}, Landroid/os/Bundle;->getByteArray(Ljava/lang/String;)[B

    move-result-object p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PushController receive broadcast msg data , task id : "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " ######@##@@@#"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p0, v0, p1}, Lcom/igexin/push/core/v;->a(Ljava/lang/String;[B)V

    goto/16 :goto_0

    :cond_3
    const-string v1, "setHeartbeatInterval"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    const-string v0, "interval"

    invoke-virtual {p1, v0, v2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result p1

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/igexin/push/core/v;->a(ILjava/lang/String;)V

    goto/16 :goto_0

    :cond_4
    const-string v1, "setSocketTimeout"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    const-string v0, "timeout"

    invoke-virtual {p1, v0, v2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result p1

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/igexin/push/core/v;->b(ILjava/lang/String;)V

    goto/16 :goto_0

    :cond_5
    const-string v1, "sendFeedbackMessage"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v5, 0x1

    if-eqz v1, :cond_6

    sget v0, Lcom/igexin/push/core/d;->ac:I

    const/16 v1, 0xc8

    if-gt v0, v1, :cond_b

    invoke-virtual {p1, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "messageid"

    invoke-virtual {p1, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "actionid"

    invoke-virtual {p1, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ":"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    sget-object v3, Lcom/igexin/push/core/d;->ab:Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-nez v3, :cond_b

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    new-instance v6, Lcom/igexin/push/core/bean/PushTaskBean;

    invoke-direct {v6}, Lcom/igexin/push/core/bean/PushTaskBean;-><init>()V

    invoke-virtual {v6, v0}, Lcom/igexin/push/core/bean/PushTaskBean;->setTaskId(Ljava/lang/String;)V

    invoke-virtual {v6, v1}, Lcom/igexin/push/core/bean/PushTaskBean;->setMessageId(Ljava/lang/String;)V

    sget-object v0, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {v6, v0}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppid(Ljava/lang/String;)V

    sget-object v0, Lcom/igexin/push/core/d;->b:Ljava/lang/String;

    invoke-virtual {v6, v0}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppKey(Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual {v0, v6, p1}, Lcom/igexin/push/core/a/e;->b(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V

    sget p1, Lcom/igexin/push/core/d;->ac:I

    add-int/2addr p1, v5

    sput p1, Lcom/igexin/push/core/d;->ac:I

    sget-object p1, Lcom/igexin/push/core/d;->ab:Ljava/util/HashMap;

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {p1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_0

    :cond_6
    const-string v1, "turnOffPush"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_7

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/core/c;->g()V

    invoke-static {}, Lcom/igexin/assist/sdk/AssistPushManager;->getInstance()Lcom/igexin/assist/sdk/AssistPushManager;

    move-result-object p1

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p1, v0}, Lcom/igexin/assist/sdk/AssistPushManager;->turnOffPush(Landroid/content/Context;)V

    goto :goto_0

    :cond_7
    const-string v1, "bindAlias"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v4, "alias"

    if-eqz v1, :cond_8

    invoke-virtual {p1, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-array v1, v2, [Ljava/lang/Object;

    const-string v2, "PushController|onPushManagerMessage bindAlias..."

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p0, v0, p1}, Lcom/igexin/push/core/v;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_8
    const-string v1, "unbindAlias"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_9

    invoke-virtual {p1, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v3, "isSeft"

    invoke-virtual {p1, v3}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result p1

    new-array v2, v2, [Ljava/lang/Object;

    const-string v3, "PushController|onPushManagerMessage unbindAlias..."

    invoke-static {v3, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p0, v0, v1, p1}, Lcom/igexin/push/core/v;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_0

    :cond_9
    const-string v1, "sendApplinkFeedback"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_a

    const-string v0, "url"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/igexin/push/core/v;->a(Ljava/lang/String;)V

    goto :goto_0

    :cond_a
    const-string v1, "setHwBadgeNum"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_b

    const-string v0, "badgeNum"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result p1

    invoke-static {p1, v5}, Lcom/igexin/push/util/b;->a(IZ)Z

    :cond_b
    :goto_0
    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 4

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-virtual {v1}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v2

    const-string v3, "p"

    invoke-virtual {v1, v3}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    goto :goto_0

    :cond_1
    invoke-static {v2}, Lcom/igexin/push/util/a;->b(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_2

    const-string p1, "PushController|checkIsWhiteApplinkDomain is false, not feedback"

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p1, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_2
    new-instance p1, Lcom/igexin/push/core/bean/PushTaskBean;

    invoke-direct {p1}, Lcom/igexin/push/core/bean/PushTaskBean;-><init>()V

    const-string v2, "getuiapplinkup"

    invoke-virtual {p1, v2}, Lcom/igexin/push/core/bean/PushTaskBean;->setTaskId(Ljava/lang/String;)V

    invoke-virtual {p1, v1}, Lcom/igexin/push/core/bean/PushTaskBean;->setMessageId(Ljava/lang/String;)V

    sget-object v1, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppid(Ljava/lang/String;)V

    sget-object v1, Lcom/igexin/push/core/d;->b:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lcom/igexin/push/core/bean/PushTaskBean;->setAppKey(Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v1

    const-string v2, "20000"

    invoke-virtual {v1, p1, v2}, Lcom/igexin/push/core/a/e;->b(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V

    goto :goto_1

    :cond_3
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PushController|url "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " is invalid"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p1, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PushController|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_1
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object p1

    const-string v0, "10099"

    invoke-virtual {p1, p2, v0}, Lcom/igexin/push/core/r;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    const-string v1, "action"

    const-string v4, "set_tag"

    invoke-virtual {v0, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "id"

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "cid"

    sget-object v4, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "appid"

    sget-object v4, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "tags"

    const-string v4, "utf-8"

    invoke-static {p1, v4}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "sn"

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :try_start_2
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    sget-boolean p2, Lcom/igexin/push/core/d;->n:Z

    if-eqz p2, :cond_1

    move-wide v6, v2

    goto :goto_0

    :cond_1
    const-wide/16 v0, 0x0

    move-wide v6, v0

    :goto_0
    invoke-static {}, Lcom/igexin/push/core/b/e;->a()Lcom/igexin/push/core/b/e;

    move-result-object p2

    new-instance v0, Lcom/igexin/push/core/bean/h;

    const/4 v5, 0x2

    move-object v1, v0

    move-object v4, p1

    invoke-direct/range {v1 .. v7}, Lcom/igexin/push/core/bean/h;-><init>(JLjava/lang/String;BJ)V

    invoke-virtual {p2, v0}, Lcom/igexin/push/core/b/e;->a(Lcom/igexin/push/core/bean/h;)V

    new-instance p2, Lcom/igexin/push/d/c/b;

    invoke-direct {p2}, Lcom/igexin/push/d/c/b;-><init>()V

    invoke-virtual {p2}, Lcom/igexin/push/d/c/b;->b()V

    const-string v0, "17258000"

    iput-object v0, p2, Lcom/igexin/push/d/c/b;->d:Ljava/lang/String;

    iput-object p1, p2, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "C-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0, p2}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;)I

    const-string p1, "settag"

    const/4 p2, 0x0

    new-array p2, p2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :catch_1
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 6

    if-eqz p3, :cond_0

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object p1

    const-string p3, "10099"

    invoke-virtual {p1, p2, p3}, Lcom/igexin/push/core/r;->c(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/igexin/push/core/d;->O:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0x3e8

    cmp-long v2, v2, v4

    const/4 v3, 0x0

    if-lez v2, :cond_3

    new-instance v2, Ljava/text/SimpleDateFormat;

    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v4

    const-string v5, "yyyy-MM-dd"

    invoke-direct {v2, v5, v4}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;Ljava/util/Locale;)V

    new-instance v4, Ljava/util/Date;

    invoke-direct {v4, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v2, v4}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v2

    sget-object v4, Lcom/igexin/push/core/d;->N:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_1

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v4

    invoke-virtual {v4, v2}, Lcom/igexin/push/core/b/i;->f(Ljava/lang/String;)Z

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v2

    invoke-virtual {v2, v3}, Lcom/igexin/push/core/b/i;->a(I)Z

    :cond_1
    sget v2, Lcom/igexin/push/core/d;->P:I

    const/16 v4, 0x64

    if-ge v2, v4, :cond_2

    new-array v2, v3, [Ljava/lang/Object;

    const-string v3, "start unbindAlias ###"

    invoke-static {v3, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sput-wide v0, Lcom/igexin/push/core/d;->O:J

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    sget v1, Lcom/igexin/push/core/d;->P:I

    const/4 v2, 0x1

    add-int/2addr v1, v2

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/b/i;->a(I)Z

    invoke-virtual {p0, p1, p2, v2, p3}, Lcom/igexin/push/core/v;->a(Ljava/lang/String;Ljava/lang/String;ZZ)V

    goto :goto_0

    :cond_2
    new-array p1, v3, [Ljava/lang/Object;

    const-string p2, "PushController|unbindAlias times exceed"

    invoke-static {p2, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0

    :cond_3
    new-array p1, v3, [Ljava/lang/Object;

    const-string p2, "PushController|unbindAlias frequently called"

    invoke-static {p2, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;ZZ)V
    .locals 8

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object p1

    const-string p3, "10099"

    invoke-virtual {p1, p2, p3}, Lcom/igexin/push/core/r;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    if-eqz p3, :cond_1

    const-string v3, "unbind_alias"

    goto :goto_0

    :cond_1
    const-string v3, "bind_alias"
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    :goto_0
    move-object v7, v3

    if-eqz p3, :cond_2

    const/16 v3, 0x8

    goto :goto_1

    :cond_2
    const/4 v3, 0x7

    :goto_1
    move v4, v3

    :try_start_1
    const-string v3, "action"

    invoke-virtual {v0, v3, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "id"

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "cid"

    sget-object v5, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "appid"

    sget-object v5, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {v0, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "alias"

    invoke-virtual {v0, v3, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "sn"

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    if-eqz p3, :cond_3

    const-string p1, "is_self"

    invoke-virtual {v0, p1, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_3
    :try_start_2
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    sget-boolean p2, Lcom/igexin/push/core/d;->n:Z

    if-eqz p2, :cond_4

    move-wide v5, v1

    goto :goto_2

    :cond_4
    const-wide/16 p2, 0x0

    move-wide v5, p2

    :goto_2
    invoke-static {}, Lcom/igexin/push/core/b/e;->a()Lcom/igexin/push/core/b/e;

    move-result-object p2

    new-instance p3, Lcom/igexin/push/core/bean/h;

    move-object v0, p3

    move-object v3, p1

    invoke-direct/range {v0 .. v6}, Lcom/igexin/push/core/bean/h;-><init>(JLjava/lang/String;BJ)V

    invoke-virtual {p2, p3}, Lcom/igexin/push/core/b/e;->a(Lcom/igexin/push/core/bean/h;)V

    new-instance p2, Lcom/igexin/push/d/c/b;

    invoke-direct {p2}, Lcom/igexin/push/d/c/b;-><init>()V

    invoke-virtual {p2}, Lcom/igexin/push/d/c/b;->b()V

    const-string p3, "17258000"

    iput-object p3, p2, Lcom/igexin/push/d/c/b;->d:Ljava/lang/String;

    iput-object p1, p2, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p3

    invoke-virtual {p3}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object p3

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "C-"

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-virtual {p3, p4, p2}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;)I

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, " = "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x0

    new-array p2, p2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :catch_1
    return-void
.end method

.method public a(Ljava/lang/String;[B)V
    .locals 13

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    if-eqz v0, :cond_0

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    const/4 v10, 0x0

    :try_start_0
    const-string v1, "action"

    const-string v2, "sendmessage"

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "id"

    invoke-static {v8, v9}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "cid"

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "appid"

    sget-object v2, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "taskid"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "extraData"

    invoke-static {p2, v10}, Lcom/igexin/push/util/d;->b([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/igexin/push/core/b/e;->a()Lcom/igexin/push/core/b/e;

    move-result-object v11

    new-instance v12, Lcom/igexin/push/core/bean/h;

    const/4 v5, 0x6

    move-object v1, v12

    move-wide v2, v8

    move-object v4, v0

    move-wide v6, v8

    invoke-direct/range {v1 .. v7}, Lcom/igexin/push/core/bean/h;-><init>(JLjava/lang/String;BJ)V

    invoke-virtual {v11, v12}, Lcom/igexin/push/core/b/e;->a(Lcom/igexin/push/core/bean/h;)V

    new-instance v1, Lcom/igexin/push/d/c/b;

    invoke-direct {v1}, Lcom/igexin/push/d/c/b;-><init>()V

    invoke-virtual {v1}, Lcom/igexin/push/d/c/b;->b()V

    long-to-int v2, v8

    iput v2, v1, Lcom/igexin/push/d/c/b;->a:I

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    iput-object v2, v1, Lcom/igexin/push/d/c/b;->d:Ljava/lang/String;

    iput-object v0, v1, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    iput-object p2, v1, Lcom/igexin/push/d/c/b;->f:Ljava/lang/Object;

    sget-object p2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    iput-object p2, v1, Lcom/igexin/push/d/c/b;->g:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p2

    invoke-virtual {p2}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object p2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "C-"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2, v1}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;)I

    if-eqz p1, :cond_0

    const-string p2, "4T5@S_"

    invoke-virtual {p1, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "PushController sending lbs report message : "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v10, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "PushController|"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v10, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public b(ILjava/lang/String;)V
    .locals 0

    sput p1, Lcom/igexin/push/config/j;->e:I

    invoke-static {}, Lcom/igexin/push/config/a;->a()Lcom/igexin/push/config/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/push/config/a;->d()V

    return-void
.end method

.method public b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/igexin/push/core/d;->O:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0x3e8

    cmp-long v2, v2, v4

    const/4 v3, 0x0

    if-lez v2, :cond_2

    new-instance v2, Ljava/text/SimpleDateFormat;

    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v4

    const-string v5, "yyyy-MM-dd"

    invoke-direct {v2, v5, v4}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;Ljava/util/Locale;)V

    new-instance v4, Ljava/util/Date;

    invoke-direct {v4, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v2, v4}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v2

    sget-object v4, Lcom/igexin/push/core/d;->N:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_0

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v4

    invoke-virtual {v4, v2}, Lcom/igexin/push/core/b/i;->f(Ljava/lang/String;)Z

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v2

    invoke-virtual {v2, v3}, Lcom/igexin/push/core/b/i;->a(I)Z

    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "-> CoreRuntimeInfo.opAliasTimes:"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v4, Lcom/igexin/push/core/d;->P:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v4, v3, [Ljava/lang/Object;

    invoke-static {v2, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget v2, Lcom/igexin/push/core/d;->P:I

    const/16 v4, 0x64

    if-ge v2, v4, :cond_1

    new-array v2, v3, [Ljava/lang/Object;

    const-string v4, "start bindAlias ###"

    invoke-static {v4, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sput-wide v0, Lcom/igexin/push/core/d;->O:J

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    sget v1, Lcom/igexin/push/core/d;->P:I

    const/4 v2, 0x1

    add-int/2addr v1, v2

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/b/i;->a(I)Z

    invoke-virtual {p0, p1, p2, v3, v2}, Lcom/igexin/push/core/v;->a(Ljava/lang/String;Ljava/lang/String;ZZ)V

    goto :goto_0

    :cond_1
    new-array p1, v3, [Ljava/lang/Object;

    const-string p2, "PushController|bindAlias times exceed"

    invoke-static {p2, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0

    :cond_2
    new-array p1, v3, [Ljava/lang/Object;

    const-string p2, "PushController|bindAlias frequently called"

    invoke-static {p2, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    return-void
.end method
