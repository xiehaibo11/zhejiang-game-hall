.class final Lcom/bianfeng/ymnsdk/feature/plugin/a$a;
.super Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV2;
.source "PaymentFeatureFactory.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/a;->a(Ljava/util/Map;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

.field final synthetic b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

.field final synthetic c:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 0

    .line 45
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->c:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV2;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
    .locals 5
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    .line 48
    const/4 v0, 0x0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a(Z)Z

    .line 49
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 50
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a()V

    .line 51
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payCallSdk()V

    .line 52
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getProcessedResult()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;->pay(Ljava/util/Map;)V

    goto :goto_0

    .line 54
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b()Lcom/bianfeng/ymnsdk/actionv2/b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->retryRequest(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;)Z

    move-result v0

    .line 55
    .local v0, "isNotRetry":Z
    if-eqz v0, :cond_1

    .line 56
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a()V

    .line 57
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0xc9

    const-string v4, "0"

    invoke-virtual {v1, v3, v2, v4}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payResponseOrder(ILjava/lang/String;Ljava/lang/String;)V

    .line 58
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->c:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v3, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 62
    .end local v0    # "isNotRetry":Z
    :cond_1
    :goto_0
    return-void
.end method
