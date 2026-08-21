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
    .locals 2
    .param p1, "userFeature"    # Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 42
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$c;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$c;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->d:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    .line 26
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    .line 27
    move-object v0, p1

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 28
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->d:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->addCallbackInterceptor(Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;)V

    .line 29
    return-void
.end method


# virtual methods
.method public a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .locals 1

    .line 22
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    return-object v0
.end method

.method public enterPlatform()V
    .locals 1

    .line 214
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 215
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;->enterPlatform()V

    .line 217
    :cond_0
    return-void
.end method

.method public exit()V
    .locals 2

    .line 185
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 186
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$j;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$j;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    .line 193
    :cond_0
    return-void
.end method

.method public getAndShowVerifyRealName()V
    .locals 2

    .line 155
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 156
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$h;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$h;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    .line 163
    :cond_0
    return-void
.end method

.method public getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 1

    .line 209
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    return-object v0
.end method

.method public getVerifyRealNameInfo()V
    .locals 2

    .line 144
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 145
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$g;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$g;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    .line 152
    :cond_0
    return-void
.end method

.method public hideToolBar()V
    .locals 1

    .line 166
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 167
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;->hideToolBar()V

    .line 169
    :cond_0
    return-void
.end method

.method public isLogined()Z
    .locals 2

    .line 102
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->isYmnLogined()Z

    move-result v0

    return v0

    .line 103
    :cond_0
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/plugin/b;->c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    if-eqz v1, :cond_1

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->isYmnLogined()Z

    move-result v0

    return v0

    .line 104
    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public login()V
    .locals 2

    .line 33
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$b;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$b;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    .line 40
    return-void
.end method

.method public logout()V
    .locals 2

    .line 109
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 110
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$d;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$d;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    .line 117
    :cond_0
    return-void
.end method

.method public showToolBar()V
    .locals 2

    .line 121
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 122
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$e;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$e;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    .line 129
    :cond_0
    return-void
.end method

.method public showVerifyRealName()V
    .locals 2

    .line 133
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 134
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$f;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$f;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    .line 141
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

    .line 197
    .local p1, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 198
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$a;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$a;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;Ljava/util/LinkedHashMap;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    .line 205
    :cond_0
    return-void
.end method

.method public switchAccount()V
    .locals 2

    .line 173
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-eqz v0, :cond_0

    .line 174
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$i;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper$i;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    .line 181
    :cond_0
    return-void
.end method
