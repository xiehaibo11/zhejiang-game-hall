.class Lcom/bianfeng/ymnsdk/feature/plugin/b$b;
.super Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV3;
.source "UserFeatureFactory.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/b;->d()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

.field final synthetic b:Lcom/bianfeng/ymnsdk/actionv2/a;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/actionv2/a;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$b;->a:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$b;->b:Lcom/bianfeng/ymnsdk/actionv2/a;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/actionv2/ActionObserverV3;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V
    .locals 3

    .line 1
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->processedResult:Ljava/lang/Object;

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    .line 3
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->processedResultAsMap()Ljava/util/Map;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->c()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v1

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/util/Map;Ljava/lang/String;)V

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x76

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginNewResponseEvent(ILjava/lang/String;)V

    .line 5
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b()Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    move-result-object v0

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    goto :goto_0

    .line 7
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$b;->a:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$b;->b:Lcom/bianfeng/ymnsdk/actionv2/a;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->retryRequest(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 9
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b()Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    move-result-object v0

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x77

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    .line 10
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginNewResponseEvent(ILjava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
