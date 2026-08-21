.class Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;
.super Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV2;
.source "YmnBaseInterface.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->checkOrderStatue(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/actionv2/c;

.field final synthetic b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

.field final synthetic c:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/actionv2/c;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    .line 291
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;->c:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;->a:Lcom/bianfeng/ymnsdk/actionv2/c;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;->b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV2;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
    .locals 5
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    .line 294
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->isOk()Z

    move-result v0

    const-string v1, "check_order_statue"

    if-eqz v0, :cond_0

    .line 295
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;->a:Lcom/bianfeng/ymnsdk/actionv2/c;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onEndAttachment()V

    .line 296
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;->c:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    const/16 v2, 0x89e

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 298
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;->b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;->a:Lcom/bianfeng/ymnsdk/actionv2/c;

    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->retryRequest(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;)Z

    move-result v0

    .line 299
    .local v0, "isNotNeedRetry":Z
    if-eqz v0, :cond_1

    .line 300
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;->a:Lcom/bianfeng/ymnsdk/actionv2/c;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onEndAttachment()V

    .line 301
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$e;->c:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    const/16 v3, 0x89f

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 304
    .end local v0    # "isNotNeedRetry":Z
    :cond_1
    :goto_0
    return-void
.end method
