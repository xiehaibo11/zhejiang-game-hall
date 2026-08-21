.class public Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;
.super Ljava/lang/Object;
.source "YmnURLManagerV2.java"


# static fields
.field public static config_has_get_fail:Z = false

.field public static get_url_times:I = 0x0

.field public static hostMap:Ljava/util/Map; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;",
            ">;"
        }
    .end annotation
.end field

.field public static isGain:Ljava/lang/String; = "false"

.field public static login_has_get_fail:Z = false

.field static mContext:Landroid/content/Context; = null

.field public static nowType:Ljava/lang/String; = "sdk_config|a"

.field public static trade_has_get_fail:Z = false

.field public static ymn_has_get_fail:Z = false


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static changeLoaclUrl(Lorg/json/JSONObject;)V
    .locals 13

    const-string v0, "server_b_weight"

    const-string v1, "server_b"

    const-string v2, "server_a_weight"

    const-string v3, "server_a"

    const-string v4, "ymn"

    const-string v5, "sdk_config"

    const-string v6, "trade"

    const-string v7, "login"

    .line 1
    :try_start_0
    invoke-virtual {p0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 2
    new-instance v9, Lorg/json/JSONObject;

    invoke-direct {v9, v8}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 3
    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    const/4 v10, 0x0

    invoke-interface {v8, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v9, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    iput-object v11, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 4
    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v9, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    iput v11, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 5
    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    const/4 v11, 0x1

    invoke-interface {v8, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v9, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    iput-object v12, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 6
    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    invoke-interface {v7, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v9, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v8

    iput v8, v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 8
    invoke-virtual {p0, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 9
    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8, v7}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 10
    sget-object v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v7, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    invoke-interface {v7, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v8, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    iput-object v9, v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 11
    sget-object v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v7, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    invoke-interface {v7, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v8, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    iput v9, v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 12
    sget-object v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v7, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    invoke-interface {v7, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v8, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    iput-object v9, v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 13
    sget-object v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v7, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v8, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    iput v7, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 16
    invoke-virtual {p0, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 17
    new-instance v7, Lorg/json/JSONObject;

    invoke-direct {v7, v6}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 18
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v6, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v7, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    iput-object v8, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 19
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v6, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v7, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v8

    iput v8, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 20
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v6, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v7, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    iput-object v8, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 21
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v6, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v7, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    iput v6, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 23
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 24
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 25
    sget-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p0, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v5, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 26
    sget-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p0, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v5, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    iput v2, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 27
    sget-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p0, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v5, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 28
    sget-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p0, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v5, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 30
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static gainHost(Landroid/content/Context;)V
    .locals 3

    const-string v0, "\u670d\u52a1\u8bf7\u6c42"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 3
    sput-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    .line 6
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->getHostUrl()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, "failed"

    .line 11
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 15
    :cond_0
    new-instance v1, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;-><init>(Landroid/content/Context;)V

    const/4 p0, 0x1

    .line 16
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->setMethod(I)V

    .line 17
    new-instance p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2$a;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2$a;-><init>()V

    const-string v2, ""

    invoke-virtual {v1, v0, v2, p0}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->request(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V

    :catch_0
    return-void
.end method

.method public static declared-synchronized getHost(Ljava/lang/String;)Ljava/lang/String;
    .locals 8

    const-class v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;

    monitor-enter v0

    .line 1
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    const-string v2, "true"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x3

    const/4 v3, 0x0

    if-eqz v1, :cond_0

    sget v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    if-lt v1, v2, :cond_0

    sput v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    .line 2
    :cond_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->getLoaclHost(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v4, "failed"

    .line 3
    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_2

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_1

    goto :goto_0

    .line 32
    :cond_1
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->login_has_get_fail:Z

    .line 33
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->trade_has_get_fail:Z

    .line 34
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->ymn_has_get_fail:Z

    .line 35
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->config_has_get_fail:Z

    goto/16 :goto_2

    :cond_2
    :goto_0
    const/4 v1, -0x1

    .line 36
    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result v4

    const v5, 0x1d3da

    const/4 v6, 0x2

    const/4 v7, 0x1

    if-eq v4, v5, :cond_6

    const v5, 0x625ef69

    if-eq v4, v5, :cond_5

    const v5, 0x697f164

    if-eq v4, v5, :cond_4

    const v5, 0x63866ee7

    if-eq v4, v5, :cond_3

    goto :goto_1

    :cond_3
    const-string v4, "sdk_config"

    invoke-virtual {p0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_7

    const/4 v1, 0x3

    goto :goto_1

    :cond_4
    const-string v4, "trade"

    invoke-virtual {p0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_7

    const/4 v1, 0x1

    goto :goto_1

    :cond_5
    const-string v4, "login"

    invoke-virtual {p0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_7

    const/4 v1, 0x0

    goto :goto_1

    :cond_6
    const-string v4, "ymn"

    invoke-virtual {p0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_7

    const/4 v1, 0x2

    :cond_7
    :goto_1
    if-eqz v1, :cond_b

    if-eq v1, v7, :cond_a

    if-eq v1, v6, :cond_9

    if-eq v1, v2, :cond_8

    .line 59
    sget-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v1, "sdk_config"

    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    goto :goto_2

    .line 60
    :cond_8
    sput-boolean v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->config_has_get_fail:Z

    .line 62
    sget-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v1, "sdk_config"

    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    goto :goto_2

    .line 63
    :cond_9
    sput-boolean v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->ymn_has_get_fail:Z

    .line 65
    sget-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v1, "ymn"

    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    goto :goto_2

    .line 66
    :cond_a
    sput-boolean v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->trade_has_get_fail:Z

    .line 68
    sget-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v1, "trade"

    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    goto :goto_2

    .line 69
    :cond_b
    sput-boolean v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->login_has_get_fail:Z

    .line 71
    sget-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v1, "login"

    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 100
    :goto_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "require host is1"

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 101
    sget-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    const-string v2, "SP_YMN_CHANGE_HOST"

    invoke-virtual {p0, v2, v3}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    const-string v2, "SP_YMN_CHANGE_HOST"

    const-string v3, ""

    .line 102
    invoke-interface {p0, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 103
    invoke-virtual {p0}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_c

    goto :goto_3

    :cond_c
    move-object p0, v1

    .line 107
    :goto_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "require host is2 "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static getHostUrl()Ljava/lang/String;
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v1, "sdk_config"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    const/4 v2, 0x0

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 2
    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v3, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    const/4 v4, 0x1

    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 3
    sget-object v5, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v5, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    const/4 v6, 0x2

    invoke-interface {v5, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v5, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 4
    sget-object v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v7, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    const/4 v8, 0x3

    invoke-interface {v7, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v7, v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    if-eqz v0, :cond_0

    if-eqz v3, :cond_0

    goto :goto_0

    :cond_0
    if-eqz v0, :cond_1

    .line 7
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_0

    :cond_1
    if-eqz v3, :cond_2

    .line 9
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0, v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_0

    .line 11
    :cond_2
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    const-string v3, "true"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    if-eqz v5, :cond_3

    if-eqz v7, :cond_3

    goto :goto_1

    :cond_3
    if-eqz v5, :cond_4

    .line 16
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0, v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_1

    :cond_4
    if-eqz v7, :cond_5

    .line 19
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0, v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_1

    :cond_5
    const-string v0, "failed"

    return-object v0

    :cond_6
    :goto_0
    const/4 v2, 0x1

    :goto_1
    const-string v0, "|"

    if-eqz v2, :cond_7

    .line 25
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v3, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v3

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 26
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    sget-object v5, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v5, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v5

    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    .line 27
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v1

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    goto :goto_2

    .line 29
    :cond_7
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v3, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v3

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 30
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    sget-object v5, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v5, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v5

    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    .line 31
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v1

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    .line 33
    :goto_2
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppId()Ljava/lang/String;

    move-result-object v0

    .line 34
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppId()Ljava/lang/String;

    move-result-object v1

    .line 35
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getConfigIdStr()Ljava/lang/String;

    move-result-object v3

    .line 36
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getChannelId()Ljava/lang/String;

    move-result-object v4

    const-string v5, "unknow"

    const-string v6, "0"

    if-eqz v0, :cond_8

    .line 37
    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_8

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v7

    if-eqz v7, :cond_9

    :cond_8
    move-object v0, v6

    :cond_9
    if-eqz v1, :cond_a

    .line 38
    invoke-virtual {v1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_a

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v7

    if-eqz v7, :cond_b

    :cond_a
    move-object v1, v6

    :cond_b
    if-eqz v3, :cond_c

    .line 39
    invoke-virtual {v3}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_c

    invoke-virtual {v3}, Ljava/lang/String;->isEmpty()Z

    move-result v7

    if-eqz v7, :cond_d

    :cond_c
    move-object v3, v6

    :cond_d
    if-eqz v4, :cond_e

    .line 40
    invoke-virtual {v4}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_e

    invoke-virtual {v4}, Ljava/lang/String;->isEmpty()Z

    move-result v5

    if-eqz v5, :cond_f

    :cond_e
    move-object v4, v6

    .line 41
    :cond_f
    invoke-static {v0, v1, v3, v4}, Lcom/bianfeng/ymnsdk/hostaction/HostUtils;->getSign(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 42
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/server_list/"

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "/"

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ".json"

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static getLoaclHost(Ljava/lang/String;)Ljava/lang/String;
    .locals 8

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 2
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-static {v1, p0}, Lcom/bianfeng/ymnsdk/hostaction/HostUtils;->judgeHost(Ljava/util/Map;Ljava/lang/String;)Z

    move-result p0

    const-string v1, "failed"

    const-string v2, "|"

    const/4 v3, 0x0

    const-string v4, ""

    if-eqz p0, :cond_3

    sget-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    const-string v5, "true"

    invoke-virtual {p0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_3

    .line 4
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    const/4 v5, 0x2

    invoke-interface {p0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean p0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 5
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    const/4 v7, 0x3

    invoke-interface {v6, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v6, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    if-eqz p0, :cond_0

    if-eqz v6, :cond_0

    .line 7
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v1

    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 8
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v4

    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v0

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 9
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "require host is3"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto/16 :goto_0

    :cond_0
    if-eqz p0, :cond_1

    .line 12
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 13
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 14
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "require host is4"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto/16 :goto_0

    :cond_1
    if-eqz v6, :cond_2

    .line 16
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 17
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 18
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "require host is5"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto/16 :goto_0

    .line 21
    :cond_2
    invoke-virtual {v0, v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setSpare_can_useful(Z)V

    goto/16 :goto_0

    .line 28
    :cond_3
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean p0, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 29
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    const/4 v6, 0x1

    invoke-interface {v5, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v5, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    if-eqz p0, :cond_4

    if-eqz v5, :cond_4

    .line 31
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v1

    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 32
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v4

    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v0

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 33
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "require host is6"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto/16 :goto_0

    :cond_4
    if-eqz p0, :cond_5

    .line 35
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 36
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {p0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 37
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "require host is7"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto :goto_0

    :cond_5
    if-eqz v5, :cond_6

    .line 39
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 40
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 41
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "require host is8"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto :goto_0

    .line 44
    :cond_6
    invoke-virtual {v0, v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_can_useful(Z)V

    .line 48
    :goto_0
    invoke-virtual {v4}, Ljava/lang/String;->isEmpty()Z

    move-result p0

    if-nez p0, :cond_7

    .line 49
    sput-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    :cond_7
    return-object v1
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->initEntity()V

    .line 4
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->readDefaultHost(Landroid/content/Context;)V

    .line 5
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->pullData(Landroid/content/Context;)V

    return-void
.end method

.method public static initEntity()V
    .locals 26

    const/4 v0, 0x0

    .line 1
    sput v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    .line 2
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    .line 3
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v1

    const-string v2, "loginEntityList"

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 5
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 6
    new-instance v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;-><init>()V

    .line 7
    new-instance v9, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    sget v6, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_A_WERIGHT:I

    const/4 v7, 0x0

    const/4 v8, 0x1

    const-string v4, "login"

    const-string v5, "a"

    move-object v2, v9

    invoke-direct/range {v2 .. v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 8
    new-instance v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v11, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    sget v14, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_B_WERIGHT:I

    const/4 v15, 0x0

    const/16 v16, 0x1

    const-string v12, "login"

    const-string v13, "b"

    move-object v10, v2

    invoke-direct/range {v10 .. v16}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 9
    new-instance v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/16 v21, 0x1

    const/16 v22, 0x0

    const/16 v23, 0x1

    const-string v18, ""

    const-string v19, "login"

    const-string v20, "c"

    move-object/from16 v17, v3

    invoke-direct/range {v17 .. v23}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 10
    new-instance v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/4 v14, 0x1

    const-string v11, ""

    const-string v12, "login"

    const-string v13, "d"

    move-object v10, v4

    invoke-direct/range {v10 .. v16}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 11
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 12
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 13
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 14
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 16
    :cond_0
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 18
    :goto_0
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v2

    const-string v3, "tradeEntityList"

    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 19
    invoke-virtual {v2}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 20
    new-instance v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-direct {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;-><init>()V

    .line 21
    new-instance v10, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    sget v7, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_A_WERIGHT:I

    const/4 v8, 0x0

    const/4 v9, 0x1

    const-string v5, "trade"

    const-string v6, "a"

    move-object v3, v10

    invoke-direct/range {v3 .. v9}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 22
    new-instance v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v12, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    sget v15, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_B_WERIGHT:I

    const/16 v16, 0x0

    const/16 v17, 0x1

    const-string v13, "trade"

    const-string v14, "b"

    move-object v11, v3

    invoke-direct/range {v11 .. v17}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 23
    new-instance v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/16 v22, 0x1

    const/16 v23, 0x0

    const/16 v24, 0x1

    const-string v19, ""

    const-string v20, "trade"

    const-string v21, "c"

    move-object/from16 v18, v4

    invoke-direct/range {v18 .. v24}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 24
    new-instance v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/4 v15, 0x1

    const-string v12, ""

    const-string v13, "trade"

    const-string v14, "d"

    move-object v11, v5

    invoke-direct/range {v11 .. v17}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 25
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 26
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 27
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 28
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 30
    :cond_1
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v2

    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-class v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0, v2, v3}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 33
    :goto_1
    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v3

    const-string v4, "configEntityList"

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 34
    invoke-virtual {v3}, Ljava/lang/String;->isEmpty()Z

    move-result v3

    if-eqz v3, :cond_2

    .line 35
    new-instance v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-direct {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;-><init>()V

    .line 36
    new-instance v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v5, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    sget v8, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_HOST_INPACKAGE_A_WERIGHT:I

    const/4 v9, 0x0

    const/4 v10, 0x1

    const-string v6, "sdk_config"

    const-string v7, "a"

    move-object v4, v11

    invoke-direct/range {v4 .. v10}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 37
    new-instance v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v13, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    sget v16, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_HOST_INPACKAGE_B_WERIGHT:I

    const/16 v17, 0x0

    const/16 v18, 0x1

    const-string v14, "sdk_config"

    const-string v15, "b"

    move-object v12, v4

    invoke-direct/range {v12 .. v18}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 38
    new-instance v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/16 v23, 0x1

    const/16 v24, 0x0

    const/16 v25, 0x1

    const-string v20, ""

    const-string v21, "sdk_config"

    const-string v22, "c"

    move-object/from16 v19, v5

    invoke-direct/range {v19 .. v25}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 39
    new-instance v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/16 v16, 0x1

    const-string v13, ""

    const-string v14, "sdk_config"

    const-string v15, "d"

    move-object v12, v6

    invoke-direct/range {v12 .. v18}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 40
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    invoke-interface {v7, v11}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 41
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    invoke-interface {v7, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 42
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 43
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 45
    :cond_2
    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v3

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-class v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0, v3, v4}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 48
    :goto_2
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v4

    const-string v5, "sdkEntityList"

    invoke-virtual {v4, v5}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 49
    invoke-virtual {v4}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_3

    .line 50
    new-instance v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;-><init>()V

    .line 51
    new-instance v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v5, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    sget v8, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_A_WERIGHT:I

    const/4 v9, 0x0

    const/4 v10, 0x1

    const-string v6, "ymn"

    const-string v7, "a"

    move-object v4, v11

    invoke-direct/range {v4 .. v10}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 52
    new-instance v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v13, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    sget v16, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_B_WERIGHT:I

    const/16 v17, 0x0

    const/16 v18, 0x1

    const-string v14, "ymn"

    const-string v15, "b"

    move-object v12, v4

    invoke-direct/range {v12 .. v18}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 53
    new-instance v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/16 v23, 0x1

    const/16 v24, 0x0

    const/16 v25, 0x1

    const-string v20, ""

    const-string v21, "ymn"

    const-string v22, "c"

    move-object/from16 v19, v5

    invoke-direct/range {v19 .. v25}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 54
    new-instance v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/16 v16, 0x1

    const-string v13, ""

    const-string v14, "ymn"

    const-string v15, "d"

    move-object v12, v6

    invoke-direct/range {v12 .. v18}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 55
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    invoke-interface {v7, v11}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 56
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    invoke-interface {v7, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 57
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 58
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 60
    :cond_3
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v4

    invoke-virtual {v4, v5}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-class v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0, v4, v5}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 62
    :goto_3
    new-instance v4, Ljava/util/LinkedHashMap;

    invoke-direct {v4}, Ljava/util/LinkedHashMap;-><init>()V

    sput-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    .line 63
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v5, "login"

    invoke-interface {v4, v5, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 64
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v4, "trade"

    invoke-interface {v1, v4, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 65
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v2, "sdk_config"

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 66
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v2, "ymn"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static notifyRequestFailure()V
    .locals 12

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_d

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    const-string v1, "\\|"

    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    .line 3
    aget-object v2, v0, v1

    const/4 v3, 0x1

    .line 4
    aget-object v0, v0, v3

    .line 5
    invoke-virtual {v0, v1}, Ljava/lang/String;->charAt(I)C

    move-result v0

    add-int/lit8 v0, v0, -0x61

    .line 7
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 8
    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequested_fail_times()I

    move-result v5

    if-gez v5, :cond_0

    .line 9
    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequested_fail_times()I

    move-result v0

    add-int/2addr v0, v3

    invoke-virtual {v4, v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setRequested_fail_times(I)V

    goto :goto_0

    .line 11
    :cond_0
    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-boolean v1, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 12
    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-boolean v1, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 13
    invoke-virtual {v4, v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setRequested_fail_times(I)V

    .line 16
    :goto_0
    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    if-nez v0, :cond_1

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    if-nez v0, :cond_1

    .line 17
    invoke-virtual {v4, v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_can_useful(Z)V

    .line 20
    :cond_1
    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    const/4 v5, 0x2

    invoke-interface {v0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    const/4 v6, 0x3

    if-nez v0, :cond_2

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    if-nez v0, :cond_2

    .line 21
    invoke-virtual {v4, v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setSpare_can_useful(Z)V

    .line 24
    :cond_2
    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->isFormal_can_useful()Z

    move-result v0

    if-nez v0, :cond_d

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->isSpare_can_useful()Z

    move-result v0

    if-nez v0, :cond_d

    const-string v0, "false"

    .line 25
    sput-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    .line 26
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->gainHost(Landroid/content/Context;)V

    .line 27
    sget v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    add-int/2addr v0, v3

    sput v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    .line 28
    sget v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    const-string v4, "ymn"

    const-string v7, "sdk_config"

    const-string v8, "trade"

    const-string v9, "login"

    if-ge v0, v6, :cond_3

    .line 29
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 30
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 31
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 32
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    goto :goto_2

    :cond_3
    const/4 v0, -0x1

    .line 35
    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v10

    const v11, 0x1d3da

    if-eq v10, v11, :cond_7

    const v4, 0x625ef69

    if-eq v10, v4, :cond_6

    const v1, 0x697f164

    if-eq v10, v1, :cond_5

    const v1, 0x63866ee7

    if-eq v10, v1, :cond_4

    goto :goto_1

    :cond_4
    invoke-virtual {v2, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_8

    const/4 v0, 0x3

    goto :goto_1

    :cond_5
    invoke-virtual {v2, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_8

    const/4 v0, 0x1

    goto :goto_1

    :cond_6
    invoke-virtual {v2, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_8

    const/4 v0, 0x0

    goto :goto_1

    :cond_7
    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_8

    const/4 v0, 0x2

    :cond_8
    :goto_1
    if-eqz v0, :cond_c

    if-eq v0, v3, :cond_b

    if-eq v0, v5, :cond_a

    if-eq v0, v6, :cond_9

    goto :goto_2

    .line 46
    :cond_9
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->config_has_get_fail:Z

    goto :goto_2

    .line 47
    :cond_a
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->ymn_has_get_fail:Z

    goto :goto_2

    .line 48
    :cond_b
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->trade_has_get_fail:Z

    goto :goto_2

    .line 49
    :cond_c
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->login_has_get_fail:Z

    :cond_d
    :goto_2
    return-void
.end method

.method public static notifyRequestSuccess()V
    .locals 3

    const/4 v0, 0x0

    .line 1
    sput v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    .line 3
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 4
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    const-string v2, "\\|"

    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 5
    aget-object v0, v1, v0

    .line 6
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 7
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequested_success_times()I

    move-result v1

    add-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setRequested_success_times(I)V

    :cond_0
    return-void
.end method

.method private static pullData(Landroid/content/Context;)V
    .locals 6

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v1, "sdk_config"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    const/4 v2, 0x0

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    mul-int/lit16 v0, v0, 0x2710

    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v3, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    const/4 v5, 0x1

    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    add-int/2addr v3, v4

    div-int/2addr v0, v3

    .line 2
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/HostUtils;->getChance(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_0

    .line 5
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0, v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    .line 7
    :goto_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->gainHost(Landroid/content/Context;)V

    return-void
.end method

.method private static readDefaultHost(Landroid/content/Context;)V
    .locals 8

    const-string v0, "default_login"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "default_trade"

    .line 2
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "default_config"

    .line 3
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getHostUrl()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    const/4 v5, 0x0

    if-eqz v0, :cond_0

    .line 5
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v6

    if-nez v6, :cond_0

    .line 6
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v7, "login"

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v0, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 7
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v0, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    :cond_0
    if-eqz v1, :cond_1

    .line 9
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    .line 10
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v6, "trade"

    invoke-interface {v0, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v1, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 11
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v1, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    :cond_1
    if-eqz v2, :cond_2

    .line 14
    invoke-virtual {v2}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    .line 15
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v1, "sdk_config"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v2, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 16
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v2, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 18
    :cond_2
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 19
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v1, "ymn"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v3, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 20
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v3, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 25
    :cond_3
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->urlOnSdCard4Public(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    .line 26
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u8fd9\u662f\u672c\u5730debug\u6587\u4ef6\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 27
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->isJsonObject(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 28
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "data"

    .line 29
    invoke-virtual {v0, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 30
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 31
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->changeLoaclUrl(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 34
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_0
    return-void
.end method

.method public static saveHostList()V
    .locals 3

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v2, "login"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "loginEntityList"

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->putData(Ljava/lang/String;Ljava/lang/String;)V

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v2, "trade"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tradeEntityList"

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->putData(Ljava/lang/String;Ljava/lang/String;)V

    .line 3
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v2, "sdk_config"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "configEntityList"

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->putData(Ljava/lang/String;Ljava/lang/String;)V

    .line 4
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v2, "ymn"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ymnEntityList"

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->putData(Ljava/lang/String;Ljava/lang/String;)V

    .line 5
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    const-string v2, "nowType"

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->putData(Ljava/lang/String;Ljava/lang/String;)V

    .line 6
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    const-string v2, "isGain"

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->putData(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static setHost(Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;)V
    .locals 5

    const-string v0, "request_times"

    .line 1
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 2
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    const/4 v2, 0x2

    invoke-interface {p0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const-string v3, "server_a"

    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 3
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    const/4 v3, 0x3

    invoke-interface {p0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const-string v4, "server_b"

    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 4
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const-string v4, "server_a_weight"

    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    iput v4, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 5
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const-string v4, "server_b_weight"

    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    iput v4, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    const-string p0, "is_mandatory"

    .line 6
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {p1, p0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setIs_mandatory(I)V

    .line 7
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    iput v2, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->Request_times:I

    .line 8
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->Request_times:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 10
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method static setHostType()V
    .locals 7

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 2
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 3
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    const/4 v3, 0x0

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v2, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    mul-int/lit16 v2, v2, 0x2710

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    const/4 v6, 0x1

    invoke-interface {v5, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v5, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    add-int/2addr v4, v5

    div-int/2addr v2, v4

    .line 4
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/hostaction/HostUtils;->getChance(I)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 5
    invoke-virtual {v1, v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_1

    .line 7
    :cond_0
    invoke-virtual {v1, v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    .line 9
    :goto_1
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    const/4 v3, 0x2

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v2, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    mul-int/lit16 v2, v2, 0x2710

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    const/4 v6, 0x3

    invoke-interface {v5, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v5, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    add-int/2addr v4, v5

    div-int/2addr v2, v4

    .line 10
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/hostaction/HostUtils;->getChance(I)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 11
    invoke-virtual {v1, v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setSpare_index(I)V

    goto :goto_0

    .line 13
    :cond_1
    invoke-virtual {v1, v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setSpare_index(I)V

    goto/16 :goto_0

    :cond_2
    return-void
.end method

.method private static urlOnSdCard4Public(Landroid/content/Context;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->isSdcardReady()Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v0, ""

    if-nez p0, :cond_0

    return-object v0

    .line 4
    :cond_0
    :try_start_1
    new-instance p0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->getSdcardPath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".bftj/sdk/ymnDebug"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 6
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_1

    return-object v0

    .line 9
    :cond_1
    new-instance v0, Ljava/util/Properties;

    invoke-direct {v0}, Ljava/util/Properties;-><init>()V

    .line 10
    new-instance v1, Ljava/io/FileInputStream;

    invoke-direct {v1, p0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-virtual {v0, v1}, Ljava/util/Properties;->load(Ljava/io/InputStream;)V

    const-string p0, "url_host_ymnsdk"

    .line 11
    invoke-virtual {v0, p0}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 13
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method
