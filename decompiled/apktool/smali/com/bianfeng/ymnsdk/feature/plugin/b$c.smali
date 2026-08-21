.class final Lcom/bianfeng/ymnsdk/feature/plugin/b$c;
.super Lcom/bianfeng/ymnsdk/action/ActionObserver;
.source "UserFeatureFactory.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/b;->e()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 145
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/action/ActionObserver;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)V
    .locals 3
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;

    .line 148
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 149
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    check-cast v0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    .line 150
    .local v0, "config":Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/UrlConfig;->isEnable()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 151
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->c()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/feature/e;->a(Landroid/content/Context;Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V

    goto :goto_0

    .line 153
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "illegal remote url config "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 156
    .end local v0    # "config":Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    :cond_1
    :goto_0
    return-void
.end method
