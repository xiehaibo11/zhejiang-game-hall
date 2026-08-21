.class public Lcom/tkay/network/ks/KSBidRequestInfo;
.super Lcom/tkay/core/api/TYBidRequestInfo;


# instance fields
.field a:Ljava/lang/String;

.field b:Lorg/json/JSONObject;

.field c:I

.field d:Ljava/lang/String;

.field e:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/util/Map;Ljava/util/Map;)V
    .locals 10
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

    const-string v0, "key_height"

    const-string v1, "key_width"

    const-string v2, "user_custom_data"

    const-string v3, "{network_placement_id}"

    const-string v4, "user_id"

    const-string v5, "orientation"

    const-string v6, "account_id"

    .line 25
    invoke-direct {p0}, Lcom/tkay/core/api/TYBidRequestInfo;-><init>()V

    .line 19
    new-instance v7, Lorg/json/JSONObject;

    invoke-direct {v7}, Lorg/json/JSONObject;-><init>()V

    iput-object v7, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->b:Lorg/json/JSONObject;

    .line 27
    :try_start_0
    invoke-interface {p1, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    const-string v8, "position_id"

    .line 28
    invoke-interface {p1, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    .line 30
    invoke-interface {p1, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_0

    .line 31
    invoke-interface {p1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->c:I

    :cond_0
    if-eqz p2, :cond_3

    .line 35
    invoke-interface {p2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const-string v5, ""

    if-eqz p1, :cond_1

    :try_start_1
    invoke-interface {p2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_1
    move-object p1, v5

    :goto_0
    iput-object p1, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->d:Ljava/lang/String;

    .line 36
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_2

    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    :cond_2
    iput-object v5, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->e:Ljava/lang/String;

    .line 38
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->e:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_4

    iget-object p1, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->e:Ljava/lang/String;

    invoke-virtual {p1, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 39
    iget-object p1, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->e:Ljava/lang/String;

    invoke-static {v8}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v3, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->e:Ljava/lang/String;

    .line 41
    :cond_4
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    .line 43
    iget-object v2, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->d:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    const-string v2, "thirdUserId"

    .line 44
    iget-object v3, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->d:Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 46
    :cond_5
    iget-object v2, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->e:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    const-string v2, "extraData"

    .line 47
    iget-object v3, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->e:Ljava/lang/String;

    invoke-virtual {p1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 50
    :cond_6
    invoke-static {v8}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v2

    .line 51
    new-instance v4, Lcom/kwad/sdk/api/KsScene$Builder;

    invoke-direct {v4, v2, v3}, Lcom/kwad/sdk/api/KsScene$Builder;-><init>(J)V

    const/4 v2, 0x1

    .line 52
    invoke-virtual {v4, v2}, Lcom/kwad/sdk/api/KsScene$Builder;->adNum(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v3

    .line 53
    iget v4, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->c:I

    const/4 v5, 0x2

    if-ne v4, v5, :cond_7

    move v2, v5

    :cond_7
    invoke-virtual {v3, v2}, Lcom/kwad/sdk/api/KsScene$Builder;->screenOrientation(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v2

    .line 55
    invoke-virtual {p1}, Ljava/util/HashMap;->isEmpty()Z

    move-result v3

    if-nez v3, :cond_8

    .line 56
    invoke-virtual {v2, p1}, Lcom/kwad/sdk/api/KsScene$Builder;->rewardCallbackExtraData(Ljava/util/Map;)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v2

    .line 60
    :cond_8
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    const/4 v3, 0x0

    if-eqz p1, :cond_9

    .line 61
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    goto :goto_1

    :cond_9
    move-object p1, v3

    .line 65
    :goto_1
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_a

    .line 66
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :cond_a
    if-eqz p1, :cond_b

    .line 71
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide p1

    double-to-int p1, p1

    if-lez p1, :cond_b

    .line 73
    invoke-virtual {v2, p1}, Lcom/kwad/sdk/api/KsScene$Builder;->width(I)Lcom/kwad/sdk/api/KsScene$Builder;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 77
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :cond_b
    :goto_2
    if-eqz v3, :cond_c

    .line 82
    :try_start_4
    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide p1

    double-to-int p1, p1

    if-lez p1, :cond_c

    .line 84
    invoke-virtual {v2, p1}, Lcom/kwad/sdk/api/KsScene$Builder;->height(I)Lcom/kwad/sdk/api/KsScene$Builder;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    goto :goto_3

    :catchall_1
    move-exception p1

    .line 88
    :try_start_5
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 91
    :cond_c
    :goto_3
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object p1

    invoke-virtual {v2}, Lcom/kwad/sdk/api/KsScene$Builder;->build()Lcom/kwad/sdk/api/KsScene;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/api/KsLoadManager;->getBidRequestTokenV2(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->a:Ljava/lang/String;

    .line 93
    iget-object p1, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->b:Lorg/json/JSONObject;

    invoke-virtual {p1, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 94
    iget-object p1, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string p2, "unit_id"

    invoke-virtual {p1, p2, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 95
    iget-object p1, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->b:Lorg/json/JSONObject;

    const-string p2, "bid_token"

    iget-object v0, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->a:Ljava/lang/String;

    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    :catchall_2
    return-void
.end method


# virtual methods
.method public isValid()Z
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->a:Ljava/lang/String;

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

    .line 107
    iget-object v0, p0, Lcom/tkay/network/ks/KSBidRequestInfo;->b:Lorg/json/JSONObject;

    return-object v0
.end method
