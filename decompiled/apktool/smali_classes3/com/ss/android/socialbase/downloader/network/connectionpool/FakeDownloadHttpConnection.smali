.class public Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
.implements Lcom/ss/android/socialbase/downloader/network/connectionpool/IFakeDownloadHttpConnection;


# instance fields
.field private isRequesting:Z

.field private mConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

.field private mCreateTime:J

.field private mInputStream:Ljava/io/InputStream;

.field protected final mJoinLock:Ljava/lang/Object;

.field private final mMaxLength:I

.field private final mRequestHeaders:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;"
        }
    .end annotation
.end field

.field private final mUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>(ILjava/lang/String;Ljava/util/List;J)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;J)V"
        }
    .end annotation

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    new-instance p4, Ljava/lang/Object;

    invoke-direct {p4}, Ljava/lang/Object;-><init>()V

    iput-object p4, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mJoinLock:Ljava/lang/Object;

    .line 38
    iput p1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mMaxLength:I

    .line 39
    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mUrl:Ljava/lang/String;

    .line 40
    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mRequestHeaders:Ljava/util/List;

    return-void
.end method

.method private doExecute()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    .line 67
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDefaultHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 69
    iget v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mMaxLength:I

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mUrl:Ljava/lang/String;

    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mRequestHeaders:Ljava/util/List;

    invoke-interface {v0, v1, v2, v3}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;->downloadWithConnection(ILjava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method


# virtual methods
.method public cancel()V
    .locals 1

    .line 120
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_0

    .line 121
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->cancel()V

    :cond_0
    return-void
.end method

.method public end()V
    .locals 1

    .line 93
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_0

    .line 94
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->end()V

    :cond_0
    return-void
.end method

.method public execute()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    .line 45
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_0

    return-void

    .line 49
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mJoinLock:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    .line 51
    :try_start_0
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->isRequesting:Z

    .line 52
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->doExecute()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v1, :cond_1

    .line 54
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iput-wide v3, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mCreateTime:J

    .line 55
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-interface {v1}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mInputStream:Ljava/io/InputStream;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 58
    :cond_1
    :try_start_1
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->isRequesting:Z

    .line 59
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mJoinLock:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->notifyAll()V

    .line 61
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    .line 58
    iput-boolean v2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->isRequesting:Z

    .line 59
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mJoinLock:Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/Object;->notifyAll()V

    throw v1

    :catchall_1
    move-exception v1

    .line 61
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw v1
.end method

.method public getInputStream()Ljava/io/InputStream;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 85
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mInputStream:Ljava/io/InputStream;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getRequestHeaders()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;"
        }
    .end annotation

    .line 115
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mRequestHeaders:Ljava/util/List;

    return-object v0
.end method

.method public getResponseCode()I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 108
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_0

    .line 109
    invoke-interface {v0}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->getResponseCode()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getResponseHeaderField(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v0, :cond_0

    .line 101
    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->getResponseHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public isRequesting()Z
    .locals 1

    .line 150
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->isRequesting:Z

    return v0
.end method

.method public isSuccessful()Z
    .locals 2

    const/4 v0, 0x0

    .line 128
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    invoke-interface {v1}, Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;->getResponseCode()I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->isSuccessful(I)Z

    move-result v1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v1, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0

    :catch_0
    move-exception v1

    .line 130
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    return v0
.end method

.method public isSuccessful(I)Z
    .locals 1

    const/16 v0, 0xc8

    if-lt p1, v0, :cond_0

    const/16 v0, 0x12c

    if-ge p1, v0, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public isValid()Z
    .locals 4

    .line 145
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mCreateTime:J

    sub-long/2addr v0, v2

    sget-wide v2, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadPreconnecter;->sConnectionOutdatedTime:J

    cmp-long v0, v0, v2

    if-gez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public joinExecute()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/InterruptedException;
        }
    .end annotation

    .line 76
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mJoinLock:Ljava/lang/Object;

    monitor-enter v0

    .line 77
    :try_start_0
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->isRequesting:Z

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mConnection:Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;

    if-nez v1, :cond_0

    .line 78
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/network/connectionpool/FakeDownloadHttpConnection;->mJoinLock:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->wait()V

    .line 80
    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method
