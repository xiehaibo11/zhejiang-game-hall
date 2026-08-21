.class public Lcom/bianfeng/netlibsdk/RequestQueue;
.super Ljava/lang/Object;
.source "RequestQueue.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/netlibsdk/RequestQueue$RequestFilter;,
        Lcom/bianfeng/netlibsdk/RequestQueue$RequestFinishedListener;
    }
.end annotation


# static fields
.field private static final DEFAULT_NETWORK_THREAD_POOL_SIZE:I = 0x4


# instance fields
.field private final mCurrentRequests:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;>;"
        }
    .end annotation
.end field

.field private final mDelivery:Lcom/bianfeng/netlibsdk/ResponseDelivery;

.field private final mDispatchers:[Lcom/bianfeng/netlibsdk/NetworkDispatcher;

.field private final mFinishedListeners:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/netlibsdk/RequestQueue$RequestFinishedListener;",
            ">;"
        }
    .end annotation
.end field

.field private final mNetwork:Lcom/bianfeng/netlibsdk/Network;

.field private final mNetworkQueue:Ljava/util/concurrent/PriorityBlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/PriorityBlockingQueue<",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;>;"
        }
    .end annotation
.end field

.field private final mSequenceGenerator:Ljava/util/concurrent/atomic/AtomicInteger;


