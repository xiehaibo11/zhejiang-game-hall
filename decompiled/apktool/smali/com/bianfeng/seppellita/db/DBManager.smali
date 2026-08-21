.class public Lcom/bianfeng/seppellita/db/DBManager;
.super Ljava/lang/Object;
.source "DBManager.java"


# instance fields
.field private volatile MAXCOUNT:I

.field private callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

.field private dbByteDataCallback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

.field private volatile delingTesk:Ljava/util/concurrent/atomic/AtomicInteger;

.field private readyTaskQueue:Ljava/util/Deque;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Deque<",
            "Ljava/lang/Runnable;",
            ">;"
        }
    .end annotation
.end field

.field private volatile runningTask:Ljava/util/concurrent/atomic/AtomicInteger;

.field private volatile selectingTesk:Ljava/util/concurrent/atomic/AtomicInteger;

.field private taskExector:Ljava/util/concurrent/ThreadPoolExecutor;


# direct methods
.method public constructor <init>()V
    .locals 9

    .line 92
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 33
    new-instance v0, Ljava/util/ArrayDeque;

    invoke-direct {v0}, Ljava/util/ArrayDeque;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->readyTaskQueue:Ljava/util/Deque;

    .line 34
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->delingTesk:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 35
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->selectingTesk:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 36
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->runningTask:Ljava/util/concurrent/atomic/AtomicInteger;

    const/16 v0, 0x40

    .line 37
    iput v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->MAXCOUNT:I

    .line 38
    new-instance v0, Lcom/bianfeng/seppellita/db/DBManager$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/seppellita/db/DBManager$1;-><init>(Lcom/bianfeng/seppellita/db/DBManager;)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->dbByteDataCallback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    .line 93
    new-instance v0, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v6, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v7, Ljava/util/concurrent/SynchronousQueue;

    invoke-direct {v7}, Ljava/util/concurrent/SynchronousQueue;-><init>()V

    new-instance v8, Lcom/bianfeng/seppellita/db/DBManager$2;

    invoke-direct {v8, p0}, Lcom/bianfeng/seppellita/db/DBManager$2;-><init>(Lcom/bianfeng/seppellita/db/DBManager;)V

    const/4 v2, 0x0

    const v3, 0x7fffffff

    const-wide/16 v4, 0x5

    move-object v1, v0

    invoke-direct/range {v1 .. v8}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->taskExector:Ljava/util/concurrent/ThreadPoolExecutor;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/seppellita/db/DBManager;)Lcom/bianfeng/seppellita/SepperllitaCallback;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/bianfeng/seppellita/db/DBManager;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/seppellita/db/DBManager;)Ljava/util/concurrent/atomic/AtomicInteger;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/bianfeng/seppellita/db/DBManager;->selectingTesk:Ljava/util/concurrent/atomic/AtomicInteger;

    return-object p0
.end method

.method static synthetic access$200(Lcom/bianfeng/seppellita/db/DBManager;)Ljava/util/concurrent/atomic/AtomicInteger;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/bianfeng/seppellita/db/DBManager;->delingTesk:Ljava/util/concurrent/atomic/AtomicInteger;

    return-object p0
.end method

.method static synthetic access$300(Lcom/bianfeng/seppellita/db/DBManager;)V
    .locals 0

    .line 30
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/DBManager;->finish()V

    return-void
.end method

.method static synthetic access$400(Lcom/bianfeng/seppellita/db/DBManager;)Ljava/util/Deque;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/bianfeng/seppellita/db/DBManager;->readyTaskQueue:Ljava/util/Deque;

    return-object p0
.end method

.method private finish()V
    .locals 1

    const-string v0, "runningTaskQueue\u7684\u5927\u5c0f--->"

    .line 87
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 88
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->runningTask:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    .line 89
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/DBManager;->taskExector()V

    return-void
.end method

