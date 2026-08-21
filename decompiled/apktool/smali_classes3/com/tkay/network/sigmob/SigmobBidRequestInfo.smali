.class public Lcom/tkay/network/sigmob/SigmobBidRequestInfo;
.super Lcom/tkay/core/api/TYBidRequestInfo;


# instance fields
.field a:Ljava/lang/String;

.field b:Lorg/json/JSONObject;


# direct methods
.method constructor <init>(Ljava/util/Map;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "app_key"

    const-string v1, "app_id"

    .line 25
    invoke-direct {p0}, Lcom/tkay/core/api/TYBidRequestInfo;-><init>()V

    .line 23
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    iput-object v2, p0, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;->b:Lorg/json/JSONObject;

    .line 27
    :try_start_0
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 28
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "placement_id"

    .line 29
    invoke-interface {p1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    .line 30
    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v4

    invoke-virtual {v4}, Lcom/sigmob/windad/WindAds;->getSDKToken()Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;->a:Ljava/lang/String;

    .line 32
    iget-object v4, p0, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string v5, "unit_id"

    invoke-virtual {v4, v5, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 33
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;->b:Lorg/json/JSONObject;

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 34
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;->b:Lorg/json/JSONObject;

    invoke-virtual {p1, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 35
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string v0, "display_manager_ver"

    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 36
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string v0, "buyeruid"

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;->a:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method


# virtual methods
.method public isValid()Z
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public toRequestJSONObject()Lorg/json/JSONObject;
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobBidRequestInfo;->b:Lorg/json/JSONObject;

    return-object v0
.end method
