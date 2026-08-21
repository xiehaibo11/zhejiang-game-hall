.class public Lcom/czhj/sdk/common/Database/DBOperator;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;,
        Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;,
        Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;
    }
.end annotation


# static fields
.field private static final a:Lcom/czhj/sdk/common/Database/DBOperator;


# instance fields
.field private final b:Ljava/util/concurrent/ThreadPoolExecutor;

.field private final c:Ljava/lang/Object;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/czhj/sdk/common/Database/DBOperator;

    invoke-direct {v0}, Lcom/czhj/sdk/common/Database/DBOperator;-><init>()V

    sput-object v0, Lcom/czhj/sdk/common/Database/DBOperator;->a:Lcom/czhj/sdk/common/Database/DBOperator;

    return-void
.end method

.method private constructor <init>()V
    .locals 8

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/DBOperator;->c:Ljava/lang/Object;

    new-instance v7, Ljava/util/concurrent/ArrayBlockingQueue;

    const/16 v0, 0xa

    invoke-direct {v7, v0}, Ljava/util/concurrent/ArrayBlockingQueue;-><init>(I)V

    new-instance v0, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v6, Ljava/util/concurrent/TimeUnit;->MINUTES:Ljava/util/concurrent/TimeUnit;

    const/4 v2, 0x0

    const v3, 0x7fffffff

    const-wide/16 v4, 0x1

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/DBOperator;->b:Ljava/util/concurrent/ThreadPoolExecutor;

    return-void
.end method

.method public static declared-synchronized getInstance()Lcom/czhj/sdk/common/Database/DBOperator;
    .locals 2

    const-class v0, Lcom/czhj/sdk/common/Database/DBOperator;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/czhj/sdk/common/Database/DBOperator;->a:Lcom/czhj/sdk/common/Database/DBOperator;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method


# virtual methods
.method public count(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)I
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, p1, p2, v0}, Lcom/czhj/sdk/common/Database/DBOperator;->count(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public count(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;)I
    .locals 9

    const/4 v2, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v0, p1

    move-object v1, p2

    move-object v3, p3

    :try_start_0
    invoke-virtual/range {v0 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_1

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    goto :goto_1

    :catchall_0
    move-exception p2

    goto :goto_0

    :catchall_1
    move-exception p2

    const/4 p1, 0x0

    :goto_0
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    if-eqz p1, :cond_0

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    :cond_0
    const/4 p2, 0x0

    :cond_1
    :goto_1
    return p2

    :catchall_2
    move-exception p2

    if-eqz p1, :cond_2

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    :cond_2
    throw p2
.end method

.method public delete(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/Database/SQLiteLisenter;)V
    .locals 7

    :try_start_0
    new-instance v6, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;

    move-object v0, v6

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    invoke-direct/range {v0 .. v5}, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;-><init>(Lcom/czhj/sdk/common/Database/DBOperator;Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/Database/SQLiteLisenter;)V

    iget-object p1, p0, Lcom/czhj/sdk/common/Database/DBOperator;->b:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {p1, v6}, Ljava/util/concurrent/ThreadPoolExecutor;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    new-instance p2, Ljava/lang/Error;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, p1}, Ljava/lang/Error;-><init>(Ljava/lang/String;)V

    invoke-interface {p4, p2}, Lcom/czhj/sdk/common/Database/SQLiteLisenter;->onFailed(Ljava/lang/Error;)V

    :goto_0
    return-void
.end method

.method public find(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;)V
    .locals 13

    new-instance v12, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;

    move-object v0, v12

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object/from16 v4, p3

    move-object/from16 v5, p4

    move-object/from16 v6, p5

    move-object/from16 v7, p6

    move-object/from16 v8, p7

    move-object/from16 v9, p8

    move-object/from16 v10, p9

    move-object/from16 v11, p10

    invoke-direct/range {v0 .. v11}, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;-><init>(Lcom/czhj/sdk/common/Database/DBOperator;Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;)V

    move-object v0, p0

    iget-object v1, v0, Lcom/czhj/sdk/common/Database/DBOperator;->b:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {v1, v12}, Ljava/util/concurrent/ThreadPoolExecutor;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    return-void
.end method
