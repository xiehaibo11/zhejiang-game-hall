.class public Lcom/qihoo360/loader2/PMF;
.super Ljava/lang/Object;
.source "PMF.java"


# static fields
.field private static sContext:Landroid/content/Context;

.field static sPluginMgr:Lcom/qihoo360/loader2/PmBase;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static final addBuiltinModule(Ljava/lang/String;Ljava/lang/Class;Lcom/qihoo360/i/IModule;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/Class<",
            "+",
            "Lcom/qihoo360/i/IModule;",
            ">;",
            "Lcom/qihoo360/i/IModule;",
            ")V"
        }
    .end annotation

    .line 100
    sget-object v0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p0, p1, p2}, Lcom/qihoo360/loader2/PmBase;->addBuiltinModule(Ljava/lang/String;Ljava/lang/Class;Lcom/qihoo360/i/IModule;)V

    return-void
.end method

.method public static final callAppCreate()V
    .locals 1

    .line 84
    sget-object v0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0}, Lcom/qihoo360/loader2/PmBase;->callAppCreate()V

    return-void
.end method

.method public static final callAttach()V
    .locals 1

    .line 91
    sget-object v0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0}, Lcom/qihoo360/loader2/PmBase;->callAttach()V

    return-void
.end method

.method public static final dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V
    .locals 1

    .line 198
    sget-object v0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p0, p1, p2}, Lcom/qihoo360/loader2/PmBase;->dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V

    return-void
.end method

.method public static final forward(Landroid/app/Activity;Landroid/content/Intent;)V
    .locals 10

    const-string v0, "ws001"

    .line 132
    invoke-virtual {p0}, Landroid/app/Activity;->finish()V

    .line 136
    :try_start_0
    new-instance v1, Lcom/qihoo360/loader2/PluginIntent;

    invoke-direct {v1, p1}, Lcom/qihoo360/loader2/PluginIntent;-><init>(Landroid/content/Intent;)V

    .line 138
    invoke-virtual {v1}, Lcom/qihoo360/loader2/PluginIntent;->getOriginal()Ljava/lang/String;

    move-result-object v5

    .line 139
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 141
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "f.a f: orig=nul i="

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 146
    :cond_0
    invoke-virtual {v1}, Lcom/qihoo360/loader2/PluginIntent;->getContainer()Ljava/lang/String;

    move-result-object v6

    .line 147
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 149
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "f.a f: c=nul i="

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 154
    :cond_1
    invoke-virtual {v1}, Lcom/qihoo360/loader2/PluginIntent;->getPlugin()Ljava/lang/String;

    move-result-object v7

    .line 155
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 157
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "f.a f: n=nul i="

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 162
    :cond_2
    invoke-virtual {v1}, Lcom/qihoo360/loader2/PluginIntent;->getActivity()Ljava/lang/String;

    move-result-object v8

    .line 163
    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 165
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "f.a f: t=nul i="

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 170
    :cond_3
    invoke-virtual {v1}, Lcom/qihoo360/loader2/PluginIntent;->getProcess()I

    move-result v9

    .line 171
    invoke-static {v9}, Lcom/qihoo360/loader2/PluginManager;->isValidActivityProcess(I)Z

    move-result v2

    if-nez v2, :cond_4

    .line 173
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "f.a f: p="

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " i="

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 178
    :cond_4
    invoke-virtual {v1}, Lcom/qihoo360/loader2/PluginIntent;->getCounter()I

    move-result v2

    if-ltz v2, :cond_6

    const/16 v3, 0xa

    if-lt v2, v3, :cond_5

    goto :goto_0

    :cond_5
    add-int/lit8 v2, v2, 0x1

    .line 187
    invoke-virtual {v1, v2}, Lcom/qihoo360/loader2/PluginIntent;->setCounter(I)V

    .line 189
    sget-object v1, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v1, v1, Lcom/qihoo360/loader2/PmBase;->mClient:Lcom/qihoo360/loader2/PluginProcessPer;

    iget-object v2, v1, Lcom/qihoo360/loader2/PluginProcessPer;->mACM:Lcom/qihoo360/loader2/PluginContainers;

    move-object v3, p0

    move-object v4, p1

    invoke-virtual/range {v2 .. v9}, Lcom/qihoo360/loader2/PluginContainers;->forwardIntent(Landroid/app/Activity;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    goto :goto_1

    .line 181
    :cond_6
    :goto_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "f.a f: ooc c="

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    .line 192
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "f.a f: "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_1
    return-void
.end method

.method public static final getApplicationContext()Landroid/content/Context;
    .locals 1

    .line 60
    sget-object v0, Lcom/qihoo360/loader2/PMF;->sContext:Landroid/content/Context;

    return-object v0
.end method

.method public static final getInternal()Lcom/qihoo360/loader2/PluginLibraryInternalProxy;
    .locals 1

    .line 114
    sget-object v0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v0, v0, Lcom/qihoo360/loader2/PmBase;->mInternal:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    return-object v0
.end method

.method public static final getLocal()Lcom/qihoo360/loader2/PluginCommImpl;
    .locals 1

    .line 107
    sget-object v0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v0, v0, Lcom/qihoo360/loader2/PmBase;->mLocal:Lcom/qihoo360/loader2/PluginCommImpl;

    return-object v0
.end method

.method public static final init(Landroid/app/Application;)V
    .locals 1

    .line 67
    invoke-static {p0}, Lcom/qihoo360/loader2/PMF;->setApplicationContext(Landroid/content/Context;)V

    .line 69
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginManager;->init(Landroid/content/Context;)V

    .line 71
    new-instance v0, Lcom/qihoo360/loader2/PmBase;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/PmBase;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    .line 72
    invoke-virtual {v0}, Lcom/qihoo360/loader2/PmBase;->init()V

    .line 74
    invoke-static {}, Lcom/qihoo360/loader2/PMF;->getLocal()Lcom/qihoo360/loader2/PluginCommImpl;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/i/Factory;->sPluginManager:Lcom/qihoo360/loader2/PluginCommImpl;

    .line 75
    invoke-static {}, Lcom/qihoo360/loader2/PMF;->getInternal()Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    .line 77
    invoke-static {p0}, Lcom/qihoo360/loader/utils/PatchClassLoaderUtils;->patch(Landroid/app/Application;)Z

    return-void
.end method

.method public static final loadClass(Ljava/lang/String;Z)Ljava/lang/Class;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Z)",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .line 123
    sget-object v0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p0, p1}, Lcom/qihoo360/loader2/PmBase;->loadClass(Ljava/lang/String;Z)Ljava/lang/Class;

    move-result-object p0

    return-object p0
.end method

.method private static final setApplicationContext(Landroid/content/Context;)V
    .locals 0

    .line 53
    sput-object p0, Lcom/qihoo360/loader2/PMF;->sContext:Landroid/content/Context;

    return-void
.end method

.method public static stopService(Landroid/content/Intent;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 204
    sget-object v0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v0, v0, Lcom/qihoo360/loader2/PmBase;->mClient:Lcom/qihoo360/loader2/PluginProcessPer;

    invoke-virtual {v0}, Lcom/qihoo360/loader2/PluginProcessPer;->fetchServiceServer()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, p0, v1}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->stopService(Landroid/content/Intent;Landroid/os/Messenger;)I

    return-void
.end method
