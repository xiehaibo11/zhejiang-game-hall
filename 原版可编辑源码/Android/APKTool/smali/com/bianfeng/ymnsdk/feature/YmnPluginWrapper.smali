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

    .line 24
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;-><init>()V

    .line 31
    const/16 v0, -0xa

    iput v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    return-void
.end method


# virtual methods
.method public addCallbackInterceptor(Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;)V
    .locals 1
    .param p1, "interceptor"    # Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    .line 76
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->interceptors:Ljava/util/List;

    if-nez v0, :cond_0

    .line 77
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->interceptors:Ljava/util/List;

    .line 79
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->interceptors:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 80
    return-void
.end method

.method public canDoInit()Z
    .locals 3

    .line 260
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->initing:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 261
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

    .line 262
    return v1

    .line 264
    :cond_0
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->inited:Z

    if-eqz v0, :cond_1

    .line 265
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

    .line 266
    return v1

    .line 268
    :cond_1
    const/4 v0, 0x1

    return v0
.end method

.method public checkState(Lcom/bianfeng/ymnsdk/entity/PluginLocalState;)V
    .locals 3
    .param p1, "local"    # Lcom/bianfeng/ymnsdk/entity/PluginLocalState;

    .line 83
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper$a;->a:[I

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPlugin;->getPolicy()Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_4

    const/4 v2, 0x2

    if-eq v0, v2, :cond_3

    const/4 v2, 0x3

    if-eq v0, v2, :cond_2

    const/4 v2, 0x4

    if-eq v0, v2, :cond_0

    goto :goto_0

    .line 94
    :cond_0
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->triggered:Z

    if-eqz v0, :cond_1

    iput v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    goto :goto_0

    .line 95
    :cond_1
    const/4 v0, 0x0

    iput v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    .line 96
    goto :goto_0

    .line 91
    :cond_2
    iput v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    .line 92
    goto :goto_0

    .line 88
    :cond_3
    const/4 v0, -0x2

    iput v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    .line 89
    goto :goto_0

    .line 85
    :cond_4
    invoke-virtual {p1, p0}, Lcom/bianfeng/ymnsdk/entity/PluginLocalState;->getState(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    .line 86
    nop

    .line 100
    :goto_0
    return-void
.end method

.method public getActivity()Landroid/app/Activity;
    .locals 1

    .line 376
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->activity:Landroid/app/Activity;

    if-nez v0, :cond_0

    .line 377
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->activity:Landroid/app/Activity;

    .line 379
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

    .line 56
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

    .line 149
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

    .line 68
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->loginedData:Ljava/util/Map;

    return-object v0
.end method

.method public getMetaData(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;

    .line 186
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
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

    .line 64
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->params:Ljava/util/Map;

    return-object v0
.end method

.method public getPropertie(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;

    .line 176
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getPluginValue(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getServerHost()Ljava/lang/String;
    .locals 1

    .line 388
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getState()I
    .locals 1

    .line 103
    iget v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->state:I

    return v0
.end method

.method public inited()Ljava/lang/String;
    .locals 3

    .line 349
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isInited()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 350
    const/16 v0, 0x64

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u521d\u59cb\u5316\u6210\u529f"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 351
    const-string v0, "true"

    return-object v0

    .line 353
    :cond_0
    const/16 v0, 0x65

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u521d\u59cb\u5316\u5931\u8d25"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 354
    const-string v0, "flase"

    return-object v0
.end method

.method public isCheckedState()Z
    .locals 2

    .line 107
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

    .line 251
    const/4 v0, 0x0

    return v0
.end method

.method public isInited()Z
    .locals 1

    .line 115
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->inited:Z

    return v0
.end method

.method public isIniting()Z
    .locals 1

    .line 124
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->initing:Z

    return v0
.end method

.method public isInjected()Z
    .locals 1

    .line 132
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->injected:Z

    return v0
.end method

.method public isScreenLandscape()Z
    .locals 1

    .line 364
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    instance-of v0, v0, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 365
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/SystemUtil;->isScreenLandscape(Landroid/app/Activity;)Z

    move-result v0

    return v0

    .line 367
    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public isWorking()Z
    .locals 2

    .line 111
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
    .param p1, "requestCode"    # I
    .param p2, "resultCode"    # I
    .param p3, "data"    # Landroid/content/Intent;

    .line 331
    return-void
.end method

.method public onContextChanged(Landroid/content/Context;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;

    .line 280
    return-void
.end method

.method public onCreate(Landroid/app/Activity;)V
    .locals 0
    .param p1, "activity"    # Landroid/app/Activity;

    .line 287
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->activity:Landroid/app/Activity;

    .line 288
    return-void
.end method

.method public onDestroy()V
    .locals 0

    .line 321
    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;

    .line 256
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->context:Landroid/content/Context;

    .line 257
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

    .line 335
    .local p1, "data":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->loginedData:Ljava/util/Map;

    .line 336
    return-void
.end method

.method public onNewIntent(Landroid/content/Intent;)V
    .locals 0
    .param p1, "intent"    # Landroid/content/Intent;

    .line 326
    return-void
.end method

.method public onPause()V
    .locals 0

    .line 304
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

    .line 341
    .local p1, "data":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 0
    .param p1, "requestCode"    # I
    .param p2, "permissions"    # [Ljava/lang/String;
    .param p3, "grantResults"    # [I

    .line 284
    return-void
.end method

.method public onRestart()V
    .locals 0

    .line 298
    return-void
.end method

.method public onResume()V
    .locals 0

    .line 310
    return-void
.end method

.method public onStart()V
    .locals 0

    .line 293
    return-void
.end method

.method public onStop()V
    .locals 0

    .line 316
    return-void
.end method

.method public onWindowFocusChanged(ZLandroid/app/Activity;)V
    .locals 0
    .param p1, "hasFocus"    # Z
    .param p2, "activity"    # Landroid/app/Activity;

    .line 346
    return-void
.end method

.method public registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V
    .locals 0
    .param p1, "callback"    # Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    .line 72
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    .line 73
    return-void
.end method

.method public sendResult(ILjava/lang/Object;Ljava/lang/Object;)V
    .locals 2
    .param p1, "code"    # I
    .param p2, "data"    # Ljava/lang/Object;
    .param p3, "ext"    # Ljava/lang/Object;

    .line 221
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;

    invoke-direct {v0, p2, p3}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    .line 222
    .local v0, "message":Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 223
    return-void
.end method

.method public sendResult(ILjava/lang/Object;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 7
    .param p1, "code"    # I
    .param p2, "data"    # Ljava/lang/Object;
    .param p3, "ext"    # Ljava/lang/Object;
    .param p4, "methodName"    # Ljava/lang/String;

    .line 227
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

    .line 229
    goto :goto_0

    .line 228
    :catch_0
    move-exception v0

    .line 230
    :goto_0
    invoke-virtual {p0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/Object;Ljava/lang/Object;)V

    .line 231
    return-void
.end method

.method public sendResult(ILjava/lang/String;)V
    .locals 4
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 196
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->interceptors:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    .line 197
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->interceptors:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 198
    .local v0, "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;>;"
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    .line 199
    .local v1, "first":Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
    move-object v2, v1

    .line 200
    .local v2, "current":Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 201
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    .line 202
    .local v3, "next":Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->setNext(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 203
    move-object v2, v3

    .line 204
    .end local v3    # "next":Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
    goto :goto_0

    .line 205
    :cond_0
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    if-eqz v3, :cond_1

    .line 206
    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->setNext(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 208
    :cond_1
    invoke-virtual {v1, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->onCallBack(ILjava/lang/String;)V

    .end local v0    # "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;>;"
    .end local v1    # "first":Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
    .end local v2    # "current":Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
    goto :goto_1

    .line 209
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    if-eqz v0, :cond_3

    .line 210
    invoke-interface {v0, p1, p2}, Lcom/bianfeng/platform/PlatformSdkListener;->onCallBack(ILjava/lang/String;)V

    goto :goto_2

    .line 209
    :cond_3
    :goto_1
    nop

    .line 212
    :goto_2
    return-void
.end method

.method public sendResult(ILjava/lang/String;Ljava/lang/String;)V
    .locals 7
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;
    .param p3, "methodName"    # Ljava/lang/String;

    .line 215
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    .line 216
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v4

    .line 215
    move-object v1, p3

    move v5, p1

    move-object v6, p2

    invoke-virtual/range {v0 .. v6}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    .line 217
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 218
    return-void
.end method

.method public sendResultWithoutInterceptors(ILjava/lang/String;)V
    .locals 1
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 234
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    if-eqz v0, :cond_0

    .line 235
    invoke-interface {v0, p1, p2}, Lcom/bianfeng/platform/PlatformSdkListener;->onCallBack(ILjava/lang/String;)V

    .line 237
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

    .line 52
    .local p1, "cfgs":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->cfgs:Ljava/util/Map;

    .line 53
    return-void
.end method

.method public setDebugMode(Z)V
    .locals 0
    .param p1, "mode"    # Z

    .line 247
    return-void
.end method

.method public setInited(Z)V
    .locals 0
    .param p1, "inited"    # Z

    .line 120
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->inited:Z

    .line 121
    return-void
.end method

.method public setIniting(Z)V
    .locals 0
    .param p1, "initing"    # Z

    .line 128
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->initing:Z

    .line 129
    return-void
.end method

.method public setInjected(Z)V
    .locals 0
    .param p1, "injected"    # Z

    .line 136
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->injected:Z

    .line 137
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

    .line 60
    .local p1, "params":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->params:Ljava/util/Map;

    .line 61
    return-void
.end method

.method public setTriggered(Z)V
    .locals 0
    .param p1, "triggered"    # Z

    .line 145
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->triggered:Z

    .line 146
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 241
    const/4 v0, 0x5

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
    .param p1, "runnable"    # Ljava/lang/Runnable;

    .line 162
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->activity:Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 163
    invoke-virtual {v0, p1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 165
    :cond_0
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    .line 167
    :goto_0
    return-void
.end method

.method public updateContext(Landroid/content/Context;)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;

    .line 153
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->context:Landroid/content/Context;

    .line 155
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onContextChanged(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 158
    goto :goto_0

    .line 156
    :catch_0
    move-exception v0

    .line 157
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateContext"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 159
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method
