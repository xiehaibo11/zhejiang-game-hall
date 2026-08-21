.class public interface abstract Lcom/ss/android/socialbase/downloader/constants/MonitorConstants;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/constants/MonitorConstants$UnityLabel;,
        Lcom/ss/android/socialbase/downloader/constants/MonitorConstants$EventLabel;
    }
.end annotation


# static fields
.field public static final CONNECT_TIME:Ljava/lang/String; = "connect_time"

.field public static final CONNECT_TYPE:Ljava/lang/String; = "connect_type"

.field public static final CONNECT_TYPE_GET:Ljava/lang/String; = "get"

.field public static final CONNECT_TYPE_HEAD:Ljava/lang/String; = "head"

.field public static final DOWNLOAD_CONNECT:Ljava/lang/String; = "download_connect"

.field public static final DOWNLOAD_IO:Ljava/lang/String; = "download_io"

.field public static final DOWNLOAD_MB:Ljava/lang/String; = "download_mb"

.field public static final DOWNLOAD_SEC:Ljava/lang/String; = "download_sec"

.field public static final DOWNLOAD_SPEED:Ljava/lang/String; = "download_speed"

.field public static final ERR_MSG:Ljava/lang/String; = "error_msg"

.field public static final EXTRA_APP_ID:Ljava/lang/String; = "app_id"

.field public static final EXTRA_CHUNK_DOWNGRADE_UESD:Ljava/lang/String; = "chunk_downgrade_retry_used"

.field public static final EXTRA_CUR_NETWORK_QUALITY:Ljava/lang/String; = "current_network_quality"

.field public static final EXTRA_CUR_RETRY_TIME_IN_TOTAL:Ljava/lang/String; = "cur_retry_time_in_total"

.field public static final EXTRA_DEVICE_AVAILABLE_SPACE:Ljava/lang/String; = "device_available_space"

.field public static final EXTRA_DEVICE_ID:Ljava/lang/String; = "device_id"

.field public static final EXTRA_DEVICE_ID_POSTFIX:Ljava/lang/String; = "device_id_postfix"

.field public static final EXTRA_DOWNLOAD_ADD_LISTENER_TO_SAME_TASK:Ljava/lang/String; = "add_listener_to_same_task"

.field public static final EXTRA_DOWNLOAD_BACKUP_URL_COUNT:Ljava/lang/String; = "backup_url_count"

.field public static final EXTRA_DOWNLOAD_BACKUP_URL_USED:Ljava/lang/String; = "backup_url_used"

.field public static final EXTRA_DOWNLOAD_BYTE_ERROR_RETRY_STATUS:Ljava/lang/String; = "download_byte_error_retry_status"

.field public static final EXTRA_DOWNLOAD_CHUNK_COUNT:Ljava/lang/String; = "chunk_count"

.field public static final EXTRA_DOWNLOAD_CUR_BACKUP_URL_INDEX:Ljava/lang/String; = "cur_backup_url_index"

.field public static final EXTRA_DOWNLOAD_CUR_BYTES:Ljava/lang/String; = "cur_bytes"

.field public static final EXTRA_DOWNLOAD_CUR_RETRY_TIME:Ljava/lang/String; = "cur_retry_time"

.field public static final EXTRA_DOWNLOAD_DEFAULT_HTTP_SERVICE_BACKUP:Ljava/lang/String; = "default_http_service_backup"

.field public static final EXTRA_DOWNLOAD_ERROR_CODE:Ljava/lang/String; = "error_code"

.field public static final EXTRA_DOWNLOAD_ERROR_MSG:Ljava/lang/String; = "error_msg"

.field public static final EXTRA_DOWNLOAD_EXTRA:Ljava/lang/String; = "extra"

.field public static final EXTRA_DOWNLOAD_FORBIDDEN_HANDLER_STATUS:Ljava/lang/String; = "forbidden_handler_status"

.field public static final EXTRA_DOWNLOAD_FORBIDDEN_URLS:Ljava/lang/String; = "forbidden_urls"

.field public static final EXTRA_DOWNLOAD_HEAD_CONNECTION_ERROR_MSG:Ljava/lang/String; = "head_connection_error_msg"

.field public static final EXTRA_DOWNLOAD_HTTPS_DEGRADE_RETRY_USED:Ljava/lang/String; = "https_degrade_retry_used"

.field public static final EXTRA_DOWNLOAD_ID:Ljava/lang/String; = "download_id"

.field public static final EXTRA_DOWNLOAD_IS_FORCE:Ljava/lang/String; = "is_force"

