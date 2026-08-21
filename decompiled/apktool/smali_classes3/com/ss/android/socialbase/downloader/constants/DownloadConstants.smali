.class public Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;
.super Ljava/lang/Object;


# static fields
.field public static final ACTION_DOWNLOAD_MULTI_PROCESS_NOTIFY:Ljava/lang/String; = "com.ss.android.downloader.action.MULTI_PROCESS_NOTIFY"

.field public static final ACTION_DOWNLOAD_PROCESS_NOTIFY:Ljava/lang/String; = "com.ss.android.downloader.action.PROCESS_NOTIFY"

.field public static final ACTION_RETRY:Ljava/lang/String; = "com.ss.android.downloader.action.DOWNLOAD_WAKEUP"

.field public static final AUTO_INSTALL_WITHOUT_NOTIFICATION:Ljava/lang/String; = "auto_install_without_notification"

.field public static final CONNECT_TIMEOUT:I = 0x7530

.field public static final EMPTY_JSON:Lorg/json/JSONObject;

.field public static final EXTRA_DOWNLOAD_ID:Ljava/lang/String; = "extra_download_id"

.field public static final EXTRA_REQUEST_HOST_IP:Ljava/lang/String; = "ss_d_request_host_ip_114"

.field public static final EXTRA_THROTTLE_NET_SPEED:Ljava/lang/String; = "extra_throttle_net_speed"

.field public static final EXTRA_TTNET_PROTECT_TIMEOUT:Ljava/lang/String; = "extra_ttnet_protect_timeout"

.field public static final GB:J = 0x40000000L

.field public static final HOUR:J = 0x36ee80L

.field public static final HTTP_REQUESTED_RANGE_NOT_SATISFIABLE:I = 0x1a0

.field public static final IO_TIMEOUT:I = 0x7530

.field public static final KB:J = 0x400L

.field public static final KEY_FIX_DOWNLOADER_DB_SIGBUS:Ljava/lang/String; = "fix_downloader_db_sigbus"

.field public static final KEY_PAUSED_RESUME_COUNT:Ljava/lang/String; = "paused_resume_count"

.field public static LIMIT_INTERVSL:J = 0x32L

.field public static LIMIT_SPEED_EVERTS_ECOND:J = 0x7d000L

.field public static volatile LOWER_OPPO:Ljava/lang/String; = ""

.field public static final MB:J = 0x100000L

.field public static volatile MIME_APK:Ljava/lang/String; = ""

.field public static final MIME_PLG:Ljava/lang/String; = "mime_type_plg"

.field public static final MIME_PLUGIN:Ljava/lang/String; = "mime_type_plugin"

.field public static MIN_CHUNK_REUSE_SIZE:J = 0x500000L

.field public static MIN_DELAY_NOTIFY_SUCCESS_SIZE:J = 0x1e00000L

.field public static MIN_DELAY_NOTIFY_SUCCESS_SIZE2:J = 0xa00000L

.field public static final MK_DIR_MIN_SPACE:J = 0x4000L

.field public static final SECOND_TO_MILLS:I = 0x3e8

.field public static final SP_ANTI_HIJACK_CONFIG:Ljava/lang/String; = "sp_ah_config"

.field public static final SP_DOWNLOAD_INFO:Ljava/lang/String; = "sp_download_info"

.field public static final TB:J = 0x10000000000L

.field public static volatile UPPER_OPPO:Ljava/lang/String; = ""

.field public static final USER_AGENT:Ljava/lang/String; = "User-Agent"


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 90
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->EMPTY_JSON:Lorg/json/JSONObject;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static setMimeApk(Ljava/lang/String;)V
    .locals 1

    .line 84
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 87
    :cond_0
    sput-object p0, Lcom/ss/android/socialbase/downloader/constants/DownloadConstants;->MIME_APK:Ljava/lang/String;

    return-void
.end method
