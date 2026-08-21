.class Lcom/bianfeng/ymnsdk/feature/plugin/a$a;
.super Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV2;
.source "PaymentFeatureFactory.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/a;->a(Ljava/util/Map;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

.field final synthetic b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

.field final synthetic c:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->c:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV2;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
    .locals 4

    const/4 v0, 0x0

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a(Z)Z

    .line 2
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a()V

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payCallSdk()V

    .line 5
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getProcessedResult()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;

    invoke-interface {v0, p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;->pay(Ljava/util/Map;)V

    goto :goto_0

    .line 7
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b()Lcom/bianfeng/ymnsdk/actionv2/b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->retryRequest(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 9
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a()V

    .line 10
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0xc9

    const-string v3, "0"

    invoke-virtual {v0, v2, v1, v3}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payResponseOrder(ILjava/lang/String;Ljava/lang/String;)V

    .line 11
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;->c:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
