.class public Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;
.super Lcom/bianfeng/seppellita/db/action/BaseDataTast;
.source "InsertByteDataTask.java"


# instance fields
.field protected bean:Lcom/bianfeng/seppellita/bean/DataBean;

.field protected callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

.field private volatile test:Z


# direct methods
.method public constructor <init>(Lcom/bianfeng/seppellita/bean/DataBean;Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;)V
    .locals 1

    .line 16
    sget-object v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->INSERT:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    invoke-direct {p0, v0}, Lcom/bianfeng/seppellita/db/action/BaseDataTast;-><init>(Lcom/bianfeng/seppellita/db/action/DataTaskEnum;)V

    const/4 v0, 0x0

    .line 13
    iput-boolean v0, p0, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;->test:Z

    .line 17
    iput-object p1, p0, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;->bean:Lcom/bianfeng/seppellita/bean/DataBean;

    .line 19
    iput-object p2, p0, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;->callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    return-void
.end method


# virtual methods
.method public getBean()Ljava/lang/String;
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;->bean:Lcom/bianfeng/seppellita/bean/DataBean;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public run()V
    .locals 8

    .line 24
    const-class v0, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;

    monitor-enter v0

    .line 28
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;->bean:Lcom/bianfeng/seppellita/bean/DataBean;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/DataBean;->getData()Ljava/lang/String;

    move-result-object v3

    .line 29
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;->bean:Lcom/bianfeng/seppellita/bean/DataBean;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/DataBean;->getDataTime()Ljava/lang/String;

    move-result-object v6

    .line 30
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;->bean:Lcom/bianfeng/seppellita/bean/DataBean;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/DataBean;->getTime()J

    move-result-wide v4

    .line 32
    invoke-static {}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->getInstance()Lcom/bianfeng/seppellita/db/action/ByteDataTask;

    move-result-object v2

    iget-object v7, p0, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;->callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    invoke-virtual/range {v2 .. v7}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->insert(Ljava/lang/String;JLjava/lang/String;Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;)V

    .line 34
    iget-object v1, p0, Lcom/bianfeng/seppellita/db/action/InsertByteDataTask;->callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    invoke-interface {v1}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onFinish()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    goto :goto_1

    :catch_0
    move-exception v1

    .line 36
    :try_start_1
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 37
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "InsertEventTask"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 39
    :goto_0
    monitor-exit v0

    return-void

    :goto_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method
