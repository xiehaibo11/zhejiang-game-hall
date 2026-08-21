.class public final Lcom/qihoo360/mobilesafe/api/IPC;
.super Ljava/lang/Object;
.source "IPC.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static final getCurrentProcessName()Ljava/lang/String;
    .locals 1

    .line 74
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static final getRunningProcessPID(Landroid/content/Context;Ljava/lang/String;)I
    .locals 2

    .line 42
    invoke-static {p0}, Lcom/qihoo360/replugin/base/AMSUtils;->getRunningAppProcessesNoThrows(Landroid/content/Context;)Ljava/util/List;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 44
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/ActivityManager$RunningAppProcessInfo;

    .line 45
    iget-object v1, v0, Landroid/app/ActivityManager$RunningAppProcessInfo;->processName:Ljava/lang/String;

    invoke-static {v1, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 46
    iget p0, v0, Landroid/app/ActivityManager$RunningAppProcessInfo;->pid:I

    return p0

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method public static final getUIProcessPID(Landroid/content/Context;)I
    .locals 1

    .line 37
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->packageName:Ljava/lang/String;

    .line 38
    invoke-static {p0, v0}, Lcom/qihoo360/mobilesafe/api/IPC;->getRunningProcessPID(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static final isPersistentProcess()Z
    .locals 1

    .line 79
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v0

    return v0
.end method

.method public static final isRunningProcess(Ljava/lang/String;)Z
    .locals 2

    .line 59
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/base/AMSUtils;->getRunningAppProcessesNoThrows(Landroid/content/Context;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 61
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/ActivityManager$RunningAppProcessInfo;

    .line 62
    iget-object v1, v1, Landroid/app/ActivityManager$RunningAppProcessInfo;->processName:Ljava/lang/String;

    invoke-static {v1, p0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method public static final isUIProcess()Z
    .locals 1

    .line 87
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isUIProcess()Z

    move-result v0

    return v0
.end method

.method public static final sendLocalBroadcast2All(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    .line 122
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/base/IPC;->sendLocalBroadcast2All(Landroid/content/Context;Landroid/content/Intent;)Z

    return-void
.end method

.method public static final sendLocalBroadcast2Plugin(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)V
    .locals 0

    .line 111
    invoke-static {p0, p1, p2}, Lcom/qihoo360/replugin/base/IPC;->sendLocalBroadcast2Plugin(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Z

    return-void
.end method

.method public static final sendLocalBroadcast2Process(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)V
    .locals 0

    .line 99
    invoke-static {p0, p1, p2}, Lcom/qihoo360/replugin/base/IPC;->sendLocalBroadcast2Process(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Z

    return-void
.end method
