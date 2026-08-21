.class public Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;
.super Ljava/lang/Object;
.source "TraceUtils.java"


# static fields
.field public static volatile map:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public static volatile utils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;


# instance fields
.field public local:Ljava/lang/ThreadLocal;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ThreadLocal<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public originTrace:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->map:Ljava/util/Map;

    .line 3
    new-instance v0, Ljava/lang/ThreadLocal;

    invoke-direct {v0}, Ljava/lang/ThreadLocal;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->local:Ljava/lang/ThreadLocal;

    return-void
.end method

.method private createTrace(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->set(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->utils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->utils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->utils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

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
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->utils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    return-object v0
.end method

.method private set(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->createTransactionId()Ljava/lang/String;

    move-result-object v0

    .line 2
    sget-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->map:Ljava/util/Map;

    invoke-interface {v1, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method


# virtual methods
.method public createTransactionId()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/SystemUtils;->createTransactionId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getLoginTrace()Ljava/lang/String;
    .locals 1

    .line 1
    const-string v0, "ymn_login"

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getTrace(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getOriginTrace()Ljava/lang/String;
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->originTrace:Ljava/lang/String;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    monitor-enter v0

    .line 3
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->originTrace:Ljava/lang/String;

    if-nez v1, :cond_0

    const-string v1, "ymn_init"

    .line 4
    invoke-direct {p0, v1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->set(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->originTrace:Ljava/lang/String;

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
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->originTrace:Ljava/lang/String;

    return-object v0
.end method

.method public getPayTrace()Ljava/lang/String;
    .locals 1

    .line 1
    const-string v0, "ymn_pay"

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getTrace(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPluginTrace(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getTrace(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getStartLoginTrace()Ljava/lang/String;
    .locals 1

    .line 1
    const-string v0, "getStartLoginTrace\uff1a"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 2
    const-string v0, "ymn_login"

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->set(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getStartPayTrace()Ljava/lang/String;
    .locals 1

    .line 1
    const-string v0, "ymn_pay"

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->set(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getStartPluginTrace(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->set(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public declared-synchronized getTrace()Ljava/lang/String;
    .locals 2

    monitor-enter p0

    .line 4
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->local:Ljava/lang/ThreadLocal;

    invoke-virtual {v0}, Ljava/lang/ThreadLocal;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 5
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 6
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->createTransactionId()Ljava/lang/String;

    move-result-object v0

    .line 7
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->local:Ljava/lang/ThreadLocal;

    invoke-virtual {v1, v0}, Ljava/lang/ThreadLocal;->set(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    monitor-exit p0

    return-object v0

    .line 3
    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public getTrace(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->map:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 2
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->originTrace:Ljava/lang/String;

    :cond_0
    return-object p1
.end method

.method public init()V
    .locals 3

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->map:Ljava/util/Map;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->createTransactionId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ymn_init"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
