.class public Lcom/qihoo360/replugin/packages/PluginManagerProxy;
.super Ljava/lang/Object;
.source "PluginManagerProxy.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "PluginManagerClient"

.field private static sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

.field private static sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

.field private static sRunningSynced:Z


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 48
    new-instance v0, Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-direct {v0}, Lcom/qihoo360/replugin/packages/PluginRunningList;-><init>()V

    sput-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

    .line 50
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v1

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessId()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/qihoo360/replugin/packages/PluginRunningList;->setProcessInfo(Ljava/lang/String;I)V

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addToRunningPluginsNoThrows(Ljava/lang/String;)V
    .locals 3

    .line 217
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-virtual {v0, p0}, Lcom/qihoo360/replugin/packages/PluginRunningList;->add(Ljava/lang/String;)V

    .line 220
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    if-eqz v0, :cond_0

    .line 224
    :try_start_0
    sget-object v1, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

    iget-object v1, v1, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    sget-object v2, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

    iget v2, v2, Lcom/qihoo360/replugin/packages/PluginRunningList;->mPid:I

    invoke-interface {v0, v1, v2, p0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->addToRunningPlugins(Ljava/lang/String;ILjava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 228
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public static connectToServer(Lcom/qihoo360/loader2/IPluginHost;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 60
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    if-eqz v0, :cond_1

    .line 61
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 62
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "connectToServer: Already connected! host="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "PluginManagerClient"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void

    .line 67
    :cond_1
    invoke-interface {p0}, Lcom/qihoo360/loader2/IPluginHost;->fetchManagerServer()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object p0

    sput-object p0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    return-void
.end method

.method public static disconnect()V
    .locals 1

    const/4 v0, 0x0

    .line 74
    sput-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    const/4 v0, 0x0

    .line 77
    sput-boolean v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningSynced:Z

    return-void
.end method

.method public static getRunningPluginsNoThrows()Lcom/qihoo360/replugin/packages/PluginRunningList;
    .locals 2

    .line 243
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    if-eqz v0, :cond_0

    .line 245
    :try_start_0
    new-instance v0, Lcom/qihoo360/replugin/packages/PluginRunningList;

    sget-object v1, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    invoke-interface {v1}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->getRunningPlugins()Lcom/qihoo360/replugin/packages/PluginRunningList;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/qihoo360/replugin/packages/PluginRunningList;-><init>(Lcom/qihoo360/replugin/packages/PluginRunningList;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 249
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-nez v0, :cond_1

    .line 256
    new-instance v0, Lcom/qihoo360/replugin/packages/PluginRunningList;

    sget-object v1, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-direct {v0, v1}, Lcom/qihoo360/replugin/packages/PluginRunningList;-><init>(Lcom/qihoo360/replugin/packages/PluginRunningList;)V

    :cond_1
    return-object v0
.end method

.method public static getRunningProcessesByPluginNoThrows(Ljava/lang/String;)[Ljava/lang/String;
    .locals 2

    .line 269
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    if-eqz v0, :cond_0

    .line 271
    :try_start_0
    invoke-interface {v0, p0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->getRunningProcessesByPlugin(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception v0

    .line 275
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    .line 282
    :cond_0
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-virtual {v0, p0}, Lcom/qihoo360/replugin/packages/PluginRunningList;->isRunning(Ljava/lang/String;)Z

    move-result p0

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    new-array p0, p0, [Ljava/lang/String;

    .line 283
    sget-object v1, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

    iget-object v1, v1, Lcom/qihoo360/replugin/packages/PluginRunningList;->mProcessName:Ljava/lang/String;

    aput-object v1, p0, v0

    goto :goto_0

    :cond_1
    new-array p0, v0, [Ljava/lang/String;

    :goto_0
    return-object p0
.end method

.method public static isPluginRunning(Ljava/lang/String;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 148
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-virtual {v0, p0}, Lcom/qihoo360/replugin/packages/PluginRunningList;->isRunning(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x1

    return p0

    .line 152
    :cond_0
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    if-nez v0, :cond_1

    const-string p0, "ws001"

    const-string v0, "pmp.ipr: s=null"

    .line 155
    invoke-static {p0, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, 0x0

    return p0

    :cond_1
    const/4 v1, 0x0

    .line 161
    invoke-interface {v0, p0, v1}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->isPluginRunning(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static isPluginRunningInProcess(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 173
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 175
    sget-object p1, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-virtual {p1, p0}, Lcom/qihoo360/replugin/packages/PluginRunningList;->isRunning(Ljava/lang/String;)Z

    move-result p0

    return p0

    .line 178
    :cond_0
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    if-nez v0, :cond_1

    const-string p0, "ws001"

    const-string p1, "pmp.iprip: s=null"

    .line 181
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p0, 0x0

    return p0

    .line 187
    :cond_1
    invoke-interface {v0, p0, p1}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->isPluginRunning(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static load()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 91
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    invoke-interface {v0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->load()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public static syncRunningPlugins()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 197
    sget-boolean v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningSynced:Z

    if-eqz v0, :cond_0

    return-void

    .line 201
    :cond_0
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/packages/PluginRunningList;->hasRunning()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 206
    :cond_1
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    sget-object v1, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningList:Lcom/qihoo360/replugin/packages/PluginRunningList;

    invoke-interface {v0, v1}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->syncRunningPlugins(Lcom/qihoo360/replugin/packages/PluginRunningList;)V

    const/4 v0, 0x1

    .line 207
    sput-boolean v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRunningSynced:Z

    return-void
.end method

.method public static updateAllPlugins()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 102
    sget-object v0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    invoke-interface {v0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->load()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public static updateUsedIfNeeded(Ljava/lang/String;Z)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 112
    invoke-static {p0, v0}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 117
    :cond_0
    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->isUsed()Z

    move-result v1

    if-ne v1, p1, :cond_2

    .line 119
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 120
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updateUsedIfNeeded: pi.isUsed == used, ignore. used="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p1, "; pn="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "PluginManagerClient"

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-void

    .line 124
    :cond_2
    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result p0

    if-eqz p0, :cond_3

    return-void

    .line 128
    :cond_3
    sget-object p0, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->sRemote:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    if-nez p0, :cond_4

    const-string p0, "ws001"

    const-string p1, "pmc.uuin: s=null"

    .line 131
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 137
    :cond_4
    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p0, v0, p1}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->updateUsed(Ljava/lang/String;Z)V

    return-void
.end method
