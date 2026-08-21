.class public Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;
.super Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;


# static fields
.field private static volatile database:Landroid/database/sqlite/SQLiteDatabase;


# instance fields
.field private volatile cacheSynced:Z

.field callback:Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;

.field private chunkTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

.field private downloadTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

.field private segmentTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    .line 53
    invoke-direct {p0, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;-><init>(Z)V

    return-void
.end method

.method public constructor <init>(Z)V
    .locals 1

    .line 56
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;-><init>()V

    const/4 v0, 0x0

    .line 50
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->callback:Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 60
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->cacheSynced:Z

    .line 61
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->init()V

    return-void
.end method

.method static synthetic access$000(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;)V
    .locals 0

    .line 40
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    return-void
.end method

.method static synthetic access$100()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    .line 40
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    return-object v0
.end method

.method static synthetic access$1000(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;IIIILandroid/database/sqlite/SQLiteStatement;)V
    .locals 0

    .line 40
    invoke-direct/range {p0 .. p5}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->updateSubDownloadChunkIndexInner(IIIILandroid/database/sqlite/SQLiteStatement;)V

    return-void
.end method

.method static synthetic access$1100(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;)Lcom/ss/android/socialbase/downloader/db/TableStatements;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->downloadTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    return-object p0
.end method

.method static synthetic access$1200(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Landroid/database/sqlite/SQLiteStatement;)V
    .locals 0

    .line 40
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->insertDownloadInfoInner(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Landroid/database/sqlite/SQLiteStatement;)V

    return-void
.end method

.method static synthetic access$1300(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    .line 40
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->updateDownloadInfoForCurrentThread(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-void
.end method

.method static synthetic access$1400(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;)V
    .locals 0

    .line 40
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->clearDataInSubThread()V

    return-void
.end method

.method static synthetic access$1500(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;ILandroid/content/ContentValues;)V
    .locals 0

    .line 40
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->updateInner(ILandroid/content/ContentValues;)V

    return-void
.end method

.method static synthetic access$200(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Ljava/util/List;)V
    .locals 0

    .line 40
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->clearAntiHijackDirIfNeeded(Ljava/util/List;)V

    return-void
.end method

.method static synthetic access$300(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Ljava/util/List;Ljava/util/List;Landroid/util/SparseArray;Landroid/util/SparseArray;Landroid/util/SparseArray;)V
    .locals 0

    .line 40
    invoke-direct/range {p0 .. p5}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->loadCacheFromDB(Ljava/util/List;Ljava/util/List;Landroid/util/SparseArray;Landroid/util/SparseArray;Landroid/util/SparseArray;)V

    return-void
.end method

.method static synthetic access$402(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Z)Z
    .locals 0

    .line 40
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->cacheSynced:Z

    return p1
.end method

.method static synthetic access$500(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;)Lcom/ss/android/socialbase/downloader/db/TableStatements;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->chunkTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    return-object p0
.end method

.method static synthetic access$600(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;ILandroid/database/sqlite/SQLiteStatement;)V
    .locals 0

    .line 40
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->deleteInner(ILandroid/database/sqlite/SQLiteStatement;)V

    return-void
.end method

.method static synthetic access$700(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Landroid/database/sqlite/SQLiteStatement;)V
    .locals 0

    .line 40
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->insertDownloadChunkInner(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Landroid/database/sqlite/SQLiteStatement;)V

    return-void
.end method

.method static synthetic access$800(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;IIJLandroid/database/sqlite/SQLiteStatement;)V
    .locals 0

    .line 40
    invoke-direct/range {p0 .. p5}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->updateDownloadChunkInner(IIJLandroid/database/sqlite/SQLiteStatement;)V

    return-void
.end method

.method static synthetic access$900(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;IIIJLandroid/database/sqlite/SQLiteStatement;)V
    .locals 0

    .line 40
    invoke-direct/range {p0 .. p6}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->updateSubDownloadChunkInner(IIIJLandroid/database/sqlite/SQLiteStatement;)V

    return-void
.end method

.method private addDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    .line 657
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 658
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->downloadTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    if-nez v0, :cond_0

    goto :goto_0

    .line 661
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$7;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$7;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitDBTask(Ljava/lang/Runnable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private clearAntiHijackDirIfNeeded(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;)V"
        }
    .end annotation

    if-nez p1, :cond_0

    return-void

    .line 245
    :cond_0
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v0, :cond_1

    .line 246
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isSavePathRedirected()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 247
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->clearAntiHijackDir(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_2
    return-void
.end method

.method private declared-synchronized clearDataInSubThread()V
    .locals 3

    monitor-enter p0

    .line 765
    :try_start_0
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->safeBeginTransaction()V

    .line 766
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v1, "downloader"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2, v2}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    .line 767
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v1, "downloadChunk"

    invoke-virtual {v0, v1, v2, v2}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    .line 768
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 772
    :goto_0
    :try_start_1
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->safeEndTransaction()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 770
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_0

    .line 774
    :goto_1
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    goto :goto_2

    :catchall_2
    move-exception v0

    .line 772
    :try_start_3
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->safeEndTransaction()V

    throw v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :goto_2
    monitor-exit p0

    throw v0
.end method

.method private deleteInner(ILandroid/database/sqlite/SQLiteStatement;)V
    .locals 3

    if-nez p2, :cond_0

    return-void

    .line 451
    :cond_0
    :try_start_0
    monitor-enter p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v0, 0x1

    int-to-long v1, p1

    .line 452
    :try_start_1
    invoke-virtual {p2, v0, v1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 453
    invoke-virtual {p2}, Landroid/database/sqlite/SQLiteStatement;->execute()V

    .line 454
    monitor-exit p2

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    .line 456
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private ensureDataBaseInit()V
    .locals 6

    .line 70
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-nez v0, :cond_1

    .line 71
    const-class v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    monitor-enter v0

    .line 72
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_0

    .line 76
    :try_start_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;->getInstance()Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    sput-object v1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    .line 77
    new-instance v1, Lcom/ss/android/socialbase/downloader/db/TableStatements;

    sget-object v2, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v3, "downloader"

    sget-object v4, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->DOWNLOAD_ALL_COLUMNS:[Ljava/lang/String;

    sget-object v5, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->DOWNLOAD_PK_COLUMNS:[Ljava/lang/String;

    invoke-direct {v1, v2, v3, v4, v5}, Lcom/ss/android/socialbase/downloader/db/TableStatements;-><init>(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->downloadTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    .line 81
    new-instance v1, Lcom/ss/android/socialbase/downloader/db/TableStatements;

    sget-object v2, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v3, "downloadChunk"

    sget-object v4, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->CHUNK_ALL_COLUMNS:[Ljava/lang/String;

    sget-object v5, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->CHUNK_PK_COLUMNS:[Ljava/lang/String;

    invoke-direct {v1, v2, v3, v4, v5}, Lcom/ss/android/socialbase/downloader/db/TableStatements;-><init>(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->chunkTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    .line 85
    new-instance v1, Lcom/ss/android/socialbase/downloader/db/TableStatements;

    sget-object v2, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v3, "segments"

    sget-object v4, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->SEGMENT_ALL_COLUMNS:[Ljava/lang/String;

    sget-object v5, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->SEGMENT_PK_COLUMNS:[Ljava/lang/String;

    invoke-direct {v1, v2, v3, v4, v5}, Lcom/ss/android/socialbase/downloader/db/TableStatements;-><init>(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V

    iput-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->segmentTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 89
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 92
    :cond_0
    :goto_0
    monitor-exit v0

    goto :goto_1

    :catchall_1
    move-exception v1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw v1

    :cond_1
    :goto_1
    return-void
.end method

.method private insertDownloadChunkInner(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Landroid/database/sqlite/SQLiteStatement;)V
    .locals 0

    if-eqz p1, :cond_1

    if-nez p2, :cond_0

    goto :goto_0

    .line 502
    :cond_0
    :try_start_0
    monitor-enter p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 503
    :try_start_1
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValue(Landroid/database/sqlite/SQLiteStatement;)V

    .line 504
    invoke-virtual {p2}, Landroid/database/sqlite/SQLiteStatement;->executeInsert()J

    .line 505
    monitor-exit p2

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    .line 507
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method private insertDownloadInfoInner(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Landroid/database/sqlite/SQLiteStatement;)V
    .locals 0

    if-eqz p1, :cond_1

    if-nez p2, :cond_0

    goto :goto_0

    .line 488
    :cond_0
    :try_start_0
    monitor-enter p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 489
    :try_start_1
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValue(Landroid/database/sqlite/SQLiteStatement;)V

    .line 490
    invoke-virtual {p2}, Landroid/database/sqlite/SQLiteStatement;->executeInsert()J

    .line 491
    monitor-exit p2

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    .line 493
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method private loadCacheFromDB(Ljava/util/List;Ljava/util/List;Landroid/util/SparseArray;Landroid/util/SparseArray;Landroid/util/SparseArray;)V
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;",
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;",
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;",
            "Landroid/util/SparseArray<",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;>;)V"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v0, p3

    move-object/from16 v2, p4

    move-object/from16 v3, p5

    .line 262
    invoke-virtual/range {p3 .. p3}, Landroid/util/SparseArray;->size()I

    move-result v4

    if-ltz v4, :cond_9

    .line 263
    sget-object v5, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-nez v5, :cond_0

    goto/16 :goto_9

    .line 265
    :cond_0
    sget-object v5, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    monitor-enter v5

    .line 267
    :try_start_0
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->safeBeginTransaction()V

    .line 268
    invoke-interface/range {p1 .. p1}, Ljava/util/List;->isEmpty()Z

    move-result v6

    const/4 v7, 0x0

    const/4 v8, 0x1

    if-nez v6, :cond_3

    .line 269
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v6

    const-string v9, "clear_invalid_task_error"

    invoke-virtual {v6, v9}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_2

    .line 271
    invoke-interface/range {p1 .. p1}, Ljava/util/List;->size()I

    move-result v6

    new-array v6, v6, [Ljava/lang/String;

    move v9, v7

    .line 272
    :goto_0
    invoke-interface/range {p1 .. p1}, Ljava/util/List;->size()I

    move-result v10

    if-ge v9, v10, :cond_1

    move-object/from16 v10, p1

    .line 273
    invoke-interface {v10, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    invoke-static {v11}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v11

    aput-object v11, v6, v9

    add-int/lit8 v9, v9, 0x1

    goto :goto_0

    :cond_1
    move-object/from16 v10, p1

    .line 275
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "CAST(_id AS TEXT) IN ("

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v11, Ljava/lang/String;

    invoke-interface/range {p1 .. p1}, Ljava/util/List;->size()I

    move-result v10

    sub-int/2addr v10, v8

    new-array v10, v10, [C

    invoke-direct {v11, v10}, Ljava/lang/String;-><init>([C)V

    const-string v10, "\u0000"

    const-string v12, "?,"

    invoke-virtual {v11, v10, v12}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "?)"

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    .line 276
    sget-object v10, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v11, "downloader"

    invoke-virtual {v10, v11, v9, v6}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    .line 277
    sget-object v10, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v11, "downloadChunk"

    invoke-virtual {v10, v11, v9, v6}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    goto :goto_1

    :cond_2
    const-string v6, ", "

    move-object/from16 v9, p2

    .line 279
    invoke-static {v6, v9}, Landroid/text/TextUtils;->join(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;

    move-result-object v6

    .line 280
    sget-object v9, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v10, "downloader"

    const-string v11, "_id IN (?)"

    new-array v12, v8, [Ljava/lang/String;

    aput-object v6, v12, v7

    invoke-virtual {v9, v10, v11, v12}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    .line 281
    sget-object v9, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v10, "downloadChunk"

    const-string v11, "_id IN (?)"

    new-array v12, v8, [Ljava/lang/String;

    aput-object v6, v12, v7

    invoke-virtual {v9, v10, v11, v12}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    :cond_3
    :goto_1
    move v6, v7

    :goto_2
    if-ge v6, v4, :cond_6

    .line 286
    invoke-virtual {v0, v6}, Landroid/util/SparseArray;->keyAt(I)I

    move-result v9

    .line 287
    invoke-virtual {v0, v9}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 288
    sget-object v11, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v12, "downloader"

    const-string v13, "_id = ?"

    new-array v14, v8, [Ljava/lang/String;

    invoke-static {v9}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v15

    aput-object v15, v14, v7

    invoke-virtual {v11, v12, v13, v14}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    .line 289
    sget-object v11, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v12, "downloader"

    invoke-virtual {v10}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->toContentValues()Landroid/content/ContentValues;

    move-result-object v13

    const/4 v14, 0x0

    invoke-virtual {v11, v12, v14, v13}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    .line 291
    invoke-virtual {v10}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getChunkCount()I

    move-result v11

    if-le v11, v8, :cond_5

    .line 292
    invoke-virtual {v1, v9}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->getDownloadChunk(I)Ljava/util/List;

    move-result-object v11

    .line 293
    invoke-interface {v11}, Ljava/util/List;->size()I

    move-result v12

    if-gtz v12, :cond_4

    goto :goto_4

    .line 296
    :cond_4
    sget-object v12, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v13, "downloadChunk"

    const-string v15, "_id = ?"

    new-array v14, v8, [Ljava/lang/String;

    invoke-static {v9}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v9

    aput-object v9, v14, v7

    invoke-virtual {v12, v13, v15, v14}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    .line 297
    invoke-interface {v11}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v9

    :goto_3
    invoke-interface {v9}, Ljava/util/Iterator;->hasNext()Z

    move-result v11

    if-eqz v11, :cond_5

    invoke-interface {v9}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    .line 298
    invoke-virtual {v10}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v12

    invoke-virtual {v11, v12}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setId(I)V

    .line 299
    sget-object v12, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v13, "downloadChunk"

    invoke-virtual {v11}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->toContentValues()Landroid/content/ContentValues;

    move-result-object v11

    const/4 v14, 0x0

    invoke-virtual {v12, v13, v14, v11}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    goto :goto_3

    :cond_5
    :goto_4
    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    :cond_6
    if-eqz v2, :cond_8

    if-eqz v3, :cond_8

    .line 305
    invoke-virtual/range {p4 .. p4}, Landroid/util/SparseArray;->size()I

    move-result v0

    :goto_5
    if-ge v7, v0, :cond_8

    .line 307
    invoke-virtual {v2, v7}, Landroid/util/SparseArray;->valueAt(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v4

    .line 308
    invoke-virtual {v1, v4}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->getDownloadChunk(I)Ljava/util/List;

    move-result-object v6

    .line 309
    invoke-static {v6}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->parseHostChunkList(Ljava/util/List;)Ljava/util/List;

    move-result-object v6

    if-eqz v6, :cond_7

    .line 311
    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v8

    if-lez v8, :cond_7

    .line 312
    invoke-virtual {v3, v4, v6}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    :cond_7
    add-int/lit8 v7, v7, 0x1

    goto :goto_5

    .line 317
    :cond_8
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 321
    :goto_6
    :try_start_1
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->safeEndTransaction()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_7

    :catchall_0
    move-exception v0

    .line 319
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_6

    .line 323
    :goto_7
    :try_start_3
    monitor-exit v5

    return-void

    :catchall_1
    move-exception v0

    goto :goto_8

    :catchall_2
    move-exception v0

    move-object v2, v0

    .line 321
    invoke-direct/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->safeEndTransaction()V

    throw v2

    .line 323
    :goto_8
    monitor-exit v5
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    throw v0

    :cond_9
    :goto_9
    return-void
.end method

.method private safeBeginTransaction()V
    .locals 1

    .line 258
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    return-void
.end method

.method private safeEndTransaction()V
    .locals 1

    .line 714
    :try_start_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->inTransaction()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 715
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 717
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private update(ILandroid/content/ContentValues;)V
    .locals 1

    .line 1000
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 1001
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-nez v0, :cond_0

    return-void

    .line 1004
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$11;

    invoke-direct {v0, p0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$11;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;ILandroid/content/ContentValues;)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitDBTask(Ljava/lang/Runnable;)V

    return-void
.end method

.method private updateDownloadChunkInner(IIJLandroid/database/sqlite/SQLiteStatement;)V
    .locals 4

    .line 587
    :try_start_0
    monitor-enter p5
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 588
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v1, "curOffset"

    .line 589
    invoke-static {p3, p4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p3

    invoke-virtual {v0, v1, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 590
    sget-object p3, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string p4, "downloadChunk"

    const-string v1, "_id = ? AND chunkIndex = ?"

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/String;

    const/4 v3, 0x0

    .line 592
    invoke-static {p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v2, v3

    const/4 p1, 0x1

    invoke-static {p2}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p2

    aput-object p2, v2, p1

    .line 590
    invoke-virtual {p3, p4, v0, v1, v2}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    .line 593
    monitor-exit p5

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p5
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    .line 595
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private declared-synchronized updateDownloadInfoForCurrentThread(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    monitor-enter p0

    if-nez p1, :cond_0

    .line 692
    monitor-exit p0

    return-void

    .line 695
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->cacheExist(I)Z

    move-result v0

    if-nez v0, :cond_1

    .line 697
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->addDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    goto :goto_0

    .line 699
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->downloadTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_2

    .line 700
    monitor-exit p0

    return-void

    .line 702
    :cond_2
    :try_start_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->downloadTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/db/TableStatements;->getUpdateStatement()Landroid/database/sqlite/SQLiteStatement;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->updateDownloadInfoInner(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Landroid/database/sqlite/SQLiteStatement;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 704
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catchall_1
    move-exception p1

    .line 708
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 710
    :goto_0
    monitor-exit p0

    return-void

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private updateDownloadInfoInner(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Landroid/database/sqlite/SQLiteStatement;)V
    .locals 3

    if-eqz p1, :cond_1

    if-nez p2, :cond_0

    goto :goto_0

    .line 617
    :cond_0
    :try_start_0
    monitor-enter p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 618
    :try_start_1
    invoke-virtual {p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->bindValue(Landroid/database/sqlite/SQLiteStatement;)V

    .line 619
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getBindValueCount()I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    .line 620
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result p1

    int-to-long v1, p1

    invoke-virtual {p2, v0, v1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 621
    invoke-virtual {p2}, Landroid/database/sqlite/SQLiteStatement;->execute()V

    .line 622
    monitor-exit p2

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    .line 624
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method private updateInner(ILandroid/content/ContentValues;)V
    .locals 5

    const/16 v0, 0xa

    .line 1016
    :goto_0
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v1}, Landroid/database/sqlite/SQLiteDatabase;->isDbLockedByCurrentThread()Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-eqz v1, :cond_0

    add-int/lit8 v0, v0, -0x1

    if-ltz v0, :cond_0

    const-wide/16 v1, 0x5

    .line 1018
    :try_start_1
    invoke-static {v1, v2}, Ljava/lang/Thread;->sleep(J)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 1020
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_0

    .line 1024
    :cond_0
    :try_start_3
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v1, "downloader"

    const-string v2, "_id = ? "

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v3, v4

    invoke-virtual {v0, v1, p2, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception p1

    .line 1026
    :try_start_4
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_1

    :catchall_2
    move-exception p1

    .line 1029
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    return-void
.end method

.method private updateSubDownloadChunkIndexInner(IIIILandroid/database/sqlite/SQLiteStatement;)V
    .locals 5

    .line 573
    :try_start_0
    monitor-enter p5
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 574
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v1, "chunkIndex"

    .line 575
    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p4

    invoke-virtual {v0, v1, p4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 576
    sget-object p4, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v1, "downloadChunk"

    const-string v2, "_id = ? AND chunkIndex = ? AND hostChunkIndex = ?"

    const/4 v3, 0x3

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    .line 578
    invoke-static {p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v3, v4

    const/4 p1, 0x1

    invoke-static {p2}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p2

    aput-object p2, v3, p1

    const/4 p1, 0x2

    invoke-static {p3}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p2

    aput-object p2, v3, p1

    .line 576
    invoke-virtual {p4, v1, v0, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    .line 579
    monitor-exit p5

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p5
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    .line 581
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private updateSubDownloadChunkInner(IIIJLandroid/database/sqlite/SQLiteStatement;)V
    .locals 4

    .line 601
    :try_start_0
    monitor-enter p6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 602
    :try_start_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v1, "curOffset"

    .line 603
    invoke-static {p4, p5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p4

    invoke-virtual {v0, v1, p4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 604
    sget-object p4, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string p5, "downloadChunk"

    const-string v1, "_id = ? AND chunkIndex = ? AND hostChunkIndex = ?"

    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/String;

    const/4 v3, 0x0

    .line 606
    invoke-static {p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v2, v3

    const/4 p1, 0x1

    invoke-static {p2}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p2

    aput-object p2, v2, p1

    const/4 p1, 0x2

    invoke-static {p3}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p2

    aput-object p2, v2, p1

    .line 604
    invoke-virtual {p4, p5, v0, v1, v2}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    .line 607
    monitor-exit p6

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p6
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    .line 609
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method


# virtual methods
.method public OnDownloadTaskCancel(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 3

    .line 839
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const/4 v1, -0x4

    .line 840
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "status"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 841
    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    const-string p3, "curBytes"

    invoke-virtual {v0, p3, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 842
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->update(ILandroid/content/ContentValues;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskCompleted(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 3

    .line 819
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const/4 v1, -0x3

    .line 820
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "status"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 821
    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    const-string p3, "curBytes"

    invoke-virtual {v0, p3, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const/4 p2, 0x0

    .line 822
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const-string p3, "isFirstDownload"

    invoke-virtual {v0, p3, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p3, "isFirstSuccess"

    .line 823
    invoke-virtual {v0, p3, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 824
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->update(ILandroid/content/ContentValues;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskConnected(IJLjava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 3

    .line 778
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const/4 v1, 0x3

    .line 779
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "status"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 780
    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    const-string p3, "totalBytes"

    invoke-virtual {v0, p3, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const-string p2, "eTag"

    .line 781
    invoke-virtual {v0, p2, p4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 782
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_0

    const-string p2, "name"

    .line 783
    invoke-virtual {v0, p2, p5}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 784
    :cond_0
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->update(ILandroid/content/ContentValues;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskError(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 3

    .line 799
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const/4 v1, -0x1

    .line 800
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "status"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 801
    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "curBytes"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    const-wide/16 v1, 0x0

    cmp-long p2, p2, v1

    if-lez p2, :cond_0

    const/4 p2, 0x0

    .line 803
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const-string p3, "isFirstDownload"

    invoke-virtual {v0, p3, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 804
    :cond_0
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->update(ILandroid/content/ContentValues;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskIntercept(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 3

    .line 856
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const/4 v1, -0x7

    .line 857
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "status"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 858
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->update(ILandroid/content/ContentValues;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskPause(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 3

    .line 830
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const/4 v1, -0x2

    .line 831
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "status"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 832
    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    const-string p3, "curBytes"

    invoke-virtual {v0, p3, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 833
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->update(ILandroid/content/ContentValues;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskPrepare(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 3

    .line 848
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const/4 v1, 0x1

    .line 849
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "status"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 850
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->update(ILandroid/content/ContentValues;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskProgress(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 3

    .line 790
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const/4 v1, 0x4

    .line 791
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "status"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 792
    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    const-string p3, "curBytes"

    invoke-virtual {v0, p3, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 793
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->update(ILandroid/content/ContentValues;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public OnDownloadTaskRetry(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 3

    .line 810
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const/4 v1, 0x5

    .line 811
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "status"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const/4 v1, 0x0

    .line 812
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "isFirstDownload"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 813
    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->update(ILandroid/content/ContentValues;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 1

    .line 462
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 463
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->chunkTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    if-nez v0, :cond_0

    goto :goto_0

    .line 466
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$3;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$3;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitDBTask(Ljava/lang/Runnable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public addSubDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 0

    .line 481
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    return-void
.end method

.method public cacheExist(I)Z
    .locals 1

    const/4 v0, 0x0

    .line 330
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0

    :catchall_0
    move-exception p1

    .line 332
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return v0
.end method

.method public clearData()V
    .locals 1

    .line 751
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 752
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-nez v0, :cond_0

    return-void

    .line 754
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$10;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$10;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitDBTask(Ljava/lang/Runnable;)V

    return-void
.end method

.method public ensureDownloadCacheSyncSuccess()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public getAllDownloadInfo()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method public getDownloadChunk(I)Ljava/util/List;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;"
        }
    .end annotation

    .line 405
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 407
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 408
    sget-object v1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-eqz v1, :cond_1

    const/4 v1, 0x0

    const/4 v2, 0x0

    const/4 v3, 0x1

    .line 411
    :try_start_0
    sget-object v4, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v5, "SELECT * FROM %s WHERE %s = ?"

    const/4 v6, 0x2

    new-array v6, v6, [Ljava/lang/Object;

    const-string v7, "downloadChunk"

    aput-object v7, v6, v2

    const-string v7, "_id"

    aput-object v7, v6, v3

    invoke-static {v5, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    new-array v6, v3, [Ljava/lang/String;

    .line 412
    invoke-static {p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v6, v2

    .line 411
    invoke-virtual {v4, v5, v6}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    .line 414
    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 415
    new-instance p1, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-direct {p1, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;-><init>(Landroid/database/Cursor;)V

    .line 416
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    new-array p1, v3, [Landroid/database/Cursor;

    aput-object v1, p1, v2

    .line 421
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 419
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    new-array p1, v3, [Landroid/database/Cursor;

    aput-object v1, p1, v2

    .line 421
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    goto :goto_1

    :catchall_1
    move-exception p1

    new-array v0, v3, [Landroid/database/Cursor;

    aput-object v1, v0, v2

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    throw p1

    :cond_1
    :goto_1
    return-object v0
.end method

.method public getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 7

    .line 339
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 340
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    const/4 v0, 0x0

    const/4 v2, 0x1

    .line 343
    :try_start_0
    sget-object v3, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v4, "SELECT * FROM %s WHERE %s = ?"

    const/4 v5, 0x2

    new-array v5, v5, [Ljava/lang/Object;

    const-string v6, "downloader"

    aput-object v6, v5, v0

    const-string v6, "_id"

    aput-object v6, v5, v2

    invoke-static {v4, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    new-array v5, v2, [Ljava/lang/String;

    .line 344
    invoke-static {p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v5, v0

    .line 343
    invoke-virtual {v3, v4, v5}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 346
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 347
    new-instance v3, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-direct {v3, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;-><init>(Landroid/database/Cursor;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    new-array v1, v2, [Landroid/database/Cursor;

    aput-object p1, v1, v0

    .line 352
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    return-object v3

    :cond_0
    new-array v2, v2, [Landroid/database/Cursor;

    aput-object p1, v2, v0

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    goto :goto_1

    :catchall_0
    move-exception v3

    goto :goto_0

    :catchall_1
    move-exception v3

    move-object p1, v1

    .line 350
    :goto_0
    :try_start_2
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    new-array v2, v2, [Landroid/database/Cursor;

    aput-object p1, v2, v0

    .line 352
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    goto :goto_1

    :catchall_2
    move-exception v1

    new-array v2, v2, [Landroid/database/Cursor;

    aput-object p1, v2, v0

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    throw v1

    :cond_1
    :goto_1
    return-object v1
.end method

.method public getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .line 362
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 363
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 364
    sget-object v1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-eqz v1, :cond_1

    const/4 v1, 0x0

    const/4 v2, 0x0

    const/4 v3, 0x1

    .line 367
    :try_start_0
    sget-object v4, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v5, "SELECT * FROM %s WHERE %s = ?"

    const/4 v6, 0x2

    new-array v6, v6, [Ljava/lang/Object;

    const-string v7, "downloader"

    aput-object v7, v6, v2

    const-string v7, "url"

    aput-object v7, v6, v3

    invoke-static {v5, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    new-array v6, v3, [Ljava/lang/String;

    aput-object p1, v6, v2

    invoke-virtual {v4, v5, v6}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    .line 370
    invoke-interface {v1}, Landroid/database/Cursor;->moveToNext()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 371
    new-instance p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-direct {p1, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;-><init>(Landroid/database/Cursor;)V

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    new-array p1, v3, [Landroid/database/Cursor;

    aput-object v1, p1, v2

    .line 376
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 374
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    new-array p1, v3, [Landroid/database/Cursor;

    aput-object v1, p1, v2

    .line 376
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    goto :goto_0

    :catchall_1
    move-exception p1

    new-array v0, v3, [Landroid/database/Cursor;

    aput-object v1, v0, v2

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    throw p1

    :cond_1
    :goto_0
    return-object v0
.end method

.method public getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public getSegmentMap(I)Ljava/util/Map;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;"
        }
    .end annotation

    .line 915
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 916
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    const/4 v0, 0x0

    const/4 v2, 0x1

    .line 919
    :try_start_0
    sget-object v3, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v4, "SELECT * FROM %s WHERE %s = ?"

    const/4 v5, 0x2

    new-array v5, v5, [Ljava/lang/Object;

    const-string v6, "segments"

    aput-object v6, v5, v0

    const-string v6, "_id"

    aput-object v6, v5, v2

    invoke-static {v4, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    new-array v5, v2, [Ljava/lang/String;

    .line 920
    invoke-static {p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v5, v0

    .line 919
    invoke-virtual {v3, v4, v5}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 921
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v3

    if-eqz v3, :cond_2

    const-string v3, "info"

    .line 922
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    if-ltz v3, :cond_0

    .line 925
    invoke-interface {p1, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    :cond_0
    move-object v3, v1

    .line 928
    :goto_0
    new-instance v4, Ljava/util/HashMap;

    invoke-direct {v4}, Ljava/util/HashMap;-><init>()V

    .line 929
    new-instance v5, Lorg/json/JSONArray;

    invoke-direct {v5, v3}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    move v3, v0

    .line 930
    :goto_1
    invoke-virtual {v5}, Lorg/json/JSONArray;->length()I

    move-result v6

    if-ge v3, v6, :cond_1

    .line 931
    invoke-virtual {v5, v3}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v6

    .line 932
    new-instance v7, Lcom/ss/android/socialbase/downloader/segment/Segment;

    invoke-direct {v7, v6}, Lcom/ss/android/socialbase/downloader/segment/Segment;-><init>(Lorg/json/JSONObject;)V

    .line 933
    invoke-virtual {v7}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getStartOffset()J

    move-result-wide v8

    invoke-static {v8, v9}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    invoke-virtual {v4, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_1
    new-array v1, v2, [Landroid/database/Cursor;

    aput-object p1, v1, v0

    .line 940
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    return-object v4

    :cond_2
    new-array v2, v2, [Landroid/database/Cursor;

    aput-object p1, v2, v0

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    goto :goto_3

    :catchall_0
    move-exception v3

    goto :goto_2

    :catchall_1
    move-exception v3

    move-object p1, v1

    .line 938
    :goto_2
    :try_start_2
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    new-array v2, v2, [Landroid/database/Cursor;

    aput-object p1, v2, v0

    .line 940
    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    goto :goto_3

    :catchall_2
    move-exception v1

    new-array v2, v2, [Landroid/database/Cursor;

    aput-object p1, v2, v0

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Landroid/database/Cursor;)V

    throw v1

    :cond_3
    :goto_3
    return-object v1
.end method

.method public getSegments(I)Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/ArrayList<",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;"
        }
    .end annotation

    .line 906
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->getSegmentMap(I)Ljava/util/Map;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 907
    invoke-interface {p1}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 910
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-interface {p1}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    return-object v0

    :cond_1
    :goto_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public bridge synthetic getSegments(I)Ljava/util/List;
    .locals 0

    .line 40
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->getSegments(I)Ljava/util/ArrayList;

    move-result-object p1

    return-object p1
.end method

.method public getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public init()V
    .locals 3

    .line 98
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    new-instance v1, Landroid/util/SparseArray;

    invoke-direct {v1}, Landroid/util/SparseArray;-><init>()V

    const/4 v2, 0x0

    invoke-virtual {p0, v0, v1, v2}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->init(Landroid/util/SparseArray;Landroid/util/SparseArray;Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;)V

    return-void
.end method

.method public init(Landroid/util/SparseArray;Landroid/util/SparseArray;Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;",
            "Landroid/util/SparseArray<",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;>;",
            "Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;",
            ")V"
        }
    .end annotation

    .line 104
    :try_start_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$1;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$1;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Landroid/util/SparseArray;Landroid/util/SparseArray;Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;)V

    .line 227
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDBThreadExecutorService()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 229
    invoke-interface {p1, v0}, Ljava/util/concurrent/Executor;->execute(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 233
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public isDownloadCacheSyncSuccess()Z
    .locals 1

    .line 864
    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->cacheSynced:Z

    return v0
.end method

.method public onDownloadTaskStart(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public onInitFinish(Landroid/util/SparseArray;Landroid/util/SparseArray;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;",
            "Landroid/util/SparseArray<",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;>;)V"
        }
    .end annotation

    .line 1039
    :try_start_0
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->sparseArrayToHashMap(Landroid/util/SparseArray;)Ljava/util/HashMap;

    move-result-object p1

    .line 1040
    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->sparseArrayToHashMap(Landroid/util/SparseArray;)Ljava/util/HashMap;

    move-result-object p2

    .line 1041
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->callback:Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;

    if-eqz v0, :cond_0

    .line 1042
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->callback:Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;->callback(Ljava/util/Map;Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public removeAllDownloadChunk(I)V
    .locals 1

    .line 430
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 431
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->chunkTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    if-nez v0, :cond_0

    goto :goto_0

    .line 434
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$2;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$2;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;I)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitDBTask(Ljava/lang/Runnable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public removeDownloadInfo(I)Z
    .locals 2

    .line 723
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 724
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->downloadTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    if-nez v0, :cond_0

    goto :goto_0

    .line 727
    :cond_0
    :try_start_0
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/db/TableStatements;->getDeleteStatement()Landroid/database/sqlite/SQLiteStatement;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->deleteInner(ILandroid/database/sqlite/SQLiteStatement;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    .line 729
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return v1
.end method

.method public removeDownloadTaskData(I)Z
    .locals 1

    .line 738
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$9;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$9;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;I)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitDBTask(Ljava/lang/Runnable;)V

    const/4 p1, 0x1

    return p1
.end method

.method public removeSegments(I)V
    .locals 1

    .line 988
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 989
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-nez v0, :cond_0

    return-void

    .line 992
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->segmentTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/db/TableStatements;->getDeleteStatement()Landroid/database/sqlite/SQLiteStatement;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->deleteInner(ILandroid/database/sqlite/SQLiteStatement;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 994
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public setInitCallback(Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;)V
    .locals 0

    .line 1034
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->callback:Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;

    return-void
.end method

.method public syncDownloadChunks(ILjava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;)V"
        }
    .end annotation

    return-void
.end method

.method public syncDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    return-void
.end method

.method public syncDownloadInfoFromOtherCache(ILjava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;)V"
        }
    .end annotation

    .line 885
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->removeAllDownloadChunk(I)V

    if-eqz p2, :cond_2

    .line 888
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-nez p2, :cond_1

    goto :goto_0

    .line 891
    :cond_1
    invoke-virtual {p0, p2}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    .line 892
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasChunkDivided()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 893
    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getSubChunkList()Ljava/util/List;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_1
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    .line 894
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 900
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    return-void
.end method

.method public updateChunkCount(II)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 6

    .line 631
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 632
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    const/16 v0, 0xa

    .line 637
    :goto_0
    :try_start_0
    sget-object v2, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v2}, Landroid/database/sqlite/SQLiteDatabase;->isDbLockedByCurrentThread()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v2, :cond_1

    add-int/lit8 v0, v0, -0x1

    if-ltz v0, :cond_1

    const-wide/16 v2, 0x5

    .line 639
    :try_start_1
    invoke-static {v2, v3}, Ljava/lang/Thread;->sleep(J)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 641
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    .line 644
    :cond_1
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v2, "chunkCount"

    .line 645
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {v0, v2, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 646
    sget-object p2, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const-string v2, "downloader"

    const-string v3, "_id = ? "

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/String;

    const/4 v5, 0x0

    .line 647
    invoke-static {p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p1

    aput-object p1, v4, v5

    .line 646
    invoke-virtual {p2, v2, v0, v3, v4}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception p1

    .line 649
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    return-object v1
.end method

.method public updateDownloadChunk(IIJ)V
    .locals 7

    .line 513
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    if-eqz p1, :cond_1

    if-ltz p2, :cond_1

    const-wide/16 v0, 0x0

    cmp-long v0, p3, v0

    if-ltz v0, :cond_1

    .line 514
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->chunkTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    if-nez v0, :cond_0

    goto :goto_0

    .line 517
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;

    move-object v1, v0

    move-object v2, p0

    move v3, p1

    move v4, p2

    move-wide v5, p3

    invoke-direct/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$4;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;IIJ)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitDBTask(Ljava/lang/Runnable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 1

    .line 676
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    if-eqz p1, :cond_1

    .line 677
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-nez v0, :cond_0

    goto :goto_0

    .line 680
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$8;

    invoke-direct {v0, p0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$8;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitDBTask(Ljava/lang/Runnable;)V

    const/4 p1, 0x1

    return p1

    :cond_1
    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method public updateSegments(ILjava/util/Map;)Z
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;)Z"
        }
    .end annotation

    .line 948
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 949
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    .line 950
    sget-object v2, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    const/4 v3, 0x0

    if-nez v2, :cond_0

    return v3

    .line 953
    :cond_0
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    .line 955
    :try_start_0
    invoke-interface {p2}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_1

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/Long;

    invoke-virtual {v5}, Ljava/lang/Long;->longValue()J

    move-result-wide v5

    .line 956
    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    invoke-interface {p2, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/ss/android/socialbase/downloader/segment/Segment;

    .line 957
    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/segment/Segment;->toJson()Lorg/json/JSONObject;

    move-result-object v5

    invoke-virtual {v2, v5}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 960
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 962
    :cond_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "json="

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v4, "SqlDownloadCache"

    invoke-static {v4, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 975
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->segmentTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/db/TableStatements;->getInsertOrReplaceStatement()Landroid/database/sqlite/SQLiteStatement;

    move-result-object p2

    .line 976
    monitor-enter p2

    .line 977
    :try_start_1
    invoke-virtual {p2}, Landroid/database/sqlite/SQLiteStatement;->clearBindings()V

    const/4 v4, 0x1

    int-to-long v5, p1

    .line 978
    invoke-virtual {p2, v4, v5, v6}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    const/4 p1, 0x2

    .line 979
    invoke-virtual {v2}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, p1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindString(ILjava/lang/String;)V

    .line 980
    invoke-virtual {p2}, Landroid/database/sqlite/SQLiteStatement;->execute()V

    .line 981
    monitor-exit p2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 982
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "updateSegments cost="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->cost(J)J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "SqlDownloadCache"

    invoke-static {p2, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v3

    :catchall_1
    move-exception p1

    .line 981
    :try_start_2
    monitor-exit p2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw p1
.end method

.method public updateSubDownloadChunk(IIIJ)V
    .locals 8

    .line 533
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    if-eqz p1, :cond_1

    if-ltz p2, :cond_1

    if-ltz p3, :cond_1

    const-wide/16 v0, 0x0

    cmp-long v0, p4, v0

    if-ltz v0, :cond_1

    .line 534
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->chunkTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    if-nez v0, :cond_0

    goto :goto_0

    .line 537
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$5;

    move-object v1, v0

    move-object v2, p0

    move v3, p1

    move v4, p2

    move v5, p3

    move-wide v6, p4

    invoke-direct/range {v1 .. v7}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$5;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;IIIJ)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitDBTask(Ljava/lang/Runnable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public updateSubDownloadChunkIndex(IIII)V
    .locals 7

    .line 553
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->ensureDataBaseInit()V

    if-eqz p1, :cond_1

    if-ltz p3, :cond_1

    if-eq p4, p2, :cond_1

    if-ltz p4, :cond_1

    .line 554
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->database:Landroid/database/sqlite/SQLiteDatabase;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->chunkTableStatements:Lcom/ss/android/socialbase/downloader/db/TableStatements;

    if-nez v0, :cond_0

    goto :goto_0

    .line 557
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;

    move-object v1, v0

    move-object v2, p0

    move v3, p1

    move v4, p2

    move v5, p3

    move v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;-><init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;IIII)V

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->submitDBTask(Ljava/lang/Runnable;)V

    :cond_1
    :goto_0
    return-void
.end method
