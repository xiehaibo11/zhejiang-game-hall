.class public Lcom/bianfeng/ymnsdk/hostaction/HostUtils;
.super Ljava/lang/Object;
.source "HostUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getChance(I)Z
    .locals 3
    .param p0, "percentage"    # I

    .line 47
    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    .line 48
    .local v0, "random":Ljava/util/Random;
    const/16 v1, 0x270f

    invoke-virtual {v0, v1}, Ljava/util/Random;->nextInt(I)I

    move-result v1

    .line 49
    .local v1, "i":I
    if-ltz v1, :cond_0

    if-ge v1, p0, :cond_0

    .line 50
    const/4 v2, 0x1

    return v2

    .line 52
    :cond_0
    const/4 v2, 0x0

    return v2
.end method

.method public static getSign(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 5
    .param p0, "sdk_id"    # Ljava/lang/String;
    .param p1, "app_id"    # Ljava/lang/String;
    .param p2, "package_id"    # Ljava/lang/String;
    .param p3, "channel_id"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 55
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sdk_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "app_id="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "package_id="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "channel_id="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppKey()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v1, v2, v3, v4}, Lcom/bianfeng/ymnsdk/hostaction/HostUtils;->md5(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 56
    .local v0, "resSign":Ljava/lang/String;
    return-object v0
.end method

.method public static judgeHost(Ljava/util/Map;Ljava/lang/String;)Z
    .locals 9
    .param p1, "type"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;",
            ">;",
            "Ljava/lang/String;",
            ")Z"
        }
    .end annotation

    .line 13
    .local p0, "hostMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;>;"
    invoke-interface {p0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;

    .line 14
    .local v0, "requestEntityList":Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getIs_mandatory()I

    move-result v1

    .line 15
    .local v1, "is_mandatory":I
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequested_success_times()I

    move-result v2

    .line 16
    .local v2, "requested_times":I
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v3

    const/4 v4, 0x2

    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->getRequest_times()I

    move-result v3

    .line 17
    .local v3, "request_times":I
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->isFormal_can_useful()Z

    move-result v4

    .line 18
    .local v4, "formal_can_useful":Z
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->isSpare_can_useful()Z

    move-result v5

    .line 19
    .local v5, "spare_can_useful":Z
    const/4 v6, 0x1

    if-ne v1, v6, :cond_0

    if-eqz v5, :cond_0

    .line 21
    return v6

    .line 23
    :cond_0
    const/4 v7, 0x0

    if-eqz v4, :cond_1

    .line 25
    return v7

    .line 27
    :cond_1
    if-eqz v5, :cond_3

    .line 28
    if-le v2, v3, :cond_2

    .line 30
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v8, v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V

    .line 31
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->getRequestEntityList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;

    invoke-virtual {v8, v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntity;->setCan_useful(Z)V

    .line 32
    invoke-virtual {v0, v6}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setFormal_can_useful(Z)V

    .line 33
    invoke-virtual {v0, v7}, Lcom/bianfeng/ymnsdk/hostaction/RequestEntityList;->setRequested_success_times(I)V

    .line 34
    return v7

    .line 37
    :cond_2
    return v6

    .line 40
    :cond_3
    return v7
.end method

.method private static md5(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p0, "sdk_id"    # Ljava/lang/String;
    .param p1, "app_id"    # Ljava/lang/String;
    .param p2, "package_id"    # Ljava/lang/String;
    .param p3, "channel_id"    # Ljava/lang/String;
    .param p4, "resSign"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 60
    new-instance v0, Ljava/lang/StringBuilder;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 61
    .local v0, "sb":Ljava/lang/StringBuilder;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v1

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method
