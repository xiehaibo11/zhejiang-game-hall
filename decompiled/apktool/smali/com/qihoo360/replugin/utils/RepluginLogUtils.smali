.class public Lcom/qihoo360/replugin/utils/RepluginLogUtils;
.super Ljava/lang/Object;
.source "RepluginLogUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/utils/RepluginLogUtils$Factory;
    }
.end annotation


# instance fields
.field private logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

.field private mWriteablePath:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 33
    iput-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    return-void
.end method

.method public static getInstance()Lcom/qihoo360/replugin/utils/RepluginLogUtils;
    .locals 1

    .line 24
    invoke-static {}, Lcom/qihoo360/replugin/utils/RepluginLogUtils$Factory;->access$000()Lcom/qihoo360/replugin/utils/RepluginLogUtils;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public addLog(Ljava/lang/String;)V
    .locals 2

    .line 87
    invoke-static {}, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->getInstance()Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/RepluginSharedPreferencesUtils;->getPluginLog()Ljava/lang/String;

    move-result-object v0

    const-string v1, "true"

    .line 88
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 89
    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->syncFromFile()V

    .line 90
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    if-nez v0, :cond_1

    new-instance v0, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    .line 91
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->getSize()I

    move-result v1

    add-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->setSize(I)V

    .line 92
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->getLogList()Ljava/util/ArrayList;

    move-result-object v0

    if-nez v0, :cond_2

    .line 93
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 94
    :cond_2
    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 95
    iget-object p1, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    invoke-virtual {p1, v0}, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->setLogList(Ljava/util/ArrayList;)V

    .line 96
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->syncToFile()V

    return-void
.end method

.method public clearLog()V
    .locals 2

    .line 102
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->syncFromFile()V

    .line 103
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    if-nez v0, :cond_0

    new-instance v0, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    .line 104
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->setSize(I)V

    .line 105
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->getLogList()Ljava/util/ArrayList;

    move-result-object v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->setLogList(Ljava/util/ArrayList;)V

    .line 106
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;->getLogList()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 107
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->syncToFile()V

    return-void
.end method

.method public getConfigPath()Ljava/lang/String;
    .locals 2

    .line 54
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->mWriteablePath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "plugin_log.cfg"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getWriteablePath()Ljava/lang/String;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->mWriteablePath:Ljava/lang/String;

    return-object v0
.end method

.method public readLog()Lcom/qihoo360/replugin/utils/basic/RepluginLogData;
    .locals 1

    .line 113
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->syncFromFile()V

    .line 114
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    if-nez v0, :cond_0

    new-instance v0, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    .line 115
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    return-object v0
.end method

.method public setWriteablePath(Ljava/lang/String;)V
    .locals 1

    .line 37
    :try_start_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 38
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_0

    .line 39
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 41
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->getCanonicalPath()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->mWriteablePath:Ljava/lang/String;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 44
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public declared-synchronized syncFromFile()V
    .locals 4

    monitor-enter p0

    .line 59
    :try_start_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->getConfigPath()Ljava/lang/String;

    move-result-object v0

    .line 60
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 61
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    if-nez v1, :cond_0

    .line 62
    monitor-exit p0

    return-void

    .line 65
    :cond_0
    :try_start_1
    new-instance v1, Ljava/io/ObjectInputStream;

    new-instance v2, Ljava/io/BufferedInputStream;

    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v0}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v1, v2}, Ljava/io/ObjectInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    .line 66
    :try_start_2
    invoke-virtual {v1}, Ljava/io/ObjectInputStream;->readObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    iput-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 67
    :try_start_3
    invoke-virtual {v1}, Ljava/io/ObjectInputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 65
    :try_start_4
    throw v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception v2

    .line 67
    :try_start_5
    invoke-virtual {v1}, Ljava/io/ObjectInputStream;->close()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    goto :goto_0

    :catchall_2
    move-exception v1

    :try_start_6
    invoke-virtual {v0, v1}, Ljava/lang/Throwable;->addSuppressed(Ljava/lang/Throwable;)V

    :goto_0
    throw v2
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    :catchall_3
    move-exception v0

    .line 69
    :try_start_7
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_4

    .line 71
    :goto_1
    monitor-exit p0

    return-void

    :catchall_4
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized syncToFile()V
    .locals 5

    monitor-enter p0

    .line 75
    :try_start_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->getConfigPath()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    .line 77
    :try_start_1
    new-instance v1, Ljava/io/ObjectOutputStream;

    new-instance v2, Ljava/io/BufferedOutputStream;

    new-instance v3, Ljava/io/FileOutputStream;

    const/4 v4, 0x0

    invoke-direct {v3, v0, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;Z)V

    invoke-direct {v2, v3}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    invoke-direct {v1, v2}, Ljava/io/ObjectOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    .line 78
    :try_start_2
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->logData:Lcom/qihoo360/replugin/utils/basic/RepluginLogData;

    invoke-interface {v1, v0}, Ljava/io/ObjectOutput;->writeObject(Ljava/lang/Object;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 79
    :try_start_3
    invoke-interface {v1}, Ljava/io/ObjectOutput;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 77
    :try_start_4
    throw v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception v2

    .line 79
    :try_start_5
    invoke-interface {v1}, Ljava/io/ObjectOutput;->close()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    goto :goto_0

    :catchall_2
    move-exception v1

    :try_start_6
    invoke-virtual {v0, v1}, Ljava/lang/Throwable;->addSuppressed(Ljava/lang/Throwable;)V

    :goto_0
    throw v2
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    :catchall_3
    move-exception v0

    .line 80
    :try_start_7
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_4

    .line 82
    :goto_1
    monitor-exit p0

    return-void

    :catchall_4
    move-exception v0

    monitor-exit p0

    throw v0
.end method
