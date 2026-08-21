.class public Lcom/bianfeng/privategetui/YmnGetuiIntentService;
.super Lcom/igexin/sdk/GTIntentService;
.source "YmnGetuiIntentService.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "GetuiSdkDemo"


# instance fields
.field private params:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 45
    invoke-direct {p0}, Lcom/igexin/sdk/GTIntentService;-><init>()V

    const-string v0, ""

    .line 38
    iput-object v0, p0, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->params:Ljava/lang/String;

    return-void
.end method

.method private bindAliasResult(Lcom/igexin/sdk/message/BindAliasCmdMessage;)V
    .locals 2

    .line 212
    invoke-virtual {p1}, Lcom/igexin/sdk/message/BindAliasCmdMessage;->getSn()Ljava/lang/String;

    move-result-object v0

    .line 213
    invoke-virtual {p1}, Lcom/igexin/sdk/message/BindAliasCmdMessage;->getCode()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    if-nez p1, :cond_0

    const/16 p1, 0x5de

    .line 215
    invoke-direct {p0, v0, p1}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->sendMessage(Ljava/lang/String;I)V

    goto :goto_0

    .line 217
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/16 v0, 0x5df

    invoke-direct {p0, p1, v0}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->sendMessage(Ljava/lang/String;I)V

    :goto_0
    return-void
.end method

.method private feedbackResult(Lcom/igexin/sdk/message/FeedbackCmdMessage;)V
    .locals 0

    .line 236
    invoke-virtual {p1}, Lcom/igexin/sdk/message/FeedbackCmdMessage;->getAppid()Ljava/lang/String;

    .line 237
    invoke-virtual {p1}, Lcom/igexin/sdk/message/FeedbackCmdMessage;->getTaskId()Ljava/lang/String;

    .line 238
    invoke-virtual {p1}, Lcom/igexin/sdk/message/FeedbackCmdMessage;->getActionId()Ljava/lang/String;

    .line 239
    invoke-virtual {p1}, Lcom/igexin/sdk/message/FeedbackCmdMessage;->getResult()Ljava/lang/String;

    .line 240
    invoke-virtual {p1}, Lcom/igexin/sdk/message/FeedbackCmdMessage;->getTimeStamp()J

    .line 241
    invoke-virtual {p1}, Lcom/igexin/sdk/message/FeedbackCmdMessage;->getClientId()Ljava/lang/String;

    return-void
.end method

