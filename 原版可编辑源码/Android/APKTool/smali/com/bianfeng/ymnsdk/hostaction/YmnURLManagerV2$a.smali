.class final Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2$a;
.super Ljava/lang/Object;
.source "YmnURLManagerV2.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/action/HttpListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->gainHost(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 264
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onComplete(Ljava/lang/String;)V
    .locals 9
    .param p1, "response"    # Ljava/lang/String;

    .line 267
    const-string v0, "ymn"

    const-string v1, "sdk_config"

    const-string v2, "trade"

    const-string v3, "login"

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u83b7\u53d6\u5230\u7684\uff1a"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 269
    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 270
    .local v4, "json":Lorg/json/JSONObject;
    const-string v5, "data"

    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 271
    .local v5, "data":Ljava/lang/String;
    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6, v5}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 272
    .local v6, "hostjson":Lorg/json/JSONObject;
    invoke-virtual {v6, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-static {v7, v8}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->setHost(Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;)V

    .line 273
    invoke-virtual {v6, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-static {v7, v8}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->setHost(Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;)V

    .line 274
    invoke-virtual {v6, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-static {v7, v8}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->setHost(Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;)V

    .line 275
    invoke-virtual {v6, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    sget-object v8, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v8, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-static {v7, v8}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->setHost(Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;)V

    .line 276
    const-string v7, "true"

    sput-object v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    .line 277
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->setHostType()V

    .line 278
    sget-object v7, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v7, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 279
    sget-object v3, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v3, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 280
    sget-object v2, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 281
    sget-object v1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 284
    .end local v4    # "json":Lorg/json/JSONObject;
    .end local v5    # "data":Ljava/lang/String;
    .end local v6    # "hostjson":Lorg/json/JSONObject;
    goto :goto_0

    .line 282
    :catch_0
    move-exception v0

    .line 283
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 285
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public onError(ILjava/lang/String;)V
    .locals 10
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 289
    const-string v0, "sdk_config"

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u83b7\u53d6host\u5931\u8d25|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "|"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 292
    const/4 v1, 0x3

    :try_start_0
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    const/4 v5, -0x1

    invoke-virtual {v4}, Ljava/lang/String;->hashCode()I

    move-result v6

    const/4 v7, 0x2

    const/4 v8, 0x1

    const/4 v9, 0x0

    packed-switch v6, :pswitch_data_0

    :cond_0
    goto :goto_0

    :pswitch_0
    const-string v6, "sdk_config|d"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 v5, 0x3

    goto :goto_0

    :pswitch_1
    const-string v6, "sdk_config|c"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 v5, 0x2

    goto :goto_0

    :pswitch_2
    const-string v6, "sdk_config|b"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 v5, 0x1

    goto :goto_0

    :pswitch_3
    const-string v6, "sdk_config|a"

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 v5, 0x0

    :goto_0
    if-eqz v5, :cond_4

    if-eq v5, v8, :cond_3

    if-eq v5, v7, :cond_2

    if-eq v5, v1, :cond_1

    goto :goto_1

    .line 303
    :cond_1
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v4, v9}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V

    goto :goto_1

    .line 300
    :cond_2
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v4, v9}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V

    .line 301
    goto :goto_1

    .line 297
    :cond_3
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v4, v9}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V

    .line 298
    goto :goto_1

    .line 294
    :cond_4
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v4, v9}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 295
    nop

    .line 309
    :goto_1
    goto :goto_2

    .line 306
    :catch_0
    move-exception v4

    .line 307
    .local v4, "e":Ljava/lang/Exception;
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V

    .line 308
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 310
    .end local v4    # "e":Ljava/lang/Exception;
    :goto_2
    const/4 v2, 0x0

    .line 311
    .local v2, "failedCount":I
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_3
    const/4 v4, 0x4

    if-ge v3, v4, :cond_6

    .line 312
    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v4, v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    if-nez v4, :cond_5

    .line 313
    add-int/lit8 v2, v2, 0x1

    .line 311
    :cond_5
    add-int/lit8 v3, v3, 0x1

    goto :goto_3

    .line 315
    .end local v3    # "i":I
    :cond_6
    if-le v2, v1, :cond_7

    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->gainHost(Landroid/content/Context;)V

    .line 316
    :cond_7
    return-void

    :pswitch_data_0
    .packed-switch -0x64599f74
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
