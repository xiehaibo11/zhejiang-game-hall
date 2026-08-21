.class Lcom/czhj/sdk/common/network/RequestQueueHttpStack;
.super Lcom/czhj/volley/toolbox/HurlStack;


# direct methods
.method private constructor <init>(Lcom/czhj/volley/toolbox/HurlStack$UrlRewriter;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/czhj/sdk/common/network/RequestQueueHttpStack;-><init>(Lcom/czhj/volley/toolbox/HurlStack$UrlRewriter;Ljavax/net/ssl/SSLSocketFactory;)V

    return-void
.end method

.method public constructor <init>(Lcom/czhj/volley/toolbox/HurlStack$UrlRewriter;Ljavax/net/ssl/SSLSocketFactory;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/czhj/volley/toolbox/HurlStack;-><init>(Lcom/czhj/volley/toolbox/HurlStack$UrlRewriter;Ljavax/net/ssl/SSLSocketFactory;)V

    return-void
.end method


# virtual methods
.method public executeRequest(Lcom/czhj/volley/Request;Ljava/util/Map;)Lcom/czhj/volley/toolbox/HttpResponse;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/volley/toolbox/HttpResponse;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/czhj/volley/AuthFailureError;
        }
    .end annotation

    if-eqz p2, :cond_0

    invoke-interface {p2}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    new-instance p2, Ljava/util/TreeMap;

    invoke-direct {p2}, Ljava/util/TreeMap;-><init>()V

    :cond_1
    sget-object v0, Lcom/czhj/sdk/common/network/ResponseHeader;->USER_AGENT:Lcom/czhj/sdk/common/network/ResponseHeader;

    invoke-virtual {v0}, Lcom/czhj/sdk/common/network/ResponseHeader;->getKey()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getUserAgent()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-super {p0, p1, p2}, Lcom/czhj/volley/toolbox/HurlStack;->executeRequest(Lcom/czhj/volley/Request;Ljava/util/Map;)Lcom/czhj/volley/toolbox/HttpResponse;

    move-result-object p1

    return-object p1
.end method
