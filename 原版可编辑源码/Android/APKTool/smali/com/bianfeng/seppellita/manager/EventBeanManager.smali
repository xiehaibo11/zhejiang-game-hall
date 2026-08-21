.class public Lcom/bianfeng/seppellita/manager/EventBeanManager;
.super Ljava/lang/Object;
.source "EventBeanManager.java"


# instance fields
.field private configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

.field private deviceBean:Lcom/bianfeng/seppellita/bean/DeviceBean;

.field private infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

.field private parametersMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/bianfeng/seppellita/utils/ConfigUtils;)V
    .locals 2

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 32
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->parametersMap:Ljava/util/Map;

    .line 35
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->initContext(Landroid/content/Context;)V

    .line 36
    new-instance v0, Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-direct {v0, p1}, Lcom/bianfeng/seppellita/bean/AppInfoBean;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    .line 37
    new-instance v0, Lcom/bianfeng/seppellita/bean/DeviceBean;

    iget-object v1, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getApp_package()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, p1, v1}, Lcom/bianfeng/seppellita/bean/DeviceBean;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->deviceBean:Lcom/bianfeng/seppellita/bean/DeviceBean;

    .line 38
    iput-object p2, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/bianfeng/seppellita/utils/ConfigUtils;Z)V
    .locals 2

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 32
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->parametersMap:Ljava/util/Map;

    if-eqz p3, :cond_0

    .line 43
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->initContext(Landroid/content/Context;)V

    .line 45
    :cond_0
    new-instance v0, Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-direct {v0, p1, p3}, Lcom/bianfeng/seppellita/bean/AppInfoBean;-><init>(Landroid/content/Context;Z)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    .line 46
    new-instance v0, Lcom/bianfeng/seppellita/bean/DeviceBean;

    iget-object v1, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getApp_package()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, p1, v1, p3}, Lcom/bianfeng/seppellita/bean/DeviceBean;-><init>(Landroid/content/Context;Ljava/lang/String;Z)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->deviceBean:Lcom/bianfeng/seppellita/bean/DeviceBean;

    .line 47
    iput-object p2, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    return-void
.end method

.method private addUid(Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "uid"

    .line 158
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 159
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 160
    iget-object v1, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->parametersMap:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method private getMaxCount()I
    .locals 1

    .line 165
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getMaxCount()I

    move-result v0

    return v0
.end method


# virtual methods
.method public buildDataBean(Ljava/lang/String;)Lcom/bianfeng/seppellita/bean/DataBean;
    .locals 4

    .line 169
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getOffsetTime()J

    move-result-wide v0

    .line 170
    new-instance v2, Lcom/bianfeng/seppellita/bean/DataBean;

    iget-object v3, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {v3}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getCurrentTimeFormat()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, p1, v0, v1, v3}, Lcom/bianfeng/seppellita/bean/DataBean;-><init>(Ljava/lang/String;JLjava/lang/String;)V

    return-object v2
.end method