.method private taskExector()V
    .locals 5

    const-string v0, "taskExector--\u5f00\u59cb \u904d\u5386-->"

    .line 103
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 105
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    .line 106
    monitor-enter p0

    .line 107
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/DBManager;->readyTaskQueue:Ljava/util/Deque;

    invoke-interface {v1}, Ljava/util/Deque;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_6

    .line 109
    :try_start_1
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/seppellita/db/action/BaseDataTast;

    .line 110
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/DBManager;->runningTask:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v3}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v3

    iget v4, p0, Lcom/bianfeng/seppellita/db/DBManager;->MAXCOUNT:I

    if-lt v3, v4, :cond_0

    goto :goto_1

    .line 111
    :cond_0
    invoke-virtual {v2}, Lcom/bianfeng/seppellita/db/action/BaseDataTast;->getName()Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    move-result-object v3

    sget-object v4, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->SELECT:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    if-ne v3, v4, :cond_1

    iget-object v3, p0, Lcom/bianfeng/seppellita/db/DBManager;->delingTesk:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v3}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v3

    if-eqz v3, :cond_1

    .line 112
    invoke-interface {v1}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    .line 115
    :cond_1
    invoke-virtual {v2}, Lcom/bianfeng/seppellita/db/action/BaseDataTast;->getName()Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    move-result-object v3

    sget-object v4, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->DEL:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    if-ne v3, v4, :cond_2

    iget-object v3, p0, Lcom/bianfeng/seppellita/db/DBManager;->selectingTesk:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v3}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v3

    if-eqz v3, :cond_2

    goto :goto_0

    .line 118
    :cond_2
    invoke-virtual {v2}, Lcom/bianfeng/seppellita/db/action/BaseDataTast;->getName()Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    move-result-object v3

    sget-object v4, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->DEL:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    if-ne v3, v4, :cond_3

    .line 119
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/DBManager;->delingTesk:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v3}, Ljava/util/concurrent/atomic/AtomicInteger;->getAndIncrement()I

    .line 121
    :cond_3
    invoke-virtual {v2}, Lcom/bianfeng/seppellita/db/action/BaseDataTast;->getName()Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    move-result-object v3

    sget-object v4, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->SELECT:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    if-ne v3, v4, :cond_4

    iget-object v3, p0, Lcom/bianfeng/seppellita/db/DBManager;->selectingTesk:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v3}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v3

    if-eqz v3, :cond_4

    .line 122
    invoke-interface {v1}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    .line 125
    :cond_4
    invoke-virtual {v2}, Lcom/bianfeng/seppellita/db/action/BaseDataTast;->getName()Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    move-result-object v3

    sget-object v4, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->SELECT:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    if-ne v3, v4, :cond_5

    .line 126
    iget-object v3, p0, Lcom/bianfeng/seppellita/db/DBManager;->selectingTesk:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v3}, Ljava/util/concurrent/atomic/AtomicInteger;->getAndIncrement()I

    .line 128
    :cond_5
    invoke-interface {v1}, Ljava/util/Iterator;->remove()V

    .line 129
    invoke-interface {v0, v2}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 130
    iget-object v2, p0, Lcom/bianfeng/seppellita/db/DBManager;->runningTask:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->getAndIncrement()I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v2

    .line 132
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    .line 135
    :cond_6
    :goto_1
    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 136
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_7

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Runnable;

    .line 137
    iget-object v2, p0, Lcom/bianfeng/seppellita/db/DBManager;->taskExector:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    goto :goto_2

    :cond_7
    return-void

    :catchall_0
    move-exception v0

    .line 135
    :try_start_3
    monitor-exit p0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    throw v0
.end method


# virtual methods
.method public add(Lcom/bianfeng/seppellita/bean/DataBean;)V
    .locals 3

    .line 143
    monitor-enter p0

    .line 144
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->readyTaskQueue:Ljava/util/Deque;

    new-instance v1, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;

    iget-object v2, p0, Lcom/bianfeng/seppellita/db/DBManager;->dbByteDataCallback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    invoke-direct {v1, p1, v2}, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;-><init>(Lcom/bianfeng/seppellita/bean/DataBean;Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;)V

    invoke-interface {v0, v1}, Ljava/util/Deque;->add(Ljava/lang/Object;)Z

    .line 145
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/DBManager;->taskExector()V

    .line 146
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public del(Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 164
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 167
    :cond_0
    monitor-enter p0

    .line 168
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->readyTaskQueue:Ljava/util/Deque;

    new-instance v1, Lcom/bianfeng/seppellita/db/action/DelByteDataTask;

    iget-object v2, p0, Lcom/bianfeng/seppellita/db/DBManager;->dbByteDataCallback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    invoke-direct {v1, p1, v2}, Lcom/bianfeng/seppellita/db/action/DelByteDataTask;-><init>(Ljava/util/List;Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;)V

    invoke-interface {v0, v1}, Ljava/util/Deque;->add(Ljava/lang/Object;)Z

    .line 169
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/DBManager;->taskExector()V

    .line 170
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public delBeforeOneMouthData(Ljava/lang/String;)V
    .locals 2

    const-string v0, "delBeforeOneMouthData"

    .line 179
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 180
    monitor-enter p0

    .line 181
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->readyTaskQueue:Ljava/util/Deque;

    new-instance v1, Lcom/bianfeng/seppellita/db/action/DelBeforeOneMouthDataTask;

    invoke-direct {v1, p1}, Lcom/bianfeng/seppellita/db/action/DelBeforeOneMouthDataTask;-><init>(Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/Deque;->add(Ljava/lang/Object;)Z

    .line 182
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/DBManager;->taskExector()V

    .line 183
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public selectDbLastMonthByteData(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 153
    monitor-enter p0

    :try_start_0
    const-string v0, "selectDbLastMonthByteData"

    .line 155
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 156
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager;->readyTaskQueue:Ljava/util/Deque;

    new-instance v1, Lcom/bianfeng/seppellita/db/action/SelectLastMonthByteDataTask;

    iget-object v2, p0, Lcom/bianfeng/seppellita/db/DBManager;->dbByteDataCallback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    invoke-direct {v1, v2, p1, p2}, Lcom/bianfeng/seppellita/db/action/SelectLastMonthByteDataTask;-><init>(Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0, v1}, Ljava/util/Deque;->add(Ljava/lang/Object;)Z

    .line 157
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/DBManager;->taskExector()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    .line 160
    :catch_0
    :goto_0
    :try_start_1
    monitor-exit p0

    return-void

    :goto_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public setCallback(Lcom/bianfeng/seppellita/SepperllitaCallback;)V
    .locals 0

    .line 175
    iput-object p1, p0, Lcom/bianfeng/seppellita/db/DBManager;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    return-void
.end method
