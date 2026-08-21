.class public Lcom/bianfeng/seppellita/db/action/SelectLastMonthByteDataTask;
.super Lcom/bianfeng/seppellita/db/action/BaseDataTast;
.source "SelectLastMonthByteDataTask.java"


# instance fields
.field private callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

.field private fromdata:Ljava/lang/String;

.field private todata:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 17
    sget-object v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->SELECT:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    invoke-direct {p0, v0}, Lcom/bianfeng/seppellita/db/action/BaseDataTast;-><init>(Lcom/bianfeng/seppellita/db/action/DataTaskEnum;)V

    .line 18
    iput-object p1, p0, Lcom/bianfeng/seppellita/db/action/SelectLastMonthByteDataTask;->callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    .line 19
    iput-object p2, p0, Lcom/bianfeng/seppellita/db/action/SelectLastMonthByteDataTask;->fromdata:Ljava/lang/String;

    .line 20
    iput-object p3, p0, Lcom/bianfeng/seppellita/db/action/SelectLastMonthByteDataTask;->todata:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    const-string v0, "SelectLastMonthByteDataTask"

    .line 25
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 26
    invoke-static {}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->getInstance()Lcom/bianfeng/seppellita/db/action/ByteDataTask;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/seppellita/db/action/SelectLastMonthByteDataTask;->fromdata:Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/seppellita/db/action/SelectLastMonthByteDataTask;->todata:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->selectLastMonthEvent(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 27
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    .line 30
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 31
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/action/SelectLastMonthByteDataTask;->callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    invoke-interface {v0, v1}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onSelectSuccess(Ljava/util/List;)V

    goto :goto_1

    .line 28
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/action/SelectLastMonthByteDataTask;->callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    invoke-interface {v0}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onSelectNoData()V

    .line 34
    :goto_1
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/action/SelectLastMonthByteDataTask;->callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    invoke-interface {v0}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onFinish()V

    return-void
.end method
