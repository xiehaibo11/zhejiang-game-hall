.class public Lcom/heytap/mcssdk/e/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/heytap/mcssdk/e/c;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Lcom/heytap/mcssdk/c/b;Lcom/heytap/mcssdk/PushService;)V
    .locals 2

    if-nez p1, :cond_0

    const-string p1, "message is null , please check param of parseCommandMessage(2)"

    :goto_0
    invoke-static {p1}, Lcom/heytap/mcssdk/utils/d;->e(Ljava/lang/String;)V

    return-void

    :cond_0
    if-nez p2, :cond_1

    const-string p1, "pushService is null , please check param of parseCommandMessage(2)"

    goto :goto_0

    :cond_1
    invoke-virtual {p2}, Lcom/heytap/mcssdk/PushService;->getPushCallback()Lcom/heytap/msp/push/callback/ICallBackResultService;

    move-result-object v0

    if-nez v0, :cond_2

    const-string p1, "pushService.getPushCallback() is null , please check param of parseCommandMessage(2)"

    goto :goto_0

    :cond_2
    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->e()I

    move-result v0

    const/16 v1, 0x2fff

    if-eq v0, v1, :cond_9

    const/16 v1, 0x300a

    if-eq v0, v1, :cond_8

    const/16 v1, 0x3012

    if-eq v0, v1, :cond_7

    const/16 v1, 0x3015

    if-eq v0, v1, :cond_6

    const/16 v1, 0x3001

    if-eq v0, v1, :cond_4

    const/16 v1, 0x3002

    if-eq v0, v1, :cond_3

    packed-switch v0, :pswitch_data_0

    goto/16 :goto_1

    :pswitch_0
    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->f()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    invoke-virtual {p2}, Lcom/heytap/mcssdk/PushService;->getPushGetAppNotificationCallBack()Lcom/heytap/msp/push/callback/IGetAppNotificationCallBackService;

    move-result-object p2

    if-eqz p2, :cond_a

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->g()I

    move-result p1

    invoke-interface {p2, p1, v0}, Lcom/heytap/msp/push/callback/IGetAppNotificationCallBackService;->onGetAppNotificationSwitch(II)V

    goto/16 :goto_1

    :pswitch_1
    invoke-virtual {p2}, Lcom/heytap/mcssdk/PushService;->getPushSetAppNotificationCallBack()Lcom/heytap/msp/push/callback/ISetAppNotificationCallBackService;

    move-result-object p2

    if-eqz p2, :cond_a

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->g()I

    move-result p1

    invoke-interface {p2, p1}, Lcom/heytap/msp/push/callback/ISetAppNotificationCallBackService;->onSetAppNotificationSwitch(I)V

    goto/16 :goto_1

    :cond_3
    invoke-virtual {p2}, Lcom/heytap/mcssdk/PushService;->getPushCallback()Lcom/heytap/msp/push/callback/ICallBackResultService;

    move-result-object p2

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->g()I

    move-result p1

    invoke-interface {p2, p1}, Lcom/heytap/msp/push/callback/ICallBackResultService;->onUnRegister(I)V

    goto :goto_1

    :cond_4
    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->g()I

    move-result v0

    if-nez v0, :cond_5

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->f()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/heytap/mcssdk/PushService;->setRegisterID(Ljava/lang/String;)V

    :cond_5
    invoke-virtual {p2}, Lcom/heytap/mcssdk/PushService;->getPushCallback()Lcom/heytap/msp/push/callback/ICallBackResultService;

    move-result-object p2

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->g()I

    move-result v0

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->f()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, v0, p1}, Lcom/heytap/msp/push/callback/ICallBackResultService;->onRegister(ILjava/lang/String;)V

    goto :goto_1

    :cond_6
    invoke-virtual {p2}, Lcom/heytap/mcssdk/PushService;->getPushCallback()Lcom/heytap/msp/push/callback/ICallBackResultService;

    move-result-object p2

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->g()I

    move-result v0

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->f()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/heytap/mcssdk/utils/Utils;->parseInt(Ljava/lang/String;)I

    move-result p1

    invoke-interface {p2, v0, p1}, Lcom/heytap/msp/push/callback/ICallBackResultService;->onGetNotificationStatus(II)V

    goto :goto_1

    :cond_7
    invoke-virtual {p2}, Lcom/heytap/mcssdk/PushService;->getPushCallback()Lcom/heytap/msp/push/callback/ICallBackResultService;

    move-result-object p2

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->g()I

    move-result v0

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->f()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/heytap/mcssdk/utils/Utils;->parseInt(Ljava/lang/String;)I

    move-result p1

    invoke-interface {p2, v0, p1}, Lcom/heytap/msp/push/callback/ICallBackResultService;->onGetPushStatus(II)V

    goto :goto_1

    :cond_8
    invoke-virtual {p2}, Lcom/heytap/mcssdk/PushService;->getPushCallback()Lcom/heytap/msp/push/callback/ICallBackResultService;

    move-result-object p2

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->g()I

    move-result v0

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->f()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, v0, p1}, Lcom/heytap/msp/push/callback/ICallBackResultService;->onSetPushTime(ILjava/lang/String;)V

    goto :goto_1

    :cond_9
    invoke-virtual {p2}, Lcom/heytap/mcssdk/PushService;->getPushCallback()Lcom/heytap/msp/push/callback/ICallBackResultService;

    move-result-object p2

    if-eqz p2, :cond_a

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->g()I

    move-result v0

    invoke-virtual {p1}, Lcom/heytap/mcssdk/c/b;->f()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, v0, p1}, Lcom/heytap/msp/push/callback/ICallBackResultService;->onError(ILjava/lang/String;)V

    :cond_a
    :goto_1
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x301c
        :pswitch_1
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method static synthetic a(Lcom/heytap/mcssdk/e/a;Lcom/heytap/mcssdk/c/b;Lcom/heytap/mcssdk/PushService;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/heytap/mcssdk/e/a;->a(Lcom/heytap/mcssdk/c/b;Lcom/heytap/mcssdk/PushService;)V

    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;Lcom/heytap/msp/push/mode/BaseMode;Lcom/heytap/msp/push/callback/IDataMessageCallBackService;)V
    .locals 0

    if-nez p2, :cond_0

    return-void

    :cond_0
    invoke-virtual {p2}, Lcom/heytap/msp/push/mode/BaseMode;->getType()I

    move-result p1

    const/16 p3, 0x1009

    if-ne p1, p3, :cond_1

    check-cast p2, Lcom/heytap/mcssdk/c/b;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "mcssdk-CallBackResultProcessor:"

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/heytap/mcssdk/c/b;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/heytap/mcssdk/utils/d;->b(Ljava/lang/String;)V

    new-instance p1, Lcom/heytap/mcssdk/e/a$1;

    invoke-direct {p1, p0, p2}, Lcom/heytap/mcssdk/e/a$1;-><init>(Lcom/heytap/mcssdk/e/a;Lcom/heytap/mcssdk/c/b;)V

    invoke-static {p1}, Lcom/heytap/mcssdk/utils/f;->b(Ljava/lang/Runnable;)V

    :cond_1
    return-void
.end method
