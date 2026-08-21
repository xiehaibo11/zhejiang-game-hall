.class public Lcom/bianfeng/ymnsdk/net/YmnNetsdk;
.super Ljava/lang/Object;
.source "YmnNetsdk.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addYmnRequest(Lcom/bianfeng/netlibsdk/Request;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)V"
        }
    .end annotation

    .line 22
    .local p0, "request":Lcom/bianfeng/netlibsdk/Request;, "Lcom/bianfeng/netlibsdk/Request<*>;"
    invoke-static {}, Lcom/bianfeng/netlibsdk/NetlibSdk;->getInstance()Lcom/bianfeng/netlibsdk/NetlibSdk;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/netlibsdk/NetlibSdk;->add(Lcom/bianfeng/netlibsdk/Request;)V

    .line 23
    return-void
.end method


# virtual methods
.method public add(Lcom/bianfeng/netlibsdk/Request;ZZ)V
    .locals 1
    .param p2, "shouldRetryConnectionErrors"    # Z
    .param p3, "shouldRetryServerErrors"    # Z
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;ZZ)V"
        }
    .end annotation

    .line 14
    .local p1, "request":Lcom/bianfeng/netlibsdk/Request;, "Lcom/bianfeng/netlibsdk/Request<*>;"
    invoke-static {}, Lcom/bianfeng/netlibsdk/NetlibSdk;->getInstance()Lcom/bianfeng/netlibsdk/NetlibSdk;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/netlibsdk/NetlibSdk;->add(Lcom/bianfeng/netlibsdk/Request;ZZ)V

    .line 15
    return-void
.end method

.method public addRequest(Lcom/bianfeng/netlibsdk/Request;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)V"
        }
    .end annotation

    .line 10
    .local p1, "request":Lcom/bianfeng/netlibsdk/Request;, "Lcom/bianfeng/netlibsdk/Request<*>;"
    invoke-static {}, Lcom/bianfeng/netlibsdk/NetlibSdk;->getInstance()Lcom/bianfeng/netlibsdk/NetlibSdk;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/netlibsdk/NetlibSdk;->add(Lcom/bianfeng/netlibsdk/Request;)V

    .line 11
    return-void
.end method
