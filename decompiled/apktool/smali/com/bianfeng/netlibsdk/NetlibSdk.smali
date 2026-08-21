.class public Lcom/bianfeng/netlibsdk/NetlibSdk;
.super Ljava/lang/Object;
.source "NetlibSdk.java"


# static fields
.field private static netlibSdk:Lcom/bianfeng/netlibsdk/NetlibSdk;


# instance fields
.field private queue:Lcom/bianfeng/netlibsdk/RequestQueue;


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    invoke-static {}, Lcom/bianfeng/netlibsdk/utils/NetLogger;->updateState()V

    .line 13
    new-instance v0, Lcom/bianfeng/netlibsdk/BasicNetwork;

    new-instance v1, Lcom/bianfeng/netlibsdk/HurlStack;

    invoke-direct {v1}, Lcom/bianfeng/netlibsdk/HurlStack;-><init>()V

    invoke-direct {v0, v1}, Lcom/bianfeng/netlibsdk/BasicNetwork;-><init>(Lcom/bianfeng/netlibsdk/HttpStack;)V

    .line 14
    new-instance v1, Lcom/bianfeng/netlibsdk/RequestQueue;

    invoke-direct {v1, v0}, Lcom/bianfeng/netlibsdk/RequestQueue;-><init>(Lcom/bianfeng/netlibsdk/Network;)V

    iput-object v1, p0, Lcom/bianfeng/netlibsdk/NetlibSdk;->queue:Lcom/bianfeng/netlibsdk/RequestQueue;

    .line 15
    invoke-virtual {v1}, Lcom/bianfeng/netlibsdk/RequestQueue;->start()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/netlibsdk/NetlibSdk;
    .locals 2

    .line 19
    sget-object v0, Lcom/bianfeng/netlibsdk/NetlibSdk;->netlibSdk:Lcom/bianfeng/netlibsdk/NetlibSdk;

    if-nez v0, :cond_1

    .line 20
    const-class v0, Lcom/bianfeng/netlibsdk/NetlibSdk;

    monitor-enter v0

    .line 21
    :try_start_0
    sget-object v1, Lcom/bianfeng/netlibsdk/NetlibSdk;->netlibSdk:Lcom/bianfeng/netlibsdk/NetlibSdk;

    if-nez v1, :cond_0

    .line 22
    new-instance v1, Lcom/bianfeng/netlibsdk/NetlibSdk;

    invoke-direct {v1}, Lcom/bianfeng/netlibsdk/NetlibSdk;-><init>()V

    sput-object v1, Lcom/bianfeng/netlibsdk/NetlibSdk;->netlibSdk:Lcom/bianfeng/netlibsdk/NetlibSdk;

    .line 24
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 26
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/netlibsdk/NetlibSdk;->netlibSdk:Lcom/bianfeng/netlibsdk/NetlibSdk;

    return-object v0
.end method


# virtual methods
.method public add(Lcom/bianfeng/netlibsdk/Request;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)V"
        }
    .end annotation

    const/4 v0, 0x1

    .line 30
    invoke-virtual {p1, v0}, Lcom/bianfeng/netlibsdk/Request;->setShouldRetryConnectionErrors(Z)Lcom/bianfeng/netlibsdk/Request;

    .line 31
    invoke-virtual {p1, v0}, Lcom/bianfeng/netlibsdk/Request;->setShouldRetryServerErrors(Z)Lcom/bianfeng/netlibsdk/Request;

    .line 32
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/NetlibSdk;->queue:Lcom/bianfeng/netlibsdk/RequestQueue;

    invoke-virtual {v0, p1}, Lcom/bianfeng/netlibsdk/RequestQueue;->add(Lcom/bianfeng/netlibsdk/Request;)Lcom/bianfeng/netlibsdk/Request;

    return-void
.end method

.method public add(Lcom/bianfeng/netlibsdk/Request;ZZ)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;ZZ)V"
        }
    .end annotation

    .line 41
    invoke-virtual {p1, p2}, Lcom/bianfeng/netlibsdk/Request;->setShouldRetryConnectionErrors(Z)Lcom/bianfeng/netlibsdk/Request;

    .line 42
    invoke-virtual {p1, p3}, Lcom/bianfeng/netlibsdk/Request;->setShouldRetryServerErrors(Z)Lcom/bianfeng/netlibsdk/Request;

    .line 43
    iget-object p2, p0, Lcom/bianfeng/netlibsdk/NetlibSdk;->queue:Lcom/bianfeng/netlibsdk/RequestQueue;

    invoke-virtual {p2, p1}, Lcom/bianfeng/netlibsdk/RequestQueue;->add(Lcom/bianfeng/netlibsdk/Request;)Lcom/bianfeng/netlibsdk/Request;

    return-void
.end method

.method public version()Ljava/lang/String;
    .locals 1

    const-string v0, "1.0.1"

    return-object v0
.end method
