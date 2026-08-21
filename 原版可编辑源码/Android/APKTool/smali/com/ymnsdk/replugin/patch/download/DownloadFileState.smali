.class public Lcom/ymnsdk/replugin/patch/download/DownloadFileState;
.super Ljava/lang/Object;
.source "DownloadFileState.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ymnsdk/replugin/patch/download/DownloadFileState$Factory;
    }
.end annotation


# static fields
.field private static mDownloadFileInfo:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 32
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;
    .locals 1

    .line 25
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState$Factory;->access$000()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public clearAllTasks()Z
    .locals 4

    .line 261
    :try_start_0
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 262
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    .line 263
    new-instance v2, Ljava/io/File;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavePath()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 264
    new-instance v3, Ljava/io/File;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSaveCachePath()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v3, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 265
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    .line 266
    :cond_0
    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {v3}, Ljava/io/File;->delete()Z

    .line 267
    :cond_1
    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->clear()V

    .line 268
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncToFile()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_2
    const/4 v0, 0x1

    return v0

    :catch_0
    move-exception v0

    .line 274
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 v0, 0x0

    return v0
.end method

.method public getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;
    .locals 1

    if-eqz p1, :cond_0

    .line 69
    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 70
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getDownloadFileStatus()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;",
            ">;"
        }
    .end annotation

    .line 76
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    return-object v0
.end method

.method public getDownloadSize(Ljava/lang/String;)J
    .locals 2

    .line 167
    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 168
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 170
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavedSize()J

    move-result-wide v0

    goto :goto_0

    :cond_0
    const-wide/16 v0, 0x0

    :goto_0
    return-wide v0
.end method

