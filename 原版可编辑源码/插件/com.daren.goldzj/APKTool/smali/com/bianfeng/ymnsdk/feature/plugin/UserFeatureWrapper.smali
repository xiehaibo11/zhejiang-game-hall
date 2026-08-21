.class public Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
.super Ljava/lang/Object;
.source "UserFeatureWrapper.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;
.implements Lcom/bianfeng/platform/UserWrapper;


# instance fields
.field a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

.field b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

.field c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

.field d:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;)V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$c;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$c;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->d:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    .line 19
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    .line 20
    check-cast p1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 21
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->d:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->addCallbackInterceptor(Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;)V

    return-void
.end method


# virtual methods
.method public a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    return-object v0
.end method

.method public enterPlatform()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 2
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;->enterPlatform()V

    :cond_0
    return-void
.end method

.method public exit()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$j;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$j;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public getAndShowVerifyRealName()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$h;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$h;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    return-object v0
.end method

.method public getVerifyRealNameInfo()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$g;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$g;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public hideToolBar()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 2
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;->hideToolBar()V

    :cond_0
    return-void
.end method

.method public isLogined()Z
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->isYmnLogined()Z

    move-result v0

    return v0

    .line 2
    :cond_0
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/plugin/b;->c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    if-eqz v1, :cond_1

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->isYmnLogined()Z

    move-result v0

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public login()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$b;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$b;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    return-void
.end method

.method public logout()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$d;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$d;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public showToolBar()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$e;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$e;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public showVerifyRealName()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$f;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$f;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public submitUserInfo(Ljava/util/LinkedHashMap;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$a;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$a;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;Ljava/util/LinkedHashMap;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public switchAccount()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$i;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$i;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method
