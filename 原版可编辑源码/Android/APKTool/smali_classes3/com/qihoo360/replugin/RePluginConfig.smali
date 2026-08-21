.class public final Lcom/qihoo360/replugin/RePluginConfig;
.super Ljava/lang/Object;
.source "RePluginConfig.java"


# instance fields
.field private callbacks:Lcom/qihoo360/replugin/RePluginCallbacks;

.field private defaultFrameworkVersion:I

.field private eventCallbacks:Lcom/qihoo360/replugin/RePluginEventCallbacks;

.field private hostBuildID:Ljava/lang/String;

.field private hostVersionName:Ljava/lang/String;

.field private moveFileWhenInstalling:Z

.field private optimizeArtLoadDex:Z

.field private persistentEnable:Z

.field private pnInstallDir:Ljava/io/File;

.field private printDetailLog:Z

.field private useHostClassIfNotFound:Z

.field private verifySign:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 43
    iput-boolean v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->verifySign:Z

    const/4 v1, 0x1

    .line 44
    iput-boolean v1, p0, Lcom/qihoo360/replugin/RePluginConfig;->persistentEnable:Z

    .line 46
    iput-boolean v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->useHostClassIfNotFound:Z

    .line 47
    iput-boolean v1, p0, Lcom/qihoo360/replugin/RePluginConfig;->moveFileWhenInstalling:Z

    .line 48
    iput-boolean v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->printDetailLog:Z

    const/4 v1, 0x4

    .line 49
    iput v1, p0, Lcom/qihoo360/replugin/RePluginConfig;->defaultFrameworkVersion:I

    const-string v1, ""

    .line 51
    iput-object v1, p0, Lcom/qihoo360/replugin/RePluginConfig;->hostVersionName:Ljava/lang/String;

    .line 52
    iput-object v1, p0, Lcom/qihoo360/replugin/RePluginConfig;->hostBuildID:Ljava/lang/String;

    .line 54
    iput-boolean v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->optimizeArtLoadDex:Z

    return-void
.end method