.method public isResumeDownload(Ljava/lang/String;)Z
    .locals 1

    .line 318
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 320
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public newTaskState(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    .line 226
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;-><init>()V

    .line 227
    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setHash(Ljava/lang/String;)Z

    .line 228
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setURL(Ljava/lang/String;)Z

    .line 229
    invoke-virtual {v0, p3}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setSavePath(Ljava/lang/String;)Z

    .line 231
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z

    const/4 p1, 0x1

    return p1
.end method

.method public overTime(JJI)Z
    .locals 0

    sub-long/2addr p3, p1

    mul-int/lit8 p5, p5, 0x3c

    mul-int/lit8 p5, p5, 0x3c

    mul-int/lit16 p5, p5, 0x3e8

    int-to-long p1, p5

    cmp-long p1, p3, p1

    if-lez p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public pause()V
    .locals 3

    .line 108
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 109
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    const/4 v2, 0x0

    .line 110
    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setValid(Z)V

    goto :goto_0

    .line 112
    :cond_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncToFile()V

    return-void
.end method

.method public pause(Ljava/lang/String;)V
    .locals 1

    .line 85
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object p1

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    .line 87
    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setValid(Z)V

    .line 88
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z

    :cond_0
    return-void
.end method

.method public removeTaskHistory(Ljava/lang/String;)Z
    .locals 1

    .line 249
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 250
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 251
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncToFile()V

    :cond_0
    const/4 p1, 0x1

    return p1
.end method

.method public declared-synchronized resetStatus(Ljava/lang/String;)Z
    .locals 3

    monitor-enter p0

    .line 131
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object p1

    if-eqz p1, :cond_0

    const-wide/16 v0, 0x0

    .line 133
    invoke-virtual {p1, v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setSavedSize(J)Z

    .line 134
    invoke-virtual {p1, v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setTotalSize(J)Z

    const/4 v0, 0x1

    .line 135
    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setValid(Z)V

    .line 136
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z

    .line 138
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/util/DownloadUtils;->removeFile(Ljava/lang/String;)Z

    .line 139
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSaveCachePath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->removeFile(Ljava/lang/String;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 140
    monitor-exit p0

    return v0

    :cond_0
    const/4 p1, 0x0

    .line 142
    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public resume()V
    .locals 3

    .line 119
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 120
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    const/4 v2, 0x1

    .line 121
    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setValid(Z)V

    goto :goto_0

    .line 123
    :cond_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncToFile()V

    return-void
.end method

.method public resume(Ljava/lang/String;)V
    .locals 1

    .line 97
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object p1

    if-eqz p1, :cond_0

    const/4 v0, 0x1

    .line 99
    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setValid(Z)V

    .line 100
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z

    :cond_0
    return-void
.end method

.method public searchResumeTask()Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;
    .locals 6

    .line 150
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 151
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    .line 152
    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getValid()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavedSize()J

    move-result-wide v2

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getTotalSize()J

    move-result-wide v4

    cmp-long v2, v2, v4

    if-gez v2, :cond_0

    return-object v1

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public syncDownloadFileSize(Ljava/lang/String;I)Z
    .locals 2

    .line 215
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 216
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getValid()Z

    move-result v0

    if-eqz v0, :cond_0

    int-to-long v0, p2

    .line 217
    invoke-virtual {p1, v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->addSavedSize(J)Z

    .line 218
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public syncDownloadStatus(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 3

    .line 42
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncFromFile()V

    .line 45
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object v0

    if-nez v0, :cond_0

    .line 47
    invoke-virtual {p0, p1, p2, p3}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->newTaskState(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    goto :goto_1

    .line 51
    :cond_0
    new-instance p1, Ljava/io/File;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSaveCachePath()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 52
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result p2

    if-eqz p2, :cond_1

    invoke-virtual {p1}, Ljava/io/File;->length()J

    move-result-wide p1

    goto :goto_0

    :cond_1
    const-wide/16 p1, 0x0

    .line 53
    :goto_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavedSize()J

    move-result-wide v1

    cmp-long p3, p1, v1

    if-lez p3, :cond_2

    .line 54
    invoke-virtual {v0, p1, p2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setSavedSize(J)Z

    .line 57
    :cond_2
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->addRetryCount()V

    .line 58
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z

    :goto_1
    const/4 p1, 0x1

    return p1
.end method

.method public declared-synchronized syncFromFile()V
    .locals 4

    monitor-enter p0

    .line 281
    :try_start_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getConfigPath()Ljava/lang/String;

    move-result-object v0

    .line 282
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 283
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    if-nez v1, :cond_0

    .line 284
    monitor-exit p0

    return-void

    .line 287
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

    .line 288
    :try_start_2
    invoke-virtual {v1}, Ljava/io/ObjectInputStream;->readObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 289
    :try_start_3
    invoke-virtual {v1}, Ljava/io/ObjectInputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 287
    :try_start_4
    throw v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception v2

    .line 289
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

    .line 291
    :try_start_7
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_4

    .line 293
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

    .line 297
    :try_start_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getConfigPath()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    .line 298
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

    .line 299
    :try_start_2
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/io/ObjectOutput;->writeObject(Ljava/lang/Object;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 300
    :try_start_3
    invoke-interface {v1}, Ljava/io/ObjectOutput;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 298
    :try_start_4
    throw v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception v2

    .line 300
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

    .line 301
    :try_start_7
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_4

    .line 303
    :goto_1
    monitor-exit p0

    return-void

    :catchall_4
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public updateState(Ljava/lang/String;J)V
    .locals 1

    .line 306
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    .line 307
    invoke-virtual {v0, p2, p3}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setSavedSize(J)Z

    .line 308
    sget-object p2, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-interface {p2, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 309
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncToFile()V

    return-void
.end method

.method public updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z
    .locals 2

    .line 236
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->mDownloadFileInfo:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getHash()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 238
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncToFile()V

    const/4 p1, 0x1

    return p1
.end method

.method public verifySaveFileSize(Ljava/lang/String;J)Z
    .locals 4

    .line 187
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 191
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getSavedSize()J

    move-result-wide v0

    add-long/2addr p2, v0

    .line 193
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getTotalSize()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    .line 197
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getTotalSize()J

    move-result-wide v0

    cmp-long v0, v0, p2

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 203
    :cond_0
    invoke-virtual {p1, p2, p3}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setTotalSize(J)Z

    .line 204
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->updateTaskState(Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)Z

    const/4 p1, 0x1

    return p1
.end method
