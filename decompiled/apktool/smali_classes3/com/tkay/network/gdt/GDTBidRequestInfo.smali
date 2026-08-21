.class public Lcom/tkay/network/gdt/GDTBidRequestInfo;
.super Lcom/tkay/core/api/TYBidRequestInfo;


# instance fields
.field a:Ljava/lang/String;

.field b:Lorg/json/JSONObject;


# direct methods
.method constructor <init>(Ljava/util/Map;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "unit_id"

    const-string v1, "app_id"

    .line 27
    invoke-direct {p0}, Lcom/tkay/core/api/TYBidRequestInfo;-><init>()V

    .line 25
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    iput-object v2, p0, Lcom/tkay/network/gdt/GDTBidRequestInfo;->b:Lorg/json/JSONObject;

    .line 29
    :try_start_0
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 30
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 32
    new-instance v4, Ljava/util/HashMap;

    invoke-direct {v4}, Ljava/util/HashMap;-><init>()V

    .line 33
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-static {v4, p1}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;Ljava/util/Map;)V

    .line 34
    invoke-static {}, Lcom/qq/e/comm/managers/GDTAdSdk;->getGDTAdManger()Lcom/qq/e/comm/managers/IGDTAdManager;

    move-result-object p1

    invoke-interface {p1, v4}, Lcom/qq/e/comm/managers/IGDTAdManager;->getBuyerId(Ljava/util/Map;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/gdt/GDTBidRequestInfo;->a:Ljava/lang/String;

    .line 36
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTBidRequestInfo;->b:Lorg/json/JSONObject;

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 37
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTBidRequestInfo;->b:Lorg/json/JSONObject;

    invoke-virtual {p1, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 38
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string v0, "buyeruid"

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTBidRequestInfo;->a:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 39
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string v0, "sdk_info"

    invoke-static {}, Lcom/qq/e/comm/managers/GDTAdSdk;->getGDTAdManger()Lcom/qq/e/comm/managers/IGDTAdManager;

    move-result-object v1

    invoke-interface {v1, v3}, Lcom/qq/e/comm/managers/IGDTAdManager;->getSDKInfo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method


# virtual methods
.method public isValid()Z
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTBidRequestInfo;->a:Ljava/lang/String;

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

    .line 51
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTBidRequestInfo;->b:Lorg/json/JSONObject;

    return-object v0
.end method
