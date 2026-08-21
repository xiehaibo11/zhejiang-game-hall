.class public Lcom/tkay/network/adx/AdxBidRequestInfo;
.super Lcom/tkay/core/api/TYBidRequestInfo;


# instance fields
.field a:Lorg/json/JSONObject;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 3

    .line 35
    invoke-direct {p0}, Lcom/tkay/core/api/TYBidRequestInfo;-><init>()V

    .line 33
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/adx/AdxBidRequestInfo;->a:Lorg/json/JSONObject;

    :try_start_0
    const-string v1, "tpl_ver"

    const/4 v2, 0x1

    .line 38
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 41
    invoke-static {p1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/tkay/core/c/e;->b(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 43
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->av()I

    move-result p2

    if-lez p2, :cond_0

    .line 45
    invoke-static {}, Lcom/tkay/core/common/a/b;->a()Lcom/tkay/core/common/a/b;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/tkay/core/common/a/b;->a(I)Ljava/util/List;

    move-result-object p2

    .line 46
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 47
    iget-object v0, p0, Lcom/tkay/network/adx/AdxBidRequestInfo;->a:Lorg/json/JSONObject;

    const-string v1, "exclude_ids"

    .line 48
    invoke-static {p2}, Lcom/tkay/network/adx/AdxBidRequestInfo;->a(Ljava/util/List;)Lorg/json/JSONObject;

    move-result-object p2

    .line 47
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 52
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->au()I

    move-result p1

    if-lez p1, :cond_1

    .line 54
    invoke-static {}, Lcom/tkay/core/common/a/b;->a()Lcom/tkay/core/common/a/b;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/core/common/a/b;->b(I)Ljava/util/List;

    move-result-object p1

    .line 55
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_1

    .line 56
    iget-object p2, p0, Lcom/tkay/network/adx/AdxBidRequestInfo;->a:Lorg/json/JSONObject;

    const-string v0, "install_ids"

    .line 57
    invoke-static {p1}, Lcom/tkay/network/adx/AdxBidRequestInfo;->a(Ljava/util/List;)Lorg/json/JSONObject;

    move-result-object p1

    .line 56
    invoke-virtual {p2, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method private static a(Ljava/util/List;)Lorg/json/JSONObject;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/a/d;",
            ">;)",
            "Lorg/json/JSONObject;"
        }
    .end annotation

    .line 117
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 119
    :try_start_0
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    .line 120
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/a/d;

    .line 121
    invoke-virtual {v2}, Lcom/tkay/core/common/a/d;->a()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/List;

    if-nez v3, :cond_0

    .line 123
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 124
    invoke-virtual {v2}, Lcom/tkay/core/common/a/d;->a()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v1, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 126
    :cond_0
    invoke-virtual {v2}, Lcom/tkay/core/common/a/d;->b()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v3, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 128
    :cond_1
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 129
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    new-instance v3, Lorg/json/JSONArray;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Collection;

    invoke-direct {v3, v1}, Lorg/json/JSONArray;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    :cond_2
    return-object v0
.end method


# virtual methods
.method public fillAdAcceptType()V
    .locals 4

    .line 139
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/adx/AdxBidRequestInfo;->a:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    .line 140
    iget-object v0, p0, Lcom/tkay/network/adx/AdxBidRequestInfo;->a:Lorg/json/JSONObject;

    const-string v1, "adp_accept_type"

    new-instance v2, Lorg/json/JSONArray;

    const-string v3, "[1]"

    invoke-direct {v2, v3}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

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

    .line 69
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    .line 70
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "x"

    .line 71
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    .line 72
    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x1

    .line 73
    aget-object p1, p1, v1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    .line 75
    iget-object v1, p0, Lcom/tkay/network/adx/AdxBidRequestInfo;->a:Lorg/json/JSONObject;

    const-string v2, "ad_width"

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 76
    iget-object v0, p0, Lcom/tkay/network/adx/AdxBidRequestInfo;->a:Lorg/json/JSONObject;

    const-string v1, "ad_height"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 77
    iget-object p1, p0, Lcom/tkay/network/adx/AdxBidRequestInfo;->a:Lorg/json/JSONObject;

    const-string v0, "adp_accept_type"

    new-instance v1, Lorg/json/JSONArray;

    const-string v2, "[1]"

    invoke-direct {v1, v2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public fillInterstitial(Ljava/util/Map;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "1"

    const-string v1, "unit_type"

    .line 94
    :try_start_0
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 99
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 100
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 101
    iget-object v3, p0, Lcom/tkay/network/adx/AdxBidRequestInfo;->a:Lorg/json/JSONObject;

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_0
    const-string v1, "inter_type"

    .line 105
    invoke-static {p1, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 106
    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 108
    invoke-virtual {p0}, Lcom/tkay/network/adx/AdxBidRequestInfo;->fillAdAcceptType()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public fillSplashData()V
    .locals 3

    .line 86
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/adx/AdxBidRequestInfo;->a:Lorg/json/JSONObject;

    const-string v1, "get_offer"

    const/4 v2, 0x2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 87
    invoke-virtual {p0}, Lcom/tkay/network/adx/AdxBidRequestInfo;->fillAdAcceptType()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public toRequestJSONObject()Lorg/json/JSONObject;
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/tkay/network/adx/AdxBidRequestInfo;->a:Lorg/json/JSONObject;

    return-object v0
.end method