.method private checkAllowModify()Z
    .locals 3

    .line 331
    sget-boolean v0, Lcom/qihoo360/replugin/RePlugin$App;->sAttached:Z

    if-eqz v0, :cond_0

    .line 335
    new-instance v0, Ljava/lang/Throwable;

    invoke-direct {v0}, Ljava/lang/Throwable;-><init>()V

    const-string v1, "ws001"

    const-string v2, "rpc.cam: do not modify"

    invoke-static {v1, v2, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    const/4 v0, 0x0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method


# virtual methods
.method public getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->callbacks:Lcom/qihoo360/replugin/RePluginCallbacks;

    return-object v0
.end method

.method public getDefaultFrameworkVersion()I
    .locals 1

    .line 296
    iget v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->defaultFrameworkVersion:I

    return v0
.end method

.method public getEventCallbacks()Lcom/qihoo360/replugin/RePluginEventCallbacks;
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->eventCallbacks:Lcom/qihoo360/replugin/RePluginEventCallbacks;

    return-object v0
.end method

.method public getHostBuildID()Ljava/lang/String;
    .locals 1

    .line 214
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->hostBuildID:Ljava/lang/String;

    return-object v0
.end method

.method public getHostVersionBuild()Ljava/lang/String;
    .locals 2

    .line 263
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v1

    invoke-virtual {v1}, Lcom/qihoo360/replugin/RePluginConfig;->getHostVersionName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v1

    invoke-virtual {v1}, Lcom/qihoo360/replugin/RePluginConfig;->getHostBuildID()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getHostVersionName()Ljava/lang/String;
    .locals 1

    .line 239
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->hostVersionName:Ljava/lang/String;

    return-object v0
.end method

.method public getPnInstallDir()Ljava/io/File;
    .locals 1

    .line 108
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->pnInstallDir:Ljava/io/File;

    return-object v0
.end method

.method public getVerifySign()Z
    .locals 1

    .line 132
    iget-boolean v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->verifySign:Z

    return v0
.end method

.method initDefaults(Landroid/content/Context;)V
    .locals 1

    .line 316
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->pnInstallDir:Ljava/io/File;

    if-nez v0, :cond_0

    .line 317
    invoke-virtual {p1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->pnInstallDir:Ljava/io/File;

    .line 320
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->callbacks:Lcom/qihoo360/replugin/RePluginCallbacks;

    if-nez v0, :cond_1

    .line 321
    new-instance v0, Lcom/qihoo360/replugin/RePluginCallbacks;

    invoke-direct {v0, p1}, Lcom/qihoo360/replugin/RePluginCallbacks;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->callbacks:Lcom/qihoo360/replugin/RePluginCallbacks;

    .line 324
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->eventCallbacks:Lcom/qihoo360/replugin/RePluginEventCallbacks;

    if-nez v0, :cond_2

    .line 325
    new-instance v0, Lcom/qihoo360/replugin/RePluginEventCallbacks;

    invoke-direct {v0, p1}, Lcom/qihoo360/replugin/RePluginEventCallbacks;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->eventCallbacks:Lcom/qihoo360/replugin/RePluginEventCallbacks;

    :cond_2
    return-void
.end method

.method public isMoveFileWhenInstalling()Z
    .locals 1

    .line 187
    iget-boolean v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->moveFileWhenInstalling:Z

    return v0
.end method

.method public isOptimizeArtLoadDex()Z
    .locals 1

    .line 348
    iget-boolean v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->optimizeArtLoadDex:Z

    return v0
.end method

.method public isPrintDetailLog()Z
    .locals 1

    .line 273
    iget-boolean v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->printDetailLog:Z

    return v0
.end method

.method public isUseHostClassIfNotFound()Z
    .locals 1

    .line 159
    iget-boolean v0, p0, Lcom/qihoo360/replugin/RePluginConfig;->useHostClassIfNotFound:Z

    return v0
.end method

.method public setCallbacks(Lcom/qihoo360/replugin/RePluginCallbacks;)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 72
    invoke-direct {p0}, Lcom/qihoo360/replugin/RePluginConfig;->checkAllowModify()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    .line 75
    :cond_0
    iput-object p1, p0, Lcom/qihoo360/replugin/RePluginConfig;->callbacks:Lcom/qihoo360/replugin/RePluginCallbacks;

    return-object p0
.end method

.method public setDefaultFrameworkVersion(I)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 307
    invoke-direct {p0}, Lcom/qihoo360/replugin/RePluginConfig;->checkAllowModify()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    .line 310
    :cond_0
    iput p1, p0, Lcom/qihoo360/replugin/RePluginConfig;->defaultFrameworkVersion:I

    return-object p0
.end method

.method public setEventCallbacks(Lcom/qihoo360/replugin/RePluginEventCallbacks;)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 95
    invoke-direct {p0}, Lcom/qihoo360/replugin/RePluginConfig;->checkAllowModify()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    .line 98
    :cond_0
    iput-object p1, p0, Lcom/qihoo360/replugin/RePluginConfig;->eventCallbacks:Lcom/qihoo360/replugin/RePluginEventCallbacks;

    return-object p0
.end method

.method public setHostBuild(Ljava/lang/String;)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 226
    invoke-direct {p0}, Lcom/qihoo360/replugin/RePluginConfig;->checkAllowModify()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    .line 229
    :cond_0
    iput-object p1, p0, Lcom/qihoo360/replugin/RePluginConfig;->hostBuildID:Ljava/lang/String;

    return-object p0
.end method

.method public setHostVersionName(Ljava/lang/String;)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 250
    invoke-direct {p0}, Lcom/qihoo360/replugin/RePluginConfig;->checkAllowModify()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    .line 253
    :cond_0
    iput-object p1, p0, Lcom/qihoo360/replugin/RePluginConfig;->hostVersionName:Ljava/lang/String;

    return-object p0
.end method

.method public setMoveFileWhenInstalling(Z)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 200
    invoke-direct {p0}, Lcom/qihoo360/replugin/RePluginConfig;->checkAllowModify()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    .line 203
    :cond_0
    iput-boolean p1, p0, Lcom/qihoo360/replugin/RePluginConfig;->moveFileWhenInstalling:Z

    return-object p0
.end method

.method public setOptimizeArtLoadDex(Z)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 359
    invoke-direct {p0}, Lcom/qihoo360/replugin/RePluginConfig;->checkAllowModify()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    .line 362
    :cond_0
    iput-boolean p1, p0, Lcom/qihoo360/replugin/RePluginConfig;->optimizeArtLoadDex:Z

    return-object p0
.end method

.method public setPnInstallDir(Ljava/io/File;)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 119
    invoke-direct {p0}, Lcom/qihoo360/replugin/RePluginConfig;->checkAllowModify()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    .line 122
    :cond_0
    iput-object p1, p0, Lcom/qihoo360/replugin/RePluginConfig;->pnInstallDir:Ljava/io/File;

    return-object p0
.end method

.method public setPrintDetailLog(Z)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 0

    .line 285
    iput-boolean p1, p0, Lcom/qihoo360/replugin/RePluginConfig;->printDetailLog:Z

    return-object p0
.end method

.method public setUseHostClassIfNotFound(Z)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 172
    invoke-direct {p0}, Lcom/qihoo360/replugin/RePluginConfig;->checkAllowModify()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    .line 175
    :cond_0
    iput-boolean p1, p0, Lcom/qihoo360/replugin/RePluginConfig;->useHostClassIfNotFound:Z

    return-object p0
.end method

.method public setVerifySign(Z)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 144
    invoke-direct {p0}, Lcom/qihoo360/replugin/RePluginConfig;->checkAllowModify()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    .line 147
    :cond_0
    iput-boolean p1, p0, Lcom/qihoo360/replugin/RePluginConfig;->verifySign:Z

    return-object p0
.end method
