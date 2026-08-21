.class Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;
.super Lcom/bianfeng/ymnsdk/action/ActionObserver;
.source "YmnBaseInterface.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;->getProducts()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/action/g;

.field final synthetic b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

.field final synthetic c:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;Lcom/bianfeng/ymnsdk/action/g;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    .line 235
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;->c:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;->a:Lcom/bianfeng/ymnsdk/action/g;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;->b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/action/ActionObserver;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V
    .locals 5
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;

    .line 238
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->isOk()Z

    move-result v0

    const-string v1, "get_products;base_get_products"

    if-eqz v0, :cond_0

    .line 239
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;->a:Lcom/bianfeng/ymnsdk/action/g;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onEndAttachment()V

    .line 240
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;->c:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    const/16 v2, 0x89e

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 242
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;->b:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;->a:Lcom/bianfeng/ymnsdk/action/g;

    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->retryRequest(Lcom/bianfeng/ymnsdk/action/ActionSupport;)Z

    move-result v0

    .line 243
    .local v0, "isNotNeedRetry":Z
    if-eqz v0, :cond_1

    .line 244
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;->a:Lcom/bianfeng/ymnsdk/action/g;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onEndAttachment()V

    .line 245
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface$c;->c:Lcom/bianfeng/ymnsdk/feature/plugin/YmnBaseInterface;

    const/16 v3, 0x89f

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 249
    .end local v0    # "isNotNeedRetry":Z
    :cond_1
    :goto_0
    return-void
.end method
