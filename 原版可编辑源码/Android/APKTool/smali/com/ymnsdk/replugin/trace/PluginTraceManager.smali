.class public Lcom/ymnsdk/replugin/trace/PluginTraceManager;
.super Ljava/lang/Object;
.source "PluginTraceManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;,
        Lcom/ymnsdk/replugin/trace/PluginTraceManager$PluginTraceManagerHolder;
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "PluginTraceManager: "


# instance fields
.field private mergeApkStepLogPath:Ljava/lang/String;

.field private pluginStepLogPath:Ljava/lang/String;

.field private final threadPoolExecutor:Ljava/util/concurrent/ThreadPoolExecutor;

.field private useLogPath:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 10

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 30
    iput-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->useLogPath:Ljava/lang/String;

    .line 31
    iput-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->pluginStepLogPath:Ljava/lang/String;

    .line 32
    iput-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->mergeApkStepLogPath:Ljava/lang/String;

    .line 35
    new-instance v0, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v6, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v7, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v7}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    invoke-static {}, Ljava/util/concurrent/Executors;->defaultThreadFactory()Ljava/util/concurrent/ThreadFactory;

    move-result-object v8

    new-instance v9, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;

    invoke-direct {v9}, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;-><init>()V

    const/4 v2, 0x1

    const/4 v3, 0x2

    const-wide/16 v4, 0xc

    move-object v1, v0

    invoke-direct/range {v1 .. v9}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V

    iput-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->threadPoolExecutor:Ljava/util/concurrent/ThreadPoolExecutor;

    return-void
.end method

.method synthetic constructor <init>(Lcom/ymnsdk/replugin/trace/PluginTraceManager$1;)V
    .locals 0

    .line 24
    invoke-direct {p0}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;-><init>()V

    return-void
.end method

.method static synthetic access$100(Lcom/ymnsdk/replugin/trace/PluginTraceManager;)Ljava/lang/String;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->useLogPath:Ljava/lang/String;

    return-object p0
.end method

.method private deleteLogFile(Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 110
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 111
    invoke-virtual {v0}, Ljava/io/File;->deleteOnExit()V

    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/trace/PluginTraceManager;
    .locals 1

    .line 43
    sget-object v0, Lcom/ymnsdk/replugin/trace/PluginTraceManager$PluginTraceManagerHolder;->PLUGIN_TRACE_MANAGER:Lcom/ymnsdk/replugin/trace/PluginTraceManager;

    return-object v0
.end method


# virtual methods
.method public deleteInstallPluginLog()V
    .locals 2

    .line 84
    iget-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->pluginStepLogPath:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "PluginTraceManager: "

    const-string v1, "deleteInstallPluginLog:  the pluginStepLogPath length is ZERO"

    .line 85
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 89
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->pluginStepLogPath:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->deleteLogFile(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 91
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public deleteMergeApkLog()V
    .locals 2

    .line 97
    iget-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->mergeApkStepLogPath:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "PluginTraceManager: "

    const-string v1, "deleteInstallPluginLog:  the mergeApkStepLogPath length is ZERO"

    .line 98
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 102
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->mergeApkStepLogPath:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->deleteLogFile(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 104
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public initLogFilePatch(Landroid/content/Context;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 50
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "handle_plugin_log"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 51
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "install_plugin_step_log.txt"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->pluginStepLogPath:Ljava/lang/String;

    .line 52
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "merge_apk_step_log.txt"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->mergeApkStepLogPath:Ljava/lang/String;

    .line 53
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "initLogFilePatch: pluginStepLogPath   : "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->pluginStepLogPath:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "PluginTraceManager: "

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 54
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "initLogFilePatch: mergeApkStepLogPath : "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->mergeApkStepLogPath:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public summitInstallPluginLog(Ljava/lang/String;Z)V
    .locals 1

    const-string v0, "PluginTraceManager: "

    if-eqz p2, :cond_0

    .line 61
    iget-object p2, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->pluginStepLogPath:Ljava/lang/String;

    iput-object p2, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->useLogPath:Ljava/lang/String;

    const-string p2, "summitInstallPluginLog:  start write log by a async thread."

    .line 62
    invoke-static {v0, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 63
    iget-object p2, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->threadPoolExecutor:Ljava/util/concurrent/ThreadPoolExecutor;

    new-instance v0, Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;

    invoke-direct {v0, p0, p1}, Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;-><init>(Lcom/ymnsdk/replugin/trace/PluginTraceManager;Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    return-void

    :cond_0
    const-string p1, "summitInstallPluginLog:  install plugin log is switch off."

    .line 66
    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public summitMergeApkLog(Ljava/lang/String;)V
    .locals 3

    const-string v0, "PluginTraceManager: "

    const-string v1, "summitMergeApkLog: start invoke summit merge apk log"

    .line 77
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 78
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "summitMergeApkLog: merge log : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 79
    iget-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->mergeApkStepLogPath:Ljava/lang/String;

    iput-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->useLogPath:Ljava/lang/String;

    .line 80
    iget-object v0, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->threadPoolExecutor:Ljava/util/concurrent/ThreadPoolExecutor;

    new-instance v1, Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;

    invoke-direct {v1, p0, p1}, Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;-><init>(Lcom/ymnsdk/replugin/trace/PluginTraceManager;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    return-void
.end method
