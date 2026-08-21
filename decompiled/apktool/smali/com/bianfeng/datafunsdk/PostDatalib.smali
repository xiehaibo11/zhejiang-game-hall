.class public Lcom/bianfeng/datafunsdk/PostDatalib;
.super Ljava/lang/Object;
.source "PostDatalib.java"


# static fields
.field public static volatile dataFun:Lcom/bianfeng/datafunsdk/PostDatalib;


# instance fields
.field public dataFunCallback:Lcom/bianfeng/datafunsdk/a;

.field public dbQueueManager:Lcom/bianfeng/datafunsdk/k;

.field public eventTimer:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

.field public isFirst:Z

.field public requestManager:Lcom/bianfeng/datafunsdk/t;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 39
    new-instance v0, Lcom/bianfeng/datafunsdk/PostDatalib$a;

    invoke-direct {v0, p0}, Lcom/bianfeng/datafunsdk/PostDatalib$a;-><init>(Lcom/bianfeng/datafunsdk/PostDatalib;)V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->dataFunCallback:Lcom/bianfeng/datafunsdk/a;

    return-void
.end method

.method public static synthetic access$000(Lcom/bianfeng/datafunsdk/PostDatalib;Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 0

    .line 1
    invoke-direct {p0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib;->postByteDataWhitHttp(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method

.method public static synthetic access$100(Lcom/bianfeng/datafunsdk/PostDatalib;Ljava/util/List;)V
    .locals 0

    .line 1
    invoke-direct {p0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib;->postByteDataWhitHttp(Ljava/util/List;)V

    return-void
.end method

.method public static synthetic access$200(Lcom/bianfeng/datafunsdk/PostDatalib;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/datafunsdk/PostDatalib;->delBd()V

    return-void
.end method

.method public static synthetic access$300(Lcom/bianfeng/datafunsdk/PostDatalib;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/datafunsdk/PostDatalib;->selectByteData()V

    return-void
.end method

.method public static synthetic access$400(Lcom/bianfeng/datafunsdk/PostDatalib;Lcom/bianfeng/datafunsdk/f;)V
    .locals 0

    .line 1
    invoke-direct {p0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib;->delByteDataTask(Lcom/bianfeng/datafunsdk/f;)V

    return-void
.end method

.method public static synthetic access$500(Lcom/bianfeng/datafunsdk/PostDatalib;Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 0

    .line 1
    invoke-direct {p0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib;->delByteData(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method

.method public static synthetic access$600(Lcom/bianfeng/datafunsdk/PostDatalib;Lcom/bianfeng/datafunsdk/o;)V
    .locals 0

    .line 1
    invoke-direct {p0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib;->postByteDataWhitHttp(Lcom/bianfeng/datafunsdk/o;)V

    return-void
.end method

.method private delBd()V
    .locals 1

    .line 1
    const-string v0, "PostDatalib delBd--"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->dbQueueManager:Lcom/bianfeng/datafunsdk/k;

    if-eqz v0, :cond_0

    .line 3
    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/k;->a()V

    :cond_0
    return-void
.end method

.method private delByteData(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->dbQueueManager:Lcom/bianfeng/datafunsdk/k;

    if-nez v0, :cond_0

    return-void

    .line 4
    :cond_0
    invoke-virtual {v0, p1}, Lcom/bianfeng/datafunsdk/k;->b(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method

.method private delByteDataTask(Lcom/bianfeng/datafunsdk/f;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->dbQueueManager:Lcom/bianfeng/datafunsdk/k;

    if-nez v0, :cond_0

    return-void

    .line 4
    :cond_0
    invoke-virtual {v0, p1}, Lcom/bianfeng/datafunsdk/k;->a(Lcom/bianfeng/datafunsdk/f;)V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/datafunsdk/PostDatalib;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/datafunsdk/PostDatalib;->dataFun:Lcom/bianfeng/datafunsdk/PostDatalib;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/datafunsdk/PostDatalib;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/datafunsdk/PostDatalib;->dataFun:Lcom/bianfeng/datafunsdk/PostDatalib;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/datafunsdk/PostDatalib;

    invoke-direct {v1}, Lcom/bianfeng/datafunsdk/PostDatalib;-><init>()V

    sput-object v1, Lcom/bianfeng/datafunsdk/PostDatalib;->dataFun:Lcom/bianfeng/datafunsdk/PostDatalib;

    .line 6
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 8
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/datafunsdk/PostDatalib;->dataFun:Lcom/bianfeng/datafunsdk/PostDatalib;

    return-object v0
.end method

.method private postByteDataWhitHttp(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->requestManager:Lcom/bianfeng/datafunsdk/t;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0, p1}, Lcom/bianfeng/datafunsdk/t;->a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    :cond_0
    return-void
.end method

.method private postByteDataWhitHttp(Lcom/bianfeng/datafunsdk/o;)V
    .locals 1

    .line 3
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->requestManager:Lcom/bianfeng/datafunsdk/t;

    if-nez v0, :cond_0

    return-void

    .line 6
    :cond_0
    invoke-virtual {v0, p1}, Lcom/bianfeng/datafunsdk/t;->a(Lcom/bianfeng/datafunsdk/o;)V

    return-void
.end method

.method private postByteDataWhitHttp(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/datafunsdk/bean/DataFunBean;",
            ">;)V"
        }
    .end annotation

    .line 7
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->requestManager:Lcom/bianfeng/datafunsdk/t;

    if-nez v0, :cond_0

    return-void

    .line 10
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    .line 11
    const-string v1, "PostDatalib \u67e5\u8be2\u5230\u7684\u6570\u636e\u4e0a\u629b--"

    invoke-static {v1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 12
    iget-object v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->requestManager:Lcom/bianfeng/datafunsdk/t;

    invoke-virtual {v1, v0}, Lcom/bianfeng/datafunsdk/t;->a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private selectByteData()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->dbQueueManager:Lcom/bianfeng/datafunsdk/k;

    if-nez v0, :cond_0

    return-void

    .line 4
    :cond_0
    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/k;->c()V

    return-void
.end method


# virtual methods
.method public cancelTimer()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->eventTimer:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->cancel()V

    :cond_0
    return-void
.end method

.method public getVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "1.1.0"

    return-object v0
.end method

.method public init(Landroid/content/Context;)V
    .locals 2

    .line 1
    iget-boolean v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->isFirst:Z

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/datafunsdk/PostDatalib;

    monitor-enter v0

    .line 3
    :try_start_0
    iget-boolean v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->isFirst:Z

    if-nez v1, :cond_0

    const/4 v1, 0x1

    .line 4
    iput-boolean v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->isFirst:Z

    .line 5
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->initContext(Landroid/content/Context;)V

    .line 6
    new-instance p1, Lcom/bianfeng/datafunsdk/t;

    invoke-direct {p1}, Lcom/bianfeng/datafunsdk/t;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->requestManager:Lcom/bianfeng/datafunsdk/t;

    .line 7
    new-instance p1, Lcom/bianfeng/datafunsdk/k;

    invoke-direct {p1}, Lcom/bianfeng/datafunsdk/k;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->dbQueueManager:Lcom/bianfeng/datafunsdk/k;

    .line 8
    iget-object v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->dataFunCallback:Lcom/bianfeng/datafunsdk/a;

    invoke-virtual {p1, v1}, Lcom/bianfeng/datafunsdk/k;->a(Lcom/bianfeng/datafunsdk/a;)V

    .line 9
    iget-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->requestManager:Lcom/bianfeng/datafunsdk/t;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->dataFunCallback:Lcom/bianfeng/datafunsdk/a;

    invoke-virtual {p1, v1}, Lcom/bianfeng/datafunsdk/t;->a(Lcom/bianfeng/datafunsdk/a;)V

    .line 10
    invoke-static {}, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->getInstance()Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->eventTimer:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    .line 11
    iget-object v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->dataFunCallback:Lcom/bianfeng/datafunsdk/a;

    invoke-virtual {p1, v1}, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->setCallback(Lcom/bianfeng/datafunsdk/a;)V

    .line 12
    iget-object p1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->eventTimer:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->start()V

    .line 14
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_1
    :goto_0
    return-void
.end method

.method public postByteData(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 1
    const-string v0, "PostDatalib \u5f00\u59cb\u63d2\u5165\u6570\u636e--"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->dbQueueManager:Lcom/bianfeng/datafunsdk/k;

    if-eqz v0, :cond_0

    .line 3
    invoke-virtual {v0, p1}, Lcom/bianfeng/datafunsdk/k;->a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    :cond_0
    return-void
.end method

.method public startTimer()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->dbQueueManager:Lcom/bianfeng/datafunsdk/k;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->requestManager:Lcom/bianfeng/datafunsdk/t;

    if-eqz v1, :cond_0

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/k;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->requestManager:Lcom/bianfeng/datafunsdk/t;

    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/t;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3
    const-string v0, "PostDatalib startTimer--"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 4
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/PostDatalib;->eventTimer:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->start()V

    :cond_0
    return-void
.end method