.field public static final EXTRA_DOWNLOAD_MD5:Ljava/lang/String; = "md5"

.field public static final EXTRA_DOWNLOAD_NAME:Ljava/lang/String; = "name"

.field public static final EXTRA_DOWNLOAD_NEED_HTTPS_DEGRADE:Ljava/lang/String; = "need_https_degrade"

.field public static final EXTRA_DOWNLOAD_NEED_INDEPENDENT_PROCESS:Ljava/lang/String; = "need_independent_process"

.field public static final EXTRA_DOWNLOAD_NEED_RETRY_DELAY:Ljava/lang/String; = "need_retry_delay"

.field public static final EXTRA_DOWNLOAD_NEED_REUSE_FIRST_CONNECTION:Ljava/lang/String; = "need_reuse_first_connection"

.field public static final EXTRA_DOWNLOAD_NETWORK_QUALITY:Ljava/lang/String; = "network_quality"

.field public static final EXTRA_DOWNLOAD_ONLY_WIFI:Ljava/lang/String; = "only_wifi"

.field public static final EXTRA_DOWNLOAD_PAGE:Ljava/lang/String; = "event_page"

.field public static final EXTRA_DOWNLOAD_RETRY_COUNT:Ljava/lang/String; = "retry_count"

.field public static final EXTRA_DOWNLOAD_RETRY_DELAY_STATUS:Ljava/lang/String; = "retry_delay_status"

.field public static final EXTRA_DOWNLOAD_SAVE_PATH:Ljava/lang/String; = "save_path"

.field public static final EXTRA_DOWNLOAD_STATUS:Ljava/lang/String; = "download_status"

.field public static final EXTRA_DOWNLOAD_TASK_ID:Ljava/lang/String; = "task_id"

.field public static final EXTRA_DOWNLOAD_TIME:Ljava/lang/String; = "download_time"

.field public static final EXTRA_DOWNLOAD_TOTAL_BYTES:Ljava/lang/String; = "total_bytes"

.field public static final EXTRA_DOWNLOAD_URL:Ljava/lang/String; = "url"

.field public static final EXTRA_KEY_FAILED_RESUME_COUNT:Ljava/lang/String; = "failed_resume_count"

.field public static final EXTRA_NEED_CHUNK_DOWNGRADE_RETRY:Ljava/lang/String; = "need_chunk_downgrade_retry"

.field public static final EXTRA_PRECONNECT_LEVEL:Ljava/lang/String; = "preconnect_level"

.field public static final EXTRA_REAL_DOWNLOAD_TIME:Ljava/lang/String; = "real_download_time"

.field public static final EXTRA_TOTAL_RETRY_COUNT:Ljava/lang/String; = "total_retry_count"

.field public static final EXTRA_UPDATE_VERSION:Ljava/lang/String; = "update_version"

.field public static final EXTRA_URL_SWITCH_TIMES:Ljava/lang/String; = "url_switch_times"

.field public static final HIT_CDN_CACHE:Ljava/lang/String; = "hit_cdn_cache"

.field public static final HOST_IP:Ljava/lang/String; = "host_ip"

.field public static final HOST_REAL_IP:Ljava/lang/String; = "host_real_ip"

.field public static final NAME:Ljava/lang/String; = "name"

.field public static final NET_LIB:Ljava/lang/String; = "net_lib"

.field public static final PKG_NAME:Ljava/lang/String; = "pkg_name"

.field public static final REQUEST_LOG:Ljava/lang/String; = "request_log"

.field public static final RETRY_SCHEDULE_COUNT:Ljava/lang/String; = "retry_schedule_count"

.field public static final RW_CONCURRENT:Ljava/lang/String; = "rw_concurrent"

.field public static final RW_READ_TIME:Ljava/lang/String; = "rw_read_time"

.field public static final RW_SYNC_TIME:Ljava/lang/String; = "rw_sync_time"

.field public static final RW_WRITE_TIME:Ljava/lang/String; = "rw_write_time"

.field public static final SEGMENT_IO:Ljava/lang/String; = "segment_io"

.field public static final STATUS:Ljava/lang/String; = "status"

.field public static final STATUS_CODE:Ljava/lang/String; = "status_code"

.field public static final URL_HOST:Ljava/lang/String; = "url_host"

.field public static final URL_LAST_PATH_SEGMENT:Ljava/lang/String; = "url_last_path_segment"

.field public static final URL_PATH:Ljava/lang/String; = "url_path"
