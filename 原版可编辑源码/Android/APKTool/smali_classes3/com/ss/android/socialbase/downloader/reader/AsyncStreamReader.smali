.class public Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/reader/IStreamReader;


# static fields
.field private static final TAG:Ljava/lang/String; = "AsyncStreamReader"


# instance fields
.field private bufferCount:I

.field private final bufferSize:I

.field private volatile closed:Z

.field private final inputStream:Ljava/io/InputStream;

.field private final maxBufferCount:I

.field private volatile rFuture:Ljava/util/concurrent/Future;

.field private rHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

.field private final rLock:Ljava/lang/Object;

.field private final rRunnable:Ljava/lang/Runnable;

.field private rSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

.field private rTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

.field private volatile terminated:Z

.field private volatile throwable:Ljava/lang/Throwable;

.field private wHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

.field private final wLock:Ljava/lang/Object;

.field private wSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

.field private wTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;


# direct methods
.method public constructor <init>(Ljava/io/InputStream;II)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Throwable;
        }
    .end annotation

    .line 46
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 28
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rLock:Ljava/lang/Object;

    .line 29
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wLock:Ljava/lang/Object;

    .line 93
    new-instance v0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader$1;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader$1;-><init>(Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rRunnable:Ljava/lang/Runnable;

    .line 47
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->inputStream:Ljava/io/InputStream;

    .line 48
    iput p2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->bufferSize:I

    const/16 p1, 0x40

    const/4 p2, 0x1

    if-ge p3, p2, :cond_0

    move p3, p2

    goto :goto_0

    :cond_0
    if-le p3, p1, :cond_1

    move p3, p1

    .line 54
    :cond_1
    :goto_0
    iput p3, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->maxBufferCount:I

    .line 55
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->start()V

    return-void
.end method

.method static synthetic access$000(Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;)Lcom/ss/android/socialbase/downloader/segment/Buffer;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;,
            Ljava/lang/InterruptedException;
        }
    .end annotation

    .line 21
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->dequeueReadBuffer()Lcom/ss/android/socialbase/downloader/segment/Buffer;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$100(Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;)Ljava/io/InputStream;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->inputStream:Ljava/io/InputStream;

    return-object p0
.end method

