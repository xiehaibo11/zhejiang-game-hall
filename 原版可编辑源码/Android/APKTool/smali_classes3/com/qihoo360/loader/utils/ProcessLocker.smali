.class public final Lcom/qihoo360/loader/utils/ProcessLocker;
.super Ljava/lang/Object;
.source "ProcessLocker.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "ws001"


# instance fields
.field private final mContext:Landroid/content/Context;

.field private mFile:Ljava/io/File;

.field private mFileChannel:Ljava/nio/channels/FileChannel;

.field private mFileLock:Ljava/nio/channels/FileLock;

.field private mFileOutputStream:Ljava/io/FileOutputStream;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    const-string v0, "ws000"

    .line 58
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 59
    iput-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mContext:Landroid/content/Context;

    .line 61
    :try_start_0
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFile:Ljava/io/File;

    .line 62
    iget-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mContext:Landroid/content/Context;

    const/4 v1, 0x0

    invoke-virtual {p1, p2, v1}, Landroid/content/Context;->openFileOutput(Ljava/lang/String;I)Ljava/io/FileOutputStream;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileOutputStream:Ljava/io/FileOutputStream;

    if-eqz p1, :cond_0

    .line 64
    invoke-virtual {p1}, Ljava/io/FileOutputStream;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileChannel:Ljava/nio/channels/FileChannel;

    .line 66
    :cond_0
    iget-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileChannel:Ljava/nio/channels/FileChannel;

    if-nez p1, :cond_1

    const-string p1, "channel is null"

    .line 68
    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 73
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_1
    :goto_0
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 85
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 86
    iput-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mContext:Landroid/content/Context;

    .line 88
    :try_start_0
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p2, p3}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFile:Ljava/io/File;

    .line 89
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_0

    .line 90
    iget-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFile:Ljava/io/File;

    invoke-static {p1}, Lcom/qihoo360/replugin/utils/FileUtils;->forceMkdirParent(Ljava/io/File;)V

    .line 91
    iget-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFile:Ljava/io/File;

    invoke-virtual {p1}, Ljava/io/File;->createNewFile()Z

    .line 93
    :cond_0
    new-instance p1, Ljava/io/FileOutputStream;

    iget-object p2, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFile:Ljava/io/File;

    const/4 p3, 0x0

    invoke-direct {p1, p2, p3}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;Z)V

    iput-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileOutputStream:Ljava/io/FileOutputStream;

    .line 94
    invoke-virtual {p1}, Ljava/io/FileOutputStream;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileChannel:Ljava/nio/channels/FileChannel;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 97
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string p3, "ws000"

    invoke-static {p3, p2, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_0
    return-void
.end method


# virtual methods
.method public final declared-synchronized isLocked()Z
    .locals 1

    monitor-enter p0

    .line 108
    :try_start_0
    invoke-virtual {p0}, Lcom/qihoo360/loader/utils/ProcessLocker;->tryLock()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 113
    invoke-virtual {p0}, Lcom/qihoo360/loader/utils/ProcessLocker;->unlock()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    xor-int/lit8 v0, v0, 0x1

    .line 116
    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized lock()Z
    .locals 4

    monitor-enter p0

    .line 192
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileChannel:Ljava/nio/channels/FileChannel;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 193
    monitor-exit p0

    return v1

    .line 196
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileChannel:Ljava/nio/channels/FileChannel;

    invoke-virtual {v0}, Ljava/nio/channels/FileChannel;->lock()Ljava/nio/channels/FileLock;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileLock:Ljava/nio/channels/FileLock;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 198
    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    :try_start_2
    const-string v2, "ws000"

    .line 202
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 205
    :cond_1
    monitor-exit p0

    return v1

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized tryLock()Z
    .locals 4

    monitor-enter p0

    .line 125
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileChannel:Ljava/nio/channels/FileChannel;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 126
    monitor-exit p0

    return v1

    .line 129
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileChannel:Ljava/nio/channels/FileChannel;

    invoke-virtual {v0}, Ljava/nio/channels/FileChannel;->tryLock()Ljava/nio/channels/FileLock;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileLock:Ljava/nio/channels/FileLock;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 131
    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    :try_start_2
    const-string v2, "ws000"

    .line 135
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 138
    :cond_1
    monitor-exit p0

    return v1

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized tryLockTimeWait(II)Z
    .locals 6

    monitor-enter p0

    .line 149
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileChannel:Ljava/nio/channels/FileChannel;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 150
    monitor-exit p0

    return v1

    :cond_0
    const/4 v0, 0x1

    if-gtz p1, :cond_1

    move p1, v0

    :cond_1
    if-gtz p2, :cond_2

    move p2, v0

    :cond_2
    move v2, v1

    :goto_0
    if-ge v2, p1, :cond_5

    .line 162
    :try_start_1
    iget-object v3, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileChannel:Ljava/nio/channels/FileChannel;

    invoke-virtual {v3}, Ljava/nio/channels/FileChannel;->tryLock()Ljava/nio/channels/FileLock;

    move-result-object v3

    iput-object v3, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileLock:Ljava/nio/channels/FileLock;
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    goto :goto_2

    .line 167
    :catch_0
    :goto_1
    :try_start_2
    iget-object v3, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileLock:Ljava/nio/channels/FileLock;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v3, :cond_3

    .line 168
    monitor-exit p0

    return v0

    .line 172
    :cond_3
    :try_start_3
    rem-int/lit16 v3, v2, 0x3e8

    if-nez v3, :cond_4

    const-string v3, "ws001"

    .line 173
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "wait process lock: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "/"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/qihoo360/replugin/helper/LogRelease;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    int-to-long v3, p2

    .line 176
    invoke-static {v3, v4, v1}, Ljava/lang/Thread;->sleep(JI)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    add-int/2addr v2, p2

    goto :goto_0

    :goto_2
    :try_start_4
    const-string p2, "ws000"

    .line 180
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 183
    :cond_5
    monitor-exit p0

    return v1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized unlock()V
    .locals 3

    monitor-enter p0

    .line 212
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileLock:Ljava/nio/channels/FileLock;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    if-eqz v0, :cond_0

    .line 214
    :try_start_1
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileLock:Ljava/nio/channels/FileLock;

    invoke-virtual {v0}, Ljava/nio/channels/FileLock;->release()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    :try_start_2
    const-string v1, "ws001"

    .line 217
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 221
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileChannel:Ljava/nio/channels/FileChannel;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    if-eqz v0, :cond_1

    .line 223
    :try_start_3
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileChannel:Ljava/nio/channels/FileChannel;

    invoke-virtual {v0}, Ljava/nio/channels/FileChannel;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    :try_start_4
    const-string v1, "ws001"

    .line 226
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 230
    :cond_1
    :goto_1
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileOutputStream:Ljava/io/FileOutputStream;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    if-eqz v0, :cond_2

    .line 232
    :try_start_5
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFileOutputStream:Ljava/io/FileOutputStream;

    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v0

    :try_start_6
    const-string v1, "ws001"

    .line 235
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 241
    :cond_2
    :goto_2
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFile:Ljava/io/File;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFile:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 242
    iget-object v0, p0, Lcom/qihoo360/loader/utils/ProcessLocker;->mFile:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->delete()Z
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    .line 244
    :cond_3
    monitor-exit p0

    return-void

    :catchall_3
    move-exception v0

    monitor-exit p0

    throw v0
.end method
