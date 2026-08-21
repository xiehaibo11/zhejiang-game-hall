.class public Lcom/bianfeng/splitscreenlib/pay/YmnPayCallBack;
.super Ljava/lang/Object;
.source "YmnPayCallBack.java"


# instance fields
.field private type_fail:Ljava/lang/String;

.field private type_request_order:Ljava/lang/String;

.field private type_success:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "type_success"

    .line 12
    iput-object v0, p0, Lcom/bianfeng/splitscreenlib/pay/YmnPayCallBack;->type_success:Ljava/lang/String;

    const-string v0, "type_request_order"

    .line 13
    iput-object v0, p0, Lcom/bianfeng/splitscreenlib/pay/YmnPayCallBack;->type_request_order:Ljava/lang/String;

    const-string v0, "type_fail"

    .line 14
    iput-object v0, p0, Lcom/bianfeng/splitscreenlib/pay/YmnPayCallBack;->type_fail:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public onCall(Ljava/util/HashMap;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "type"

    .line 16
    invoke-virtual {p1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 18
    iget-object v1, p0, Lcom/bianfeng/splitscreenlib/pay/YmnPayCallBack;->type_success:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 19
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getCallback()Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/splitscreenlib/YmnH5Callback;->onPaySuccess()V

    goto :goto_0

    .line 20
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/splitscreenlib/pay/YmnPayCallBack;->type_request_order:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 21
    invoke-static {}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->getInstance()Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->endPay()V

    goto :goto_0

    .line 23
    :cond_1
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getCallback()Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    move-result-object v0

    const-string v1, "msg"

    invoke-virtual {p1, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-interface {v0, p1}, Lcom/bianfeng/splitscreenlib/YmnH5Callback;->onPayFail(Ljava/lang/String;)V

    :goto_0
    return-void
.end method