.method public creatEventBean(Ljava/util/List;)Ljava/util/List;
    .locals 14
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/bianfeng/seppellita/bean/PostDataBean;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/seppellita/exception/SeppellitaException;
        }
    .end annotation

    .line 68
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->deviceBean:Lcom/bianfeng/seppellita/bean/DeviceBean;

    monitor-enter v0

    .line 69
    :try_start_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 70
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 71
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 73
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u6570\u636e---"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    const/4 v4, 0x0

    move v5, v4

    move v6, v5

    .line 75
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v7
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-ge v5, v7, :cond_3

    .line 77
    :try_start_1
    invoke-interface {p1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    const-class v8, Lcom/bianfeng/seppellita/bean/DataBean;

    invoke-static {v7, v8}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/bianfeng/seppellita/bean/DataBean;

    .line 78
    new-instance v8, Lcom/bianfeng/seppellita/bean/EventBean;

    iget-object v9, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->deviceBean:Lcom/bianfeng/seppellita/bean/DeviceBean;

    iget-object v10, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-direct {v8, v9, v10}, Lcom/bianfeng/seppellita/bean/EventBean;-><init>(Lcom/bianfeng/seppellita/bean/DeviceBean;Lcom/bianfeng/seppellita/bean/AppInfoBean;)V

    .line 79
    invoke-virtual {v8}, Lcom/bianfeng/seppellita/bean/EventBean;->getSt()Ljava/lang/String;

    move-result-object v9

    if-eqz v9, :cond_0

    invoke-virtual {v8}, Lcom/bianfeng/seppellita/bean/EventBean;->getSt()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/String;->isEmpty()Z

    .line 82
    :cond_0
    invoke-virtual {v7}, Lcom/bianfeng/seppellita/bean/DataBean;->getData()Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->getMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v9

    if-nez v9, :cond_1

    const-string v7, "\u6570\u636e--map==null"

    .line 84
    invoke-static {v7}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    goto/16 :goto_2

    :cond_1
    const-string v10, "et"

    .line 87
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7}, Lcom/bianfeng/seppellita/bean/DataBean;->getTime()J

    move-result-wide v12

    invoke-virtual {v11, v12, v13}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v12, ""

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-interface {v9, v10, v11}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 88
    invoke-direct {p0, v9}, Lcom/bianfeng/seppellita/manager/EventBeanManager;->addUid(Ljava/util/Map;)V

    .line 89
    invoke-virtual {v8, v9}, Lcom/bianfeng/seppellita/bean/EventBean;->setEvent(Ljava/util/Map;)V

    .line 90
    invoke-virtual {v8}, Lcom/bianfeng/seppellita/bean/EventBean;->getSize()I

    move-result v9

    add-int/2addr v6, v9

    .line 91
    invoke-direct {p0}, Lcom/bianfeng/seppellita/manager/EventBeanManager;->getMaxCount()I

    move-result v9
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-lt v6, v9, :cond_2

    .line 93
    :try_start_2
    new-instance v6, Lcom/bianfeng/seppellita/bean/PostDataBean;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {v8}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getOffsetTime()J

    move-result-wide v8

    invoke-virtual {v7, v8, v9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v8, ""

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iget-object v8, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-direct {v6, v2, v3, v7, v8}, Lcom/bianfeng/seppellita/bean/PostDataBean;-><init>(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Lcom/bianfeng/seppellita/bean/AppInfoBean;)V

    invoke-interface {v1, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 94
    invoke-interface {v3}, Ljava/util/List;->clear()V

    .line 95
    invoke-interface {v2}, Ljava/util/List;->clear()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move v6, v4

    goto :goto_2

    :catch_0
    move-exception v7

    move v6, v4

    goto :goto_1

    .line 98
    :cond_2
    :try_start_3
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7}, Lcom/bianfeng/seppellita/bean/DataBean;->getId()I

    move-result v7

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ""

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-interface {v3, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 99
    invoke-interface {v2, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_2

    :catch_1
    move-exception v7

    :goto_1
    :try_start_4
    const-string v8, "\u53c2\u6570\u5b58\u5728\u95ee\u9898--->"

    .line 101
    invoke-static {v8}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->e(Ljava/lang/String;)V

    .line 102
    invoke-virtual {v7}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    add-int/lit8 v5, v5, 0x1

    goto/16 :goto_0

    .line 105
    :cond_3
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_4

    .line 106
    new-instance p1, Lcom/bianfeng/seppellita/bean/PostDataBean;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {v5}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getOffsetTime()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v5, ""

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-direct {p1, v2, v3, v4, v5}, Lcom/bianfeng/seppellita/bean/PostDataBean;-><init>(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Lcom/bianfeng/seppellita/bean/AppInfoBean;)V

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 108
    :cond_4
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception p1

    .line 109
    monitor-exit v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    throw p1
.end method

.method public creatEventBean(Ljava/util/List;Ljava/lang/String;)Ljava/util/List;
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/bianfeng/seppellita/bean/PostDataBean;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/seppellita/exception/SeppellitaException;
        }
    .end annotation

    move-object/from16 v1, p0

    .line 113
    iget-object v2, v1, Lcom/bianfeng/seppellita/manager/EventBeanManager;->deviceBean:Lcom/bianfeng/seppellita/bean/DeviceBean;

    monitor-enter v2

    .line 114
    :try_start_0
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 115
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    .line 116
    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    .line 118
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "\u6570\u636e---"

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface/range {p1 .. p1}, Ljava/util/List;->size()I

    move-result v6

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    const/4 v7, 0x0

    const/4 v8, 0x0

    .line 120
    :goto_0
    invoke-interface/range {p1 .. p1}, Ljava/util/List;->size()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-ge v7, v0, :cond_4

    move-object/from16 v9, p1

    .line 122
    :try_start_1
    invoke-interface {v9, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-class v10, Lcom/bianfeng/seppellita/bean/DataBean;

    invoke-static {v0, v10}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/seppellita/bean/DataBean;

    .line 123
    new-instance v10, Lcom/bianfeng/seppellita/bean/EventBean;

    iget-object v11, v1, Lcom/bianfeng/seppellita/manager/EventBeanManager;->deviceBean:Lcom/bianfeng/seppellita/bean/DeviceBean;

    iget-object v12, v1, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-direct {v10, v11, v12}, Lcom/bianfeng/seppellita/bean/EventBean;-><init>(Lcom/bianfeng/seppellita/bean/DeviceBean;Lcom/bianfeng/seppellita/bean/AppInfoBean;)V

    .line 124
    invoke-virtual {v10}, Lcom/bianfeng/seppellita/bean/EventBean;->getSt()Ljava/lang/String;

    move-result-object v11

    if-eqz v11, :cond_1

    invoke-virtual {v10}, Lcom/bianfeng/seppellita/bean/EventBean;->getSt()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v11}, Ljava/lang/String;->isEmpty()Z

    move-result v11
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v11, :cond_0

    goto :goto_1

    :cond_0
    move-object/from16 v11, p2

    goto :goto_2

    :cond_1
    :goto_1
    move-object/from16 v11, p2

    .line 125
    :try_start_2
    invoke-virtual {v10, v11}, Lcom/bianfeng/seppellita/bean/EventBean;->setSt(Ljava/lang/String;)V

    .line 127
    :goto_2
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/bean/DataBean;->getData()Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->getMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v12

    if-nez v12, :cond_2

    const-string v0, "\u6570\u636e--map==null"

    .line 129
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    move v15, v7

    goto/16 :goto_5

    :cond_2
    const-string v13, "et"

    .line 132
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move v15, v7

    :try_start_3
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/bean/DataBean;->getTime()J

    move-result-wide v6

    invoke-virtual {v14, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v12, v13, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 133
    invoke-direct {v1, v12}, Lcom/bianfeng/seppellita/manager/EventBeanManager;->addUid(Ljava/util/Map;)V

    .line 134
    invoke-virtual {v10, v12}, Lcom/bianfeng/seppellita/bean/EventBean;->setEvent(Ljava/util/Map;)V

    .line 135
    invoke-virtual {v10}, Lcom/bianfeng/seppellita/bean/EventBean;->getSize()I

    move-result v6

    add-int/2addr v8, v6

    .line 136
    invoke-direct/range {p0 .. p0}, Lcom/bianfeng/seppellita/manager/EventBeanManager;->getMaxCount()I

    move-result v6
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-lt v8, v6, :cond_3

    .line 138
    :try_start_4
    new-instance v0, Lcom/bianfeng/seppellita/bean/PostDataBean;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, v1, Lcom/bianfeng/seppellita/manager/EventBeanManager;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {v7}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getOffsetTime()J

    move-result-wide v7

    invoke-virtual {v6, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v7, ""

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    iget-object v7, v1, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-direct {v0, v4, v5, v6, v7}, Lcom/bianfeng/seppellita/bean/PostDataBean;-><init>(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Lcom/bianfeng/seppellita/bean/AppInfoBean;)V

    invoke-interface {v3, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 139
    invoke-interface {v5}, Ljava/util/List;->clear()V

    .line 140
    invoke-interface {v4}, Ljava/util/List;->clear()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    const/4 v8, 0x0

    goto :goto_5

    :catch_0
    move-exception v0

    const/4 v8, 0x0

    goto :goto_4

    .line 143
    :cond_3
    :try_start_5
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/bean/DataBean;->getId()I

    move-result v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ""

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v5, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 144
    invoke-interface {v4, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_5

    :catch_1
    move-exception v0

    goto :goto_4

    :catch_2
    move-exception v0

    goto :goto_3

    :catch_3
    move-exception v0

    move-object/from16 v11, p2

    :goto_3
    move v15, v7

    :goto_4
    :try_start_6
    const-string v6, "\u53c2\u6570\u5b58\u5728\u95ee\u9898--->"

    .line 146
    invoke-static {v6}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->e(Ljava/lang/String;)V

    .line 147
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_5
    add-int/lit8 v7, v15, 0x1

    goto/16 :goto_0

    .line 150
    :cond_4
    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_5

    .line 151
    new-instance v0, Lcom/bianfeng/seppellita/bean/PostDataBean;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, v1, Lcom/bianfeng/seppellita/manager/EventBeanManager;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {v7}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getOffsetTime()J

    move-result-wide v7

    invoke-virtual {v6, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v7, ""

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    iget-object v7, v1, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-direct {v0, v4, v5, v6, v7}, Lcom/bianfeng/seppellita/bean/PostDataBean;-><init>(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Lcom/bianfeng/seppellita/bean/AppInfoBean;)V

    invoke-interface {v3, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 153
    :cond_5
    monitor-exit v2

    return-object v3

    :catchall_0
    move-exception v0

    .line 154
    monitor-exit v2
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    throw v0
.end method

.method public getGetParameters()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 51
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->parametersMap:Ljava/util/Map;

    iget-object v1, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getSite()Ljava/lang/String;

    move-result-object v1

    const-string v2, "st"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 52
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->parametersMap:Ljava/util/Map;

    iget-object v1, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->deviceBean:Lcom/bianfeng/seppellita/bean/DeviceBean;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getDevice_id()Ljava/lang/String;

    move-result-object v1

    const-string v2, "did"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 53
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->parametersMap:Ljava/util/Map;

    iget-object v1, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->deviceBean:Lcom/bianfeng/seppellita/bean/DeviceBean;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getOs()Ljava/lang/String;

    move-result-object v1

    const-string v2, "os"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 54
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->parametersMap:Ljava/util/Map;

    iget-object v1, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->deviceBean:Lcom/bianfeng/seppellita/bean/DeviceBean;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getOs_version()Ljava/lang/String;

    move-result-object v1

    const-string v2, "osv"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 55
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->parametersMap:Ljava/util/Map;

    iget-object v1, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->deviceBean:Lcom/bianfeng/seppellita/bean/DeviceBean;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getIsp()Ljava/lang/String;

    move-result-object v1

    const-string v2, "isp"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 56
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->parametersMap:Ljava/util/Map;

    iget-object v1, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->infoBean:Lcom/bianfeng/seppellita/bean/AppInfoBean;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getApp_channel()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ac"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 57
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/EventBeanManager;->parametersMap:Ljava/util/Map;

    return-object v0
.end method