# direct methods
.method public constructor <init>(Lcom/bianfeng/netlibsdk/Network;)V
    .locals 1

    const/4 v0, 0x4

    .line 46
    invoke-direct {p0, p1, v0}, Lcom/bianfeng/netlibsdk/RequestQueue;-><init>(Lcom/bianfeng/netlibsdk/Network;I)V

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/netlibsdk/Network;I)V
    .locals 3

    .line 42
    new-instance v0, Lcom/bianfeng/netlibsdk/ExecutorDelivery;

    new-instance v1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    invoke-direct {v0, v1}, Lcom/bianfeng/netlibsdk/ExecutorDelivery;-><init>(Landroid/os/Handler;)V

    invoke-direct {p0, p1, p2, v0}, Lcom/bianfeng/netlibsdk/RequestQueue;-><init>(Lcom/bianfeng/netlibsdk/Network;ILcom/bianfeng/netlibsdk/ResponseDelivery;)V

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/netlibsdk/Network;ILcom/bianfeng/netlibsdk/ResponseDelivery;)V
    .locals 1

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mSequenceGenerator:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 23
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mCurrentRequests:Ljava/util/Set;

    .line 25
    new-instance v0, Ljava/util/concurrent/PriorityBlockingQueue;

    invoke-direct {v0}, Ljava/util/concurrent/PriorityBlockingQueue;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mNetworkQueue:Ljava/util/concurrent/PriorityBlockingQueue;

    .line 33
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mFinishedListeners:Ljava/util/List;

    .line 36
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mNetwork:Lcom/bianfeng/netlibsdk/Network;

    .line 37
    new-array p1, p2, [Lcom/bianfeng/netlibsdk/NetworkDispatcher;

    iput-object p1, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mDispatchers:[Lcom/bianfeng/netlibsdk/NetworkDispatcher;

    .line 38
    iput-object p3, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mDelivery:Lcom/bianfeng/netlibsdk/ResponseDelivery;

    return-void
.end method


# virtual methods
.method public add(Lcom/bianfeng/netlibsdk/Request;)Lcom/bianfeng/netlibsdk/Request;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "TT;>;)",
            "Lcom/bianfeng/netlibsdk/Request<",
            "TT;>;"
        }
    .end annotation

    .line 99
    invoke-virtual {p1, p0}, Lcom/bianfeng/netlibsdk/Request;->setRequestQueue(Lcom/bianfeng/netlibsdk/RequestQueue;)V

    .line 100
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mCurrentRequests:Ljava/util/Set;

    monitor-enter v0

    .line 101
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mCurrentRequests:Ljava/util/Set;

    invoke-interface {v1, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 102
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 103
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/RequestQueue;->getSequenceNumber()I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/bianfeng/netlibsdk/Request;->setSequence(I)Lcom/bianfeng/netlibsdk/Request;

    const-string v0, "add-to-queue"

    .line 104
    invoke-virtual {p1, v0}, Lcom/bianfeng/netlibsdk/Request;->addMarker(Ljava/lang/String;)V

    .line 105
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mNetworkQueue:Ljava/util/concurrent/PriorityBlockingQueue;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/PriorityBlockingQueue;->add(Ljava/lang/Object;)Z

    return-object p1

    :catchall_0
    move-exception p1

    .line 102
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public addRequestFinishedListener(Lcom/bianfeng/netlibsdk/RequestQueue$RequestFinishedListener;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/bianfeng/netlibsdk/RequestQueue$RequestFinishedListener<",
            "TT;>;)V"
        }
    .end annotation

    .line 121
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mFinishedListeners:Ljava/util/List;

    monitor-enter v0

    .line 122
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mFinishedListeners:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 123
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public cancelAll(Lcom/bianfeng/netlibsdk/RequestQueue$RequestFilter;)V
    .locals 4

    .line 76
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mCurrentRequests:Ljava/util/Set;

    monitor-enter v0

    .line 77
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mCurrentRequests:Ljava/util/Set;

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/netlibsdk/Request;

    .line 78
    invoke-interface {p1, v2}, Lcom/bianfeng/netlibsdk/RequestQueue$RequestFilter;->apply(Lcom/bianfeng/netlibsdk/Request;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 79
    invoke-virtual {v2}, Lcom/bianfeng/netlibsdk/Request;->cancel()V

    goto :goto_0

    .line 82
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public cancelAll(Ljava/lang/Object;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 89
    new-instance v0, Lcom/bianfeng/netlibsdk/RequestQueue$1;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/netlibsdk/RequestQueue$1;-><init>(Lcom/bianfeng/netlibsdk/RequestQueue;Ljava/lang/Object;)V

    invoke-virtual {p0, v0}, Lcom/bianfeng/netlibsdk/RequestQueue;->cancelAll(Lcom/bianfeng/netlibsdk/RequestQueue$RequestFilter;)V

    return-void

    .line 87
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "Cannot cancelAll with a null tag"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method finish(Lcom/bianfeng/netlibsdk/Request;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "TT;>;)V"
        }
    .end annotation

    .line 110
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mCurrentRequests:Ljava/util/Set;

    monitor-enter v0

    .line 111
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mCurrentRequests:Ljava/util/Set;

    invoke-interface {v1, p1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 112
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 113
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mFinishedListeners:Ljava/util/List;

    monitor-enter v1

    .line 114
    :try_start_1
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mFinishedListeners:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/netlibsdk/RequestQueue$RequestFinishedListener;

    .line 115
    invoke-interface {v2, p1}, Lcom/bianfeng/netlibsdk/RequestQueue$RequestFinishedListener;->onRequestFinished(Lcom/bianfeng/netlibsdk/Request;)V

    goto :goto_0

    .line 117
    :cond_0
    monitor-exit v1

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1

    :catchall_1
    move-exception p1

    .line 112
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw p1
.end method

.method public getSequenceNumber()I
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mSequenceGenerator:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    move-result v0

    return v0
.end method

.method public removeRequestFinishedListener(Lcom/bianfeng/netlibsdk/RequestQueue$RequestFinishedListener;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/bianfeng/netlibsdk/RequestQueue$RequestFinishedListener<",
            "TT;>;)V"
        }
    .end annotation

    .line 127
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mFinishedListeners:Ljava/util/List;

    monitor-enter v0

    .line 128
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mFinishedListeners:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 129
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public start()V
    .locals 5

    .line 51
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/RequestQueue;->stop()V

    const/4 v0, 0x0

    .line 52
    :goto_0
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mDispatchers:[Lcom/bianfeng/netlibsdk/NetworkDispatcher;

    array-length v1, v1

    if-ge v0, v1, :cond_0

    .line 53
    new-instance v1, Lcom/bianfeng/netlibsdk/NetworkDispatcher;

    iget-object v2, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mNetworkQueue:Ljava/util/concurrent/PriorityBlockingQueue;

    iget-object v3, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mNetwork:Lcom/bianfeng/netlibsdk/Network;

    iget-object v4, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mDelivery:Lcom/bianfeng/netlibsdk/ResponseDelivery;

    invoke-direct {v1, v2, v3, v4}, Lcom/bianfeng/netlibsdk/NetworkDispatcher;-><init>(Ljava/util/concurrent/BlockingQueue;Lcom/bianfeng/netlibsdk/Network;Lcom/bianfeng/netlibsdk/ResponseDelivery;)V

    .line 54
    iget-object v2, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mDispatchers:[Lcom/bianfeng/netlibsdk/NetworkDispatcher;

    aput-object v1, v2, v0

    .line 55
    invoke-virtual {v1}, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->start()V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public stop()V
    .locals 4

    .line 60
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/RequestQueue;->mDispatchers:[Lcom/bianfeng/netlibsdk/NetworkDispatcher;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    if-eqz v3, :cond_0

    .line 62
    invoke-virtual {v3}, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->quit()V

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method
