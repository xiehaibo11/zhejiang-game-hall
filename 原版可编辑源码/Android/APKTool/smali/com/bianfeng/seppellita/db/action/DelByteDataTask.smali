.class public Lcom/bianfeng/seppellita/db/action/DelByteDataTask;
.super Lcom/bianfeng/seppellita/db/action/BaseDataTast;
.source "DelByteDataTask.java"


# instance fields
.field private callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

.field private t:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/util/List;Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;",
            ")V"
        }
    .end annotation

    .line 14
    sget-object v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->DEL:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    invoke-direct {p0, v0}, Lcom/bianfeng/seppellita/db/action/BaseDataTast;-><init>(Lcom/bianfeng/seppellita/db/action/DataTaskEnum;)V

    .line 15
    iput-object p1, p0, Lcom/bianfeng/seppellita/db/action/DelByteDataTask;->t:Ljava/util/List;

    .line 16
    iput-object p2, p0, Lcom/bianfeng/seppellita/db/action/DelByteDataTask;->callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 21
    invoke-static {}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->getInstance()Lcom/bianfeng/seppellita/db/action/ByteDataTask;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/seppellita/db/action/DelByteDataTask;->t:Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->deleteEvent(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    .line 22
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    .line 23
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/action/DelByteDataTask;->callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    iget-object v1, p0, Lcom/bianfeng/seppellita/db/action/DelByteDataTask;->t:Ljava/util/List;

    invoke-interface {v0, v1}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onDelSuccess(Ljava/util/List;)V

    goto :goto_0

    .line 25
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/action/DelByteDataTask;->callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    iget-object v1, p0, Lcom/bianfeng/seppellita/db/action/DelByteDataTask;->t:Ljava/util/List;

    invoke-interface {v0, v1}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onDeltFail(Ljava/util/List;)V

    .line 27
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/action/DelByteDataTask;->callback:Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;

    invoke-interface {v0}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onFinish()V

    return-void
.end method
