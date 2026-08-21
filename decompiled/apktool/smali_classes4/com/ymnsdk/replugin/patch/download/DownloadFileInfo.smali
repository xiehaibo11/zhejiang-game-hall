.class public Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;
.super Ljava/lang/Object;
.source "DownloadFileInfo.java"

# interfaces
.implements Ljava/io/Serializable;


# instance fields
.field private fileName:Ljava/lang/String;

.field private hash:Ljava/lang/String;

.field private networkRetryCount:I

.field private retryCount:I

.field private roadmap:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private savePath:Ljava/lang/String;

.field private savedSize:J

.field private totalSize:J

.field private url:Ljava/lang/String;

.field private valid:Z


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 11
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->hash:Ljava/lang/String;

    .line 12
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->fileName:Ljava/lang/String;

    .line 13
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->savePath:Ljava/lang/String;

    .line 14
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->url:Ljava/lang/String;

    const-wide/16 v1, 0x0

    .line 15
    iput-wide v1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->savedSize:J

    .line 16
    iput-wide v1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->totalSize:J

    const/4 v1, 0x0

    .line 17
    iput v1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->retryCount:I

    .line 18
    iput v1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->networkRetryCount:I

    const/4 v1, 0x1

    .line 19
    iput-boolean v1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->valid:Z

    .line 21
    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->roadmap:Ljava/util/ArrayList;

    return-void
.end method


# virtual methods
.method public addNetworkRetryCount()V
    .locals 1

    .line 168
    iget v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->networkRetryCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->networkRetryCount:I

    return-void
.end method

.method public addRetryCount()V
    .locals 1

    .line 146
    iget v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->retryCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->retryCount:I

    return-void
.end method

.method public addRoadMap(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V
    .locals 1

    .line 198
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->roadmap:Ljava/util/ArrayList;

    if-nez v0, :cond_0

    .line 199
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->roadmap:Ljava/util/ArrayList;

    .line 202
    :cond_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->roadmap:Ljava/util/ArrayList;

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->ordinal()I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public addSavedSize(J)Z
    .locals 2

    .line 109
    iget-wide v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->savedSize:J

    add-long/2addr v0, p1

    iput-wide v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->savedSize:J

    const/4 p1, 0x1

    return p1
.end method

.method public getHash()Ljava/lang/String;
    .locals 1

    .line 36
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->hash:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkRetryCount()I
    .locals 1

    .line 175
    iget v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->networkRetryCount:I

    return v0
.end method

.method public getRetryCount()I
    .locals 1

    .line 153
    iget v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->retryCount:I

    return v0
.end method

.method public getRoadmap()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 206
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->roadmap:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getSaveCachePath()Ljava/lang/String;
    .locals 2

    .line 89
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->savePath:Ljava/lang/String;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 90
    :cond_0
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    return-object v1

    .line 94
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->savePath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".cache"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSavePath()Ljava/lang/String;
    .locals 1

    .line 80
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->savePath:Ljava/lang/String;

    return-object v0
.end method

.method public getSavedSize()J
    .locals 2

    .line 117
    iget-wide v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->savedSize:J

    return-wide v0
.end method

.method public getTotalSize()J
    .locals 2

    .line 132
    iget-wide v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->totalSize:J

    return-wide v0
.end method

.method public getURL()Ljava/lang/String;
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->url:Ljava/lang/String;

    return-object v0
.end method

.method public getValid()Z
    .locals 1

    .line 190
    iget-boolean v0, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->valid:Z

    return v0
.end method

.method public declared-synchronized setHash(Ljava/lang/String;)Z
    .locals 0

    monitor-enter p0

    .line 28
    :try_start_0
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->hash:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    .line 29
    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public setNetworkRetryCount(I)V
    .locals 0

    .line 161
    iput p1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->networkRetryCount:I

    return-void
.end method

.method public setRetryCount(I)V
    .locals 0

    .line 139
    iput p1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->retryCount:I

    return-void
.end method

.method public declared-synchronized setSavePath(Ljava/lang/String;)Z
    .locals 2

    monitor-enter p0

    .line 62
    :try_start_0
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->savePath:Ljava/lang/String;

    const-string v0, "\\"

    const-string v1, "/"

    .line 64
    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "/"

    .line 67
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 68
    array-length v0, p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-gtz v0, :cond_0

    const/4 p1, 0x0

    .line 69
    monitor-exit p0

    return p1

    .line 72
    :cond_0
    :try_start_1
    array-length v0, p1

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    aget-object p1, p1, v0

    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->fileName:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 73
    monitor-exit p0

    return v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public setSavedSize(J)Z
    .locals 0

    .line 101
    iput-wide p1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->savedSize:J

    const/4 p1, 0x1

    return p1
.end method

.method public setTotalSize(J)Z
    .locals 0

    .line 124
    iput-wide p1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->totalSize:J

    const/4 p1, 0x1

    return p1
.end method

.method public declared-synchronized setURL(Ljava/lang/String;)Z
    .locals 0

    monitor-enter p0

    .line 44
    :try_start_0
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->url:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    .line 45
    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public setValid(Z)V
    .locals 0

    .line 183
    iput-boolean p1, p0, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->valid:Z

    return-void
.end method
