.class public Lcom/qihoo360/replugin/packages/PluginInfoUpdater;
.super Ljava/lang/Object;
.source "PluginInfoUpdater.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/packages/PluginInfoUpdater$UpdateReceiver;
    }
.end annotation


# static fields
.field public static final ACTION_UNINSTALL_PLUGIN:Ljava/lang/String; = "ACTION_UNINSTALL_PLUGIN"

.field private static final ACTION_UPDATE_INFO:Ljava/lang/String; = "com.qihoo360.replugin.pms.ACTION_UPDATE_INFO"

.field private static final TAG:Ljava/lang/String; = "PluginInfoUpdater"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$100(Landroid/content/Intent;)Z
    .locals 0

    .line 37
    invoke-static {p0}, Lcom/qihoo360/replugin/packages/PluginInfoUpdater;->onReceiveUpdateInfo(Landroid/content/Intent;)Z

    move-result p0

    return p0
.end method

.method private static onReceiveUpdateInfo(Landroid/content/Intent;)Z
    .locals 6

    .line 70
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "PluginInfoUpdater"

    if-eqz v0, :cond_0

    .line 71
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onReceiveUpdateInfo: in="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const-string v0, "pn"

    .line 73
    invoke-virtual {p0, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 74
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_1

    return v3

    .line 79
    :cond_1
    invoke-static {v0, v3}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v2

    if-nez v2, :cond_2

    return v3

    :cond_2
    const-string v4, "used"

    .line 85
    invoke-virtual {p0, v4}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_4

    .line 86
    invoke-virtual {p0, v4, v3}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result p0

    .line 87
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_3

    .line 88
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onReceiveUpdateInfo: pn="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "; setIsUsed="

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 90
    :cond_3
    invoke-virtual {v2, p0}, Lcom/qihoo360/replugin/model/PluginInfo;->setIsUsed(Z)V

    :cond_4
    const/4 p0, 0x1

    return p0
.end method

.method public static register(Landroid/content/Context;)V
    .locals 3

    .line 45
    new-instance v0, Landroid/content/IntentFilter;

    const-string v1, "com.qihoo360.replugin.pms.ACTION_UPDATE_INFO"

    invoke-direct {v0, v1}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 46
    invoke-static {p0}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Lcom/qihoo360/replugin/compat/LocalBroadcastManager;

    move-result-object p0

    new-instance v1, Lcom/qihoo360/replugin/packages/PluginInfoUpdater$UpdateReceiver;

    const/4 v2, 0x0

    invoke-direct {v1, v2}, Lcom/qihoo360/replugin/packages/PluginInfoUpdater$UpdateReceiver;-><init>(Lcom/qihoo360/replugin/packages/PluginInfoUpdater$1;)V

    invoke-virtual {p0, v1, v0}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    return-void
.end method

.method static updateIsUsed(Landroid/content/Context;Ljava/lang/String;Z)V
    .locals 2

    .line 50
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 51
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "updateIsUsed: Prepare to send broadcast, pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "; used="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PluginInfoUpdater"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 53
    :cond_0
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.qihoo360.replugin.pms.ACTION_UPDATE_INFO"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "pn"

    .line 54
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "used"

    .line 55
    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 56
    invoke-static {p0, v0}, Lcom/qihoo360/replugin/base/IPC;->sendLocalBroadcast2AllSync(Landroid/content/Context;Landroid/content/Intent;)Z

    return-void
.end method
