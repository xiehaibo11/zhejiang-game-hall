.class final Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;
.super Lcom/bianfeng/ymnsdk/action/ActionObserver;
.source "PaymentFeatureWrapper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->c(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/action/f;

.field final synthetic b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

.field final synthetic c:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/action/f;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V
    .locals 0

    .line 130
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;->a:Lcom/bianfeng/ymnsdk/action/f;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;->c:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/action/ActionObserver;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V
    .locals 5
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;

    .line 133
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 134
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;->a:Lcom/bianfeng/ymnsdk/action/f;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onEndAttachment()V

    .line 135
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    const-string v1, "status"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    .line 136
    .local v0, "status":I
    const/4 v1, 0x2

    const-string v2, "|"

    if-eq v1, v0, :cond_1

    const/4 v1, 0x3

    if-ne v1, v0, :cond_0

    goto :goto_0

    .line 139
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    const/16 v3, 0xc9

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v3, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    goto :goto_1

    .line 137
    :cond_1
    :goto_0
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    const/16 v3, 0xc8

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v3, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 141
    .end local v0    # "status":I
    :goto_1
    goto :goto_2

    .line 142
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;->c:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;->a:Lcom/bianfeng/ymnsdk/action/f;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->retryRequest(Lcom/bianfeng/ymnsdk/action/ActionSupport;)Z

    move-result v0

    .line 143
    .local v0, "isNotNeedRetry":Z
    if-eqz v0, :cond_3

    .line 144
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    const/16 v2, 0xcb

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 147
    .end local v0    # "isNotNeedRetry":Z
    :cond_3
    :goto_2
    return-void
.end method
