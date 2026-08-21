.class public Lcom/igexin/sdk/HmsPushMessageService;
.super Lcom/huawei/hms/push/HmsMessageService;


# static fields
.field public static final TAG:Ljava/lang/String; = "Assist_HW"


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/huawei/hms/push/HmsMessageService;-><init>()V

    return-void
.end method


# virtual methods
.method public onMessageReceived(Lcom/huawei/hms/push/RemoteMessage;)V
    .locals 3

    if-nez p1, :cond_0

    :try_start_0
    const-string p1, "Assist_HW"

    const-string v0, "Received message entity is null!"

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/huawei/hms/push/RemoteMessage;->getData()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    new-instance v0, Lcom/igexin/assist/MessageBean;

    invoke-virtual {p0}, Lcom/igexin/sdk/HmsPushMessageService;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "payload"

    invoke-virtual {p1}, Lcom/huawei/hms/push/RemoteMessage;->getData()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, v1, v2, p1}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    const-string p1, "HW_"

    invoke-virtual {v0, p1}, Lcom/igexin/assist/MessageBean;->setMessageSource(Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public onNewToken(Ljava/lang/String;)V
    .locals 5

    :try_start_0
    const-string v0, "Assist_HW"

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onNewToken :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/assist/MessageBean;

    invoke-virtual {p0}, Lcom/igexin/sdk/HmsPushMessageService;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "token"

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "HW_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, v1, v2, p1}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public onNewToken(Ljava/lang/String;Landroid/os/Bundle;)V
    .locals 4

    :try_start_0
    const-string p2, "Assist_HW"

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onNewTokenAndBundle :"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_0

    new-instance p2, Lcom/igexin/assist/MessageBean;

    invoke-virtual {p0}, Lcom/igexin/sdk/HmsPushMessageService;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "token"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "HW_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, v0, v1, p1}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
