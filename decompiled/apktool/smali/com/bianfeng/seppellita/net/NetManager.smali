.class public Lcom/bianfeng/seppellita/net/NetManager;
.super Ljava/lang/Object;
.source "NetManager.java"


# instance fields
.field private map:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    iput-object p1, p0, Lcom/bianfeng/seppellita/net/NetManager;->map:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public postData(Ljava/util/List;Lcom/bianfeng/seppellita/SepperllitaCallback;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/seppellita/bean/PostDataBean;",
            ">;",
            "Lcom/bianfeng/seppellita/SepperllitaCallback;",
            ")V"
        }
    .end annotation

    .line 29
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/seppellita/bean/PostDataBean;

    .line 32
    :try_start_0
    new-instance v1, Lcom/bianfeng/seppellita/net/PostRequest;

    invoke-direct {v1, v0}, Lcom/bianfeng/seppellita/net/PostRequest;-><init>(Lcom/bianfeng/seppellita/bean/PostDataBean;)V

    .line 33
    invoke-virtual {v1, p2}, Lcom/bianfeng/seppellita/net/PostRequest;->setCallback(Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    .line 34
    invoke-static {}, Lcom/bianfeng/netlibsdk/NetlibSdk;->getInstance()Lcom/bianfeng/netlibsdk/NetlibSdk;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/bianfeng/netlibsdk/NetlibSdk;->add(Lcom/bianfeng/netlibsdk/Request;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 36
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public postInit(Ljava/lang/String;Lcom/bianfeng/seppellita/SepperllitaCallback;)V
    .locals 3

    .line 22
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/NetManager;->map:Ljava/util/Map;

    const-string v1, "uid"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 23
    new-instance p1, Lcom/bianfeng/seppellita/net/InitRequest;

    iget-object v0, p0, Lcom/bianfeng/seppellita/net/NetManager;->map:Ljava/util/Map;

    invoke-direct {p1, v0, p2}, Lcom/bianfeng/seppellita/net/InitRequest;-><init>(Ljava/util/Map;Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    .line 24
    new-instance p2, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;

    const/16 v0, 0x3a98

    const/4 v1, 0x3

    const/high16 v2, 0x3f800000    # 1.0f

    invoke-direct {p2, v0, v1, v2}, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;-><init>(IIF)V

    invoke-virtual {p1, p2}, Lcom/bianfeng/seppellita/net/InitRequest;->setRetryPolicy(Lcom/bianfeng/netlibsdk/RetryPolicy;)Lcom/bianfeng/netlibsdk/Request;

    .line 25
    invoke-static {}, Lcom/bianfeng/netlibsdk/NetlibSdk;->getInstance()Lcom/bianfeng/netlibsdk/NetlibSdk;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/bianfeng/netlibsdk/NetlibSdk;->add(Lcom/bianfeng/netlibsdk/Request;)V

    return-void
.end method
