.class public interface abstract Lcom/ss/android/socialbase/downloader/constants/DBDefinition;
.super Ljava/lang/Object;


# static fields
.field public static final APP_VERSION_CODE:Ljava/lang/String; = "appVersionCode"

.field public static final AUXILIARY_JSONOBJECT_STRING:Ljava/lang/String; = "auxiliaryJsonobjectString"

.field public static final BACKUP_URLS_STR:Ljava/lang/String; = "backUpUrlsStr"

.field public static final BACKUP_URL_RETRY_COUNT:Ljava/lang/String; = "backUpUrlRetryCount"

.field public static final CHUNK_ALL_COLUMNS:[Ljava/lang/String;

.field public static final CHUNK_CONTENT_LEN:Ljava/lang/String; = "chunkContentLen"

.field public static final CHUNK_COUNT:Ljava/lang/String; = "chunkCount"

.field public static final CHUNK_DOWNGRADE_RETRY:Ljava/lang/String; = "chunkDowngradeRetry"

.field public static final CHUNK_INDEX:Ljava/lang/String; = "chunkIndex"

.field public static final CHUNK_PK_COLUMNS:[Ljava/lang/String;

.field public static final CHUNK_RUNNABLE_REUSE:Ljava/lang/String; = "chunkRunnableReuse"

.field public static final CHUNK_TABLE_NAME:Ljava/lang/String; = "downloadChunk"

.field public static final CREATE_CHUNK_TABLE:Ljava/lang/String; = "CREATE TABLE IF NOT EXISTS downloadChunk( _id INTEGER, chunkIndex INTEGER, startOffset INTEGER, curOffset INTEGER, endOffset INTEGER, chunkContentLen INTEGER, hostChunkIndex INTEGER )"

.field public static final CREATE_DOWNLOAD_TABLE:Ljava/lang/String; = "CREATE TABLE IF NOT EXISTS downloader( _id INTEGER PRIMARY KEY, url TEXT, savePath TEXT, tempPath TEXT, name TEXT, chunkCount INTEGER, status INTEGER, curBytes INTEGER, totalBytes INTEGER, eTag TEXT, onlyWifi INTEGER, force INTEGER, retryCount INTEGER, extra TEXT, mimeType TEXT, title TEXT, notificationEnable INTEGER, notificationVisibility INTEGER, isFirstDownload INTEGER, isFirstSuccess INTEGER, needHttpsToHttpRetry INTEGER, downloadTime INTEGER, packageName TEXT, md5 TEXT, retryDelay INTEGER, curRetryTime INTEGER, retryDelayStatus INTEGER, defaultHttpServiceBackUp INTEGER, chunkRunnableReuse INTEGER, retryDelayTimeArray TEXT, chunkDowngradeRetry INTEGER, backUpUrlsStr TEXT, backUpUrlRetryCount INTEGER, realDownloadTime INTEGER, retryScheduleMinutes INTEGER, independentProcess INTEGER, auxiliaryJsonobjectString TEXT, iconUrl TEXT, appVersionCode INTEGER, taskId TEXT)"

.field public static final CREATE_SEGMENT_TABLE:Ljava/lang/String; = "CREATE TABLE IF NOT EXISTS segments( _id INTEGER PRIMARY KEY,info TEXT )"

.field public static final CUR_BYTES:Ljava/lang/String; = "curBytes"

.field public static final CUR_OFFSET:Ljava/lang/String; = "curOffset"

.field public static final CUR_RETRY_TIME:Ljava/lang/String; = "curRetryTime"

.field public static final DATABASE_NAME:Ljava/lang/String; = "downloader.db"

.field public static final DATABASE_VERSION:I = 0xf

.field public static final DEFAULT_HTTP_SERVICE_BACKUP:Ljava/lang/String; = "defaultHttpServiceBackUp"

.field public static final DOWNLOAD_ALL_COLUMNS:[Ljava/lang/String;

.field public static final DOWNLOAD_PK_COLUMNS:[Ljava/lang/String;

.field public static final DOWNLOAD_TABLE_NAME:Ljava/lang/String; = "downloader"

.field public static final DOWNLOAD_TIME:Ljava/lang/String; = "downloadTime"

.field public static final END_OFFSET:Ljava/lang/String; = "endOffset"

.field public static final ETAG:Ljava/lang/String; = "eTag"

.field public static final EXTRA:Ljava/lang/String; = "extra"

.field public static final FIRST_DOWNLOAD:Ljava/lang/String; = "isFirstDownload"

.field public static final FIRST_SUCCESS:Ljava/lang/String; = "isFirstSuccess"

.field public static final FORCE:Ljava/lang/String; = "force"

.field public static final HOST_CHUNK_INDEX:Ljava/lang/String; = "hostChunkIndex"

.field public static final ICON_URL:Ljava/lang/String; = "iconUrl"

.field public static final ID:Ljava/lang/String; = "_id"

.field public static final INDEPENDENT_PROCESS:Ljava/lang/String; = "independentProcess"

.field public static final MD5:Ljava/lang/String; = "md5"

.field public static final MIME_TYPE:Ljava/lang/String; = "mimeType"

.field public static final NAME:Ljava/lang/String; = "name"

.field public static final NEED_HTTPS_TO_HTTP_RETRY:Ljava/lang/String; = "needHttpsToHttpRetry"

.field public static final NOTIFICATION_ENABLE:Ljava/lang/String; = "notificationEnable"

.field public static final NOTIFICATION_VISIBILITY:Ljava/lang/String; = "notificationVisibility"

.field public static final ONLY_WIFI:Ljava/lang/String; = "onlyWifi"

.field public static final PACKAGE_NAME:Ljava/lang/String; = "packageName"

.field public static final REAL_DOWNLOAD_TIME:Ljava/lang/String; = "realDownloadTime"

.field public static final RETRY_COUNT:Ljava/lang/String; = "retryCount"

.field public static final RETRY_DELAY:Ljava/lang/String; = "retryDelay"

.field public static final RETRY_DELAY_STATUS:Ljava/lang/String; = "retryDelayStatus"

.field public static final RETRY_DELAY_TIME_ARRAY:Ljava/lang/String; = "retryDelayTimeArray"

.field public static final RETRY_SCHEDULE_MINUTES:Ljava/lang/String; = "retryScheduleMinutes"

.field public static final SAVE_PATH:Ljava/lang/String; = "savePath"

.field public static final SEGMENT_ALL_COLUMNS:[Ljava/lang/String;

.field public static final SEGMENT_INFO:Ljava/lang/String; = "info"

.field public static final SEGMENT_PK_COLUMNS:[Ljava/lang/String;

.field public static final SEGMENT_TABLE_NAME:Ljava/lang/String; = "segments"

.field public static final START_OFFSET:Ljava/lang/String; = "startOffset"

.field public static final STATUS:Ljava/lang/String; = "status"

.field public static final TASK_ID:Ljava/lang/String; = "taskId"

.field public static final TEMP_PATH:Ljava/lang/String; = "tempPath"

.field public static final TITLE:Ljava/lang/String; = "title"

.field public static final TOTAL_BYTES:Ljava/lang/String; = "totalBytes"

.field public static final URL:Ljava/lang/String; = "url"

.field public static final VERSION_DOWNLOAD_TABLE_ADD_AUXILIARY_JSONOBJECT_STRING:I = 0xc

.field public static final VERSION_DOWNLOAD_TABLE_ADD_CHUNK_RUNNABLE_REUSE:I = 0x9

.field public static final VERSION_DOWNLOAD_TABLE_ADD_COLUMNS:I = 0x2

.field public static final VERSION_DOWNLOAD_TABLE_ADD_DOWNLOAD_TIME:I = 0x5

.field public static final VERSION_DOWNLOAD_TABLE_ADD_FIRST_START:I = 0x3

.field public static final VERSION_DOWNLOAD_TABLE_ADD_FIRST_SUCCESS:I = 0x4

.field public static final VERSION_DOWNLOAD_TABLE_ADD_HOST_CHUNK_INDEX:I = 0x8

.field public static final VERSION_DOWNLOAD_TABLE_ADD_ICON_AND_VERSION:I = 0xd

.field public static final VERSION_DOWNLOAD_TABLE_ADD_RETRY_DELAY:I = 0x7

.field public static final VERSION_DOWNLOAD_TABLE_ADD_RETRY_TIME_ARRAY:I = 0xa

.field public static final VERSION_DOWNLOAD_TABLE_ADD_SECURITY_VERIFY:I = 0x6

.field public static final VERSION_DOWNLOAD_TABLE_ADD_TASK_ID:I = 0xf

.field public static final VERSION_DOWNLOAD_TABLE_ADD_TOTAL_RETRY_COUNT:I = 0xb

.field public static final VERSION_INIT:I = 0x1

.field public static final VERSION_SEGMENT_TABLE_ADD:I = 0xe


# direct methods
.method static constructor <clinit>()V
    .locals 40

    const-string v0, "_id"

    const-string v1, "url"

    const-string v2, "savePath"

    const-string v3, "tempPath"

    const-string v4, "name"

    const-string v5, "chunkCount"

    const-string v6, "status"

    const-string v7, "curBytes"

    const-string v8, "totalBytes"

    const-string v9, "eTag"

    const-string v10, "onlyWifi"

    const-string v11, "force"

    const-string v12, "retryCount"

    const-string v13, "extra"

    const-string v14, "mimeType"

    const-string v15, "title"

    const-string v16, "notificationEnable"

    const-string v17, "notificationVisibility"

    const-string v18, "isFirstDownload"

    const-string v19, "isFirstSuccess"

    const-string v20, "needHttpsToHttpRetry"

    const-string v21, "downloadTime"

    const-string v22, "packageName"

    const-string v23, "md5"

    const-string v24, "retryDelay"

    const-string v25, "curRetryTime"

    const-string v26, "retryDelayStatus"

    const-string v27, "defaultHttpServiceBackUp"

    const-string v28, "chunkRunnableReuse"

    const-string v29, "retryDelayTimeArray"

    const-string v30, "chunkDowngradeRetry"

    const-string v31, "backUpUrlsStr"

    const-string v32, "backUpUrlRetryCount"

    const-string v33, "realDownloadTime"

    const-string v34, "retryScheduleMinutes"

    const-string v35, "independentProcess"

    const-string v36, "auxiliaryJsonobjectString"

    const-string v37, "iconUrl"

    const-string v38, "appVersionCode"

    const-string v39, "taskId"

    .line 116
    filled-new-array/range {v0 .. v39}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->DOWNLOAD_ALL_COLUMNS:[Ljava/lang/String;

    const-string v0, "_id"

    .line 159
    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->DOWNLOAD_PK_COLUMNS:[Ljava/lang/String;

    const-string v2, "_id"

    const-string v3, "chunkIndex"

    const-string v4, "startOffset"

    const-string v5, "curOffset"

    const-string v6, "endOffset"

    const-string v7, "chunkContentLen"

    const-string v8, "hostChunkIndex"

    .line 185
    filled-new-array/range {v2 .. v8}, [Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->CHUNK_ALL_COLUMNS:[Ljava/lang/String;

    .line 195
    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->CHUNK_PK_COLUMNS:[Ljava/lang/String;

    const-string v1, "info"

    .line 210
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->SEGMENT_ALL_COLUMNS:[Ljava/lang/String;

    .line 215
    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/DBDefinition;->SEGMENT_PK_COLUMNS:[Ljava/lang/String;

    return-void
.end method
