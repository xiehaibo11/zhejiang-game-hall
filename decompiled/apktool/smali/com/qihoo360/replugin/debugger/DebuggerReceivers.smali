.class public Lcom/qihoo360/replugin/debugger/DebuggerReceivers;
.super Ljava/lang/Object;
.source "DebuggerReceivers.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/debugger/DebuggerReceivers$DebugerReceiver;
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "DebugReceivers"


# instance fields
.field private final BR_LOGO:Ljava/lang/String;

.field private final BR_POSTFIX_ACTIVITY:Ljava/lang/String;

.field private final BR_POSTFIX_INSTALL:Ljava/lang/String;

.field private final BR_POSTFIX_INSTALL_WITH_PN:Ljava/lang/String;

.field private final BR_POSTFIX_UNINSTALL:Ljava/lang/String;

.field private final PARAM_ACTIVITY:Ljava/lang/String;

.field private final PARAM_IMMEDIATELY:Ljava/lang/String;

.field private final PARAM_PATH:Ljava/lang/String;

.field private final PARAM_PLUGIN:Ljava/lang/String;

.field private actionInstall:Ljava/lang/String;

.field private actionInstallWithPN:Ljava/lang/String;

.field private actionStartActivity:Ljava/lang/String;

.field private actionUninstall:Ljava/lang/String;

.field private packageName:Ljava/lang/String;

.field private sDebugerReceiver:Landroid/content/BroadcastReceiver;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ".replugin"

    .line 40
    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->BR_LOGO:Ljava/lang/String;

    const-string v0, ".install"

    .line 42
    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->BR_POSTFIX_INSTALL:Ljava/lang/String;

    const-string v0, ".install_with_pn"

    .line 43
    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->BR_POSTFIX_INSTALL_WITH_PN:Ljava/lang/String;

    const-string v0, ".uninstall"

    .line 45
    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->BR_POSTFIX_UNINSTALL:Ljava/lang/String;

    const-string v0, ".start_activity"

    .line 47
    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->BR_POSTFIX_ACTIVITY:Ljava/lang/String;

    const-string v0, "path"

    .line 49
    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->PARAM_PATH:Ljava/lang/String;

    const-string v0, "immediately"

    .line 51
    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->PARAM_IMMEDIATELY:Ljava/lang/String;

    const-string v0, "plugin"

    .line 53
    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->PARAM_PLUGIN:Ljava/lang/String;

    const-string v0, "activity"

    .line 55
    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->PARAM_ACTIVITY:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$000(Lcom/qihoo360/replugin/debugger/DebuggerReceivers;)Ljava/lang/String;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionInstall:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$100(Lcom/qihoo360/replugin/debugger/DebuggerReceivers;)Ljava/lang/String;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionUninstall:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$200(Lcom/qihoo360/replugin/debugger/DebuggerReceivers;)Ljava/lang/String;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionInstallWithPN:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$300(Lcom/qihoo360/replugin/debugger/DebuggerReceivers;)Ljava/lang/String;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionStartActivity:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public registerReceivers(Landroid/content/Context;)Z
    .locals 4

    .line 85
    iget-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->sDebugerReceiver:Landroid/content/BroadcastReceiver;

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    if-nez p1, :cond_1

    const/4 p1, 0x0

    return p1

    .line 93
    :cond_1
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->packageName:Ljava/lang/String;

    .line 95
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->packageName:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".replugin"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".install"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionInstall:Ljava/lang/String;

    .line 97
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->packageName:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".uninstall"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionUninstall:Ljava/lang/String;

    .line 99
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->packageName:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".install_with_pn"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionInstallWithPN:Ljava/lang/String;

    .line 101
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->packageName:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".start_activity"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionStartActivity:Ljava/lang/String;

    .line 103
    new-instance v0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers$DebugerReceiver;

    invoke-direct {v0, p0}, Lcom/qihoo360/replugin/debugger/DebuggerReceivers$DebugerReceiver;-><init>(Lcom/qihoo360/replugin/debugger/DebuggerReceivers;)V

    iput-object v0, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->sDebugerReceiver:Landroid/content/BroadcastReceiver;

    .line 104
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 105
    iget-object v2, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionInstall:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 106
    iget-object v2, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionUninstall:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 107
    iget-object v2, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionInstallWithPN:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 108
    iget-object v2, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->actionStartActivity:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 109
    iget-object v2, p0, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->sDebugerReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    return v1
.end method
