.class public abstract Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.super Lcom/bianfeng/ymnsdk/feature/YmnPlugin;
.source "YmnPluginWrapper.java"


# instance fields
.field private activity:Landroid/app/Activity;

.field private callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

.field private cfgs:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private context:Landroid/content/Context;

.field private volatile inited:Z

.field private volatile initing:Z

.field private volatile injected:Z

.field private interceptors:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;",
            ">;"
        }
    .end annotation
.end field

.field private loginedData:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private params:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private state:I

.field private volatile triggered:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;-><init>()V

    const/16 v0, -0xa

    .line 8
    iput v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    return-void
.end method


# virtual methods
.method public addCallbackInterceptor(Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->interceptors:Ljava/util/List;

    if-nez v0, :cond_0

    .line 2
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->interceptors:Ljava/util/List;

    .line 4
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->interceptors:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public canDoInit()Z
    .locals 3

    .line 1
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->initing:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " on initing , ignore invoke "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->context:Landroid/content/Context;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->w(Ljava/lang/String;)I

    return v1

    .line 5
    :cond_0
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->inited:Z

    if-eqz v0, :cond_1

    .line 6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " already inited , ignore invoke "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->context:Landroid/content/Context;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->w(Ljava/lang/String;)I

    return v1

    :cond_1
    const/4 v0, 0x1

    return v0
.end method

.method public checkState(Lcom/bianfeng/ymnsdk/entity/PluginLocalState;)V
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper$a;->a:[I

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getPolicy()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_4

    const/4 p1, 0x2

    if-eq v0, p1, :cond_3

    const/4 p1, 0x3

    if-eq v0, p1, :cond_2

    const/4 p1, 0x4

    if-eq v0, p1, :cond_0

    goto :goto_0

    .line 12
    :cond_0
    iget-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->triggered:Z

    if-eqz p1, :cond_1

    iput v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    .line 13
    iput p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    goto :goto_0

    .line 14
    :cond_2
    iput v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    goto :goto_0

    :cond_3
    const/4 p1, -0x2

    .line 15
    iput p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    goto :goto_0

    .line 16
    :cond_4
    invoke-virtual {p1, p0}, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->getState(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    :goto_0
    return-void
.end method

.method public getActivity()Landroid/app/Activity;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->activity:Landroid/app/Activity;

    if-nez v0, :cond_0

    .line 2
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->activity:Landroid/app/Activity;

    .line 4
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->activity:Landroid/app/Activity;

    return-object v0
.end method

.method public final getCfgs()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->cfgs:Ljava/util/Map;

    return-object v0
.end method

.method public getContext()Landroid/content/Context;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Landroid/content/Context;",
            ">()TT;"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->context:Landroid/content/Context;

    return-object v0
.end method

.method public getLoginedData()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->loginedData:Ljava/util/Map;

    return-object v0
.end method

.method public getMetaData(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final getParams()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->params:Ljava/util/Map;

    return-object v0
.end method

.method public getPropertie(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getPluginValue(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getServerHost()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getState()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    return v0
.end method

.method public inited()Ljava/lang/String;
    .locals 2

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isInited()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u521d\u59cb\u5316\u6210\u529f"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x64

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    const-string v0, "true"

    return-object v0

    .line 5
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u521d\u59cb\u5316\u5931\u8d25"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x65

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    const-string v0, "flase"

    return-object v0
.end method

.method public isCheckedState()Z
    .locals 2

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    const/16 v1, -0xa

    if-eq v0, v1, :cond_0

    const/4 v1, -0x2

    if-eq v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isDebugMode()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public isInited()Z
    .locals 1

    .line 1
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->inited:Z

    return v0
.end method

.method public isIniting()Z
    .locals 1

    .line 1
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->initing:Z

    return v0
.end method

.method public isInjected()Z
    .locals 1

    .line 1
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->injected:Z

    return v0
.end method

.method public isScreenLandscape()Z
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    instance-of v0, v0, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/SystemUtil;->isScreenLandscape(Landroid/app/Activity;)Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public isWorking()Z
    .locals 2

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 0

    return-void
.end method

.method public onContextChanged(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public onCreate(Landroid/app/Activity;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->activity:Landroid/app/Activity;

    return-void
.end method

.method public onDestroy()V
    .locals 0

    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->context:Landroid/content/Context;

    return-void
.end method

.method public onLogin(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->loginedData:Ljava/util/Map;

    return-void
.end method

.method public onNewIntent(Landroid/content/Intent;)V
    .locals 0

    return-void
.end method

.method public onPause()V
    .locals 0

    return-void
.end method

.method public onPay(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 0

    return-void
.end method

.method public onRestart()V
    .locals 0

    return-void
.end method

.method public onResume()V
    .locals 0

    return-void
.end method

.method public onStart()V
    .locals 0

    return-void
.end method

.method public onStop()V
    .locals 0

    return-void
.end method

.method public onWindowFocusChanged(ZLandroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method public sendResult(ILjava/lang/Object;Ljava/lang/Object;)V
    .locals 1

    .line 21
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;

    invoke-direct {v0, p2, p3}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    .line 22
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public sendResult(ILjava/lang/Object;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 7

    .line 23
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v6

    move-object v1, p4

    move v5, p1

    invoke-virtual/range {v0 .. v6}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 26
    :catch_0
    invoke-virtual {p0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/Object;Ljava/lang/Object;)V

    return-void
.end method

.method public sendResult(ILjava/lang/String;)V
    .locals 4

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->interceptors:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->interceptors:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 3
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    move-object v2, v1

    .line 5
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 6
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    .line 7
    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->setNext(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    move-object v2, v3

    goto :goto_0

    .line 10
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    if-eqz v0, :cond_1

    .line 11
    invoke-virtual {v2, v0}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->setNext(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 13
    :cond_1
    invoke-virtual {v1, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->onCallBack(ILjava/lang/String;)V

    goto :goto_1

    .line 14
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    if-eqz v0, :cond_3

    .line 15
    invoke-interface {v0, p1, p2}, Lcom/bianfeng/platform/PlatformSdkListener;->onCallBack(ILjava/lang/String;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public sendResult(ILjava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 16
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 17
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v4

    move-object v1, p3

    move v5, p1

    move-object v6, p2

    .line 18
    invoke-virtual/range {v0 .. v6}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    .line 20
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public sendResultWithoutInterceptors(ILjava/lang/String;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    if-eqz v0, :cond_0

    .line 2
    invoke-interface {v0, p1, p2}, Lcom/bianfeng/platform/PlatformSdkListener;->onCallBack(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final setCfgs(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->cfgs:Ljava/util/Map;

    return-void
.end method

.method public setDebugMode(Z)V
    .locals 0

    return-void
.end method

.method public setInited(Z)V
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->inited:Z

    return-void
.end method

.method public setIniting(Z)V
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->initing:Z

    return-void
.end method

.method public setInjected(Z)V
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->injected:Z

    return-void
.end method

.method public final setParams(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->params:Ljava/util/Map;

    return-void
.end method

.method public setTriggered(Z)V
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->triggered:Z

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x5

    .line 1
    new-array v0, v0, [Ljava/lang/Object;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin$STATE_NAME;->get(Ljava/lang/Integer;)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    iget-boolean v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->inited:Z

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    const/4 v2, 0x2

    aput-object v1, v0, v2

    iget-boolean v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->initing:Z

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    const/4 v2, 0x3

    aput-object v1, v0, v2

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x4

    aput-object v1, v0, v2

    const-string v1, "%s {%s, inited = %b, initing = %b, class = %s}"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->activity:Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0, p1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 4
    :cond_0
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    :goto_0
    return-void
.end method

.method public updateContext(Landroid/content/Context;)V
    .locals 2

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->context:Landroid/content/Context;

    .line 3
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onContextChanged(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updateContext"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method
