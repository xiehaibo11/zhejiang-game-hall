.class Lcom/ss/android/socialbase/downloader/segment/BufferQueue;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/segment/IBufferPool;
.implements Lcom/ss/android/socialbase/downloader/segment/IInput;
.implements Lcom/ss/android/socialbase/downloader/segment/IOutput;


# static fields
.field private static final MIN_BUFFER_COUNT:I = 0x40

.field private static final MIN_BUFFER_SIZE:I = 0x2000


# instance fields
.field private bufferCount:I

.field private final bufferSize:I

.field private volatile closed:Z

.field private final maxBufferCount:I

.field private rHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

.field private final rLock:Ljava/lang/Object;

.field private rSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

.field private rTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

.field private wHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

.field private final wLock:Ljava/lang/Object;

.field private wTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;


# direct methods
.method constructor <init>(II)V
    .locals 1

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 17
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wLock:Ljava/lang/Object;

    .line 18
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rLock:Ljava/lang/Object;

    const/16 v0, 0x40

    if-ge p1, v0, :cond_0

    move p1, v0

    :cond_0
    const/16 v0, 0x2000

    if-ge p2, v0, :cond_1

    move p2, v0

    .line 38
    :cond_1
    iput p1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->maxBufferCount:I

    .line 39
    iput p2, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->bufferSize:I

    return-void
.end method


# virtual methods
.method public close()V
    .locals 2

    const/4 v0, 0x1

    .line 130
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->closed:Z

    .line 132
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wLock:Ljava/lang/Object;

    monitor-enter v0

    .line 134
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wLock:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->notifyAll()V

    .line 135
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 136
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rLock:Ljava/lang/Object;

    monitor-enter v1

    .line 138
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rLock:Ljava/lang/Object;

    invoke-virtual {v0}, Ljava/lang/Object;->notifyAll()V

    .line 139
    monitor-exit v1

    return-void

    :catchall_0
    move-exception v0

    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0

    :catchall_1
    move-exception v1

    .line 135
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw v1
.end method

.method public obtain()Lcom/ss/android/socialbase/downloader/segment/Buffer;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;,
            Ljava/lang/InterruptedException;
        }
    .end annotation

    .line 87
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wLock:Ljava/lang/Object;

    monitor-enter v0

    .line 88
    :try_start_0
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->closed:Z

    if-nez v1, :cond_4

    .line 91
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    if-nez v1, :cond_2

    .line 93
    iget v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->bufferCount:I

    iget v2, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->maxBufferCount:I

    if-ge v1, v2, :cond_0

    .line 94
    iget v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->bufferCount:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->bufferCount:I

    .line 95
    new-instance v1, Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iget v2, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->bufferSize:I

    invoke-direct {v1, v2}, Lcom/ss/android/socialbase/downloader/segment/Buffer;-><init>(I)V

    .line 96
    monitor-exit v0

    return-object v1

    .line 99
    :cond_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wLock:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->wait()V

    .line 100
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->closed:Z

    if-nez v1, :cond_1

    .line 103
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    if-eqz v1, :cond_0

    goto :goto_0

    .line 101
    :cond_1
    new-instance v1, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;

    const-string v2, "obtain"

    invoke-direct {v1, v2}, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 106
    :cond_2
    :goto_0
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 107
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    const/4 v3, 0x0

    if-ne v1, v2, :cond_3

    .line 108
    iput-object v3, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 110
    :cond_3
    iput-object v3, v1, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 111
    monitor-exit v0

    return-object v1

    .line 89
    :cond_4
    new-instance v1, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;

    const-string v2, "obtain"

    invoke-direct {v1, v2}, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;-><init>(Ljava/lang/String;)V

    throw v1

    :catchall_0
    move-exception v1

    .line 112
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public read()Lcom/ss/android/socialbase/downloader/segment/Buffer;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;,
            Ljava/lang/InterruptedException;
        }
    .end annotation

    .line 47
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 49
    iget-object v2, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 50
    iput-object v1, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    return-object v0

    .line 54
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rLock:Ljava/lang/Object;

    monitor-enter v0

    .line 55
    :try_start_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    :goto_0
    if-nez v2, :cond_2

    .line 57
    iget-boolean v2, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->closed:Z

    if-nez v2, :cond_1

    .line 60
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rLock:Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/Object;->wait()V

    .line 61
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    goto :goto_0

    .line 58
    :cond_1
    new-instance v1, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;

    const-string v2, "read"

    invoke-direct {v1, v2}, Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 63
    :cond_2
    iget-object v3, v2, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object v3, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rSafe:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 64
    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 65
    iput-object v1, v2, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 66
    monitor-exit v0

    return-object v2

    :catchall_0
    move-exception v1

    .line 67
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    .locals 2

    .line 72
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wLock:Ljava/lang/Object;

    monitor-enter v0

    .line 73
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    if-nez v1, :cond_0

    .line 75
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    goto :goto_0

    .line 77
    :cond_0
    iput-object p1, v1, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 78
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 80
    :goto_0
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->wLock:Ljava/lang/Object;

    invoke-virtual {p1}, Ljava/lang/Object;->notify()V

    .line 81
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    .locals 2

    .line 117
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rLock:Ljava/lang/Object;

    monitor-enter v0

    .line 118
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    if-nez v1, :cond_0

    .line 120
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rHead:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 121
    iget-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rLock:Ljava/lang/Object;

    invoke-virtual {p1}, Ljava/lang/Object;->notify()V

    goto :goto_0

    .line 123
    :cond_0
    iput-object p1, v1, Lcom/ss/android/socialbase/downloader/segment/Buffer;->next:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 124
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/BufferQueue;->rTail:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    .line 126
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
