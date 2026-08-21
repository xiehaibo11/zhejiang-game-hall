.class public Lcom/bianfeng/seppellita/db/action/ByteDataTask;
.super Lcom/bianfeng/seppellita/db/base/BaseDBTask;
.source "ByteDataTask.java"


# static fields
.field private static volatile task:Lcom/bianfeng/seppellita/db/action/ByteDataTask;


# instance fields
.field private delFailList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private hasDb:Z


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 21
    invoke-direct {p0}, Lcom/bianfeng/seppellita/db/base/BaseDBTask;-><init>()V

    .line 22
    invoke-virtual {p0}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->init()Z

    move-result v0

    iput-boolean v0, p0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->hasDb:Z

    .line 23
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->delFailList:Ljava/util/List;

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/seppellita/db/action/ByteDataTask;
    .locals 2

    .line 27
    sget-object v0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->task:Lcom/bianfeng/seppellita/db/action/ByteDataTask;

    if-nez v0, :cond_1

    .line 28
    const-class v0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;

    monitor-enter v0

    .line 29
    :try_start_0
    sget-object v1, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->task:Lcom/bianfeng/seppellita/db/action/ByteDataTask;

    if-nez v1, :cond_0

    .line 30
    new-instance v1, Lcom/bianfeng/seppellita/db/action/ByteDataTask;

    invoke-direct {v1}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;-><init>()V

    sput-object v1, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->task:Lcom/bianfeng/seppellita/db/action/ByteDataTask;

    .line 32
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 34
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->task:Lcom/bianfeng/seppellita/db/action/ByteDataTask;

    return-object v0
.end method


# virtual methods
.method public deleteEvent(Ljava/util/List;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 112
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->delFailList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 113
    iget-boolean v0, p0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->hasDb:Z

    if-nez v0, :cond_0

    .line 114
    iget-object p1, p0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->delFailList:Ljava/util/List;

    return-object p1

    .line 116
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 118
    :try_start_0
    invoke-virtual {p0, v0}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->delete(Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 120
    iget-object v2, p0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->delFailList:Ljava/util/List;

    invoke-interface {v2, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 121
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, "ByteDataTask deleteEvent \u5f02\u5e38"

    .line 122
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    goto :goto_0

    .line 126
    :cond_1
    iget-object p1, p0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->delFailList:Ljava/util/List;

    return-object p1
.end method

.method public declared-synchronized insert(Ljava/lang/String;JLjava/lang/String;Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;)V
    .locals 2

    monitor-enter p0

    .line 44
    :try_start_0
    iget-boolean v0, p0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->hasDb:Z

    if-nez v0, :cond_0

    .line 45
    invoke-interface {p5}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onInsertFail()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 46
    monitor-exit p0

    return-void

    .line 51
    :cond_0
    :try_start_1
    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->insert(Ljava/lang/String;JLjava/lang/String;)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    long-to-double p3, p1

    const-wide v0, 0x41d7ffffffd00000L    # 1.61061273525E9

    cmpl-double p3, p3, v0

    if-lez p3, :cond_1

    .line 59
    :try_start_2
    sget-object p3, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->NEED_DEL:Lcom/bianfeng/seppellita/db/action/DelDbEnum;

    invoke-virtual {p3}, Lcom/bianfeng/seppellita/db/action/DelDbEnum;->ordinal()I

    move-result p3

    invoke-static {p3}, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->putDelDb(I)V

    :cond_1
    const-wide/16 p3, -0x1

    cmp-long p1, p1, p3

    if-eqz p1, :cond_2

    .line 62
    invoke-interface {p5}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onInsertSuccess()V

    goto :goto_0

    .line 64
    :cond_2
    invoke-interface {p5}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onInsertFail()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 66
    :goto_0
    monitor-exit p0

    return-void

    :catch_0
    move-exception p1

    .line 53
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 54
    invoke-interface {p5}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onInsertFail()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 55
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public selectEvent(Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;)V
    .locals 2

    const-string v0, ""

    .line 75
    iget-boolean v1, p0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->hasDb:Z

    if-nez v1, :cond_0

    .line 76
    invoke-interface {p1}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onSelectNoData()V

    return-void

    .line 82
    :cond_0
    :try_start_0
    invoke-virtual {p0, v0, v0}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->select(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 88
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 89
    invoke-interface {p1}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onSelectNoData()V

    goto :goto_0

    .line 91
    :cond_1
    invoke-interface {p1, v0}, Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;->onSelectSuccess(Ljava/util/List;)V

    :goto_0
    return-void

    :catch_0
    move-exception p1

    .line 84
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public selectLastMonthEvent(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 97
    iget-boolean v0, p0, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->hasDb:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 102
    :cond_0
    :try_start_0
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->select(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 104
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1
.end method