.method public static getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    .line 263
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    .line 264
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v2, 0x80

    invoke-virtual {v1, p0, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    .line 266
    iget-object v1, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    invoke-virtual {v1, p1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 267
    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    invoke-virtual {p0, p1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p0

    goto :goto_0

    :cond_0
    return-object v0

    :catch_0
    move-exception p0

    .line 270
    invoke-virtual {p0}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private sendMessage(Ljava/lang/String;I)V
    .locals 1

    .line 248
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 249
    iput p2, v0, Landroid/os/Message;->what:I

    .line 250
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 251
    invoke-static {v0}, Lcom/bianfeng/privategetui/YmnGetuiHandler;->setMsg(Landroid/os/Message;)V

    return-void
.end method

.method private setTagResult(Lcom/igexin/sdk/message/SetTagCmdMessage;)V
    .locals 2

    .line 202
    invoke-virtual {p1}, Lcom/igexin/sdk/message/SetTagCmdMessage;->getSn()Ljava/lang/String;

    move-result-object v0

    .line 203
    invoke-virtual {p1}, Lcom/igexin/sdk/message/SetTagCmdMessage;->getCode()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    if-nez p1, :cond_0

    const/16 p1, 0x5ea

    .line 205
    invoke-direct {p0, v0, p1}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->sendMessage(Ljava/lang/String;I)V

    goto :goto_0

    .line 207
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/16 v0, 0x5eb

    invoke-direct {p0, p1, v0}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->sendMessage(Ljava/lang/String;I)V

    :goto_0
    return-void
.end method

.method private unbindAliasResult(Lcom/igexin/sdk/message/UnBindAliasCmdMessage;)V
    .locals 2

    .line 224
    invoke-virtual {p1}, Lcom/igexin/sdk/message/UnBindAliasCmdMessage;->getSn()Ljava/lang/String;

    move-result-object v0

    .line 225
    invoke-virtual {p1}, Lcom/igexin/sdk/message/UnBindAliasCmdMessage;->getCode()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    if-nez p1, :cond_0

    const/16 p1, 0x5e0

    .line 227
    invoke-direct {p0, v0, p1}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->sendMessage(Ljava/lang/String;I)V

    goto :goto_0

    .line 229
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/16 v0, 0x5e1

    invoke-direct {p0, p1, v0}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->sendMessage(Ljava/lang/String;I)V

    :goto_0
    return-void
.end method


# virtual methods
.method public onNotificationMessageArrived(Landroid/content/Context;Lcom/igexin/sdk/message/GTNotificationMessage;)V
    .locals 8

    if-nez p2, :cond_0

    return-void

    .line 184
    :cond_0
    new-instance p1, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getAppid()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getTaskId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getMessageId()Ljava/lang/String;

    move-result-object v3

    .line 185
    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getPkgName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getClientId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getTitle()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getContent()Ljava/lang/String;

    move-result-object v7

    move-object v0, p1

    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 186
    invoke-virtual {p1}, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->putMsgArrived(Ljava/lang/String;)V

    .line 187
    invoke-virtual {p1}, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;->toString()Ljava/lang/String;

    move-result-object p1

    const/16 p2, 0x5e8

    invoke-direct {p0, p1, p2}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->sendMessage(Ljava/lang/String;I)V

    return-void
.end method

.method public onNotificationMessageClicked(Landroid/content/Context;Lcom/igexin/sdk/message/GTNotificationMessage;)V
    .locals 8

    if-nez p2, :cond_0

    return-void

    .line 195
    :cond_0
    new-instance p1, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getAppid()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getTaskId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getMessageId()Ljava/lang/String;

    move-result-object v3

    .line 196
    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getPkgName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getClientId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getTitle()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTNotificationMessage;->getContent()Ljava/lang/String;

    move-result-object v7

    move-object v0, p1

    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 197
    invoke-virtual {p1}, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->putMsgClick(Ljava/lang/String;)V

    .line 198
    invoke-virtual {p1}, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;->toString()Ljava/lang/String;

    move-result-object p1

    const/16 p2, 0x5e9

    invoke-direct {p0, p1, p2}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->sendMessage(Ljava/lang/String;I)V

    return-void
.end method

.method public onReceiveClientId(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 147
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onReceiveClientId -> clientid = "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "GetuiSdkDemo"

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-string p1, "getClientid"

    const-string v0, "true"

    .line 149
    invoke-static {p1, v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 150
    invoke-static {p2}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->putCid(Ljava/lang/String;)V

    return-void
.end method

.method public onReceiveCommandResult(Landroid/content/Context;Lcom/igexin/sdk/message/GTCmdMessage;)V
    .locals 1

    .line 162
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onReceiveCommandResult -> "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "GetuiSdkDemo"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-nez p2, :cond_0

    return-void

    .line 166
    :cond_0
    invoke-virtual {p2}, Lcom/igexin/sdk/message/GTCmdMessage;->getAction()I

    move-result p1

    const/16 v0, 0x2719

    if-ne p1, v0, :cond_1

    .line 168
    check-cast p2, Lcom/igexin/sdk/message/SetTagCmdMessage;

    invoke-direct {p0, p2}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->setTagResult(Lcom/igexin/sdk/message/SetTagCmdMessage;)V

    goto :goto_0

    :cond_1
    const/16 v0, 0x271a

    if-ne p1, v0, :cond_2

    .line 170
    check-cast p2, Lcom/igexin/sdk/message/BindAliasCmdMessage;

    invoke-direct {p0, p2}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->bindAliasResult(Lcom/igexin/sdk/message/BindAliasCmdMessage;)V

    goto :goto_0

    :cond_2
    const/16 v0, 0x271b

    if-ne p1, v0, :cond_3

    .line 172
    check-cast p2, Lcom/igexin/sdk/message/UnBindAliasCmdMessage;

    invoke-direct {p0, p2}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->unbindAliasResult(Lcom/igexin/sdk/message/UnBindAliasCmdMessage;)V

    goto :goto_0

    :cond_3
    const/16 v0, 0x2716

    if-ne p1, v0, :cond_4

    .line 174
    check-cast p2, Lcom/igexin/sdk/message/FeedbackCmdMessage;

    invoke-direct {p0, p2}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->feedbackResult(Lcom/igexin/sdk/message/FeedbackCmdMessage;)V

    :cond_4
    :goto_0
    return-void
.end method

.method public onReceiveDeviceToken(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 256
    invoke-super {p0, p1, p2}, Lcom/igexin/sdk/GTIntentService;->onReceiveDeviceToken(Landroid/content/Context;Ljava/lang/String;)V

    .line 257
    invoke-static {p2}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->putToken(Ljava/lang/String;)V

    return-void
.end method

.method public onReceiveMessageData(Landroid/content/Context;Lcom/igexin/sdk/message/GTTransmitMessage;)V
    .locals 18

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    const-string v2, "onResume"

    const-string v3, "content"

    const-string v4, "title"

    const-string v5, "online_display"

    const-string v6, "key"

    const-string v7, "badgenumber"

    const-string v8, "params"

    const-string v9, "ymnsdk"

    .line 56
    invoke-virtual/range {p2 .. p2}, Lcom/igexin/sdk/message/GTTransmitMessage;->getAppid()Ljava/lang/String;

    move-result-object v10

    .line 57
    invoke-virtual/range {p2 .. p2}, Lcom/igexin/sdk/message/GTTransmitMessage;->getTaskId()Ljava/lang/String;

    move-result-object v11

    .line 58
    invoke-virtual/range {p2 .. p2}, Lcom/igexin/sdk/message/GTTransmitMessage;->getMessageId()Ljava/lang/String;

    move-result-object v12

    .line 61
    invoke-virtual/range {p2 .. p2}, Lcom/igexin/sdk/message/GTTransmitMessage;->getPayload()[B

    move-result-object v13

    .line 62
    invoke-virtual/range {p2 .. p2}, Lcom/igexin/sdk/message/GTTransmitMessage;->getPkgName()Ljava/lang/String;

    move-result-object v14

    .line 63
    invoke-virtual/range {p2 .. p2}, Lcom/igexin/sdk/message/GTTransmitMessage;->getClientId()Ljava/lang/String;

    move-result-object v15

    move-object/from16 v16, v7

    .line 66
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v7

    move-object/from16 v17, v2

    const v2, 0x15f91

    invoke-virtual {v7, v0, v11, v12, v2}, Lcom/igexin/sdk/PushManager;->sendFeedbackMessage(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)Z

    move-result v2

    .line 67
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "call sendFeedbackMessage = "

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v2, :cond_0

    const-string v0, "success"

    goto :goto_0

    :cond_0
    const-string v0, "failed"

    :goto_0
    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "GetuiSdkDemo"

    invoke-static {v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 69
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "onReceiveMessageData -> appid = "

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "\ntaskid = "

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "\nmessageid = "

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "\npkg = "

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "\ncid = "

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-nez v13, :cond_1

    const-string v0, "receiver payload = null"

    .line 72
    invoke-static {v2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_4

    .line 74
    :cond_1
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v13}, Ljava/lang/String;-><init>([B)V

    .line 75
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "receiver payload = "

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 77
    :try_start_0
    new-instance v7, Lorg/json/JSONObject;

    invoke-direct {v7, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 78
    invoke-virtual {v7, v6}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 80
    invoke-virtual {v7, v6}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v6, v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 82
    :cond_2
    invoke-virtual {v7, v5}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    const/4 v6, 0x0

    const/4 v10, 0x1

    if-eqz v0, :cond_3

    .line 84
    invoke-virtual {v7, v5}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_3

    move v0, v6

    goto :goto_1

    :cond_3
    move v0, v10

    .line 93
    :goto_1
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "online_display is "

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v9, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 94
    invoke-virtual {v7, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_4

    .line 96
    invoke-virtual {v7, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    goto :goto_2

    :cond_4
    const-string v4, "\u6807\u9898"

    .line 98
    :goto_2
    :try_start_1
    invoke-virtual {v7, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_5

    .line 100
    invoke-virtual {v7, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_3

    :cond_5
    const-string v3, "\u5185\u5bb9"

    .line 102
    :goto_3
    :try_start_2
    invoke-virtual {v7, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_6

    .line 104
    invoke-virtual {v7, v8}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v5

    invoke-virtual {v5}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v5}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 105
    invoke-virtual {v7, v8}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v5

    invoke-virtual {v5}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v5

    iput-object v5, v1, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->params:Ljava/lang/String;

    :cond_6
    const-string v5, "offline"

    .line 107
    invoke-static {v5}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->read(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 108
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "offline is "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 109
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "onReceiveMessageData pkgname is "

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v9, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 110
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "online_display2 is "

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v9, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 111
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "YmnGetuiSharedPreferencesUtils.read(\"onResume\") is "

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static/range {v17 .. v17}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->read(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v9, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    if-nez v0, :cond_7

    .line 112
    invoke-static/range {v17 .. v17}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->read(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v5, "false"

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 113
    :cond_7
    iget-object v0, v1, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->params:Ljava/lang/String;

    move-object/from16 v5, p1

    invoke-static {v5, v14, v4, v3, v0}, Lcom/bianfeng/privategetui/PushNotification;->showLoacl(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 116
    invoke-static/range {v16 .. v16}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->read(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 117
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_8

    .line 118
    invoke-static/range {v16 .. v16}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->read(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v6
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :cond_8
    add-int/2addr v6, v10

    .line 122
    :try_start_3
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v3, "PUSH_APP_PACKAGENAME"

    .line 123
    invoke-static {v5, v3}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "package"

    .line 124
    invoke-virtual {v0, v4, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "PUSH_APP_MAIN_ACTIVITY"

    .line 125
    invoke-static {v5, v3}, Lcom/bianfeng/privategetui/YmnGetuiIntentService;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "class"

    .line 126
    invoke-virtual {v0, v4, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    move-object/from16 v3, v16

    .line 127
    invoke-virtual {v0, v3, v6}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    .line 128
    invoke-virtual/range {p1 .. p1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v4

    const-string v5, "content://com.huawei.android.launcher.settings/badge/"

    invoke-static {v5}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v5

    const-string v7, "change_badge"

    const/4 v8, 0x0

    invoke-virtual {v4, v5, v7, v8, v0}, Landroid/content/ContentResolver;->call(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;

    .line 129
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, ""

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_4

    :catch_0
    move-exception v0

    .line 131
    :try_start_4
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_4

    :catch_1
    move-exception v0

    .line 136
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_9
    :goto_4
    const-string v0, "----------------------------------------------------------------------------------------------"

    .line 142
    invoke-static {v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public onReceiveOnlineState(Landroid/content/Context;Z)V
    .locals 1

    .line 156
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onReceiveOnlineState -> "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz p2, :cond_0

    const-string v0, "online"

    goto :goto_0

    :cond_0
    const-string v0, "offline"

    :goto_0
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "GetuiSdkDemo"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 157
    invoke-static {p2}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->putCidState(Z)V

    return-void
.end method

.method public onReceiveServicePid(Landroid/content/Context;I)V
    .locals 1

    .line 50
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onReceiveServicePid -> "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "GetuiSdkDemo"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 51
    invoke-static {p2}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->putPid(I)V

    return-void
.end method
