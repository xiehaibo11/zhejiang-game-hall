.class public Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;
.super Ljava/lang/Object;
.source "YmnURLManagerV2.java"


# static fields
.field public static config_has_get_fail:Z

.field public static get_url_times:I

.field public static hostMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;",
            ">;"
        }
    .end annotation
.end field

.field public static isGain:Ljava/lang/String;

.field public static login_has_get_fail:Z

.field static mContext:Landroid/content/Context;

.field public static nowType:Ljava/lang/String;

.field public static trade_has_get_fail:Z

.field public static ymn_has_get_fail:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 25
    const/4 v0, 0x0

    sput-boolean v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->login_has_get_fail:Z

    .line 26
    sput-boolean v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->trade_has_get_fail:Z

    .line 27
    sput-boolean v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->ymn_has_get_fail:Z

    .line 28
    sput-boolean v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->config_has_get_fail:Z

    .line 30
    const-string v0, "sdk_config|a"

    sput-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    .line 31
    const-string v0, "false"

    sput-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static changeLoaclUrl(Lorg/json/JSONObject;)V
    .locals 16
    .param p0, "jsonObject"    # Lorg/json/JSONObject;

    .line 214
    move-object/from16 v1, p0

    const-string v0, "server_b_weight"

    const-string v2, "server_b"

    const-string v3, "server_a_weight"

    const-string v4, "server_a"

    const-string v5, "ymn"

    const-string v6, "sdk_config"

    const-string v7, "trade"

    const-string v8, "login"

    :try_start_0
    invoke-virtual {v1, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 215
    .local v9, "loginStr":Ljava/lang/String;
    new-instance v10, Lorg/json/JSONObject;

    invoke-direct {v10, v9}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 216
    .local v10, "loginjson":Lorg/json/JSONObject;
    sget-object v11, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v11, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v11}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v11

    const/4 v12, 0x0

    invoke-interface {v11, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v10, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    iput-object v13, v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 217
    sget-object v11, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v11, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v11}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v11

    invoke-interface {v11, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v10, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v13

    iput v13, v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 218
    sget-object v11, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v11, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v11}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v11

    const/4 v13, 0x1

    invoke-interface {v11, v13}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v10, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    iput-object v14, v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 219
    sget-object v11, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v11, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v13}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v10, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    iput v11, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 221
    invoke-virtual {v1, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 222
    .local v8, "tradeStr":Ljava/lang/String;
    new-instance v11, Lorg/json/JSONObject;

    invoke-direct {v11, v8}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 223
    .local v11, "tradejson":Lorg/json/JSONObject;
    sget-object v14, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v14, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v14}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v14

    invoke-interface {v14, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v11, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    iput-object v15, v14, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 224
    sget-object v14, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v14, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v14}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v14

    invoke-interface {v14, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v11, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v15

    iput v15, v14, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 225
    sget-object v14, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v14, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v14}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v14

    invoke-interface {v14, v13}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v11, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    iput-object v15, v14, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 226
    sget-object v14, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v14, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    invoke-interface {v7, v13}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v11, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v14

    iput v14, v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 229
    invoke-virtual {v1, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 230
    .local v7, "sdkStr":Ljava/lang/String;
    new-instance v14, Lorg/json/JSONObject;

    invoke-direct {v14, v7}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 231
    .local v14, "sdkjson":Lorg/json/JSONObject;
    sget-object v15, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v15, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v15}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v15

    invoke-interface {v15, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v14, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    iput-object v13, v15, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 232
    sget-object v13, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v13, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v13}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v13

    invoke-interface {v13, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v14, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v15

    iput v15, v13, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 233
    sget-object v13, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v13, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v13}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v13

    const/4 v15, 0x1

    invoke-interface {v13, v15}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v14, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    iput-object v15, v13, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 234
    sget-object v13, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v13, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    const/4 v13, 0x1

    invoke-interface {v6, v13}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v14, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v13

    iput v13, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 236
    invoke-virtual {v1, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 237
    .local v6, "ymnStr":Ljava/lang/String;
    new-instance v13, Lorg/json/JSONObject;

    invoke-direct {v13, v6}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 238
    .local v13, "ymnjson":Lorg/json/JSONObject;
    sget-object v15, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v15, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v15}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v15

    invoke-interface {v15, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v13, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v15, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 239
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v13, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    iput v3, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 240
    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v3, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    const/4 v4, 0x1

    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v13, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 241
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v2, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    const/4 v3, 0x1

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v13, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 244
    .end local v6    # "ymnStr":Ljava/lang/String;
    .end local v7    # "sdkStr":Ljava/lang/String;
    .end local v8    # "tradeStr":Ljava/lang/String;
    .end local v9    # "loginStr":Ljava/lang/String;
    .end local v10    # "loginjson":Lorg/json/JSONObject;
    .end local v11    # "tradejson":Lorg/json/JSONObject;
    .end local v13    # "ymnjson":Lorg/json/JSONObject;
    .end local v14    # "sdkjson":Lorg/json/JSONObject;
    goto :goto_0

    .line 242
    :catch_0
    move-exception v0

    .line 243
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 245
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public static gainHost(Landroid/content/Context;)V
    .locals 5
    .param p0, "context"    # Landroid/content/Context;

    .line 248
    const-string v0, "\u670d\u52a1\u8bf7\u6c42"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 249
    const-string v0, ""

    .line 250
    .local v0, "host":Ljava/lang/String;
    sput-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    .line 251
    const/4 v1, 0x0

    .line 253
    .local v1, "url":Ljava/lang/String;
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->getHostUrl()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v1, v2

    .line 257
    nop

    .line 258
    const-string v2, "failed"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 260
    return-void

    .line 262
    :cond_0
    new-instance v2, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;

    invoke-direct {v2, p0}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;-><init>(Landroid/content/Context;)V

    .line 263
    .local v2, "hostHttpHelper":Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;
    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->setMethod(I)V

    .line 264
    new-instance v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2$a;

    invoke-direct {v3}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2$a;-><init>()V

    const-string v4, ""

    invoke-virtual {v2, v1, v4, v3}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->request(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V

    .line 319
    .end local v2    # "hostHttpHelper":Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;
    return-void

    .line 254
    :catch_0
    move-exception v2

    .line 256
    .local v2, "e":Ljava/lang/Exception;
    return-void
.end method

.method public static declared-synchronized getHost(Ljava/lang/String;)Ljava/lang/String;
    .locals 8
    .param p0, "type"    # Ljava/lang/String;

    const-class v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;

    monitor-enter v0

    .line 36
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

    .line 37
    :cond_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->getLoaclHost(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 38
    .local v1, "res":Ljava/lang/String;
    const-string v4, "failed"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_2

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_1

    goto :goto_0

    .line 67
    :cond_1
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->login_has_get_fail:Z

    .line 68
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->trade_has_get_fail:Z

    .line 69
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->ymn_has_get_fail:Z

    .line 70
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->config_has_get_fail:Z

    goto/16 :goto_3

    .line 40
    :cond_2
    :goto_0
    const/4 v4, -0x1

    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result v5

    const/4 v6, 0x2

    const/4 v7, 0x1

    sparse-switch v5, :sswitch_data_0

    :cond_3
    goto :goto_1

    :sswitch_0
    const-string v5, "sdk_config"

    invoke-virtual {p0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    const/4 v4, 0x3

    goto :goto_1

    :sswitch_1
    const-string v5, "trade"

    invoke-virtual {p0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    const/4 v4, 0x1

    goto :goto_1

    :sswitch_2
    const-string v5, "login"

    invoke-virtual {p0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    const/4 v4, 0x0

    goto :goto_1

    :sswitch_3
    const-string v5, "ymn"

    invoke-virtual {p0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    const/4 v4, 0x2

    :goto_1
    if-eqz v4, :cond_7

    if-eq v4, v7, :cond_6

    if-eq v4, v6, :cond_5

    if-eq v4, v2, :cond_4

    .line 63
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v4, "sdk_config"

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    move-object v1, v2

    goto :goto_2

    .line 57
    :cond_4
    sput-boolean v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->config_has_get_fail:Z

    .line 59
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v4, "sdk_config"

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    move-object v1, v2

    .line 60
    goto :goto_2

    .line 52
    :cond_5
    sput-boolean v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->ymn_has_get_fail:Z

    .line 54
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v4, "ymn"

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    move-object v1, v2

    .line 55
    goto :goto_2

    .line 47
    :cond_6
    sput-boolean v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->trade_has_get_fail:Z

    .line 49
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v4, "trade"

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    move-object v1, v2

    .line 50
    goto :goto_2

    .line 42
    :cond_7
    sput-boolean v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->login_has_get_fail:Z

    .line 44
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v4, "login"

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    move-object v1, v2

    .line 45
    nop

    .line 64
    :goto_2
    nop

    .line 73
    :goto_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "require host is1 "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 74
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    const-string v4, "SP_YMN_CHANGE_HOST"

    invoke-virtual {v2, v4, v3}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v2

    .line 75
    .local v2, "preferences":Landroid/content/SharedPreferences;
    const-string v3, "SP_YMN_CHANGE_HOST"

    const-string v4, ""

    invoke-interface {v2, v3, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 76
    .local v3, "changeHost":Ljava/lang/String;
    invoke-virtual {v3}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-nez v4, :cond_8

    .line 77
    move-object v1, v3

    .line 80
    :cond_8
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "require host is2 "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 81
    monitor-exit v0

    return-object v1

    .line 35
    .end local v1    # "res":Ljava/lang/String;
    .end local v2    # "preferences":Landroid/content/SharedPreferences;
    .end local v3    # "changeHost":Ljava/lang/String;
    .end local p0    # "type":Ljava/lang/String;
    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    nop

    :sswitch_data_0
    .sparse-switch
        0x1d3da -> :sswitch_3
        0x625ef69 -> :sswitch_2
        0x697f164 -> :sswitch_1
        0x63866ee7 -> :sswitch_0
    .end sparse-switch
.end method

.method private static getHostUrl()Ljava/lang/String;
    .locals 13
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 322
    const/4 v0, 0x1

    .line 323
    .local v0, "isFormal":Z
    const-string v1, ""

    .line 324
    .local v1, "url":Ljava/lang/String;
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v3, "sdk_config"

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    const/4 v4, 0x0

    invoke-interface {v2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v2, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 325
    .local v2, "use_a":Z
    sget-object v5, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v5, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    const/4 v6, 0x1

    invoke-interface {v5, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v5, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 326
    .local v5, "use_b":Z
    sget-object v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v7, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    const/4 v8, 0x2

    invoke-interface {v7, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v7, v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 327
    .local v7, "use_c":Z
    sget-object v9, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v9, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v9}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v9

    const/4 v10, 0x3

    invoke-interface {v9, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v9, v9, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 328
    .local v9, "use_d":Z
    if-eqz v2, :cond_0

    if-eqz v5, :cond_0

    goto :goto_0

    .line 329
    :cond_0
    if-eqz v2, :cond_1

    .line 330
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v6, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6, v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_0

    .line 331
    :cond_1
    if-eqz v5, :cond_2

    .line 332
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4, v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_0

    .line 334
    :cond_2
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    const-string v6, "true"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_6

    .line 335
    if-eqz v7, :cond_3

    if-eqz v9, :cond_3

    .line 336
    const/4 v0, 0x0

    goto :goto_0

    .line 337
    :cond_3
    if-eqz v7, :cond_4

    .line 338
    const/4 v0, 0x0

    .line 339
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4, v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_0

    .line 340
    :cond_4
    if-eqz v9, :cond_5

    .line 341
    const/4 v0, 0x0

    .line 342
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4, v10}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_0

    .line 343
    :cond_5
    const-string v3, "failed"

    return-object v3

    .line 347
    :cond_6
    :goto_0
    const-string v4, "|"

    if-eqz v0, :cond_7

    .line 348
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v6, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v8

    invoke-interface {v6, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 349
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    sget-object v10, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v10, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v10}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v10

    invoke-interface {v8, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v8, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    .line 350
    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v3

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    goto :goto_1

    .line 352
    :cond_7
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v6, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v8

    invoke-interface {v6, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v1, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 353
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    sget-object v10, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v10, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v10}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v10

    invoke-interface {v8, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v8, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    .line 354
    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v3

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    .line 356
    :goto_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppId()Ljava/lang/String;

    move-result-object v3

    .line 357
    .local v3, "sdk_id":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppId()Ljava/lang/String;

    move-result-object v4

    .line 358
    .local v4, "app_id":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getConfigIdStr()Ljava/lang/String;

    move-result-object v6

    .line 359
    .local v6, "package_id":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getChannelId()Ljava/lang/String;

    move-result-object v8

    .line 360
    .local v8, "channel_id":Ljava/lang/String;
    const-string v10, "unknow"

    if-eqz v3, :cond_8

    invoke-virtual {v3}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v11, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-nez v11, :cond_8

    invoke-virtual {v3}, Ljava/lang/String;->isEmpty()Z

    move-result v11

    if-eqz v11, :cond_9

    .line 361
    :cond_8
    const-string v3, "0"

    .line 362
    :cond_9
    if-eqz v4, :cond_a

    invoke-virtual {v4}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v11, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-nez v11, :cond_a

    invoke-virtual {v4}, Ljava/lang/String;->isEmpty()Z

    move-result v11

    if-eqz v11, :cond_b

    .line 363
    :cond_a
    const-string v4, "0"

    .line 364
    :cond_b
    if-eqz v6, :cond_c

    invoke-virtual {v6}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v11, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-nez v11, :cond_c

    invoke-virtual {v6}, Ljava/lang/String;->isEmpty()Z

    move-result v11

    if-eqz v11, :cond_d

    .line 365
    :cond_c
    const-string v6, "0"

    .line 366
    :cond_d
    if-eqz v8, :cond_e

    invoke-virtual {v8}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v11, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-nez v10, :cond_e

    invoke-virtual {v8}, Ljava/lang/String;->isEmpty()Z

    move-result v10

    if-eqz v10, :cond_f

    .line 367
    :cond_e
    const-string v8, "0"

    .line 368
    :cond_f
    invoke-static {v3, v4, v6, v8}, Lcom/bianfeng/ymnsdk/hostaction/HostUtils;->getSign(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    .line 369
    .local v10, "mSign":Ljava/lang/String;
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "/server_list/"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "/"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, ".json"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 370
    return-object v1
.end method

.method private static getLoaclHost(Ljava/lang/String;)Ljava/lang/String;
    .locals 9
    .param p0, "type"    # Ljava/lang/String;

    .line 409
    const-string v0, ""

    .line 410
    .local v0, "hostURL":Ljava/lang/String;
    const-string v1, ""

    .line 411
    .local v1, "hostType":Ljava/lang/String;
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v2, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 412
    .local v2, "requestEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-static {v3, p0}, Lcom/bianfeng/ymnsdk/hostaction/HostUtils;->judgeHost(Ljava/util/Map;Ljava/lang/String;)Z

    move-result v3

    const-string v4, "|"

    const/4 v5, 0x0

    if-eqz v3, :cond_3

    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    const-string v6, "true"

    invoke-virtual {v3, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 414
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    const/4 v6, 0x2

    invoke-interface {v3, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 415
    .local v3, "aUserful":Z
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    const/4 v8, 0x3

    invoke-interface {v7, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v7, v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 416
    .local v7, "bUserful":Z
    if-eqz v3, :cond_0

    if-eqz v7, :cond_0

    .line 417
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v6

    invoke-interface {v5, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 418
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v8

    invoke-interface {v6, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v6, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getSpare_index()I

    move-result v6

    invoke-interface {v4, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 419
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "require host is3 "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto/16 :goto_0

    .line 421
    :cond_0
    if-eqz v3, :cond_1

    .line 422
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 423
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v8, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 424
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "require host is4 "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto :goto_0

    .line 425
    :cond_1
    if-eqz v7, :cond_2

    .line 426
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 427
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v6, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 428
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "require host is5 "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto :goto_0

    .line 431
    :cond_2
    invoke-virtual {v2, v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setSpare_can_useful(Z)V

    .line 432
    const-string v0, "failed"

    .line 436
    .end local v3    # "aUserful":Z
    .end local v7    # "bUserful":Z
    :goto_0
    goto/16 :goto_1

    .line 438
    :cond_3
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 439
    .restart local v3    # "aUserful":Z
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    const/4 v7, 0x1

    invoke-interface {v6, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v6, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 440
    .local v6, "bUserful":Z
    if-eqz v3, :cond_4

    if-eqz v6, :cond_4

    .line 441
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v7

    invoke-interface {v5, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 442
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v8

    invoke-interface {v7, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v7, v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getFormal_index()I

    move-result v7

    invoke-interface {v4, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 443
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "require host is6 "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto/16 :goto_1

    .line 444
    :cond_4
    if-eqz v3, :cond_5

    .line 445
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    invoke-interface {v7, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 446
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v8, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 447
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "require host is7 "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto :goto_1

    .line 448
    :cond_5
    if-eqz v6, :cond_6

    .line 449
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v0, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 450
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v8, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->type:Ljava/lang/String;

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-object v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->port:Ljava/lang/String;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 451
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "require host is8 "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    goto :goto_1

    .line 454
    :cond_6
    invoke-virtual {v2, v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_can_useful(Z)V

    .line 455
    const-string v0, "failed"

    .line 458
    .end local v3    # "aUserful":Z
    .end local v6    # "bUserful":Z
    :goto_1
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v3

    if-nez v3, :cond_7

    .line 459
    sput-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    .line 461
    :cond_7
    return-object v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0
    .param p0, "context"    # Landroid/content/Context;

    .line 85
    sput-object p0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    .line 86
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->initEntity()V

    .line 88
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->readDefaultHost(Landroid/content/Context;)V

    .line 89
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->pullData(Landroid/content/Context;)V

    .line 90
    return-void
.end method

.method public static initEntity()V
    .locals 20

    .line 95
    const-class v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    const/4 v1, 0x0

    sput v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    .line 96
    new-instance v1, Lcom/google/gson/Gson;

    invoke-direct {v1}, Lcom/google/gson/Gson;-><init>()V

    .line 97
    .local v1, "gson":Lcom/google/gson/Gson;
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v2

    const-string v3, "loginEntityList"

    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 99
    .local v2, "loginStr":Ljava/lang/String;
    invoke-virtual {v2}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_0

    .line 100
    new-instance v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-direct {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;-><init>()V

    .line 101
    .local v3, "loginEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    new-instance v11, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v5, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    sget v8, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_A_WERIGHT:I

    const/4 v9, 0x0

    const/4 v10, 0x1

    const-string v6, "login"

    const-string v7, "a"

    move-object v4, v11

    invoke-direct/range {v4 .. v10}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 102
    .local v4, "a_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v12, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    sget v9, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->LOGIN_URL_HOST_INPACKAGE_B_WERIGHT:I

    const/4 v10, 0x0

    const/4 v11, 0x1

    const-string v7, "login"

    const-string v8, "b"

    move-object v5, v12

    invoke-direct/range {v5 .. v11}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 103
    .local v5, "b_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v13, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/4 v10, 0x1

    const/4 v11, 0x0

    const/4 v12, 0x1

    const-string v7, ""

    const-string v8, "login"

    const-string v9, "c"

    move-object v6, v13

    invoke-direct/range {v6 .. v12}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 104
    .local v6, "c_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v14, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/4 v11, 0x1

    const/4 v12, 0x0

    const/4 v13, 0x1

    const-string v8, ""

    const-string v9, "login"

    const-string v10, "d"

    move-object v7, v14

    invoke-direct/range {v7 .. v13}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 105
    .local v7, "d_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 106
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 107
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 108
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 109
    .end local v4    # "a_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v5    # "b_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v6    # "c_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v7    # "d_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    goto :goto_0

    .line 110
    .end local v3    # "loginEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    :cond_0
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v4

    invoke-virtual {v4, v3}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3, v0}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 112
    .restart local v3    # "loginEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    :goto_0
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v4

    const-string v5, "tradeEntityList"

    invoke-virtual {v4, v5}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 113
    .local v4, "tradeStr":Ljava/lang/String;
    invoke-virtual {v4}, Ljava/lang/String;->isEmpty()Z

    move-result v6

    if-eqz v6, :cond_1

    .line 114
    new-instance v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-direct {v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;-><init>()V

    .line 115
    .local v5, "tradeEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    new-instance v13, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v7, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    sget v10, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_A_WERIGHT:I

    const/4 v11, 0x0

    const/4 v12, 0x1

    const-string v8, "trade"

    const-string v9, "a"

    move-object v6, v13

    invoke-direct/range {v6 .. v12}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 116
    .local v6, "a_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v14, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    sget v11, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->TRADE_URL_HOST_INPACKAGE_B_WERIGHT:I

    const/4 v12, 0x0

    const/4 v13, 0x1

    const-string v9, "trade"

    const-string v10, "b"

    move-object v7, v14

    invoke-direct/range {v7 .. v13}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 117
    .local v7, "b_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v15, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/4 v12, 0x1

    const/4 v13, 0x0

    const/4 v14, 0x1

    const-string v9, ""

    const-string v10, "trade"

    const-string v11, "c"

    move-object v8, v15

    invoke-direct/range {v8 .. v14}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 118
    .local v8, "c_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v16, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/4 v13, 0x1

    const/4 v14, 0x0

    const/4 v15, 0x1

    const-string v10, ""

    const-string v11, "trade"

    const-string v12, "d"

    move-object/from16 v9, v16

    invoke-direct/range {v9 .. v15}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 119
    .local v9, "d_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v10

    invoke-interface {v10, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 120
    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v10

    invoke-interface {v10, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 121
    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v10

    invoke-interface {v10, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 122
    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v10

    invoke-interface {v10, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 123
    .end local v6    # "a_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v7    # "b_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v8    # "c_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v9    # "d_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    goto :goto_1

    .line 124
    .end local v5    # "tradeEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    :cond_1
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5, v0}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 127
    .restart local v5    # "tradeEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    :goto_1
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v6

    const-string v7, "configEntityList"

    invoke-virtual {v6, v7}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 128
    .local v6, "configStr":Ljava/lang/String;
    invoke-virtual {v6}, Ljava/lang/String;->isEmpty()Z

    move-result v8

    if-eqz v8, :cond_2

    .line 129
    new-instance v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-direct {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;-><init>()V

    .line 130
    .local v7, "configEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    new-instance v15, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v9, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    sget v12, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_HOST_INPACKAGE_A_WERIGHT:I

    const/4 v13, 0x0

    const/4 v14, 0x1

    const-string v10, "sdk_config"

    const-string v11, "a"

    move-object v8, v15

    invoke-direct/range {v8 .. v14}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 131
    .local v8, "a_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v16, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v10, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    sget v13, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->SDK_CONFIG_HOST_INPACKAGE_B_WERIGHT:I

    const/4 v14, 0x0

    const/4 v15, 0x1

    const-string v11, "sdk_config"

    const-string v12, "b"

    move-object/from16 v9, v16

    invoke-direct/range {v9 .. v15}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 132
    .local v9, "b_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v17, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/4 v14, 0x1

    const/4 v15, 0x0

    const/16 v16, 0x1

    const-string v11, ""

    const-string v12, "sdk_config"

    const-string v13, "c"

    move-object/from16 v10, v17

    invoke-direct/range {v10 .. v16}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 133
    .local v10, "c_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v18, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/4 v15, 0x1

    const/16 v16, 0x0

    const/16 v17, 0x1

    const-string v12, ""

    const-string v13, "sdk_config"

    const-string v14, "d"

    move-object/from16 v11, v18

    invoke-direct/range {v11 .. v17}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 134
    .local v11, "d_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v12

    invoke-interface {v12, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 135
    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v12

    invoke-interface {v12, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 136
    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v12

    invoke-interface {v12, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 137
    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v12

    invoke-interface {v12, v11}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 138
    .end local v8    # "a_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v9    # "b_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v10    # "c_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v11    # "d_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    goto :goto_2

    .line 139
    .end local v7    # "configEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    :cond_2
    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v8}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v8

    invoke-virtual {v8, v7}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v1, v7, v0}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 142
    .restart local v7    # "configEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    :goto_2
    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v8}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v8

    const-string v9, "sdkEntityList"

    invoke-virtual {v8, v9}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 143
    .local v8, "sdkStr":Ljava/lang/String;
    invoke-virtual {v8}, Ljava/lang/String;->isEmpty()Z

    move-result v10

    if-eqz v10, :cond_3

    .line 144
    new-instance v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;-><init>()V

    .line 145
    .local v0, "ymnEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    new-instance v16, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v10, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_A:Ljava/lang/String;

    sget v13, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_A_WERIGHT:I

    const/4 v14, 0x0

    const/4 v15, 0x1

    const-string v11, "ymn"

    const-string v12, "a"

    move-object/from16 v9, v16

    invoke-direct/range {v9 .. v15}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 146
    .local v9, "a_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v17, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    sget-object v11, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_B:Ljava/lang/String;

    sget v14, Lcom/bianfeng/ymnsdk/hostaction/HostConstant;->YMN_URL_HOST_INPACKAGE_B_WERIGHT:I

    const/4 v15, 0x0

    const/16 v16, 0x1

    const-string v12, "ymn"

    const-string v13, "b"

    move-object/from16 v10, v17

    invoke-direct/range {v10 .. v16}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 147
    .local v10, "b_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v18, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/4 v15, 0x1

    const/16 v16, 0x0

    const/16 v17, 0x1

    const-string v12, ""

    const-string v13, "ymn"

    const-string v14, "c"

    move-object/from16 v11, v18

    invoke-direct/range {v11 .. v17}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 148
    .local v11, "c_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    new-instance v19, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const/16 v16, 0x1

    const/16 v17, 0x0

    const/16 v18, 0x1

    const-string v13, ""

    const-string v14, "ymn"

    const-string v15, "d"

    move-object/from16 v12, v19

    invoke-direct/range {v12 .. v18}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZ)V

    .line 149
    .local v12, "d_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v13

    invoke-interface {v13, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 150
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v13

    invoke-interface {v13, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 151
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v13

    invoke-interface {v13, v11}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 152
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v13

    invoke-interface {v13, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 153
    .end local v9    # "a_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v10    # "b_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v11    # "c_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    .end local v12    # "d_requestEntity":Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;
    goto :goto_3

    .line 154
    .end local v0    # "ymnEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    :cond_3
    sget-object v10, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v10}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v10

    invoke-virtual {v10, v9}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->readData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v1, v9, v0}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 156
    .restart local v0    # "ymnEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    :goto_3
    new-instance v9, Ljava/util/LinkedHashMap;

    invoke-direct {v9}, Ljava/util/LinkedHashMap;-><init>()V

    sput-object v9, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    .line 157
    sget-object v9, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v10, "login"

    invoke-interface {v9, v10, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 158
    sget-object v9, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v10, "trade"

    invoke-interface {v9, v10, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 159
    sget-object v9, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v10, "sdk_config"

    invoke-interface {v9, v10, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 160
    sget-object v9, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v10, "ymn"

    invoke-interface {v9, v10, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 161
    return-void
.end method

.method public static notifyRequestFailure()V
    .locals 16

    .line 478
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_9

    .line 479
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    const-string v1, "\\|"

    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 480
    .local v0, "array":[Ljava/lang/String;
    const/4 v1, 0x0

    aget-object v2, v0, v1

    .line 481
    .local v2, "type":Ljava/lang/String;
    const/4 v3, 0x1

    aget-object v4, v0, v3

    .line 482
    .local v4, "port":Ljava/lang/String;
    invoke-virtual {v4, v1}, Ljava/lang/String;->charAt(I)C

    move-result v5

    .line 483
    .local v5, "c":C
    add-int/lit8 v6, v5, -0x61

    .line 484
    .local v6, "index":I
    sget-object v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v7, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 485
    .local v7, "entityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequested_fail_times()I

    move-result v8

    if-gez v8, :cond_0

    .line 486
    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequested_fail_times()I

    move-result v8

    add-int/2addr v8, v3

    invoke-virtual {v7, v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setRequested_fail_times(I)V

    goto :goto_0

    .line 488
    :cond_0
    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-boolean v1, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 489
    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-boolean v1, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    .line 490
    invoke-virtual {v7, v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setRequested_fail_times(I)V

    .line 493
    :goto_0
    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v8, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    if-nez v8, :cond_1

    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v8, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    if-nez v8, :cond_1

    .line 494
    invoke-virtual {v7, v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_can_useful(Z)V

    .line 497
    :cond_1
    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    const/4 v9, 0x2

    invoke-interface {v8, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v8, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    const/4 v10, 0x3

    if-nez v8, :cond_2

    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v8, v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    if-nez v8, :cond_2

    .line 498
    invoke-virtual {v7, v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setSpare_can_useful(Z)V

    .line 501
    :cond_2
    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->isFormal_can_useful()Z

    move-result v8

    if-nez v8, :cond_9

    invoke-virtual {v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->isSpare_can_useful()Z

    move-result v8

    if-nez v8, :cond_9

    .line 502
    const-string v8, "false"

    sput-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    .line 503
    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v8}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->gainHost(Landroid/content/Context;)V

    .line 504
    sget v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    add-int/2addr v8, v3

    sput v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    .line 505
    sget v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    const-string v11, "ymn"

    const-string v12, "sdk_config"

    const-string v13, "trade"

    const-string v14, "login"

    if-ge v8, v10, :cond_3

    .line 506
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v1, v14}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 507
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v1, v13}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 508
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v1, v12}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 509
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v1, v11}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    goto :goto_3

    .line 512
    :cond_3
    const/4 v8, -0x1

    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v15

    sparse-switch v15, :sswitch_data_0

    :cond_4
    goto :goto_1

    :sswitch_0
    invoke-virtual {v2, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    const/4 v1, 0x3

    goto :goto_2

    :sswitch_1
    invoke-virtual {v2, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    const/4 v1, 0x1

    goto :goto_2

    :sswitch_2
    invoke-virtual {v2, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_4

    goto :goto_2

    :sswitch_3
    invoke-virtual {v2, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    const/4 v1, 0x2

    goto :goto_2

    :goto_1
    const/4 v1, -0x1

    :goto_2
    if-eqz v1, :cond_8

    if-eq v1, v3, :cond_7

    if-eq v1, v9, :cond_6

    if-eq v1, v10, :cond_5

    goto :goto_3

    .line 523
    :cond_5
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->config_has_get_fail:Z

    goto :goto_3

    .line 520
    :cond_6
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->ymn_has_get_fail:Z

    .line 521
    goto :goto_3

    .line 517
    :cond_7
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->trade_has_get_fail:Z

    .line 518
    goto :goto_3

    .line 514
    :cond_8
    sput-boolean v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->login_has_get_fail:Z

    .line 529
    .end local v0    # "array":[Ljava/lang/String;
    .end local v2    # "type":Ljava/lang/String;
    .end local v4    # "port":Ljava/lang/String;
    .end local v5    # "c":C
    .end local v6    # "index":I
    .end local v7    # "entityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    :cond_9
    :goto_3
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        0x1d3da -> :sswitch_3
        0x625ef69 -> :sswitch_2
        0x697f164 -> :sswitch_1
        0x63866ee7 -> :sswitch_0
    .end sparse-switch
.end method

.method public static notifyRequestSuccess()V
    .locals 5

    .line 466
    const/4 v0, 0x0

    sput v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->get_url_times:I

    .line 467
    const-string v1, ""

    .line 468
    .local v1, "requested_time":Ljava/lang/String;
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 469
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    const-string v3, "\\|"

    invoke-virtual {v2, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    .line 470
    .local v2, "array":[Ljava/lang/String;
    aget-object v0, v2, v0

    .line 471
    .local v0, "type":Ljava/lang/String;
    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v3, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 472
    .local v3, "entityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequested_success_times()I

    move-result v4

    add-int/lit8 v4, v4, 0x1

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setRequested_success_times(I)V

    .line 474
    .end local v0    # "type":Ljava/lang/String;
    .end local v2    # "array":[Ljava/lang/String;
    .end local v3    # "entityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    :cond_0
    return-void
.end method

.method private static pullData(Landroid/content/Context;)V
    .locals 6
    .param p0, "context"    # Landroid/content/Context;

    .line 164
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

    .line 165
    .local v0, "gainAChance":I
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/HostUtils;->getChance(I)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 166
    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v3, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_0

    .line 168
    :cond_0
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1, v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    .line 170
    :goto_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->gainHost(Landroid/content/Context;)V

    .line 171
    return-void
.end method

.method private static readDefaultHost(Landroid/content/Context;)V
    .locals 8
    .param p0, "context"    # Landroid/content/Context;

    .line 175
    const-string v0, "default_login"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 176
    .local v0, "default_login":Ljava/lang/String;
    const-string v1, "default_trade"

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 177
    .local v1, "default_trade":Ljava/lang/String;
    const-string v2, "default_config"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 178
    .local v2, "default_config":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getHostUrl()Ljava/lang/String;

    move-result-object v3

    .line 179
    .local v3, "default_ymn":Ljava/lang/String;
    const/4 v4, 0x1

    const/4 v5, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v6

    if-nez v6, :cond_0

    .line 180
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

    .line 181
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

    .line 183
    :cond_0
    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v6

    if-nez v6, :cond_1

    .line 184
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v7, "trade"

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v1, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 185
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v1, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 188
    :cond_1
    if-eqz v2, :cond_2

    invoke-virtual {v2}, Ljava/lang/String;->isEmpty()Z

    move-result v6

    if-nez v6, :cond_2

    .line 189
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v7, "sdk_config"

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v2, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 190
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v2, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 192
    :cond_2
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_3

    .line 193
    sget-object v6, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    const-string v7, "ymn"

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v3, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 194
    sget-object v5, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v5, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iput-object v3, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 197
    :cond_3
    const-string v4, ""

    .line 199
    .local v4, "debugStr":Ljava/lang/String;
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->urlOnSdCard4Public(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    move-object v4, v5

    .line 200
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "\u8fd9\u662f\u672c\u5730debug\u6587\u4ef6\uff1a"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 201
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->isJsonObject(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_4

    .line 202
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5, v4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 203
    .local v5, "json":Lorg/json/JSONObject;
    const-string v6, "data"

    invoke-virtual {v5, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 204
    .local v6, "data":Ljava/lang/String;
    new-instance v7, Lorg/json/JSONObject;

    invoke-direct {v7, v6}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 205
    .local v7, "hostjson":Lorg/json/JSONObject;
    invoke-static {v7}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->changeLoaclUrl(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 209
    .end local v5    # "json":Lorg/json/JSONObject;
    .end local v6    # "data":Ljava/lang/String;
    .end local v7    # "hostjson":Lorg/json/JSONObject;
    :cond_4
    goto :goto_0

    .line 207
    :catch_0
    move-exception v5

    .line 208
    .local v5, "e":Ljava/lang/Exception;
    invoke-virtual {v5}, Ljava/lang/Exception;->printStackTrace()V

    .line 210
    .end local v5    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public static saveHostList()V
    .locals 3

    .line 557
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

    .line 558
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

    .line 559
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

    .line 560
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

    .line 561
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    const-string v2, "nowType"

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->putData(Ljava/lang/String;Ljava/lang/String;)V

    .line 562
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->getInstance(Landroid/content/Context;)Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    const-string v2, "isGain"

    invoke-virtual {v0, v2, v1}, Lcom/bianfeng/ymnsdk/hostaction/HostSharedPreferences;->putData(Ljava/lang/String;Ljava/lang/String;)V

    .line 563
    return-void
.end method

.method static setHost(Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;)V
    .locals 6
    .param p0, "response"    # Ljava/lang/String;
    .param p1, "entityList"    # Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 375
    const-string v0, "request_times"

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 376
    .local v1, "hostjson":Lorg/json/JSONObject;
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    const/4 v3, 0x2

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const-string v4, "server_a"

    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 377
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    const/4 v4, 0x3

    invoke-interface {v2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const-string v5, "server_b"

    invoke-virtual {v1, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->url:Ljava/lang/String;

    .line 378
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const-string v5, "server_a_weight"

    invoke-virtual {v1, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    iput v5, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 379
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    const-string v5, "server_b_weight"

    invoke-virtual {v1, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    iput v5, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    .line 380
    const-string v2, "is_mandatory"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p1, v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setIs_mandatory(I)V

    .line 381
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    iput v3, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->Request_times:I

    .line 382
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->Request_times:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 385
    .end local v1    # "hostjson":Lorg/json/JSONObject;
    goto :goto_0

    .line 383
    :catch_0
    move-exception v0

    .line 384
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 387
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method static setHostType()V
    .locals 9

    .line 391
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

    .line 392
    .local v1, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;>;"
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 393
    .local v2, "mEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    const/4 v4, 0x0

    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v3, v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    mul-int/lit16 v3, v3, 0x2710

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v5, v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    const/4 v7, 0x1

    invoke-interface {v6, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v6, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    add-int/2addr v5, v6

    div-int/2addr v3, v5

    .line 394
    .local v3, "gainAChance":I
    invoke-static {v3}, Lcom/bianfeng/ymnsdk/hostaction/HostUtils;->getChance(I)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 395
    invoke-virtual {v2, v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    goto :goto_1

    .line 397
    :cond_0
    invoke-virtual {v2, v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_index(I)V

    .line 399
    :goto_1
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    const/4 v5, 0x2

    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    mul-int/lit16 v4, v4, 0x2710

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v6, v6, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v7

    const/4 v8, 0x3

    invoke-interface {v7, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget v7, v7, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->weight:I

    add-int/2addr v6, v7

    div-int/2addr v4, v6

    .line 400
    .end local v3    # "gainAChance":I
    .local v4, "gainAChance":I
    invoke-static {v4}, Lcom/bianfeng/ymnsdk/hostaction/HostUtils;->getChance(I)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 401
    invoke-virtual {v2, v5}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setSpare_index(I)V

    goto :goto_2

    .line 403
    :cond_1
    invoke-virtual {v2, v8}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setSpare_index(I)V

    .line 405
    .end local v1    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;>;"
    .end local v2    # "mEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    .end local v4    # "gainAChance":I
    :goto_2
    goto/16 :goto_0

    .line 406
    :cond_2
    return-void
.end method

.method private static urlOnSdCard4Public(Landroid/content/Context;)Ljava/lang/String;
    .locals 4
    .param p0, "context"    # Landroid/content/Context;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 540
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->isSdcardReady()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, ""

    if-nez v0, :cond_0

    .line 541
    return-object v1

    .line 543
    :cond_0
    :try_start_1
    new-instance v0, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/ResourceUtil;->getSdcardPath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".bftj/sdk/ymnDebug"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 545
    .local v0, "file":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_1

    .line 546
    return-object v1

    .line 548
    :cond_1
    new-instance v1, Ljava/util/Properties;

    invoke-direct {v1}, Ljava/util/Properties;-><init>()V

    .line 549
    .local v1, "properties":Ljava/util/Properties;
    new-instance v2, Ljava/io/FileInputStream;

    invoke-direct {v2, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-virtual {v1, v2}, Ljava/util/Properties;->load(Ljava/io/InputStream;)V

    .line 550
    const-string v2, "url_host_ymnsdk"

    invoke-virtual {v1, v2}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object v2

    .line 551
    .end local v0    # "file":Ljava/io/File;
    .end local v1    # "properties":Ljava/util/Properties;
    :catch_0
    move-exception v0

    .line 552
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method
