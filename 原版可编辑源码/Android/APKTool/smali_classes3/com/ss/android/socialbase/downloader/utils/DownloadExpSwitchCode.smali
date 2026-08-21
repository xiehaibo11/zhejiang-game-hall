.class public Lcom/ss/android/socialbase/downloader/utils/DownloadExpSwitchCode;
.super Ljava/lang/Object;


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field public static final BACK_BUGFIX_SIGBUS:I = 0x4000000

.field public static final BACK_CLEAR_DATA:I = 0x2000000

.field public static final BACK_PARTIAL:I = 0x1000000

.field public static final BUGFIX_DOWNLOAD_RUNNABLE_POOL_ERROR:I = 0x80000

.field public static final BUGFIX_FIX_ADD_LISTENER:I = 0x8000

.field public static final BUGFIX_FIX_CANCEL_THEN_UODATE:I = 0x10000

.field public static final BUGFIX_FIX_MULTI_CHUNK_RESTART_BE_CLEARED:I = 0x2000

.field public static final BUGFIX_FIX_START_DOWNLOAD_SERVICE_ERROR:I = 0x40000

.field public static final BUGFIX_GETPACKAGEINFO_BY_UNZIP:I = 0x10000000

.field public static final BUGFIX_ONLY_WIFI:I = 0x100000

.field public static final BUGFIX_SIGBUS_24_25:I = 0x8000000

.field public static final CHUNK_REVERT_OPT:I = 0x20

.field public static final CONTENT_LENGTH_FALLBACK:I = 0x1

.field public static final DOWNLOAD_CACHE_UPDATE_BUGFIX:I = 0x1000

.field public static final ENSURE_FIRST_CHUNK_DOWNLOAD:I = 0x40

.field public static final FIX_CANCEL_DELETE_FILE_ERROR:I = 0x800000

.field public static final FIX_CLOSED_HEAD_REQUEST:I = 0x200000

.field public static final FIX_DOWNLOADER_ISDOWNLOADING_SETMULTIPROCESS_DEADLOCK:I = 0x400000

.field public static final FIX_SQL_CACHE_INIT_BUG:I = 0x800

.field public static final GET_TOTAL_BYTES_CHANGE:I = 0x2

.field public static final IS_CHUNKED_CHANGE:I = 0x8

.field public static final SINGLE_CHUNK_RETRY:I = 0x10


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static isSwitchEnable(I)Z
    .locals 1

    .line 49
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadExpSwitchCode()I

    move-result v0

    and-int/2addr v0, p0

    if-ne v0, p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method
