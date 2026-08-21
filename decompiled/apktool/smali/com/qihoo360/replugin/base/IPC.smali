.class public Lcom/qihoo360/replugin/base/IPC;
.super Ljava/lang/Object;
.source "IPC.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "IPC"

.field private static sCurrentPid:I

.field private static sCurrentProcess:Ljava/lang/String;

.field private static sIsPersistentProcess:Z

.field private static sIsUIProcess:Z

.field private static sPackageName:Ljava/lang/String;

.field private static sPersistentProcessName:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getCurrentProcessId()I
    .locals 1

    .line 92
    sget v0, Lcom/qihoo360/replugin/base/IPC;->sCurrentPid:I

    return v0
.end method

.method public static getCurrentProcessName()Ljava/lang/String;
    .locals 1

    .line 83
    sget-object v0, Lcom/qihoo360/replugin/base/IPC;->sCurrentProcess:Ljava/lang/String;

    return-object v0
.end method

.method public static getPackageName()Ljava/lang/String;
    .locals 1

    .line 211
    sget-object v0, Lcom/qihoo360/replugin/base/IPC;->sPackageName:Ljava/lang/String;

    return-object v0
.end method

.method public static getPersistentProcessName()Ljava/lang/String;
    .locals 1

    .line 101
    sget-object v0, Lcom/qihoo360/replugin/base/IPC;->sPersistentProcessName:Ljava/lang/String;

    return-object v0
.end method

.method public static getPidByProcessName(Ljava/lang/String;)I
    .locals 2

    .line 160
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, -0x1

    if-eqz v0, :cond_0

    return v1

    .line 165
    :cond_0
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 166
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessId()I

    move-result p0

    return p0

    .line 171
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v0

    invoke-interface {v0, p0}, Lcom/qihoo360/loader2/IPluginHost;->getPidByProcessName(Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 174
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    return v1
.end method

.method public static getPluginHostProcessName()Ljava/lang/String;
    .locals 1

    .line 111
    sget-object v0, Lcom/qihoo360/replugin/base/IPC;->sPersistentProcessName:Ljava/lang/String;

    return-object v0
.end method

.method public static getProcessNameByPid(I)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x0

    if-gez p0, :cond_0

    return-object v0

    .line 192
    :cond_0
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessId()I

    move-result v1

    if-ne p0, v1, :cond_1

    .line 193
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 197
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v1

    invoke-interface {v1, p0}, Lcom/qihoo360/loader2/IPluginHost;->getProcessNameByPid(I)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 200
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    return-object v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 2

    .line 55
    invoke-static {}, Lcom/qihoo360/loader/utils/SysUtils;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/replugin/base/IPC;->sCurrentProcess:Ljava/lang/String;

    .line 56
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v0

    sput v0, Lcom/qihoo360/replugin/base/IPC;->sCurrentPid:I

    .line 57
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->packageName:Ljava/lang/String;

    sput-object p0, Lcom/qihoo360/replugin/base/IPC;->sPackageName:Ljava/lang/String;

    .line 60
    sget-boolean p0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->PERSISTENT_ENABLE:Z

    if-eqz p0, :cond_1

    .line 61
    sget-object p0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->PERSISTENT_NAME:Ljava/lang/String;

    .line 62
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, ":"

    .line 63
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 64
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/qihoo360/replugin/base/IPC;->sPackageName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/qihoo360/replugin/base/IPC;->sPersistentProcessName:Ljava/lang/String;

    goto :goto_0

    .line 66
    :cond_0
    sput-object p0, Lcom/qihoo360/replugin/base/IPC;->sPersistentProcessName:Ljava/lang/String;

    goto :goto_0

    .line 70
    :cond_1
    sget-object p0, Lcom/qihoo360/replugin/base/IPC;->sPackageName:Ljava/lang/String;

    sput-object p0, Lcom/qihoo360/replugin/base/IPC;->sPersistentProcessName:Ljava/lang/String;

    .line 73
    :cond_2
    :goto_0
    sget-object p0, Lcom/qihoo360/replugin/base/IPC;->sCurrentProcess:Ljava/lang/String;

    sget-object v0, Lcom/qihoo360/replugin/base/IPC;->sPackageName:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    sput-boolean p0, Lcom/qihoo360/replugin/base/IPC;->sIsUIProcess:Z

    .line 74
    sget-object p0, Lcom/qihoo360/replugin/base/IPC;->sCurrentProcess:Ljava/lang/String;

    sget-object v0, Lcom/qihoo360/replugin/base/IPC;->sPersistentProcessName:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    sput-boolean p0, Lcom/qihoo360/replugin/base/IPC;->sIsPersistentProcess:Z

    return-void
.end method

.method public static isPersistentEnable()Z
    .locals 1

    .line 150
    sget-boolean v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->PERSISTENT_ENABLE:Z

    return v0
.end method

.method public static isPersistentProcess()Z
    .locals 1

    .line 140
    sget-boolean v0, Lcom/qihoo360/replugin/base/IPC;->sIsPersistentProcess:Z

    return v0
.end method

.method public static isPluginHostProcess()Z
    .locals 2

    .line 122
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPluginHostProcessName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    return v0
.end method

.method public static isUIProcess()Z
    .locals 1

    .line 131
    sget-boolean v0, Lcom/qihoo360/replugin/base/IPC;->sIsUIProcess:Z

    return v0
.end method

.method public static sendLocalBroadcast2All(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 1

    .line 278
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 279
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "sendLocalBroadcast2All: intent="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "IPC"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 282
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object p0

    const/4 v0, 0x0

    invoke-interface {p0, v0, p1}, Lcom/qihoo360/loader2/IPluginHost;->sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 286
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method

.method public static sendLocalBroadcast2AllSync(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 1

    .line 364
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 365
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "sendLocalBroadcast2AllSync: intent="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "IPC"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 368
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object p0

    const/4 v0, 0x0

    invoke-interface {p0, v0, p1}, Lcom/qihoo360/loader2/IPluginHost;->sendIntent2ProcessSync(Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 372
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method

.method public static sendLocalBroadcast2Plugin(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Z
    .locals 1

    .line 223
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 224
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "sendLocalBroadcast2Plugin: target="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " intent="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "IPC"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 226
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    return v0

    .line 230
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object p0

    invoke-interface {p0, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->sendIntent2Plugin(Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 234
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    return v0
.end method

.method public static sendLocalBroadcast2PluginSync(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Z
    .locals 1

    .line 305
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 306
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "sendLocalBroadcast2PluginSync: target="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " intent="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "IPC"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 308
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    return v0

    .line 312
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object p0

    invoke-interface {p0, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->sendIntent2PluginSync(Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 316
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    return v0
.end method

.method public static sendLocalBroadcast2Process(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Z
    .locals 1

    .line 251
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 252
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "sendLocalBroadcast2Process: target="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " intent="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "IPC"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 254
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    return v0

    .line 258
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object p0

    invoke-interface {p0, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 262
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    return v0
.end method

.method public static sendLocalBroadcast2ProcessSync(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Z
    .locals 1

    .line 335
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 336
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "sendLocalBroadcast2ProcessSync: target="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " intent="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "IPC"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 338
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    return v0

    .line 342
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object p0

    invoke-interface {p0, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->sendIntent2ProcessSync(Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 346
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    return v0
.end method
