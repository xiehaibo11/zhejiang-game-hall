.class final Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;
.super Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV2;
.source "PaymentFeatureWrapper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

.field final synthetic d:Lcom/bianfeng/ymnsdk/actionv2/c;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/actionv2/c;)V
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;->c:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    iput-object p4, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;->d:Lcom/bianfeng/ymnsdk/actionv2/c;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV2;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
    .locals 7
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    .line 97
    const-string v0, "checkOrderFromNew onActionResult"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 98
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->isOk()Z

    move-result v0

    const/16 v1, 0xc9

    if-eqz v0, :cond_1

    .line 100
    :try_start_0
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getSrcRes()Ljava/lang/String;

    move-result-object v0

    const-class v2, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;

    invoke-static {v0, v2}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;

    .line 101
    .local v0, "entity":Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->getPay_status()I

    move-result v2
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException; {:try_start_0 .. :try_end_0} :catch_0

    .line 102
    .local v2, "status":I
    const/4 v3, 0x1

    const-string v4, "|"

    if-ne v2, v3, :cond_0

    .line 103
    :try_start_1
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    const/16 v5, 0xc8

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v5, v4}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 105
    :cond_0
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;->b:Ljava/lang/String;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v1, v4}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V
    :try_end_1
    .catch Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    .line 107
    .end local v0    # "entity":Lcom/bianfeng/ymnsdk/entity/CheckOrderEntity;
    .end local v2    # "status":I
    :catch_0
    move-exception v0

    .line 108
    .local v0, "e":Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    const-string v3, "201| \u67e5\u8be2\u6570\u636e\u89e3\u6790\u51fa\u9519"

    invoke-virtual {v2, v1, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 109
    .end local v0    # "e":Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
    :goto_0
    goto :goto_1

    .line 111
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;->c:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;->d:Lcom/bianfeng/ymnsdk/actionv2/c;

    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->retryRequest(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;)Z

    move-result v0

    .line 112
    .local v0, "isNotNeedRetry":Z
    if-eqz v0, :cond_2

    .line 113
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "201|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v1, v3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 116
    .end local v0    # "isNotNeedRetry":Z
    :cond_2
    :goto_1
    return-void
.end method
