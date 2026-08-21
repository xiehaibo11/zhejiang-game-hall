.class public Lcom/igexin/sdk/FlymePushReceiver;
.super Lcom/meizu/cloud/pushsdk/MzPushMessageReceiver;


# static fields
.field public static final CONTENT:Ljava/lang/String; = "content"

.field public static final MSG_KEY_PAYLOAD:Ljava/lang/String; = "gt_payload"

.field public static final MZ_STATUS_BAR_SMALL_ICON:Ljava/lang/String; = "mz_push_notification_small_icon"

.field public static final TAG:Ljava/lang/String; = "Assist_MZ"


# instance fields
.field private a:Landroid/content/Context;

.field private b:I


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/meizu/cloud/pushsdk/MzPushMessageReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onMessage(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 2

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    :try_start_0
    const-string v0, "Assist_MZ"

    const-string v1, "onMessage intent msg..."

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v0, "content"

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/assist/MessageBean;

    const-string v1, "payload"

    invoke-direct {v0, p1, v1, p2}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    const-string p1, "MZ_"

    invoke-virtual {v0, p1}, Lcom/igexin/assist/MessageBean;->setMessageSource(Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public onMessage(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    :try_start_0
    const-string v0, "Assist_MZ"

    const-string v1, "onMessage receive msg ..."

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/assist/MessageBean;

    const-string v1, "payload"

    invoke-direct {v0, p1, v1, p2}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    const-string p1, "MZ_"

    invoke-virtual {v0, p1}, Lcom/igexin/assist/MessageBean;->setMessageSource(Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public onNotificationArrived(Landroid/content/Context;Lcom/meizu/cloud/pushsdk/handler/MzPushMessage;)V
    .locals 0

    const-string p1, "Assist_MZ"

    const-string p2, "onNotificationArrived receive msg ..."

    invoke-static {p1, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public onNotificationClicked(Landroid/content/Context;Lcom/meizu/cloud/pushsdk/handler/MzPushMessage;)V
    .locals 3

    const-string v0, "gt_payload"

    :try_start_0
    const-string v1, "Assist_MZ"

    const-string v2, "onNotificationClicked receive msg ..."

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {p2}, Lcom/meizu/cloud/pushsdk/handler/MzPushMessage;->getSelfDefineContentString()Ljava/lang/String;

    move-result-object p2

    if-eqz p1, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_1

    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_0
    :try_start_2
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    new-instance v0, Lcom/igexin/assist/MessageBean;

    const-string v1, "payload"

    invoke-direct {v0, p1, v1, p2}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    const-string p2, "MZ_"

    invoke-virtual {v0, p2}, Lcom/igexin/assist/MessageBean;->setMessageSource(Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object p2

    invoke-virtual {p2, v0}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V

    :cond_1
    invoke-static {p1}, Lcom/igexin/assist/util/AssistUtils;->startGetuiService(Landroid/content/Context;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    return-void
.end method

.method public onPushStatus(Landroid/content/Context;Lcom/meizu/cloud/pushsdk/platform/message/PushSwitchStatus;)V
    .locals 0

    return-void
.end method

.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/sdk/FlymePushReceiver;->a:Landroid/content/Context;

    invoke-super {p0, p1, p2}, Lcom/meizu/cloud/pushsdk/MzPushMessageReceiver;->onReceive(Landroid/content/Context;Landroid/content/Intent;)V

    return-void
.end method

.method public onRegister(Landroid/content/Context;Ljava/lang/String;)V
    .locals 4

    :try_start_0
    const-string v0, "Assist_MZ"

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onRegister :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/assist/MessageBean;

    const-string v1, "token"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "MZ_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {v0, p1, v1, p2}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public onRegisterStatus(Landroid/content/Context;Lcom/meizu/cloud/pushsdk/platform/message/RegisterStatus;)V
    .locals 4

    :try_start_0
    const-string v0, "Assist_MZ"

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onRegisterStatus :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {p2}, Lcom/meizu/cloud/pushsdk/platform/message/RegisterStatus;->getPushId()Ljava/lang/String;

    move-result-object p2

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/assist/MessageBean;

    const-string v1, "token"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "MZ_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {v0, p1, v1, p2}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public onSubAliasStatus(Landroid/content/Context;Lcom/meizu/cloud/pushsdk/platform/message/SubAliasStatus;)V
    .locals 0

    return-void
.end method

.method public onSubTagsStatus(Landroid/content/Context;Lcom/meizu/cloud/pushsdk/platform/message/SubTagsStatus;)V
    .locals 0

    return-void
.end method

.method public onUnRegister(Landroid/content/Context;Z)V
    .locals 0

    return-void
.end method

.method public onUnRegisterStatus(Landroid/content/Context;Lcom/meizu/cloud/pushsdk/platform/message/UnRegisterStatus;)V
    .locals 0

    return-void
.end method

.method public onUpdateNotificationBuilder(Lcom/meizu/cloud/pushsdk/notification/PushNotificationBuilder;)V
    .locals 4

    :try_start_0
    iget v0, p0, Lcom/igexin/sdk/FlymePushReceiver;->b:I

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/igexin/sdk/FlymePushReceiver;->b:I

    :goto_0
    invoke-virtual {p1, v0}, Lcom/meizu/cloud/pushsdk/notification/PushNotificationBuilder;->setStatusBarIcon(I)V

    goto :goto_1

    :cond_0
    iget-object v0, p0, Lcom/igexin/sdk/FlymePushReceiver;->a:Landroid/content/Context;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/igexin/sdk/FlymePushReceiver;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const-string v1, "mz_push_notification_small_icon"

    const-string v2, "drawable"

    iget-object v3, p0, Lcom/igexin/sdk/FlymePushReceiver;->a:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v2, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/igexin/sdk/FlymePushReceiver;->b:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_1

    goto :goto_0

    :catchall_0
    :cond_1
    :goto_1
    return-void
.end method
