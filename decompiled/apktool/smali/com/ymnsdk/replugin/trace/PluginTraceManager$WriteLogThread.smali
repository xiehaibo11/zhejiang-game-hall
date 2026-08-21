.class Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;
.super Ljava/lang/Thread;
.source "PluginTraceManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/trace/PluginTraceManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "WriteLogThread"
.end annotation


# instance fields
.field logContent:Ljava/lang/String;

.field final synthetic this$0:Lcom/ymnsdk/replugin/trace/PluginTraceManager;


# direct methods
.method public constructor <init>(Lcom/ymnsdk/replugin/trace/PluginTraceManager;Ljava/lang/String;)V
    .locals 0

    .line 118
    iput-object p1, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;->this$0:Lcom/ymnsdk/replugin/trace/PluginTraceManager;

    const-string p1, "write-trace-log-thread"

    .line 119
    invoke-direct {p0, p1}, Ljava/lang/Thread;-><init>(Ljava/lang/String;)V

    .line 120
    iput-object p2, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;->logContent:Ljava/lang/String;

    return-void
.end method

.method private writePluginLogToFile()V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 134
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " start write Plugin Log To File :logContent "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;->logContent:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PluginTraceManager: "

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 135
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;->this$0:Lcom/ymnsdk/replugin/trace/PluginTraceManager;

    invoke-static {v1}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->access$100(Lcom/ymnsdk/replugin/trace/PluginTraceManager;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 136
    iget-object v1, p0, Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;->logContent:Ljava/lang/String;

    sget-object v2, Lcom/qihoo360/replugin/utils/Charsets;->UTF_8:Ljava/nio/charset/Charset;

    const/4 v3, 0x0

    invoke-static {v0, v1, v2, v3}, Lcom/qihoo360/replugin/utils/FileUtils;->writeStringToFile(Ljava/io/File;Ljava/lang/String;Ljava/nio/charset/Charset;Z)V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 125
    invoke-super {p0}, Ljava/lang/Thread;->run()V

    .line 127
    :try_start_0
    invoke-direct {p0}, Lcom/ymnsdk/replugin/trace/PluginTraceManager$WriteLogThread;->writePluginLogToFile()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 129
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method
