.class Lcom/bianfeng/ymnsdk/feature/plugin/b$a;
.super Lcom/bianfeng/ymnsdk/action/ActionObserver;
.source "UserFeatureFactory.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/b;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/Object;Ljava/lang/Object;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/action/d;

.field final synthetic b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

.field final synthetic c:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/action/d;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;->a:Lcom/bianfeng/ymnsdk/action/d;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;->c:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/action/ActionObserver;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V
    .locals 3

    .line 1
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;->a:Lcom/bianfeng/ymnsdk/action/d;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onEndAttachment()V

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x66

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginOldResponseEvent(ILjava/lang/String;)V

    .line 4
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    .line 5
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->processedResultAsMap()Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/util/Map;Ljava/lang/String;)V

    .line 6
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a()V

    .line 7
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b()Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    move-result-object v0

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    goto :goto_0

    .line 9
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;->c:Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;->a:Lcom/bianfeng/ymnsdk/action/d;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->retryRequest(Lcom/bianfeng/ymnsdk/action/ActionSupport;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 11
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;->a:Lcom/bianfeng/ymnsdk/action/d;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onEndAttachment()V

    .line 12
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x69

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginOldResponseEvent(ILjava/lang/String;)V

    .line 13
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b()Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    move-result-object v0

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
