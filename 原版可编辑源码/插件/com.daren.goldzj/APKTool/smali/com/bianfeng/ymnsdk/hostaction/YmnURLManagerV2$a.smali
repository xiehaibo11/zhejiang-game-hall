.class Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2$a;
.super Ljava/lang/Object;
.source "YmnURLManagerV2.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/action/HttpListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->gainHost(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onComplete(Ljava/lang/String;)V
    .locals 6

    const-string v0, "ymn"

    const-string v1, "sdk_config"

    const-string v2, "trade"

    const-string v3, "login"

    .line 1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u83b7\u53d6\u5230\u7684\uff1a"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 3
    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "data"

    .line 4
    invoke-virtual {v4, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 5
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 6
    invoke-virtual {v4, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    sget-object v5, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v5, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-static {p1, v5}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->setHost(Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;)V

    .line 7
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    sget-object v5, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v5, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-static {p1, v5}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->setHost(Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;)V

    .line 8
    invoke-virtual {v4, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    sget-object v5, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v5, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-static {p1, v5}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->setHost(Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;)V

    .line 9
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    sget-object v4, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v4, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-static {p1, v4}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->setHost(Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;)V

    const-string p1, "true"

    .line 10
    sput-object p1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->isGain:Ljava/lang/String;

    .line 11
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->setHostType()V

    .line 12
    sget-object p1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 13
    sget-object p1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 14
    sget-object p1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V

    .line 15
    sget-object p1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->resetUseable()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 17
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onError(ILjava/lang/String;)V
    .locals 4

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u83b7\u53d6host\u5931\u8d25|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 3
    sget-object p1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->nowType:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result p2

    const/4 v0, 0x2

    const/4 v1, 0x3

    const/4 v2, 0x1

    const/4 v3, 0x0

    packed-switch p2, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const-string p2, "sdk_config|d"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x3

    goto :goto_1

    :pswitch_1
    const-string p2, "sdk_config|c"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x2

    goto :goto_1

    :pswitch_2
    const-string p2, "sdk_config|b"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_1

    :pswitch_3
    const-string p2, "sdk_config|a"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    goto :goto_1

    :cond_0
    :goto_0
    const/4 p1, -0x1

    :goto_1
    const-string p2, "sdk_config"

    if-eqz p1, :cond_4

    if-eq p1, v2, :cond_3

    if-eq p1, v0, :cond_2

    if-eq p1, v1, :cond_1

    goto :goto_2

    .line 14
    :cond_1
    sget-object p1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {p1, v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V

    goto :goto_2

    .line 15
    :cond_2
    sget-object p1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {p1, v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V

    goto :goto_2

    .line 16
    :cond_3
    sget-object p1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {p1, v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V

    goto :goto_2

    .line 17
    :cond_4
    sget-object p1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {p1, v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V

    :goto_2
    const/4 p1, 0x0

    :goto_3
    const/4 v0, 0x4

    if-ge v3, v0, :cond_6

    .line 31
    sget-object v0, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->hostMap:Ljava/util/Map;

    invoke-interface {v0, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    iget-boolean v0, v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->can_useful:Z

    if-nez v0, :cond_5

    add-int/lit8 p1, p1, 0x1

    :cond_5
    add-int/lit8 v3, v3, 0x1

    goto :goto_3

    :cond_6
    if-le p1, v1, :cond_7

    .line 34
    sget-object p1, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->gainHost(Landroid/content/Context;)V

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
