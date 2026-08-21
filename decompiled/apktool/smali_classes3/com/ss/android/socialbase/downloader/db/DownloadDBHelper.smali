.class public Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;
.super Landroid/database/sqlite/SQLiteOpenHelper;


# static fields
.field private static volatile instance:Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;


# instance fields
.field private tempDirSetted:Z


# direct methods
.method private constructor <init>()V
    .locals 4

    .line 36
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "downloader.db"

    const/4 v2, 0x0

    const/16 v3, 0xf

    invoke-direct {p0, v0, v1, v2, v3}, Landroid/database/sqlite/SQLiteOpenHelper;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V

    const/4 v0, 0x0

    .line 37
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;->tempDirSetted:Z

    return-void
.end method

.method public static getInstance()Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;
    .locals 2

    .line 26
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;->instance:Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;

    if-nez v0, :cond_1

    .line 27
    const-class v0, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;

    monitor-enter v0

    .line 28
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;->instance:Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;

    if-nez v1, :cond_0

    .line 29
    new-instance v1, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;-><init>()V

    sput-object v1, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;->instance:Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;

    .line 30
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 32
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;->instance:Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;

    return-object v0
.end method


# virtual methods
.method public getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;
    .locals 3

    .line 42
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    .line 43
    iget-boolean v1, p0, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;->tempDirSetted:Z

    if-nez v1, :cond_1

    if-eqz v0, :cond_1

    .line 45
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "/data/data/"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "/database/main/"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 46
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 47
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    .line 48
    invoke-virtual {v1}, Ljava/io/File;->mkdir()Z

    .line 49
    :cond_0
    invoke-super {p0}, Landroid/database/sqlite/SQLiteOpenHelper;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const-string v1, "PRAGMA temp_store_directory = tempDir"

    invoke-virtual {v0, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 50
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/db/DownloadDBHelper;->tempDirSetted:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 52
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 54
    :goto_0
    invoke-super {p0}, Landroid/database/sqlite/SQLiteOpenHelper;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0

    .line 56
    :cond_1
    invoke-super {p0}, Landroid/database/sqlite/SQLiteOpenHelper;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0
.end method

.method public onConfigure(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    .line 69
    invoke-super {p0, p1}, Landroid/database/sqlite/SQLiteOpenHelper;->onConfigure(Landroid/database/sqlite/SQLiteDatabase;)V

    .line 71
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object v0

    const-string v1, "disable_sqlite_wal"

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-ne v0, v1, :cond_0

    .line 73
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteDatabase;->disableWriteAheadLogging()V

    :cond_0
    return-void
.end method

.method public onCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    const-string v0, "CREATE TABLE IF NOT EXISTS downloader( _id INTEGER PRIMARY KEY, url TEXT, savePath TEXT, tempPath TEXT, name TEXT, chunkCount INTEGER, status INTEGER, curBytes INTEGER, totalBytes INTEGER, eTag TEXT, onlyWifi INTEGER, force INTEGER, retryCount INTEGER, extra TEXT, mimeType TEXT, title TEXT, notificationEnable INTEGER, notificationVisibility INTEGER, isFirstDownload INTEGER, isFirstSuccess INTEGER, needHttpsToHttpRetry INTEGER, downloadTime INTEGER, packageName TEXT, md5 TEXT, retryDelay INTEGER, curRetryTime INTEGER, retryDelayStatus INTEGER, defaultHttpServiceBackUp INTEGER, chunkRunnableReuse INTEGER, retryDelayTimeArray TEXT, chunkDowngradeRetry INTEGER, backUpUrlsStr TEXT, backUpUrlRetryCount INTEGER, realDownloadTime INTEGER, retryScheduleMinutes INTEGER, independentProcess INTEGER, auxiliaryJsonobjectString TEXT, iconUrl TEXT, appVersionCode INTEGER, taskId TEXT)"

    .line 62
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS downloadChunk( _id INTEGER, chunkIndex INTEGER, startOffset INTEGER, curOffset INTEGER, endOffset INTEGER, chunkContentLen INTEGER, hostChunkIndex INTEGER )"

    .line 63
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS segments( _id INTEGER PRIMARY KEY,info TEXT )"

    .line 64
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    return-void
.end method

.method public onDowngrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    .line 167
    invoke-static {}, Lcom/ss/android/socialbase/downloader/logger/Logger;->debug()Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "onDowngrade"

    .line 168
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    packed-switch p2, :pswitch_data_0

    goto/16 :goto_0

    :pswitch_0
    const-string p2, "ALTER TABLE downloader ADD mimeType TEXT"

    .line 81
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD title TEXT"

    .line 83
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD notificationEnable INTEGER"

    .line 85
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD notificationVisibility INTEGER"

    .line 87
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_1
    const-string p2, "ALTER TABLE downloader ADD isFirstDownload INTEGER"

    .line 91
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_2
    const-string p2, "ALTER TABLE downloader ADD isFirstSuccess INTEGER"

    .line 95
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_3
    const-string p2, "ALTER TABLE downloader ADD needHttpsToHttpRetry INTEGER"

    .line 99
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD downloadTime INTEGER"

    .line 101
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_4
    const-string p2, "ALTER TABLE downloader ADD packageName TEXT"

    .line 105
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD md5 TEXT"

    .line 107
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_5
    const-string p2, "ALTER TABLE downloader ADD retryDelay INTEGER"

    .line 111
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD curRetryTime INTEGER"

    .line 113
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD retryDelayStatus INTEGER"

    .line 115
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD defaultHttpServiceBackUp INTEGER"

    .line 117
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_6
    const-string p2, "ALTER TABLE downloadChunk ADD chunkContentLen INTEGER"

    .line 121
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloadChunk ADD hostChunkIndex INTEGER"

    .line 123
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_7
    const-string p2, "ALTER TABLE downloader ADD chunkRunnableReuse INTEGER"

    .line 127
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_8
    const-string p2, "ALTER TABLE downloader ADD retryDelayTimeArray TEXT"

    .line 131
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_9
    const-string p2, "ALTER TABLE downloader ADD chunkDowngradeRetry INTEGER"

    .line 135
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD backUpUrlsStr TEXT"

    .line 137
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD backUpUrlRetryCount INTEGER"

    .line 139
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD realDownloadTime INTEGER"

    .line 141
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD retryScheduleMinutes INTEGER"

    .line 143
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD independentProcess INTEGER"

    .line 145
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_a
    const-string p2, "ALTER TABLE downloader ADD auxiliaryJsonobjectString TEXT"

    .line 149
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_b
    const-string p2, "ALTER TABLE downloader ADD iconUrl TEXT"

    .line 152
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string p2, "ALTER TABLE downloader ADD appVersionCode INTEGER"

    .line 154
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_c
    const-string p2, "CREATE TABLE IF NOT EXISTS segments( _id INTEGER PRIMARY KEY,info TEXT )"

    .line 157
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :pswitch_d
    const-string p2, "ALTER TABLE downloader ADD taskId TEXT"

    .line 159
    invoke-virtual {p1, p2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :goto_0
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_0
        :pswitch_1
        :pswitch_2
        :pswitch_3
        :pswitch_4
        :pswitch_5
        :pswitch_6
        :pswitch_7
        :pswitch_8
        :pswitch_9
        :pswitch_a
        :pswitch_b
        :pswitch_c
        :pswitch_d
    .end packed-switch
.end method
