.class public Lcom/igexin/sdk/OppoAppPushService;
.super Lcom/heytap/msp/push/service/DataMessageCallbackService;


# static fields
.field public static final TAG:Ljava/lang/String; = "Assist_OP_ApPs"


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/heytap/msp/push/service/DataMessageCallbackService;-><init>()V

    return-void
.end method


# virtual methods
.method public processMessage(Landroid/content/Context;Lcom/heytap/msp/push/mode/DataMessage;)V
    .locals 3

    const-string v0, "Assist_OP_ApPs"

    :try_start_0
    const-string v1, "processMessage receive app meaasge ..."

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "processMessage receive app meaasge:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    new-instance v1, Lcom/igexin/assist/MessageBean;

    const-string v2, "payload"

    invoke-virtual {p2}, Lcom/heytap/msp/push/mode/DataMessage;->getContent()Ljava/lang/String;

    move-result-object p2

    invoke-direct {v1, p1, v2, p2}, Lcom/igexin/assist/MessageBean;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    const-string p2, "OP_"

    invoke-virtual {v1, p2}, Lcom/igexin/assist/MessageBean;->setMessageSource(Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object p2

    invoke-virtual {p2, v1}, Lcom/igexin/assist/action/MessageManger;->addMessage(Lcom/igexin/assist/MessageBean;)V

    :cond_0
    invoke-static {p1}, Lcom/igexin/assist/util/AssistUtils;->startGetuiService(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method
