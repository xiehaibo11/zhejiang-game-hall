.class public Lcom/tkay/network/mintegral/MintegralBidRequestInfo;
.super Lcom/tkay/core/api/TYBidRequestInfo;


# instance fields
.field a:Ljava/lang/String;

.field b:Lorg/json/JSONObject;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/util/Map;Ljava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 26
    invoke-direct {p0}, Lcom/tkay/core/api/TYBidRequestInfo;-><init>()V

    .line 24
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->b:Lorg/json/JSONObject;

    :try_start_0
    const-string v0, "appid"

    .line 28
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "unitid"

    .line 29
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    .line 30
    invoke-static {p1}, Lcom/mbridge/msdk/mbbid/out/BidManager;->getBuyerUid(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->a:Ljava/lang/String;

    .line 32
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string v1, "app_id"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 33
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string v0, "unit_id"

    invoke-virtual {p1, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 34
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string p2, "buyeruid"

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->a:Ljava/lang/String;

    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 35
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string p2, "display_manager_ver"

    invoke-virtual {p1, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method


# virtual methods
.method public fillBannerData(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    :try_start_0
    const-string v0, "size"

    .line 43
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    .line 44
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "x"

    .line 45
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 46
    array-length v0, p1

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 47
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string v1, "ad_width"

    const/4 v2, 0x0

    aget-object v2, p1, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 48
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string v1, "ad_height"

    const/4 v2, 0x1

    aget-object p1, p1, v2

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public fillNativeExpressData(Ljava/util/Map;Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "unit_type"

    :try_start_0
    const-string v1, ""

    .line 58
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 59
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_0
    const-string p1, "1"

    .line 62
    invoke-static {v1, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-eqz p1, :cond_1

    const/4 p1, 0x0

    :try_start_1
    const-string v0, "key_width"

    .line 66
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    const-string v1, "key_height"

    .line 67
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    goto :goto_0

    :catchall_1
    move-exception p2

    move v0, p1

    .line 69
    :goto_0
    :try_start_3
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    if-lez v0, :cond_1

    if-lez p1, :cond_1

    .line 72
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string v1, "ad_width"

    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 73
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string v0, "ad_height"

    invoke-virtual {p2, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :cond_1
    return-void

    :catchall_2
    move-exception p1

    .line 77
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public isValid()Z
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->a:Ljava/lang/String;

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

    .line 88
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralBidRequestInfo;->b:Lorg/json/JSONObject;

    return-object v0
.end method