.method static synthetic access$200(Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->enqueueWriteBuffer(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    return-void
.end method

.method static synthetic access$302(Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;Ljava/lang/Throwable;)Ljava/lang/Throwable;
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->throwable:Ljava/lang/Throwable;

    return-object p1
.end method

.method static synthetic access$400(Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;)Ljava/lang/Object;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wLock:Ljava/lang/Object;

    return-object p0
.end method

.method static synthetic access$502(Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;Z)Z
    .locals 0

    .line 21
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->terminated:Z

    return p1
.end method

.method private dequeueReadBuffer()Lcom/ss/android/socialbase/downloader/segment/Buffer;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;,
            Ljava/lang/InterruptedException;
        }
    .end annotation

    .line 125
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 127
    iget-boolean v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->closed:Z

    if-nez v2, :cond_0

    .line 130
    iget-object v2, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 131
    iput-object v1, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    return-object v0

    .line 128
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;

    const-string v1, ""

    invoke-direct {v0, v1}, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 135
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rLock:Ljava/lang/Object;

    monitor-enter v0

    .line 136
    :try_start_0
    iget-boolean v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->closed:Z

    if-nez v2, :cond_5

    .line 139
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    if-nez v2, :cond_2

    .line 140
    iget v3, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->bufferCount:I

    iget v4, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->maxBufferCount:I

    if-ge v3, v4, :cond_2

    .line 141
    iget v1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->bufferCount:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->bufferCount:I

    .line 142
    new-instance v1, Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iget v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->bufferSize:I

    invoke-direct {v1, v2}, Lcom/ss/android/socialbase/downloader/segment/Buffer;-><init>(I)V

    .line 143
    monitor-exit v0

    return-object v1

    :cond_2
    :goto_0
    if-nez v2, :cond_4

    .line 146
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rLock:Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/Object;->wait()V

    .line 147
    iget-boolean v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->closed:Z

    if-nez v2, :cond_3

    .line 150
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    goto :goto_0

    .line 148
    :cond_3
    new-instance v1, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;

    const-string v2, ""

    invoke-direct {v1, v2}, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 152
    :cond_4
    iget-object v3, v2, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object v3, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 153
    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 154
    iput-object v1, v2, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 155
    monitor-exit v0

    return-object v2

    .line 137
    :cond_5
    new-instance v1, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;

    const-string v2, ""

    invoke-direct {v1, v2}, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;-><init>(Ljava/lang/String;)V

    throw v1

    :catchall_0
    move-exception v1

    .line 156
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private dequeueWriteBuffer()Lcom/ss/android/socialbase/downloader/segment/Buffer;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Ljava/lang/InterruptedException;
        }
    .end annotation

    .line 174
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 176
    iget-object v2, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 177
    iput-object v1, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    return-object v0

    .line 181
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wLock:Ljava/lang/Object;

    monitor-enter v0

    .line 182
    :try_start_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    if-nez v2, :cond_3

    .line 185
    :cond_1
    iget-boolean v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->terminated:Z

    if-eqz v2, :cond_2

    .line 186
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->handleTerminated()V

    .line 188
    :cond_2
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wLock:Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/Object;->wait()V

    .line 189
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    if-eqz v2, :cond_1

    .line 192
    :cond_3
    iget-object v3, v2, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object v3, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 193
    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 194
    iput-object v1, v2, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 195
    monitor-exit v0

    return-object v2

    :catchall_0
    move-exception v1

    .line 196
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private enqueueReadBuffer(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    .locals 2

    .line 160
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rLock:Ljava/lang/Object;

    monitor-enter v0

    .line 161
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    if-nez v1, :cond_0

    .line 163
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 164
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rLock:Ljava/lang/Object;

    invoke-virtual {p1}, Ljava/lang/Object;->notify()V

    goto :goto_0

    .line 166
    :cond_0
    iput-object p1, v1, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 167
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 169
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method private enqueueWriteBuffer(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    .locals 2

    .line 200
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wLock:Ljava/lang/Object;

    monitor-enter v0

    .line 201
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    if-nez v1, :cond_0

    .line 203
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 204
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wLock:Ljava/lang/Object;

    invoke-virtual {p1}, Ljava/lang/Object;->notify()V

    goto :goto_0

    .line 206
    :cond_0
    iput-object p1, v1, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 207
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->wTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 209
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method private handleTerminated()V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation

    .line 213
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->throwable:Ljava/lang/Throwable;

    if-eqz v0, :cond_1

    .line 215
    instance-of v1, v0, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;

    if-eqz v1, :cond_0

    .line 216
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v1, 0x42c

    const-string v2, "async reader closed!"

    invoke-direct {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0

    :cond_0
    const-string v1, "async_read"

    .line 218
    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseException(Ljava/lang/Throwable;Ljava/lang/String;)V

    .line 221
    :cond_1
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/BaseException;

    const/16 v1, 0x42d

    const-string v2, "async reader terminated!"

    invoke-direct {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    throw v0
.end method

.method private start()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Throwable;
        }
    .end annotation

    .line 89
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getChunkDownloadThreadExecutorService()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    .line 90
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rRunnable:Ljava/lang/Runnable;

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rFuture:Ljava/util/concurrent/Future;

    return-void
.end method


# virtual methods
.method public close()V
    .locals 3

    .line 71
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rLock:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x1

    .line 72
    :try_start_0
    iput-boolean v1, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->closed:Z

    .line 74
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rLock:Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/Object;->notify()V

    .line 75
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 76
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rFuture:Ljava/util/concurrent/Future;

    if-eqz v0, :cond_0

    .line 79
    :try_start_1
    invoke-interface {v0, v1}, Ljava/util/concurrent/Future;->cancel(Z)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    const/4 v0, 0x0

    .line 83
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->rFuture:Ljava/util/concurrent/Future;

    :cond_0
    return-void

    :catchall_1
    move-exception v1

    .line 75
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw v1
.end method

.method public read()Lcom/ss/android/socialbase/downloader/segment/Buffer;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Ljava/lang/InterruptedException;
        }
    .end annotation

    .line 60
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->dequeueWriteBuffer()Lcom/ss/android/socialbase/downloader/segment/Buffer;

    move-result-object v0

    return-object v0
.end method

.method public recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    .locals 0

    .line 65
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/reader/AsyncStreamReader;->enqueueReadBuffer(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    return-void
.end method
