.class public Lcom/huawei/hms/support/api/push/PushReceiver$a;
.super Ljava/lang/Object;
.source "PushReceiver.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/huawei/hms/support/api/push/PushReceiver;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# instance fields
.field public a:Landroid/content/Context;

.field public b:Landroid/content/Intent;


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    .line 2
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 3
    iput-object p1, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->a:Landroid/content/Context;

    .line 4
    iput-object p2, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->b:Landroid/content/Intent;

    return-void
.end method

.method public synthetic constructor <init>(Landroid/content/Context;Landroid/content/Intent;Lcom/huawei/hms/push/f;)V
    .locals 0

    .line 1
    invoke-direct {p0, p1, p2}, Lcom/huawei/hms/support/api/push/PushReceiver$a;-><init>(Landroid/content/Context;Landroid/content/Intent;)V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 10

    .line 1
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.huawei.push.action.MESSAGING_EVENT"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 2
    iget-object v1, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->b:Landroid/content/Intent;

    invoke-virtual {v1}, Landroid/content/Intent;->getPackage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 3
    iget-object v1, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->b:Landroid/content/Intent;

    invoke-static {v1}, Lcom/huawei/hms/support/api/push/PushReceiver;->a(Landroid/content/Intent;)Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, ""

    const-string v3, "moduleName"

    .line 4
    invoke-static {v1, v3, v2}, Lcom/huawei/hms/push/utils/JsonUtil;->getString(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    const-string v5, "msgType"

    .line 5
    invoke-static {v1, v5, v4}, Lcom/huawei/hms/push/utils/JsonUtil;->getInt(Lorg/json/JSONObject;Ljava/lang/String;I)I

    move-result v5

    const-string v6, "status"

    .line 6
    invoke-static {v1, v6, v4}, Lcom/huawei/hms/push/utils/JsonUtil;->getInt(Lorg/json/JSONObject;Ljava/lang/String;I)I

    move-result v4

    .line 7
    sget-object v6, Lcom/huawei/hms/aaid/constant/ErrorEnum;->SUCCESS:Lcom/huawei/hms/aaid/constant/ErrorEnum;

    invoke-virtual {v6}, Lcom/huawei/hms/aaid/constant/ErrorEnum;->getInternalCode()I

    move-result v6

    if-eq v6, v4, :cond_0

    .line 8
    sget-object v4, Lcom/huawei/hms/aaid/constant/ErrorEnum;->ERROR_APP_SERVER_NOT_ONLINE:Lcom/huawei/hms/aaid/constant/ErrorEnum;

    invoke-virtual {v4}, Lcom/huawei/hms/aaid/constant/ErrorEnum;->getInternalCode()I

    move-result v4

    .line 9
    :cond_0
    new-instance v6, Landroid/os/Bundle;

    invoke-direct {v6}, Landroid/os/Bundle;-><init>()V

    const-string v7, "Push"

    .line 10
    invoke-virtual {v7, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v7, "message_id"

    const-string v8, "message_type"

    const/4 v9, 0x1

    if-eqz v3, :cond_1

    if-ne v5, v9, :cond_1

    const-string v3, "delivery"

    .line 11
    invoke-virtual {v6, v8, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "msgId"

    .line 12
    invoke-static {v1, v3, v2}, Lcom/huawei/hms/push/utils/JsonUtil;->getString(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v6, v7, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "error"

    .line 13
    invoke-virtual {v6, v3, v4}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string v3, "transactionId"

    .line 14
    invoke-static {v1, v3, v2}, Lcom/huawei/hms/push/utils/JsonUtil;->getString(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "transaction_id"

    invoke-virtual {v6, v2, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 15
    :cond_1
    iget-object v1, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->b:Landroid/content/Intent;

    invoke-virtual {v1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 16
    iget-object v1, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->b:Landroid/content/Intent;

    invoke-virtual {v1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v1

    invoke-virtual {v6, v1}, Landroid/os/Bundle;->putAll(Landroid/os/Bundle;)V

    :cond_2
    const-string v1, "received_message"

    .line 17
    invoke-virtual {v6, v8, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 18
    iget-object v1, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->b:Landroid/content/Intent;

    const-string v2, "msgIdStr"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v6, v7, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 19
    iget-object v1, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->b:Landroid/content/Intent;

    const-string v2, "msg_data"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->getByteArrayExtra(Ljava/lang/String;)[B

    move-result-object v1

    const-string v2, "message_body"

    invoke-virtual {v6, v2, v1}, Landroid/os/Bundle;->putByteArray(Ljava/lang/String;[B)V

    .line 20
    iget-object v1, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->b:Landroid/content/Intent;

    const-string v2, "device_token"

    .line 21
    invoke-virtual {v1, v2}, Landroid/content/Intent;->getByteArrayExtra(Ljava/lang/String;)[B

    move-result-object v1

    invoke-static {v1}, Lcom/huawei/hms/push/v;->a([B)Ljava/lang/String;

    move-result-object v1

    .line 22
    invoke-virtual {v6, v2, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "inputType"

    .line 23
    invoke-virtual {v6, v1, v9}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    .line 24
    iget-object v1, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->b:Landroid/content/Intent;

    const-string v2, "message_proxy_type"

    .line 25
    invoke-virtual {v1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 26
    invoke-virtual {v6, v2, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 27
    :goto_0
    new-instance v1, Lcom/huawei/hms/push/h;

    invoke-direct {v1}, Lcom/huawei/hms/push/h;-><init>()V

    iget-object v2, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->a:Landroid/content/Context;

    invoke-virtual {v1, v2, v6, v0}, Lcom/huawei/hms/push/h;->a(Landroid/content/Context;Landroid/os/Bundle;Landroid/content/Intent;)Z

    move-result v0

    const-string v1, "PushReceiver"

    const-string v2, "receive "

    if-eqz v0, :cond_3

    .line 28
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->b:Landroid/content/Intent;

    invoke-virtual {v2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " and start service success"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 29
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/huawei/hms/support/api/push/PushReceiver$a;->b:Landroid/content/Intent;

    invoke-virtual {v2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " and start service failed"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method
